

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Services/ApiBase/ApiBase.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"

#include <string>
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
                void prototypesPrototypeIdAssetDetailsPost(
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
                void prototypesPrototypeIdAssetDetailsGet(
                    const utility::string_t& prototypeId,const std::optional<std::vector<utility::string_t>>&
                Ids,const std::optional<std::vector<utility::string_t>>&
                SupportedPlatforms,const std::optional<std::vector<utility::string_t>>&
                AssetTypes,const std::optional<std::vector<utility::string_t>>&
                Styles,const std::optional<std::vector<utility::string_t>>&
                Names,const std::optional<utility::string_t>&
                CreatedAfter,const std::optional<std::vector<utility::string_t>>&
                PrototypeIds,const std::optional<std::vector<utility::string_t>>&
                PrototypeNames,const std::optional<std::vector<utility::string_t>>&
                PrototypeParentNames,const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<std::vector<utility::string_t>>&
                ExcludedTags,const std::optional<bool>&
                TagsAll,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Bulk Upsert for a set of AssetDetails linked to a Prototype
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/prototypes/{prototypeId}/asset-details/bulk
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void prototypesPrototypeIdAssetDetailsBulkPut(
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
                void prototypesPrototypeIdAssetDetailsAssetDetailIdGet(
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
                void prototypesPrototypeIdAssetDetailsAssetDetailIdPut(
                    const utility::string_t& prototypeId,const utility::string_t& assetDetailId,const std::shared_ptr<AssetDetailDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the assetDetails by its unique identifier  assetDetailId and the prototype  prototypeId it belongs to
                    /// and deletes it from the data store.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void prototypesPrototypeIdAssetDetailsAssetDetailIdDelete(
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
                void prototypesAssetDetailsGet(
                    const std::optional<std::vector<utility::string_t>>&
                Ids,const std::optional<std::vector<utility::string_t>>&
                SupportedPlatforms,const std::optional<std::vector<utility::string_t>>&
                AssetTypes,const std::optional<std::vector<utility::string_t>>&
                Styles,const std::optional<std::vector<utility::string_t>>&
                Names,const std::optional<utility::string_t>&
                CreatedAfter,const std::optional<std::vector<utility::string_t>>&
                PrototypeIds,const std::optional<std::vector<utility::string_t>>&
                PrototypeNames,const std::optional<std::vector<utility::string_t>>&
                PrototypeParentNames,const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<std::vector<utility::string_t>>&
                ExcludedTags,const std::optional<bool>&
                TagsAll,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Uploads AssetDetail file to S3 Bucket
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/blob
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void prototypesPrototypeIdAssetDetailsAssetDetailIdBlobPost(
                    const utility::string_t& prototypeId,const utility::string_t& assetDetailId,const std::optional<bool>&
                skipAssetPipeline,const std::shared_ptr<csp::web::HttpPayload>& FormFile,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Copies AssetDetail file from source file to destination file
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/internal-copy
                /// Authorization: internal-service
                /// </remarks>
                void prototypesPrototypeIdAssetDetailsAssetDetailIdInternalCopyPost(
                    const utility::string_t& prototypeId,const utility::string_t& assetDetailId,const std::shared_ptr<InternalFileCopyRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Updates an addressable id.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                [[deprecated("'PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}' is deprecated!")]]
                void prototypesPrototypeIdAssetDetailsAssetDetailIdAddressableAddressableIdPut(
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
                [[deprecated("'DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}' is deprecated!")]]
                void prototypesPrototypeIdAssetDetailsAssetDetailIdAddressableAddressableIdDelete(
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
                void prototypesPrototypeIdAssetDetailsAssetDetailIdAddressableThirdPartyReferenceIdPut(
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
                void prototypesPrototypeIdAssetDetailsAssetDetailIdAddressableThirdPartyReferenceIdDelete(
                    const utility::string_t& prototypeId,const utility::string_t& assetDetailId,const utility::string_t& thirdPartyReferenceId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Bulk endpoint to get the parameters for all generated assets of a 3d models.
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/prototypes/asset-details/asset-pipeline-model
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void prototypesAssetDetailsAssetPipelineModelGet(
                    const std::optional<std::vector<utility::string_t>>&
                Ids,const std::optional<std::vector<utility::string_t>>&
                SupportedPlatforms,const std::optional<std::vector<utility::string_t>>&
                AssetTypes,const std::optional<std::vector<utility::string_t>>&
                Styles,const std::optional<std::vector<utility::string_t>>&
                Names,const std::optional<utility::string_t>&
                CreatedAfter,const std::optional<std::vector<utility::string_t>>&
                PrototypeIds,const std::optional<std::vector<utility::string_t>>&
                PrototypeNames,const std::optional<std::vector<utility::string_t>>&
                PrototypeParentNames,const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<std::vector<utility::string_t>>&
                ExcludedTags,const std::optional<bool>&
                TagsAll,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets the parameters for generated assets of a 3d model.
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/asset-pipeline-model
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void prototypesPrototypeIdAssetDetailsAssetDetailIdAssetPipelineModelGet(
                    const utility::string_t& prototypeId,const utility::string_t& assetDetailId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Sets or updates the parameters for generated assets of a 3d model. <br />
                    /// If the parameters are different than the existing generated assets, a job will start to create/update/delete the assets with parameter differences. <br />
                    /// Note: This does NOT wait for the generated job to complete, this endpoint returns when the job is just started <br />
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/asset-pipeline-model
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void prototypesPrototypeIdAssetDetailsAssetDetailIdAssetPipelineModelPut(
                    const utility::string_t& prototypeId,const utility::string_t& assetDetailId,const std::shared_ptr<AssetPipelineModelDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
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
                void prototypesPost(
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
                void prototypesGet(
                    const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<std::vector<utility::string_t>>&
                ExcludedTags,const std::optional<bool>&
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
                CreatedBy,const std::optional<utility::string_t>&
                CreatedAfter,const std::optional<std::vector<utility::string_t>>&
                PrototypeOwnerIds,const std::optional<std::vector<utility::string_t>>&
                ReadAccessFilters,const std::optional<std::vector<utility::string_t>>&
                WriteAccessFilters,const std::optional<std::vector<utility::string_t>>&
                OrganizationIds,const std::optional<int32_t>&
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
                void prototypesDelete(
                    const std::optional<std::vector<utility::string_t>>&
                ids,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Duplicates prototype(s) to a new group by filters
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/prototypes/group-owned/{originalGroupId}/duplicate/{newGroupId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void prototypesGroupOwnedOriginalGroupIdDuplicateNewGroupIdPost(
                    const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<std::vector<utility::string_t>>&
                ExcludedTags,const std::optional<bool>&
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
                CreatedBy,const std::optional<utility::string_t>&
                CreatedAfter,const std::optional<std::vector<utility::string_t>>&
                PrototypeOwnerIds,const std::optional<std::vector<utility::string_t>>&
                ReadAccessFilters,const std::optional<std::vector<utility::string_t>>&
                WriteAccessFilters,const std::optional<std::vector<utility::string_t>>&
                OrganizationIds,const utility::string_t& originalGroupId,const utility::string_t& newGroupId,const std::optional<bool>&
                shallowCopy,const std::optional<bool>&
                asyncCall,const std::optional<utility::string_t>&
                onBehalfOf,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Create and return new prototype(s) that have not been saved to the database
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/prototypes/group-owned/{originalGroupId}/exports/{exportId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void prototypesGroupOwnedOriginalGroupIdExportsExportIdPost(
                    const utility::string_t& originalGroupId,const utility::string_t& exportId,const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<std::vector<utility::string_t>>&
                ExcludedTags,const std::optional<bool>&
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
                CreatedBy,const std::optional<utility::string_t>&
                CreatedAfter,const std::optional<std::vector<utility::string_t>>&
                PrototypeOwnerIds,const std::optional<std::vector<utility::string_t>>&
                ReadAccessFilters,const std::optional<std::vector<utility::string_t>>&
                WriteAccessFilters,const std::optional<std::vector<utility::string_t>>&
                OrganizationIds,const std::optional<bool>&
                asyncCall,const std::optional<utility::string_t>&
                onBehalfOf,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Imports a set of prototypes and assigns them to a space
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/prototypes/group-owned/{newGroupId}/exports/{exportId}/import
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void prototypesGroupOwnedNewGroupIdExportsExportIdImportPost(
                    const utility::string_t& exportId,const utility::string_t& newGroupId,const std::optional<bool>&
                asyncCall,const std::optional<utility::string_t>&
                onBehalfOf,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Bulk upsert operation for prototypes
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/prototypes/bulk
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void prototypesBulkPut(
                    const std::vector<std::shared_ptr<BulkUpsertPrototypeDto>>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Search across the prototypes for those that match the search criteria and returns the id's
                    /// or an empty list if none found
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/prototypes/ids
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void prototypesIdsGet(
                    const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<std::vector<utility::string_t>>&
                ExcludedTags,const std::optional<bool>&
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
                CreatedBy,const std::optional<utility::string_t>&
                CreatedAfter,const std::optional<std::vector<utility::string_t>>&
                PrototypeOwnerIds,const std::optional<std::vector<utility::string_t>>&
                ReadAccessFilters,const std::optional<std::vector<utility::string_t>>&
                WriteAccessFilters,const std::optional<std::vector<utility::string_t>>&
                OrganizationIds,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
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
                void prototypesCountGet(
                    const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<std::vector<utility::string_t>>&
                ExcludedTags,const std::optional<bool>&
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
                CreatedBy,const std::optional<utility::string_t>&
                CreatedAfter,const std::optional<std::vector<utility::string_t>>&
                PrototypeOwnerIds,const std::optional<std::vector<utility::string_t>>&
                ReadAccessFilters,const std::optional<std::vector<utility::string_t>>&
                WriteAccessFilters,const std::optional<std::vector<utility::string_t>>&
                OrganizationIds,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates the prototype by its unique identifier id
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/prototypes/{id}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void prototypesIdGet(
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
                void prototypesIdPut(
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
                void prototypesIdDelete(
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
                void prototypesNameNameGet(
                    const utility::string_t& name,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Creates state key value pairs or updates existing - any previously existing state
                    /// not referenced in the call are left unchanged.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/prototypes/{prototypeId}/state
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void prototypesPrototypeIdStatePut(
                    const utility::string_t& prototypeId,const std::map<utility::string_t, utility::string_t>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Gets the state of a prototype.  If keys are provided
                    /// then only values for those keys will be returned, otherwise all key/value pairs are returned
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/prototypes/{prototypeId}/state
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void prototypesPrototypeIdStateGet(
                    const utility::string_t& prototypeId,const std::optional<std::vector<utility::string_t>>&
                keys,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    

} // namespace csp::services::prototypeservice