from typing import TypedDict, List


class SwaggerFileEntry(TypedDict):
    url: str
    service: str


class Config(TypedDict):
    swagger_files: List[SwaggerFileEntry]


config: Config = {
    'swagger_files': [
        {
            'url': 'https://ogs-internal.magnopus-dev.cloud//mag-user/swagger/v1/swagger.json',
            'service': 'UserService'
        },
        {
            'url': 'https://ogs-internal.magnopus-dev.cloud//mag-prototype/swagger/v1/swagger.json',
            'service': 'PrototypeService'
        },
        {
            'url': 'https://ogs-internal.magnopus-dev.cloud//mag-spatialdata/swagger/v1/swagger.json',
            'service': 'SpatialDataService'
        },
        {
            'url': 'https://ogs-internal.magnopus-dev.cloud/oly-aggregation/swagger/v1/swagger.json',
            'service': 'AggregationService'
        },
        {
            'url': 'https://ogs-internal.magnopus-dev.cloud/mag-tracking/swagger/v1/swagger.json',
            'service': 'TrackingService'
        }
    ]
}