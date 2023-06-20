from typing import TypedDict, List


class SwaggerFileEntry(TypedDict):
    url: str
    service: str


class Config(TypedDict):
    swagger_files: List[SwaggerFileEntry]


config: Config = {
    'swagger_files': [
        {
            'url': 'https://ogs-odev-internal.magnoboard.com/mag-user/swagger/v2/swagger.json',
            'service': 'UserService'
        },
        {
            'url': 'https://ogs-odev-internal.magnoboard.com/mag-prototype/swagger/v2/swagger.json',
            'service': 'PrototypeService'
        },
        {
            'url': 'https://ogs-odev-internal.magnoboard.com/mag-spatialdata/swagger/v2/swagger.json',
            'service': 'SpatialDataService'
        },
        {
            'url': 'https://ogs-odev-internal.magnoboard.com/oly-aggregation/swagger/v2/swagger.json',
            'service': 'AggregationService'
        }
    ]
}