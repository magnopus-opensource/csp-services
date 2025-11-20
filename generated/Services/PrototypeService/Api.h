

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "IPrototypeServiceApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::prototypeservice
{


class AnalyticsApi final : public IAnalyticsApiBase
{
public:
	AnalyticsApi(csp::web::WebClient* InWebClient);
	virtual ~AnalyticsApi();



	/// <summary>
	/// Create new analytics records using a list of Magnopus.Service.Common.Contracts.Analytics.AnalyticsRecord objects.
	/// Ideally, the requester would pass in a list of analytics records to be created in bulk.
	/// </summary>
	/// <remarks>
	/// POST /analytics/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void analyticsBulkPost(const analyticsBulkPostParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Uploads a stream of gzipped analytics data. Creates many records in a bulk operation.
	/// </summary>
	/// <remarks>
	/// POST /analytics/stream
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void analyticsStreamPost(const analyticsStreamPostParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Returns a URL to the caller to use for analytics purposes.
	/// Randomizes the services so that not a single service is overloaded with requests.
	/// </summary>
	/// <remarks>
	/// POST /analytics/stream-url
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void analyticsStream_urlPost(const analyticsStream_urlPostParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class AssetDetailApi final : public IAssetDetailApiBase
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
	void prototypesPrototypeIdAsset_detailsPost(const prototypesPrototypeIdAsset_detailsPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken
												= csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the assetDetail by its unique identifier prototypeId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/asset-details
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsGet(const prototypesPrototypeIdAsset_detailsGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken
											   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Bulk Upsert for a set of AssetDetails linked to a Prototype
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsBulkPut(const prototypesPrototypeIdAsset_detailsBulkPutParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken
												   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the assetDetail by its unique identifier prototype
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdGet(const prototypesPrototypeIdAsset_detailsAssetDetailIdGetParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken
															= csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the assetDetail by its unique identifier  assetDetailId and the prototype  prototypeId it belongs to
	/// and updates the writable fields of that assetDetail with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdPut(const prototypesPrototypeIdAsset_detailsAssetDetailIdPutParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken
															= csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the assetDetails by its unique identifier  assetDetailId and the prototype  prototypeId it belongs to
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdDelete(const prototypesPrototypeIdAsset_detailsAssetDetailIdDeleteParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken
															   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the assetDetails by asset detail filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/asset-details
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesAsset_detailsGet(const prototypesAsset_detailsGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Uploads AssetDetail file to S3 Bucket
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/blob
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPost(const prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPostParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken
																 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Copies AssetDetail file from source file to destination file
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/internal-copy
	/// Authorization: internal-service
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdInternal_copyPost(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdInternal_copyPostParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Updates an addressable id.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	[[deprecated("'PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}' is deprecated!")]]
	void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdPut(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes/Clears the string which associates this asset with an AddressableId.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	[[deprecated("'DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}' is deprecated!")]]
	void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdDelete(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdDeleteParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Updates a Third Party Reference Id.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{thirdPartyReferenceId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdPut(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes/Clears the string which associates this asset with an ThirdPartyReferenceId.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{thirdPartyReferenceId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdDelete(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdDeleteParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Bulk endpoint to get the parameters for all generated assets of a 3d models.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/asset-details/asset-pipeline-model
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesAsset_detailsAsset_pipeline_modelGet(const prototypesAsset_detailsAsset_pipeline_modelGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken
														= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets the parameters for generated assets of a 3d model.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/asset-pipeline-model
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelGet(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelGetParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Sets or updates the parameters for generated assets of a 3d model.
	/// If the parameters are different than the existing generated assets, a job will start to create/update/delete the assets with parameter
	/// differences. Note: This does NOT wait for the generated job to complete, this endpoint returns when the job is just started
	///
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/asset-pipeline-model
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelPut(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class CacheApi final : public ICacheApiBase
{
public:
	CacheApi(csp::web::WebClient* InWebClient);
	virtual ~CacheApi();



	/// <summary>
	/// Gets the distributed cache keys that match the pattern (use * for wildcard)
	/// </summary>
	/// <remarks>
	/// GET /cache-keys
	/// Authorization: magnopus-admin
	/// </remarks>
	void cache_keysGet(const cache_keysGetParams& Params,
					   csp::services::ApiResponseHandlerBase* ResponseHandler,
					   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes the distributed cache keys that match the pattern (use * for wildcard)
	/// </summary>
	/// <remarks>
	/// DELETE /cache-keys
	/// Authorization: magnopus-admin
	/// </remarks>
	void cache_keysDelete(const cache_keysDeleteParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class ConfigurationApi final : public IConfigurationApiBase
{
public:
	ConfigurationApi(csp::web::WebClient* InWebClient);
	virtual ~ConfigurationApi();



	/// <remarks>
	/// GET /appsettings
	/// Authorization: magnopus-admin
	/// </remarks>
	void appsettingsGet(const appsettingsGetParams& Params,
						csp::services::ApiResponseHandlerBase* ResponseHandler,
						csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <remarks>
	/// POST /appsettings/reload
	/// Authorization: magnopus-admin
	/// </remarks>
	void appsettingsReloadPost(const appsettingsReloadPostParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <remarks>
	/// GET /featureflags
	/// Authorization: magnopus-admin
	/// </remarks>
	void featureflagsGet(const featureflagsGetParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class NtpApi final : public INtpApiBase
{
public:
	NtpApi(csp::web::WebClient* InWebClient);
	virtual ~NtpApi();



	/// <remarks>
	/// GET /datetime
	/// Authorization: Anonymous
	/// </remarks>
	void datetimeGet(const datetimeGetParams& Params,
					 csp::services::ApiResponseHandlerBase* ResponseHandler,
					 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class PingApi final : public IPingApiBase
{
public:
	PingApi(csp::web::WebClient* InWebClient);
	virtual ~PingApi();



	/// <remarks>
	/// GET /ping
	/// Authorization: Anonymous
	/// </remarks>
	void pingGet(const pingGetParams& Params,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class PrototypeApi final : public IPrototypeApiBase
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
	void prototypesPost(const prototypesPostParams& Params,
						csp::services::ApiResponseHandlerBase* ResponseHandler,
						csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Search across all of the prototypes for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesGet(const prototypesGetParams& Params,
					   csp::services::ApiResponseHandlerBase* ResponseHandler,
					   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates all prototypes by their unique identifier(s) ids
	/// and deletes them from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesDelete(const prototypesDeleteParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Duplicates prototype(s) to a new group by filters
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/group-owned/{originalGroupId}/duplicate/{newGroupId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesGroup_ownedOriginalGroupIdDuplicateNewGroupIdPost(const prototypesGroup_ownedOriginalGroupIdDuplicateNewGroupIdPostParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken
																	 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Create and return new prototype(s) that have not been saved to the database
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/group-owned/{originalGroupId}/exports/{exportId}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void prototypesGroup_ownedOriginalGroupIdExportsExportIdPost(const prototypesGroup_ownedOriginalGroupIdExportsExportIdPostParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken
																 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Imports a set of prototypes and assigns them to a space
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/group-owned/{newGroupId}/exports/{exportId}/import
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void prototypesGroup_ownedNewGroupIdExportsExportIdImportPost(const prototypesGroup_ownedNewGroupIdExportsExportIdImportPostParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken
																  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Bulk upsert operation for prototypes
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesBulkPut(const prototypesBulkPutParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Search across the prototypes for those that match the search criteria and returns the id's
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/ids
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesIdsGet(const prototypesIdsGetParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Search across all of the prototypes for those that match the search criteria
	/// and return the count of those that match.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/count
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesCountGet(const prototypesCountGetParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the prototype by its unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesIdGet(const prototypesIdGetParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the prototype by its unique identifier id
	/// and updates the writable fields of that prototype with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesIdPut(const prototypesIdPutParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the prototype by its unique identifier id
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesIdDelete(const prototypesIdDeleteParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the prototype by its unique name
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/name/{name}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesNameNameGet(const prototypesNameNameGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Creates state key value pairs or updates existing - any previously existing state
	/// not referenced in the call are left unchanged.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/state
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesPrototypeIdStatePut(const prototypesPrototypeIdStatePutParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Gets the state of a prototype.  If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/state
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesPrototypeIdStateGet(const prototypesPrototypeIdStateGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class VersionsApi final : public IVersionsApiBase
{
public:
	VersionsApi(csp::web::WebClient* InWebClient);
	virtual ~VersionsApi();



	/// <summary>
	/// Get Versions of available Controllers and versioned types
	/// </summary>
	/// <remarks>
	/// GET /api/versions
	/// Authorization: Anonymous
	/// </remarks>
	void rsionsGet(const rsionsGetParams& Params,
				   csp::services::ApiResponseHandlerBase* ResponseHandler,
				   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};


} // namespace csp::services::generated::prototypeservice