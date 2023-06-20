from __future__ import annotations

from typing import Any, Dict, List, TypedDict, Union


class OpenApi:
    class Info(TypedDict):
        title: str
        version: str

    class Server(TypedDict):
        url: str
    
    class IntegerParameterSchema(TypedDict):
        type: str                   # "integer"
        format: str                 # "int32", "float", etc.
        minimum: Union[int, float]
        maximum: Union[int, float]
    
    class StringParameterSchema(TypedDict):
        type: str   # "string"
    
    ParameterSchema = Union[IntegerParameterSchema, StringParameterSchema]

    class Parameter(TypedDict):
        name: str
        _in: str
        schema: OpenApi.ParameterSchema
    
    class ResponseContentSchema(TypedDict):
        schema: Dict[str, str]
    
    class Response(TypedDict):
        description: str
        content: Dict[str, OpenApi.ResponseContentSchema]
    
    Security = Dict[str, List[Any]]

    class Method(TypedDict):
        tags: List[str]
        summary: str
        description: str
        parameters: List[OpenApi.Parameter]
        responses: Dict[str, OpenApi.Response]
        security: List[OpenApi.Security]
    
    Path = Dict[str, Method]

    class EnumSchema(TypedDict):
        type: str           # "string"
        description: str
        enum: List[str]
    
    class StringObjectProperty(TypedDict):
        type: str           # "string"
        description: str
        minLength: int
        nullable: bool

    class ArrayItem(TypedDict):
        type: str
    
    class ArrayObjectProperty(TypedDict):
        type: str                       # "array"
        description: str
        items: OpenApi.ArrayItem
    
    class MapObjectProperty(TypedDict):
        type: str                                       # "object"
        description: str
        nullable: bool
        additionalProperties: OpenApi.ObjectProperty

    ObjectProperty = Union[StringObjectProperty, ArrayObjectProperty, MapObjectProperty]
    
    class ObjectSchema(TypedDict):
        type: str                                       # "object"
        description: str
        properties: Dict[str, OpenApi.ObjectProperty]
        required: List[str]                             # List of required property names
        additionalProperties: bool
    
    Schema = Union[EnumSchema, ObjectSchema]
    
    class Components(TypedDict):
        schemas: Dict[str, OpenApi.Schema]


class SwaggerFile(TypedDict):
    openapi: str
    info: OpenApi.Info
    servers: List[OpenApi.Server]
    paths: Dict[str, OpenApi.Path]
    components: OpenApi.Components