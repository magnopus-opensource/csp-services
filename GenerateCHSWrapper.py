#!/usr/bin/env python3

from __future__ import annotations

import json
import os
import subprocess
import shutil

from jinja2 import Environment, FileSystemLoader
from typing import Dict
from urllib import request

from Swagger import SwaggerFile, OpenApi
from Config import config


def is_enum_schema(value: OpenApi.Schema) -> bool:
    return 'enum' in value.keys()


def make_identifier(value: str) -> str:
    return value.replace('/', '_').replace('-', '_').replace('.', '_').replace('{', '').replace('}', '')


def make_camel_case(value: str) -> str:
    value = make_identifier(value)
    words = [x for x in value.split('_') if x]

    for i, word in enumerate(words):
        if i == 0:
            words[i] = word[0].lower() + word[1:]
        else:
            words[i] = word[0].upper() + word[1:]

    return ''.join(words)


def make_pascal_case(value: str) -> str:
    value = make_identifier(value)
    words = [x for x in value.split('_') if x]

    for i, word in enumerate(words):
        words[i] = word[0].upper() + word[1:]

    return ''.join(words)


def main():
    # Ensure our current working directory is always this script's directory
    os.chdir(os.path.abspath(os.path.dirname(__file__)))

    # Clean previously-generated code
    shutil.rmtree('generated', ignore_errors=True)

    os.makedirs('generated/Services')

    # Initialise Jinja environment
    env = Environment(
        loader=FileSystemLoader('Templates'),
        extensions=['jinja2_workarounds.MultiLineInclude']
    )

    env.tests['enum_schema'] = is_enum_schema

    env.filters['camelcase'] = make_camel_case
    env.filters['pascalcase'] = make_pascal_case
    env.filters['identifier'] = make_identifier

    services: Dict[str, SwaggerFile] = {}

    # Fetch swagger files
    for entry in config['swagger_files']:
        with request.urlopen(entry['url']) as data:
            services[entry['service']] = json.load(data)

    # Render source files
    model_header_template = env.get_template("dto.h.jinja2")
    model_source_template = env.get_template("dto.cpp.jinja2")
    api_header_template = env.get_template("api.h.jinja2")
    api_source_template = env.get_template("api.cpp.jinja2")

    for service_name, service in services.items():
        os.mkdir(f"generated/Services/{ service_name }")
        
        schemas = service['components'].get('schemas', {})

        # Ensure each schema has a 'properties' field, making an empty one if not so the rendering dosen't fail.
        for schema in schemas.values():
            if isinstance(schema, dict) and 'properties' not in schema:
                schema['properties'] = {}

        # Render data models header
        with open(f"generated/Services/{ service_name }/Dto.h", 'w') as f:
            f.write(model_header_template.render(service_name=service_name, schemas=service['components']['schemas']))
            
        # Render data models source
        with open(f"generated/Services/{ service_name }/Dto.cpp", 'w') as f:
            f.write(model_source_template.render(service_name=service_name, schemas=service['components']['schemas']))
        
        # Group routes by tag
        grouped_routes: Dict[str, Dict[str, OpenApi.Path]] = {}

        for route_path, route in service['paths'].items():
            for method_name, method in route.items():
                tag = method['tags'][0]

                if not tag in grouped_routes:
                    grouped_routes[tag] = {}
                
                if not route_path in grouped_routes[tag]:
                    grouped_routes[tag][route_path] = {}
                
                grouped_routes[tag][route_path][method_name] = method
        
        # Render API header
        with open(f"generated/Services/{ service_name }/Api.h", 'w') as f:
            f.write(api_header_template.render(service_name=service_name, tags=grouped_routes))
        
        # Render API source
        with open(f"generated/Services/{ service_name }/Api.cpp", 'w') as f:
            f.write(api_source_template.render(service_name=service_name, tags=grouped_routes))
    
        # Format output with clang-format
        subprocess.run(
            f"clang-format \
                --style=file \
                -i \
                generated/Services/{ service_name }/**.h generated/Services/{ service_name }/**.cpp",
            shell=True
        )


if __name__ == '__main__':
    main()