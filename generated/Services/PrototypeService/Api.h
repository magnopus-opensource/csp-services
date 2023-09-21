

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Services/ApiBase/ApiBase.h"
#include "Web/HttpPayload.h"
#include "Dto.h"

#include <optional>


namespace csp::services::generated::prototypeservice
{


    class AssetDetailApi final : public csp::services::ApiBase
    {
    public:
        AssetDetailApi(csp::web::WebClient* InWebClient);
        virtual ~AssetDetailApi();

        
            
                
                    /// <summary>
                    /// Creates a new AssetBundle linked to a Prototype
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/prototypes/{prototypeId}/asset-details
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesPrototypeIdAssetDetailsPost(
                    const utility::string_t& prototypeId,const std::shared_ptr<AssetDetailDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the assetDetail by its unique identifier prototypeId
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/prototypes/{prototypeId}/asset-details
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesPrototypeIdAssetDetailsGet(
                    const utility::string_t& prototypeId,const std::optional<std::vector<utility::string_t>>&
                Ids,const std::optional<std::vector<utility::string_t>>&
                SupportedPlatforms,const std::optional<std::vector<utility::string_t>>&
                AssetTypes,const std::optional<std::vector<utility::string_t>>&
                Styles,const std::optional<std::vector<utility::string_t>>&
                Names,const std::optional<utility::string_t>&
                CreatedAfter,const std::optional<std::vector<utility::string_t>>&
                PrototypeIds,const std::optional<std::vector<utility::string_t>>&
                PrototypeParentNames,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Bulk Upsert for a set of AssetDetails linked to a Prototype
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/prototypes/{prototypeId}/asset-details/bulk
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesPrototypeIdAssetDetailsBulkPut(
                    const utility::string_t& prototypeId,const std::vector<std::shared_ptr<BulkUpsertAssetDetailDto>>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates the assetDetail by its unique identifier prototype
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdGet(
                    const utility::string_t& prototypeId,const utility::string_t& assetDetailId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the assetDetail by its unique identifier  assetDetailId and the prototype  prototypeId it belongs to
                    /// and updates the writable fields of that assetDetail with the new values from the request body.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdPut(
                    const utility::string_t& prototypeId,const utility::string_t& assetDetailId,const std::shared_ptr<AssetDetailDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the prototype by its unique identifier  assetDetailId and the prototype  prototypeId it belongs to
                    /// and deletes it from the data store.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdDelete(
                    const utility::string_t& prototypeId,const utility::string_t& assetDetailId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates the assetDetails by asset detail filters
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/prototypes/asset-details
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesAssetDetailsGet(
                    const std::optional<std::vector<utility::string_t>>&
                Ids,const std::optional<std::vector<utility::string_t>>&
                SupportedPlatforms,const std::optional<std::vector<utility::string_t>>&
                AssetTypes,const std::optional<std::vector<utility::string_t>>&
                Styles,const std::optional<std::vector<utility::string_t>>&
                Names,const std::optional<utility::string_t>&
                CreatedAfter,const std::optional<std::vector<utility::string_t>>&
                PrototypeIds,const std::optional<std::vector<utility::string_t>>&
                PrototypeParentNames,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Uploads AssetDetail file to S3 Bucket
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/blob
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdBlobPost(
                    const utility::string_t& prototypeId,const utility::string_t& assetDetailId,const std::optional<bool>&
                skipAssetPipeline,const std::shared_ptr<csp::web::HttpPayload>& FormFile,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Updates an addressable id.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdAddressableAddressableIdPut(
                    const utility::string_t& prototypeId,const utility::string_t& assetDetailId,const utility::string_t& addressableId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Deletes/Clears the string which associates this asset with an AddressableId.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdAddressableAddressableIdDelete(
                    const utility::string_t& prototypeId,const utility::string_t& assetDetailId,const utility::string_t& addressableId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Updates a Third Party Reference Id.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{thirdPartyReferenceId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdAddressableThirdPartyReferenceIdPut(
                    const utility::string_t& prototypeId,const utility::string_t& assetDetailId,const utility::string_t& thirdPartyReferenceId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Deletes/Clears the string which associates this asset with an ThirdPartyReferenceId.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{thirdPartyReferenceId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdAddressableThirdPartyReferenceIdDelete(
                    const utility::string_t& prototypeId,const utility::string_t& assetDetailId,const utility::string_t& thirdPartyReferenceId,csp::services::ApiResponseHandlerBase* ResponseHandler,
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
    
    class PrototypeApi final : public csp::services::ApiBase
    {
    public:
        PrototypeApi(csp::web::WebClient* InWebClient);
        virtual ~PrototypeApi();

        
            
                
                    /// <summary>
                    /// Creates a new prototype
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/prototypes
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesPost(
                    const std::shared_ptr<PrototypeDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Search across all of the prototypes for those that match the search criteria
                    /// or an empty list if none found
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/prototypes
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesGet(
                    const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<bool>&
                TagsAll,const std::optional<std::vector<utility::string_t>>&
                Ids,const std::optional<std::vector<utility::string_t>>&
                Names,const std::optional<std::vector<utility::string_t>>&
                PartialNames,const std::optional<std::vector<utility::string_t>>&
                ExcludedIds,const std::optional<std::vector<utility::string_t>>&
                PointOfInterestIds,const std::optional<utility::string_t>&
                ParentId,const std::optional<std::vector<utility::string_t>>&
                GroupIds,const std::optional<std::vector<utility::string_t>>&
                Types,const std::optional<bool>&
                HasGroup,const std::optional<utility::string_t>&
                CreatedBy,const std::optional<std::vector<utility::string_t>>&
                PrototypeOwnerIds,const std::optional<std::vector<utility::string_t>>&
                ReadAccessFilters,const std::optional<std::vector<utility::string_t>>&
                WriteAccessFilters,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,const std::optional<utility::string_t>&
                SortBy,const std::optional<std::shared_ptr<SortDirection>>&
                SortDirection,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates all prototypes by their unique identifier(s) ids
                    /// and deletes them from the data store.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/prototypes
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesDelete(
                    const std::optional<std::vector<utility::string_t>>&
                ids,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Bulk upsert operation for prototypes
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/prototypes/bulk
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesBulkPut(
                    const std::vector<std::shared_ptr<BulkUpsertPrototypeDto>>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Search across all of the prototypes for those that match the search criteria
                    /// and return the count of those that match.
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/prototypes/count
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesCountGet(
                    const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<bool>&
                TagsAll,const std::optional<std::vector<utility::string_t>>&
                Ids,const std::optional<std::vector<utility::string_t>>&
                Names,const std::optional<std::vector<utility::string_t>>&
                PartialNames,const std::optional<std::vector<utility::string_t>>&
                ExcludedIds,const std::optional<std::vector<utility::string_t>>&
                PointOfInterestIds,const std::optional<utility::string_t>&
                ParentId,const std::optional<std::vector<utility::string_t>>&
                GroupIds,const std::optional<std::vector<utility::string_t>>&
                Types,const std::optional<bool>&
                HasGroup,const std::optional<utility::string_t>&
                CreatedBy,const std::optional<std::vector<utility::string_t>>&
                PrototypeOwnerIds,const std::optional<std::vector<utility::string_t>>&
                ReadAccessFilters,const std::optional<std::vector<utility::string_t>>&
                WriteAccessFilters,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates the prototype by its unique identifier id
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/prototypes/{id}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesIdGet(
                    const utility::string_t& id,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the prototype by its unique identifier id
                    /// and updates the writable fields of that prototype with the new values from the request body.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/prototypes/{id}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesIdPut(
                    const utility::string_t& id,const std::shared_ptr<PrototypeDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the prototype by its unique identifier id
                    /// and deletes it from the data store.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/prototypes/{id}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesIdDelete(
                    const utility::string_t& id,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates the prototype by its unique name
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/prototypes/name/{name}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1PrototypesNameNameGet(
                    const utility::string_t& name,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    

} // namespace csp::services::prototypeservice