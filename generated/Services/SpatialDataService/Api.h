

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Services/ApiBase/ApiBase.h"
#include "Web/HttpPayload.h"
#include "Dto.h"

#include <optional>


namespace csp::services::generated::spatialdataservice
{


    class AnchorsApi final : public csp::services::ApiBase
    {
    public:
        AnchorsApi(csp::web::WebClient* InWebClient);
        virtual ~AnchorsApi();

        
            
                
                    /// <summary>
                    /// Locates the anchor data by its unique identifier id
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/anchors/{id}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1AnchorsIdGet(
                    const utility::string_t& id,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the anchor by its unique identifier id
                    /// and updates the writable fields of that anchor with the new values from the request body.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/anchors/{id}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1AnchorsIdPut(
                    const utility::string_t& id,const std::shared_ptr<AnchorDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Deletes Anchors by its unique identifier id
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/anchors/{id}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1AnchorsIdDelete(
                    const utility::string_t& id,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Adds an anchor key to the list of known anchor keys
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/anchors
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1AnchorsPost(
                    const std::shared_ptr<AnchorDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Deletes all Anchors by its unique identifier(s) ids
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/anchors
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1AnchorsDelete(
                    const std::optional<std::vector<utility::string_t>>&
                ids,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates all the anchors by filters
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/anchors
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1AnchorsGet(
                    const std::optional<std::vector<utility::string_t>>&
                Keys,const std::optional<std::vector<utility::string_t>>&
                Values,const std::optional<double>&
                Coordinate_Longitude,const std::optional<double>&
                Coordinate_Latitude,const std::optional<double>&
                Coordinate_Radius,const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<bool>&
                TagsAll,const std::optional<std::vector<utility::string_t>>&
                ThirdPartyProviderNames,const std::optional<std::vector<utility::string_t>>&
                ThirdPartyAnchorIds,const std::optional<std::vector<utility::string_t>>&
                ReferenceIds,const std::optional<std::vector<utility::string_t>>&
                AnchoredObjectIds,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Creates anchor resolution
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/anchor-resolutions
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1AnchorResolutionsPost(
                    const std::shared_ptr<AnchorResolutionDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates all the anchor resolutions by filters
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/anchor-resolutions
                /// Authorization: magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1AnchorResolutionsGet(
                    const std::optional<std::vector<utility::string_t>>&
                AnchorIds,const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<bool>&
                TagsAll,const std::optional<bool>&
                SuccessfullyResolved,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates anchor stats by filters
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/anchor-resolutions/stats
                /// Authorization: magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1AnchorResolutionsStatsGet(
                    const std::optional<std::vector<utility::string_t>>&
                AnchorIds,const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<bool>&
                TagsAll,const std::optional<bool>&
                SuccessfullyResolved,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class ConfigurationApi final : public csp::services::ApiBase
    {
    public:
        ConfigurationApi(csp::web::WebClient* InWebClient);
        virtual ~ConfigurationApi();

        
            
                /// <remarks>
                /// GET /appsettings
                /// Authorization: magnopus-admin
                /// </remarks>
                void appsettingsGet(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                /// <remarks>
                /// POST /appsettings/reload
                /// Authorization: magnopus-admin
                /// </remarks>
                void appsettingsReloadPost(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                /// <remarks>
                /// GET /featureflags
                /// Authorization: magnopus-admin
                /// </remarks>
                void featureflagsGet(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class NtpApi final : public csp::services::ApiBase
    {
    public:
        NtpApi(csp::web::WebClient* InWebClient);
        virtual ~NtpApi();

        
            
                /// <remarks>
                /// GET /datetime
                /// Authorization: Anonymous
                /// </remarks>
                void datetimeGet(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class PersonalPointOfInterestApi final : public csp::services::ApiBase
    {
    public:
        PersonalPointOfInterestApi(csp::web::WebClient* InWebClient);
        virtual ~PersonalPointOfInterestApi();

        
            
                
                    /// <summary>
                    /// Gets the points of interest associated with user identified by userId
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/poi
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdPoiGet(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Creates an association between a user and a point of interest
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/users/{userId}/poi/{poiId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdPoiPoiIdPut(
                    const utility::string_t& userId,const utility::string_t& poiId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Deletes an association between a user and a point of interest
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/users/{userId}/poi/{poiId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdPoiPoiIdDelete(
                    const utility::string_t& userId,const utility::string_t& poiId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class PingApi final : public csp::services::ApiBase
    {
    public:
        PingApi(csp::web::WebClient* InWebClient);
        virtual ~PingApi();

        
            
                /// <remarks>
                /// GET /ping
                /// Authorization: Anonymous
                /// </remarks>
                void pingGet(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class PointOfInterestApi final : public csp::services::ApiBase
    {
    public:
        PointOfInterestApi(csp::web::WebClient* InWebClient);
        virtual ~PointOfInterestApi();

        
            
                
                    /// <summary>
                    /// Locates the POI data by its unique identifier id
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/poi/{id}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PoiIdGet(
                    const utility::string_t& id,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the POI by its unique identifier id
                    /// and updates the writable fields of that POI with the new values from the request body.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/poi/{id}
                /// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
                /// </remarks>
                void apiV1PoiIdPut(
                    const utility::string_t& id,const std::shared_ptr<PointOfInterestDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the POI by its unique identifier id
                    /// and deletes it from the data store.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/poi/{id}
                /// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
                /// </remarks>
                void apiV1PoiIdDelete(
                    const utility::string_t& id,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Search across all of the POI's for those that match the search criteria and gets simplified POI result
                    /// or an empty list if none found
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/poi-lite
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PoiLiteGet(
                    const std::optional<utility::string_t>&
                ppoiUserId,const std::optional<std::vector<utility::string_t>>&
                Ids,const std::optional<utility::string_t>&
                Type,const std::optional<std::vector<utility::string_t>>&
                Types,const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<bool>&
                TagsAll,const std::optional<double>&
                Coordinate_Longitude,const std::optional<double>&
                Coordinate_Latitude,const std::optional<double>&
                Coordinate_Radius,const std::optional<std::vector<std::shared_ptr<GeoCoord>>>&
                Geofence,const std::optional<utility::string_t>&
                Name,const std::optional<std::vector<utility::string_t>>&
                Names,const std::optional<utility::string_t>&
                Title,const std::optional<int32_t>&
                ZoomLevel,const std::optional<utility::string_t>&
                EventStartTime,const std::optional<utility::string_t>&
                EventEndTime,const std::optional<std::vector<utility::string_t>>&
                CmsIds,const std::optional<bool>&
                IncludeHidden,const std::optional<std::vector<std::shared_ptr<MediaType>>>&
                MediaTypes,const std::optional<bool>&
                HasSchedule,const std::optional<std::vector<utility::string_t>>&
                PrototypeNames,const std::optional<std::vector<utility::string_t>>&
                PrototypeIds,const std::optional<std::vector<utility::string_t>>&
                GroupIds,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Search across all of the POI's for those that match the search criteria and gets only the Ids as a result
                    /// or an empty list if none found
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/poi-id
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PoiIdGet(
                    const std::optional<utility::string_t>&
                ppoiUserId,const std::optional<std::vector<utility::string_t>>&
                Ids,const std::optional<utility::string_t>&
                Type,const std::optional<std::vector<utility::string_t>>&
                Types,const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<bool>&
                TagsAll,const std::optional<double>&
                Coordinate_Longitude,const std::optional<double>&
                Coordinate_Latitude,const std::optional<double>&
                Coordinate_Radius,const std::optional<std::vector<std::shared_ptr<GeoCoord>>>&
                Geofence,const std::optional<utility::string_t>&
                Name,const std::optional<std::vector<utility::string_t>>&
                Names,const std::optional<utility::string_t>&
                Title,const std::optional<int32_t>&
                ZoomLevel,const std::optional<utility::string_t>&
                EventStartTime,const std::optional<utility::string_t>&
                EventEndTime,const std::optional<std::vector<utility::string_t>>&
                CmsIds,const std::optional<bool>&
                IncludeHidden,const std::optional<std::vector<std::shared_ptr<MediaType>>>&
                MediaTypes,const std::optional<bool>&
                HasSchedule,const std::optional<std::vector<utility::string_t>>&
                PrototypeNames,const std::optional<std::vector<utility::string_t>>&
                PrototypeIds,const std::optional<std::vector<utility::string_t>>&
                GroupIds,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Search across all of the POI's for those that match the search criteria
                    /// or an empty list if none found
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/poi
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PoiGet(
                    const std::optional<utility::string_t>&
                ppoiUserId,const std::optional<std::vector<utility::string_t>>&
                Ids,const std::optional<utility::string_t>&
                Type,const std::optional<std::vector<utility::string_t>>&
                Types,const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<bool>&
                TagsAll,const std::optional<double>&
                Coordinate_Longitude,const std::optional<double>&
                Coordinate_Latitude,const std::optional<double>&
                Coordinate_Radius,const std::optional<std::vector<std::shared_ptr<GeoCoord>>>&
                Geofence,const std::optional<utility::string_t>&
                Name,const std::optional<std::vector<utility::string_t>>&
                Names,const std::optional<utility::string_t>&
                Title,const std::optional<int32_t>&
                ZoomLevel,const std::optional<utility::string_t>&
                EventStartTime,const std::optional<utility::string_t>&
                EventEndTime,const std::optional<std::vector<utility::string_t>>&
                CmsIds,const std::optional<bool>&
                IncludeHidden,const std::optional<std::vector<std::shared_ptr<MediaType>>>&
                MediaTypes,const std::optional<bool>&
                HasSchedule,const std::optional<std::vector<utility::string_t>>&
                PrototypeNames,const std::optional<std::vector<utility::string_t>>&
                PrototypeIds,const std::optional<std::vector<utility::string_t>>&
                GroupIds,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Creates a new point of interest
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/poi
                /// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
                /// </remarks>
                void apiV1PoiPost(
                    const std::shared_ptr<PointOfInterestDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the POI by their unique identifier(s) ids
                    /// and deletes them from the data store.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/poi
                /// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
                /// </remarks>
                void apiV1PoiDelete(
                    const std::optional<std::vector<utility::string_t>>&
                ids,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates the POI by its unique identifier id
                    /// and updates only the fields specified in the request body on the POI.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/poi/{id}/partial-update
                /// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
                /// </remarks>
                void apiV1PoiIdPartialUpdatePut(
                    const utility::string_t& id,const std::shared_ptr<PoiPartialUpdate>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Search across all of the POI documents to get a collection of all distinct tags
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/poi/tags
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PoiTagsGet(
                    const std::optional<utility::string_t>&
                tagNameWith,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class PositionApi final : public csp::services::ApiBase
    {
    public:
        PositionApi(csp::web::WebClient* InWebClient);
        virtual ~PositionApi();

        
            
                
                    /// <summary>
                    /// Gets the position(s) history of the specified user by the search filter criteria
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/positions
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdPositionsGet(
                    const utility::string_t& userId,const std::optional<std::vector<utility::string_t>>&
                UserIds,const std::optional<std::vector<utility::string_t>>&
                DeviceIds,const std::optional<std::vector<utility::string_t>>&
                PositionIds,const std::optional<utility::string_t>&
                StartTimestamp,const std::optional<utility::string_t>&
                EndTimestamp,const std::optional<double>&
                Coordinate_Longitude,const std::optional<double>&
                Coordinate_Latitude,const std::optional<double>&
                Coordinate_Radius,const std::optional<bool>&
                FindUsersOutsideGeoSphere,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Persists a new position for the specified user
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/{userId}/positions
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdPositionsPost(
                    const utility::string_t& userId,const std::shared_ptr<PositionDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets the latest position(s) history of all users by the search filter criteria
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/positions/latest
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersPositionsLatestGet(
                    const std::optional<std::vector<utility::string_t>>&
                UserIds,const std::optional<std::vector<utility::string_t>>&
                DeviceIds,const std::optional<std::vector<utility::string_t>>&
                PositionIds,const std::optional<utility::string_t>&
                StartTimestamp,const std::optional<utility::string_t>&
                EndTimestamp,const std::optional<double>&
                Coordinate_Longitude,const std::optional<double>&
                Coordinate_Latitude,const std::optional<double>&
                Coordinate_Radius,const std::optional<bool>&
                FindUsersOutsideGeoSphere,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets the latest position of the specified user
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/positions/latest
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdPositionsLatestGet(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets the position of the specified user by the position id
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/positions/{positionId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdPositionsPositionIdGet(
                    const utility::string_t& userId,const utility::string_t& positionId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Deletes the position of the specified user by the position id
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/users/{userId}/positions/{positionId}
                /// Authorization: magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1UsersUserIdPositionsPositionIdDelete(
                    const utility::string_t& userId,const utility::string_t& positionId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Finds the location of all members in a specific group by the group's groupId
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/groups/{groupId}/positions/latest
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdPositionsLatestGet(
                    const utility::string_t& groupId,const std::optional<std::vector<utility::string_t>>&
                UserIds,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Finds the location of all members in the list of groups specified in groupIds
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/groups/positions/latest
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsPositionsLatestGet(
                    const std::optional<std::vector<utility::string_t>>&
                groupIds,const std::optional<std::vector<utility::string_t>>&
                UserIds,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Finds the latest positions for user(s) and returns them as kml formmatted xml
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/positions
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersPositionsGet(
                    const std::optional<std::vector<utility::string_t>>&
                userIds,const std::optional<std::vector<utility::string_t>>&
                UserIds,const std::optional<std::vector<utility::string_t>>&
                DeviceIds,const std::optional<std::vector<utility::string_t>>&
                PositionIds,const std::optional<utility::string_t>&
                StartTimestamp,const std::optional<utility::string_t>&
                EndTimestamp,const std::optional<double>&
                Coordinate_Longitude,const std::optional<double>&
                Coordinate_Latitude,const std::optional<double>&
                Coordinate_Radius,const std::optional<bool>&
                FindUsersOutsideGeoSphere,const std::optional<bool>&
                onlyLatestPosition,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class PositionSpoofingApi final : public csp::services::ApiBase
    {
    public:
        PositionSpoofingApi(csp::web::WebClient* InWebClient);
        virtual ~PositionSpoofingApi();

        
            
                
                    /// <summary>
                    /// Persists a new spoofed position for the specified user
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/{userId}/positions/spoof
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdPositionsSpoofPost(
                    const utility::string_t& userId,const std::optional<utility::string_t>&
                duration,const std::shared_ptr<PositionDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Gets all of the positions that are spoof positions for the specified userId
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/positions/spoof
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdPositionsSpoofGet(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Deletes all of the positions that are spoof positions for the specified userId
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/users/{userId}/positions/spoof
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdPositionsSpoofDelete(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets the user ids for all users that currently have spoof data
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/positions/spoof/users
                /// Authorization: admin,tester
                /// </remarks>
                void apiV1PositionsSpoofUsersGet(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class SpaceTimeApi final : public csp::services::ApiBase
    {
    public:
        SpaceTimeApi(csp::web::WebClient* InWebClient);
        virtual ~SpaceTimeApi();

        
            
                
                    /// <summary>
                    /// Locates the spacetime event data by its unique identifier id and associated  userId
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/spacetime/{id}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdSpacetimeIdGet(
                    const utility::string_t& userId,const utility::string_t& id,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the SpaceTime Event by its unique identifier id and userId
                    /// and deletes it from the data store.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/users/{userId}/spacetime/{id}
                /// Authorization: magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1UsersUserIdSpacetimeIdDelete(
                    const utility::string_t& userId,const utility::string_t& id,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the SpaceTime Event by its unique identifier id and the  userId
                    /// and updates the writable fields of that SpaceTime event with the new values from the request body.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/users/{userId}/spacetime/{id}
                /// Authorization: magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1UsersUserIdSpacetimeIdPut(
                    const utility::string_t& userId,const utility::string_t& id,const std::shared_ptr<SpaceTimeDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Adds a spacetime event for a user by userId with associated  spaceTimeEventToCreate
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/{userId}/spacetime
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdSpacetimePost(
                    const utility::string_t& userId,const std::shared_ptr<SpaceTimeDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Search across all of SpaceTime for those that match the search criteria using filters and pagination
                    /// or an empty list if none found
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/spacetime
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacetimeGet(
                    const std::optional<std::vector<utility::string_t>>&
                UserIds,const std::optional<utility::string_t>&
                StartTimestamp,const std::optional<utility::string_t>&
                EndTimestamp,const std::optional<std::vector<utility::string_t>>&
                GroupIds,const std::optional<double>&
                Coordinate_Longitude,const std::optional<double>&
                Coordinate_Latitude,const std::optional<double>&
                Coordinate_Radius,const std::optional<std::vector<utility::string_t>>&
                PoiIds,const std::optional<std::vector<utility::string_t>>&
                PrototypeIds,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    

} // namespace csp::services::spatialdataservice