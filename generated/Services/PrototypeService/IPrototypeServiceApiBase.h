

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "Services/ApiBase/ApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::prototypeservice
{


class IAnalyticsApiBase : public csp::services::ApiBase
{
public:
	IAnalyticsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct analyticsBulkPostParams
	{
		const std::vector<std::shared_ptr<AnalyticsRecord>>& RequestBody;
	};


	/// <summary>
	/// Create new analytics records using a list of Magnopus.Service.Common.Contracts.Analytics.AnalyticsRecord objects.
	/// Ideally, the requester would pass in a list of analytics records to be created in bulk.
	/// </summary>
	/// <remarks>
	/// POST /analytics/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void analyticsBulkPost(const analyticsBulkPostParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct analyticsStreamPostParams
	{
	};


	/// <summary>
	/// Uploads a stream of gzipped analytics data. Creates many records in a bulk operation.
	/// </summary>
	/// <remarks>
	/// POST /analytics/stream
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void analyticsStreamPost(const analyticsStreamPostParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct analyticsStream_urlPostParams
	{
	};


	/// <summary>
	/// Returns a URL to the caller to use for analytics purposes.
	/// Randomizes the services so that not a single service is overloaded with requests.
	/// </summary>
	/// <remarks>
	/// POST /analytics/stream-url
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void analyticsStream_urlPost(const analyticsStream_urlPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAnalyticsApiBase() = default;
};

class IAssetDetailApiBase : public csp::services::ApiBase
{
public:
	IAssetDetailApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct prototypesPrototypeIdAsset_detailsPostParams
	{
		const utility::string_t& prototypeId;
		const std::shared_ptr<AssetDetailDto>& RequestBody;
	};


	/// <summary>
	/// Creates a new AssetBundle linked to a Prototype
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/{prototypeId}/asset-details
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsPost(const prototypesPrototypeIdAsset_detailsPostParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesPrototypeIdAsset_detailsGetParams
	{
		const utility::string_t& prototypeId;
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& SupportedPlatforms;
		const std::optional<std::vector<utility::string_t>>& AssetTypes;
		const std::optional<std::vector<utility::string_t>>& Styles;
		const std::optional<std::vector<utility::string_t>>& Names;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<std::vector<utility::string_t>>& PrototypeNames;
		const std::optional<std::vector<utility::string_t>>& PrototypeParentNames;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<std::vector<utility::string_t>>& ExcludedTags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::shared_ptr<GlobalScopeFilter>>& Scope;
	};


	/// <summary>
	/// Locates the assetDetail by its unique identifier prototypeId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/asset-details
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsGet(const prototypesPrototypeIdAsset_detailsGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesPrototypeIdAsset_detailsBulkPutParams
	{
		const utility::string_t& prototypeId;
		const std::vector<std::shared_ptr<BulkUpsertAssetDetailDto>>& RequestBody;
	};


	/// <summary>
	/// Bulk Upsert for a set of AssetDetails linked to a Prototype
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/bulk
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsBulkPut(const prototypesPrototypeIdAsset_detailsBulkPutParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesPrototypeIdAsset_detailsAssetDetailIdGetParams
	{
		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
	};


	/// <summary>
	/// Locates the assetDetail by its unique identifier prototype
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdGet(const prototypesPrototypeIdAsset_detailsAssetDetailIdGetParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesPrototypeIdAsset_detailsAssetDetailIdPutParams
	{
		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
		const std::shared_ptr<AssetDetailDto>& RequestBody;
	};


	/// <summary>
	/// Locates the assetDetail by its unique identifier  assetDetailId and the prototype  prototypeId it belongs to
	/// and updates the writable fields of that assetDetail with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdPut(const prototypesPrototypeIdAsset_detailsAssetDetailIdPutParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesPrototypeIdAsset_detailsAssetDetailIdDeleteParams
	{
		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
	};


	/// <summary>
	/// Locates the assetDetails by its unique identifier  assetDetailId and the prototype  prototypeId it belongs to
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdDelete(const prototypesPrototypeIdAsset_detailsAssetDetailIdDeleteParams& Params,
																	   csp::services::ApiResponseHandlerBase* ResponseHandler,
																	   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesAsset_detailsGetParams
	{
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& SupportedPlatforms;
		const std::optional<std::vector<utility::string_t>>& AssetTypes;
		const std::optional<std::vector<utility::string_t>>& Styles;
		const std::optional<std::vector<utility::string_t>>& Names;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<std::vector<utility::string_t>>& PrototypeNames;
		const std::optional<std::vector<utility::string_t>>& PrototypeParentNames;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<std::vector<utility::string_t>>& ExcludedTags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::shared_ptr<GlobalScopeFilter>>& Scope;
	};


	/// <summary>
	/// Locates the assetDetails by asset detail filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/asset-details
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesAsset_detailsGet(const prototypesAsset_detailsGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesAsset_detailsTypesDistinctGetParams
	{
		const std::optional<bool>& isGlobal;
	};


	/// <summary>
	/// Returns the distinct set of Magnopus.Service.Prototype.Dtos.AssetDetailDto.AssetType values currently in
	/// use. The isGlobal query parameter controls scope: `true` = globals
	/// only, `false` = caller's tenant only, omitted = both. Sorted case-insensitively. Used
	/// by the Inspector "asset type" combobox so admins can pick from existing types rather than
	/// typing free-form.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/asset-details/types/distinct
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesAsset_detailsTypesDistinctGet(const prototypesAsset_detailsTypesDistinctGetParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPostParams
	{
		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
		const std::optional<bool>& skipAssetPipeline;
		const std::shared_ptr<csp::web::HttpPayload>& FormFile;
	};


	/// <summary>
	/// Uploads AssetDetail file to S3 Bucket
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/blob
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPost(const prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPostParams& Params,
																		 csp::services::ApiResponseHandlerBase* ResponseHandler,
																		 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesPrototypeIdAsset_detailsAssetDetailIdInternal_copyPostParams
	{
		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
		const std::shared_ptr<InternalFileCopyRequest>& RequestBody;
	};


	/// <summary>
	/// Copies AssetDetail file from source file to destination file
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/internal-copy
	/// Authorization: internal-service
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdInternal_copyPost(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdInternal_copyPostParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdPutParams
	{
		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
		const utility::string_t& addressableId;
	};


	/// <summary>
	/// Updates an addressable id.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	[[deprecated("'PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}' is deprecated!")]]
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdPut(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdDeleteParams
	{
		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
		const utility::string_t& addressableId;
	};


	/// <summary>
	/// Deletes/Clears the string which associates this asset with an AddressableId.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	[[deprecated("'DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}' is deprecated!")]]
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdDelete(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdDeleteParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdPutParams
	{
		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
		const utility::string_t& thirdPartyReferenceId;
	};


	/// <summary>
	/// Updates a Third Party Reference Id.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{thirdPartyReferenceId}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdPut(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdDeleteParams
	{
		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
		const utility::string_t& thirdPartyReferenceId;
	};


	/// <summary>
	/// Deletes/Clears the string which associates this asset with an ThirdPartyReferenceId.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{thirdPartyReferenceId}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdDelete(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdDeleteParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesAsset_detailsAsset_pipeline_modelGetParams
	{
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& SupportedPlatforms;
		const std::optional<std::vector<utility::string_t>>& AssetTypes;
		const std::optional<std::vector<utility::string_t>>& Styles;
		const std::optional<std::vector<utility::string_t>>& Names;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<std::vector<utility::string_t>>& PrototypeNames;
		const std::optional<std::vector<utility::string_t>>& PrototypeParentNames;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<std::vector<utility::string_t>>& ExcludedTags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::shared_ptr<GlobalScopeFilter>>& Scope;
	};


	/// <summary>
	/// Bulk endpoint to get the parameters for all generated assets of a 3d models.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/asset-details/asset-pipeline-model
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesAsset_detailsAsset_pipeline_modelGet(const prototypesAsset_detailsAsset_pipeline_modelGetParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelGetParams
	{
		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
	};


	/// <summary>
	/// Gets the parameters for generated assets of a 3d model.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/asset-pipeline-model
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelGet(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelGetParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelPutParams
	{
		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
		const std::shared_ptr<AssetPipelineModelDto>& RequestBody;
	};


	/// <summary>
	/// Sets or updates the parameters for generated assets of a 3d model.
	/// If the parameters are different than the existing generated assets, a job will start to create/update/delete the assets with parameter
	/// differences. Note: This does NOT wait for the generated job to complete, this endpoint returns when the job is just started
	///
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/asset-pipeline-model
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelPut(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAssetDetailApiBase() = default;
};

class IAssignmentsApiBase : public csp::services::ApiBase
{
public:
	IAssignmentsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct productionrosterAssignmentsGetParams
	{
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& personId;
		const std::optional<utility::string_t>& projectId;
	};


	/// <summary>
	/// ★ <b>THE GRID'S ONE READ</b> (roster-experiment-plan.md §4).
	///
	/// `?from=` and `?to=` are inclusive `yyyy-MM-dd` days and are required;
	/// `?personId=` and `?projectId=` narrow it. Everything the week draws comes from
	/// this call plus the roster, and the client computes utilization from exactly this set —
	/// there is no aggregate endpoint until something proves one is needed (§3.3).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/assignments
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterAssignmentsGet(const productionrosterAssignmentsGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterAssignmentsPutParams
	{
		const std::shared_ptr<AssignmentUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Upserts ONE grid cell, keyed on `(personId, date)`.
	///
	/// <b>Zero hours clears the cell</b> and comes back with a `null` body, which is the
	/// honest answer to "what is in that cell now". 409 when the person-day already carries more
	/// than one row — unreachable from the v1 UI, and refused rather than collapsed (DG-2).
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/assignments
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterAssignmentsPut(const productionrosterAssignmentsPutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterAssignmentsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Clears one cell by id.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/assignments/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterAssignmentsIdDelete(const productionrosterAssignmentsIdDeleteParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterAssignmentsBulkPostParams
	{
		const std::shared_ptr<BulkAssignRequest>& RequestBody;
	};


	/// <summary>
	/// ★ <b>THE SPAN WRITE</b> (§3.4). Producers think "three weeks at half time", so the write
	/// is a span and the server expands it into per-day rows in one call.
	///
	/// ⚠ <b>200 even when it declines to write</b>, and that is deliberate. §10 D2's
	/// recommendation is taken — with `overwrite: false` it REPORTS what it would replace
	/// and writes nothing — and the platform's 409 body is a bare string, so a structured
	/// conflict list has nowhere to ride on a conflict response. The client branches on
	/// `applied`. Frozen in the S0 contract fixture.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/assignments/bulk
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterAssignmentsBulkPost(const productionrosterAssignmentsBulkPostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAssignmentsApiBase() = default;
};

class ICacheApiBase : public csp::services::ApiBase
{
public:
	ICacheApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct cache_keysGetParams
	{
		const std::optional<utility::string_t>& pattern;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Gets the distributed cache keys that match the pattern (use * for wildcard)
	/// </summary>
	/// <remarks>
	/// GET /cache-keys
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void cache_keysGet(const cache_keysGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct cache_keysDeleteParams
	{
		const std::optional<utility::string_t>& pattern;
	};


	/// <summary>
	/// Deletes the distributed cache keys that match the pattern (use * for wildcard)
	/// </summary>
	/// <remarks>
	/// DELETE /cache-keys
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void cache_keysDelete(const cache_keysDeleteParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ICacheApiBase() = default;
};

class IConfigApiBase : public csp::services::ApiBase
{
public:
	IConfigApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct productionrosterConfigGetParams
	{
	};


	/// <summary>
	/// The utilization thresholds, the week start day, and the multiplayer Group id.
	///
	/// ★ <b>Served, not duplicated into the client</b> (§3.3). The thresholds are a studio policy
	/// that will be argued about, and the argument should happen in one place.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/config
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterConfigGet(const productionrosterConfigGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterConfigGroupPostParams
	{
	};


	/// <summary>
	/// ★ <b>Provisions the studio's one presence Group and its Global Scope</b>, and records
	/// both (§7.4). Returns the same config `GET` serves, with `groupId` populated.
	///
	/// <b>Idempotent, and called by the client.</b> A roster client that reads a config with no
	/// `groupId` calls this once on mount; everybody after the first gets the existing
	/// record back untouched. That is what makes presence work on a fresh environment without
	/// anybody remembering a manual step — and it is why this is a `POST` of its own rather
	/// than a lazy write inside `GET /config`, which stays a read.
	/// ⚠ <b>A Scope is not optional.</b> The client resolves what to listen on from the Group's
	/// scopes, so a Group provisioned without one attaches to nothing. Both are created here, in
	/// that order, with the Group rolled back if the Scope fails.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/config/group
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterConfigGroupPost(const productionrosterConfigGroupPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterConfigGroupGroupIdPutParams
	{
		const utility::string_t& groupId;
	};


	/// <summary>
	/// Records a Group somebody provisioned by hand (§7.4).
	///
	/// ⚠ <b>Conditional on one not already being set</b>, so a second call cannot repoint the
	/// studio at a Group the already-attached clients are not in. The winner's id comes back
	/// either way, which is why this is not an error.
	/// ★ <b>Prefer `POST /config/group`.</b> This route records a Group id and provisions
	/// nothing, so it cannot know whether a Scope exists — and a Group without one attaches to
	/// an empty scope list and fails as an opaque hub error. Kept for the case where the Group
	/// already exists and only needs recording.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/config/group/{groupId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterConfigGroupGroupIdPut(const productionrosterConfigGroupGroupIdPutParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IConfigApiBase() = default;
};

class IConfigurationApiBase : public csp::services::ApiBase
{
public:
	IConfigurationApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct appsettingsGetParams
	{
	};

	/// <remarks>
	/// GET /appsettings
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void appsettingsGet(const appsettingsGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct appsettingsReloadPostParams
	{
	};

	/// <remarks>
	/// POST /appsettings/reload
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void appsettingsReloadPost(const appsettingsReloadPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct featureflagsGetParams
	{
	};

	/// <remarks>
	/// GET /featureflags
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void featureflagsGet(const featureflagsGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IConfigurationApiBase() = default;
};

class IDaigramsApiBase : public csp::services::ApiBase
{
public:
	IDaigramsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct daigramsPostParams
	{
		const std::shared_ptr<DaigramCreateRequest>& RequestBody;
	};


	/// <summary>
	/// Create a daigram (provisions the backing group + scope) owned by the caller.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/daigrams
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsPost(const daigramsPostParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct daigramsGetParams
	{
	};


	/// <summary>
	/// List the daigrams the caller owns or can access via group membership.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/daigrams
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsGet(const daigramsGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct daigramsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Get a single daigram by id.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/daigrams/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsIdGet(const daigramsIdGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct daigramsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<DaigramUpdateRequest>& RequestBody;
	};


	/// <summary>
	/// Rename a daigram (metadata-only; caller must be owner or a group member/creator).
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/daigrams/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsIdPut(const daigramsIdPutParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct daigramsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Delete a daigram and tear down its group + scope + objects. Owner-only.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/daigrams/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsIdDelete(const daigramsIdDeleteParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct daigramsIdThumbnailPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<DaigramThumbnailRequest>& RequestBody;
	};


	/// <summary>
	/// Set a daigram's thumbnail Prototype id (capture-on-save). Owner or any group member —
	/// every member is a group creator, so any editor can capture the snapshot.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/daigrams/{id}/thumbnail
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsIdThumbnailPut(const daigramsIdThumbnailPutParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IDaigramsApiBase() = default;
};

class IDepartmentsApiBase : public csp::services::ApiBase
{
public:
	IDepartmentsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct productionrosterDepartmentsGetParams
	{
	};


	/// <summary>
	/// Every department with its ladder, in grid order.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/departments
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterDepartmentsGet(const productionrosterDepartmentsGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterDepartmentsPostParams
	{
		const std::shared_ptr<DepartmentUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Registers a department. <b>409 when the name is taken</b> — the unique index decides it.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/departments
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterDepartmentsPost(const productionrosterDepartmentsPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterDepartmentsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<DepartmentUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Edits a department, ladder included.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/departments/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterDepartmentsIdPut(const productionrosterDepartmentsIdPutParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterDepartmentsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Removes a department. <b>409 while people still belong to it.</b>
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/departments/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterDepartmentsIdDelete(const productionrosterDepartmentsIdDeleteParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IDepartmentsApiBase() = default;
};

class IEffortResourcesApiBase : public csp::services::ApiBase
{
public:
	IEffortResourcesApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct watchtowerEffortBulk_upsertPostParams
	{
		const std::shared_ptr<EffortResourceUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Bulk-upsert effort nodes (the write path for both the historical reconstructor and the live
	/// observer/agent). Super-user / agent gated. Provenance-gated: a lower-tier write never clobbers a
	/// higher-tier one.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/effort/bulk-upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerEffortBulk_upsertPost(const watchtowerEffortBulk_upsertPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerEffortBulk_removePostParams
	{
		const std::shared_ptr<EffortResourceRemoveRequest>& RequestBody;
	};


	/// <summary>
	/// Tombstone effort nodes by key — the removal verb for source units that have vanished. Keys only:
	/// the producer proposes a removal precisely because it no longer holds the payload. Soft: the entries
	/// keep their content and stay readable, marked `removed`, so the board draws them struck-through.
	/// Idempotent and provenance-gated; refused keys come back named. Same gate as bulk-upsert — this is a
	/// write.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/effort/bulk-remove
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerEffortBulk_removePost(const watchtowerEffortBulk_removePostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerEffortBulk_getPostParams
	{
		const std::shared_ptr<EffortResourceBulkGetRequest>& RequestBody;
	};


	/// <summary>
	/// Fetch effort nodes by key — the client hydration read. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/effort/bulk-get
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerEffortBulk_getPost(const watchtowerEffortBulk_getPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerEffortSearchPostParams
	{
		const std::shared_ptr<EffortResourceSearchRequest>& RequestBody;
	};


	/// <summary>
	/// The liveness search — nodes tagged with any of the requested daigram ids that changed since the
	/// caller's cursor, plus the cursor to pass next poll. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/effort/search
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerEffortSearchPost(const watchtowerEffortSearchPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IEffortResourcesApiBase() = default;
};

class IInspectorGlobalAssetDetailApiBase : public csp::services::ApiBase
{
public:
	IInspectorGlobalAssetDetailApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct inspectorGlobal_prototypesPrototypeIdAsset_detailsGetParams
	{
		const utility::string_t& prototypeId;
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& SupportedPlatforms;
		const std::optional<std::vector<utility::string_t>>& AssetTypes;
		const std::optional<std::vector<utility::string_t>>& Styles;
		const std::optional<std::vector<utility::string_t>>& Names;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<std::vector<utility::string_t>>& PrototypeNames;
		const std::optional<std::vector<utility::string_t>>& PrototypeParentNames;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<std::vector<utility::string_t>>& ExcludedTags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::shared_ptr<GlobalScopeFilter>>& Scope;
	};


	/// <summary>
	/// Lists asset-details that belong to a global prototype. Returns 404 if the parent
	/// prototype is tenant-scoped or doesn't exist.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/global-prototypes/{prototypeId}/asset-details
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorGlobal_prototypesPrototypeIdAsset_detailsGet(const inspectorGlobal_prototypesPrototypeIdAsset_detailsGetParams& Params,
																	   csp::services::ApiResponseHandlerBase* ResponseHandler,
																	   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorGlobal_prototypesPrototypeIdAsset_detailsPostParams
	{
		const utility::string_t& prototypeId;
		const std::shared_ptr<AssetDetailDto>& RequestBody;
	};


	/// <summary>
	/// Creates a new asset-detail under a global parent. The parent's `TenantName=""`
	/// is automatically inherited by the new asset (globals-plan §8 / step 6), which routes
	/// the create through the global write path. Returns 404 if the parent is tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/global-prototypes/{prototypeId}/asset-details
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorGlobal_prototypesPrototypeIdAsset_detailsPost(const inspectorGlobal_prototypesPrototypeIdAsset_detailsPostParams& Params,
																		csp::services::ApiResponseHandlerBase* ResponseHandler,
																		csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdGetParams
	{
		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
	};


	/// <summary>
	/// Locates a single asset-detail. Returns 404 if the parent prototype is tenant-scoped
	/// or the asset-detail does not belong to the parent.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/global-prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdGet(
		const inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdGetParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdPutParams
	{
		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
		const std::shared_ptr<AssetDetailDto>& RequestBody;
	};


	/// <summary>
	/// Updates an existing asset-detail under a global parent. Returns 404 if the parent is
	/// tenant-scoped or the asset does not belong to the parent.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/inspector/global-prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdPut(
		const inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdDeleteParams
	{
		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
	};


	/// <summary>
	/// Deletes an asset-detail under a global parent. Returns 404 if the parent is
	/// tenant-scoped or the asset does not exist.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/inspector/global-prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdDelete(
		const inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdDeleteParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPostParams
	{
		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
		const std::optional<bool>& skipAssetPipeline;
		const std::shared_ptr<csp::web::HttpPayload>& FormFile;
	};


	/// <summary>
	/// Uploads a binary file for a global asset. Returns 404 if the parent is tenant-scoped.
	/// Delegates to the same logic path as the public `AssetDetailController.UploadAssetDetailFile`;
	/// the Inspector wrapper exists so the surface is symmetric with the rest of the Inspector
	/// globals API and the parent-is-global precondition is enforced consistently.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/global-prototypes/{prototypeId}/asset-details/{assetDetailId}/blob
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPost(
		const inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPostParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorGlobalAssetDetailApiBase() = default;
};

class IInspectorGlobalPrototypeApiBase : public csp::services::ApiBase
{
public:
	IInspectorGlobalPrototypeApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct inspectorGlobal_prototypesGetParams
	{
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<std::vector<utility::string_t>>& ExcludedTags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& Names;
		const std::optional<std::vector<utility::string_t>>& PartialNames;
		const std::optional<std::vector<utility::string_t>>& ExcludedIds;
		const std::optional<std::vector<utility::string_t>>& PointOfInterestIds;
		const std::optional<utility::string_t>& ParentId;
		const std::optional<std::vector<utility::string_t>>& GroupIds;
		const std::optional<std::vector<utility::string_t>>& Types;
		const std::optional<bool>& HasGroup;
		const std::optional<utility::string_t>& CreatedBy;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<std::vector<utility::string_t>>& PrototypeOwnerIds;
		const std::optional<std::vector<utility::string_t>>& ReadAccessFilters;
		const std::optional<std::vector<utility::string_t>>& WriteAccessFilters;
		const std::optional<std::vector<utility::string_t>>& ExcludedTypes;
		const std::optional<std::shared_ptr<GlobalScopeFilter>>& Scope;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
		const std::optional<utility::string_t>& SortBy;
		const std::optional<std::shared_ptr<SortDirection>>& SortDirection;
	};


	/// <summary>
	/// Searches global prototypes. The Inspector surface is always scoped to globals
	/// regardless of any caller-supplied Magnopus.Service.Prototype.Structures.PrototypeFilters.Scope value.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/global-prototypes
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorGlobal_prototypesGet(const inspectorGlobal_prototypesGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorGlobal_prototypesPostParams
	{
		const std::shared_ptr<PrototypeDto>& RequestBody;
	};


	/// <summary>
	/// Creates a new global prototype. The Inspector surface force-sets `IsGlobal=true`
	/// on the inbound DTO before mapping, so callers cannot accidentally create a tenant
	/// record through this endpoint.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/global-prototypes
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorGlobal_prototypesPost(const inspectorGlobal_prototypesPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorGlobal_prototypesIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Locates a single global prototype by id. Returns 404 if the record exists but is
	/// tenant-scoped (defense against id-smuggling from another surface).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/global-prototypes/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorGlobal_prototypesIdGet(const inspectorGlobal_prototypesIdGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorGlobal_prototypesIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<PrototypeDto>& RequestBody;
	};


	/// <summary>
	/// Updates an existing global prototype. Returns 404 if the id resolves to a tenant
	/// record (defense against id-smuggling). Force-sets `IsGlobal=true` on the inbound
	/// DTO; attempting to demote to a tenant record is rejected by the logic layer.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/inspector/global-prototypes/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorGlobal_prototypesIdPut(const inspectorGlobal_prototypesIdPutParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorGlobal_prototypesIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Deletes a global prototype and its hierarchy. Returns 404 if the id resolves to a
	/// tenant record (defense against id-smuggling).
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/inspector/global-prototypes/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorGlobal_prototypesIdDelete(const inspectorGlobal_prototypesIdDeleteParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorGlobalPrototypeApiBase() = default;
};

class IJiraResourcesApiBase : public csp::services::ApiBase
{
public:
	IJiraResourcesApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct watchtowerJiraBulk_upsertPostParams
	{
		const std::shared_ptr<JiraResourceUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Bulk-upsert read-model entries (the collector/agent write path). Super-user gated — this is a
	/// collector seam, not a user action. Callers should send only changed entries (the poller diffs).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/bulk-upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraBulk_upsertPost(const watchtowerJiraBulk_upsertPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraBulk_getPostParams
	{
		const std::shared_ptr<JiraResourceBulkGetRequest>& RequestBody;
	};


	/// <summary>
	/// Fetch read-model entries by key — the client hydration read. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/bulk-get
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraBulk_getPost(const watchtowerJiraBulk_getPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraSearchPostParams
	{
		const std::shared_ptr<JiraResourceSearchRequest>& RequestBody;
	};


	/// <summary>
	/// The liveness search — entries tagged with any of the requested daigram ids that changed since
	/// the caller's cursor, plus the cursor to pass next poll. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/search
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraSearchPost(const watchtowerJiraSearchPostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraCreatemetaProjectGetParams
	{
		const utility::string_t& project;
		const std::optional<utility::string_t>& family;
	};


	/// <summary>
	/// The stored create schema for a project (all creatable issue types + projected fields) — the
	/// inline-create form reads this. Null/no-content when not yet seeded (the form falls back to a
	/// summary-only create). Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/watchtower/jira/createmeta/{project}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraCreatemetaProjectGet(const watchtowerJiraCreatemetaProjectGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraCreatemetaUpsertPostParams
	{
		const std::shared_ptr<JiraCreateMetaUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Refresh a project's create schema (the collector write path). Super-user gated.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/createmeta/upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraCreatemetaUpsertPost(const watchtowerJiraCreatemetaUpsertPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraReferenceProjectKindGetParams
	{
		const utility::string_t& project;
		const utility::string_t& kind;
		const std::optional<utility::string_t>& family;
	};


	/// <summary>
	/// A project-scoped reference list (`components`/`versions`) for a typeahead — the big
	/// option sets kept out of the create schema. Null/no-content when not yet seeded. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/watchtower/jira/reference/{project}/{kind}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraReferenceProjectKindGet(const watchtowerJiraReferenceProjectKindGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraReferenceUpsertPostParams
	{
		const std::shared_ptr<JiraReferenceUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Refresh a project's reference list (the collector write path). Super-user gated.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/reference/upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraReferenceUpsertPost(const watchtowerJiraReferenceUpsertPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IJiraResourcesApiBase() = default;
};

class INtpApiBase : public csp::services::ApiBase
{
public:
	INtpApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct datetimeGetParams
	{
	};

	/// <remarks>
	/// GET /datetime
	/// Authorization: Anonymous
	/// </remarks>
	virtual void datetimeGet(const datetimeGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~INtpApiBase() = default;
};

class IPeopleApiBase : public csp::services::ApiBase
{
public:
	IPeopleApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct productionrosterPeopleGetParams
	{
	};


	/// <summary>
	/// The whole roster, by name.
	///
	/// ⚠ <b>Unpaged, deliberately</b> (§3.3): the grid groups by department, divides by title
	/// ladder and totals utilization across the studio, all of which need every row.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/people
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterPeopleGet(const productionrosterPeopleGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterPeoplePostParams
	{
		const std::shared_ptr<PersonUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Adds a person. 409 on a duplicate name; 400 when the title is off the department's ladder.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/people
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterPeoplePost(const productionrosterPeoplePostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterPeopleIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<PersonUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Edits a person.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/people/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterPeopleIdPut(const productionrosterPeopleIdPutParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterPeopleIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Removes a person <b>and every assignment they hold</b>.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/people/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterPeopleIdDelete(const productionrosterPeopleIdDeleteParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IPeopleApiBase() = default;
};

class IPingApiBase : public csp::services::ApiBase
{
public:
	IPingApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct pingGetParams
	{
	};

	/// <remarks>
	/// GET /ping
	/// Authorization: Anonymous
	/// </remarks>
	virtual void pingGet(const pingGetParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IPingApiBase() = default;
};

class IProjectsApiBase : public csp::services::ApiBase
{
public:
	IProjectsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct productionrosterProjectsGetParams
	{
	};


	/// <summary>
	/// Every project, by name.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/projects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterProjectsGet(const productionrosterProjectsGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterProjectsPostParams
	{
		const std::shared_ptr<ProjectUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Creates a project. <b>409 on a duplicate name</b> — see Magnopus.Logic.ProductionRoster.IProjectLogic.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/projects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterProjectsPost(const productionrosterProjectsPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterProjectsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<ProjectUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Renames or recolours a project. Every assignment follows, because they carry the id.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/projects/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterProjectsIdPut(const productionrosterProjectsIdPutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterProjectsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Removes a project and every assignment on it.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/projects/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterProjectsIdDelete(const productionrosterProjectsIdDeleteParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IProjectsApiBase() = default;
};

class IPrototypeApiBase : public csp::services::ApiBase
{
public:
	IPrototypeApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct prototypesPostParams
	{
		const std::shared_ptr<PrototypeDto>& RequestBody;
	};


	/// <summary>
	/// Creates a new prototype
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesPost(const prototypesPostParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesGetParams
	{
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<std::vector<utility::string_t>>& ExcludedTags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& Names;
		const std::optional<std::vector<utility::string_t>>& PartialNames;
		const std::optional<std::vector<utility::string_t>>& ExcludedIds;
		const std::optional<std::vector<utility::string_t>>& PointOfInterestIds;
		const std::optional<utility::string_t>& ParentId;
		const std::optional<std::vector<utility::string_t>>& GroupIds;
		const std::optional<std::vector<utility::string_t>>& Types;
		const std::optional<bool>& HasGroup;
		const std::optional<utility::string_t>& CreatedBy;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<std::vector<utility::string_t>>& PrototypeOwnerIds;
		const std::optional<std::vector<utility::string_t>>& ReadAccessFilters;
		const std::optional<std::vector<utility::string_t>>& WriteAccessFilters;
		const std::optional<std::vector<utility::string_t>>& ExcludedTypes;
		const std::optional<std::shared_ptr<GlobalScopeFilter>>& Scope;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
		const std::optional<utility::string_t>& SortBy;
		const std::optional<std::shared_ptr<SortDirection>>& SortDirection;
	};


	/// <summary>
	/// Search across all of the prototypes for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesGet(const prototypesGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesDeleteParams
	{
		const std::optional<std::vector<utility::string_t>>& ids;
	};


	/// <summary>
	/// Locates all prototypes by their unique identifier(s) ids
	/// and deletes them from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesDelete(const prototypesDeleteParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesGroup_ownedOriginalGroupIdDuplicateNewGroupIdPostParams
	{
		const utility::string_t& originalGroupId;
		const utility::string_t& newGroupId;
		const std::shared_ptr<DuplicateGroupPrototypesOptions>& RequestBody;
	};


	/// <summary>
	/// Duplicates prototype(s) to a new group by filters
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/group-owned/{originalGroupId}/duplicate/{newGroupId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void
		prototypesGroup_ownedOriginalGroupIdDuplicateNewGroupIdPost(const prototypesGroup_ownedOriginalGroupIdDuplicateNewGroupIdPostParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesGroup_ownedOriginalGroupIdExportsExportIdPostParams
	{
		const utility::string_t& originalGroupId;
		const utility::string_t& exportId;
		const std::shared_ptr<ExportGroupPrototypesOptions>& RequestBody;
	};


	/// <summary>
	/// Create and return new prototype(s) that have not been saved to the database
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/group-owned/{originalGroupId}/exports/{exportId}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void prototypesGroup_ownedOriginalGroupIdExportsExportIdPost(const prototypesGroup_ownedOriginalGroupIdExportsExportIdPostParams& Params,
																		 csp::services::ApiResponseHandlerBase* ResponseHandler,
																		 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesGroup_ownedNewGroupIdExportsExportIdImportPostParams
	{
		const utility::string_t& exportId;
		const utility::string_t& newGroupId;
		const std::shared_ptr<ImportGroupPrototypesOptions>& RequestBody;
	};


	/// <summary>
	/// Imports a set of prototypes and assigns them to a space
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/group-owned/{newGroupId}/exports/{exportId}/import
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void
		prototypesGroup_ownedNewGroupIdExportsExportIdImportPost(const prototypesGroup_ownedNewGroupIdExportsExportIdImportPostParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesBulkPutParams
	{
		const std::vector<std::shared_ptr<BulkUpsertPrototypeDto>>& RequestBody;
	};


	/// <summary>
	/// Bulk upsert operation for prototypes
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/bulk
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesBulkPut(const prototypesBulkPutParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesIdsGetParams
	{
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<std::vector<utility::string_t>>& ExcludedTags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& Names;
		const std::optional<std::vector<utility::string_t>>& PartialNames;
		const std::optional<std::vector<utility::string_t>>& ExcludedIds;
		const std::optional<std::vector<utility::string_t>>& PointOfInterestIds;
		const std::optional<utility::string_t>& ParentId;
		const std::optional<std::vector<utility::string_t>>& GroupIds;
		const std::optional<std::vector<utility::string_t>>& Types;
		const std::optional<bool>& HasGroup;
		const std::optional<utility::string_t>& CreatedBy;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<std::vector<utility::string_t>>& PrototypeOwnerIds;
		const std::optional<std::vector<utility::string_t>>& ReadAccessFilters;
		const std::optional<std::vector<utility::string_t>>& WriteAccessFilters;
		const std::optional<std::vector<utility::string_t>>& ExcludedTypes;
		const std::optional<std::shared_ptr<GlobalScopeFilter>>& Scope;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Search across the prototypes for those that match the search criteria and returns the id's
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/ids
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesIdsGet(const prototypesIdsGetParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesCountGetParams
	{
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<std::vector<utility::string_t>>& ExcludedTags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& Names;
		const std::optional<std::vector<utility::string_t>>& PartialNames;
		const std::optional<std::vector<utility::string_t>>& ExcludedIds;
		const std::optional<std::vector<utility::string_t>>& PointOfInterestIds;
		const std::optional<utility::string_t>& ParentId;
		const std::optional<std::vector<utility::string_t>>& GroupIds;
		const std::optional<std::vector<utility::string_t>>& Types;
		const std::optional<bool>& HasGroup;
		const std::optional<utility::string_t>& CreatedBy;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<std::vector<utility::string_t>>& PrototypeOwnerIds;
		const std::optional<std::vector<utility::string_t>>& ReadAccessFilters;
		const std::optional<std::vector<utility::string_t>>& WriteAccessFilters;
		const std::optional<std::vector<utility::string_t>>& ExcludedTypes;
		const std::optional<std::shared_ptr<GlobalScopeFilter>>& Scope;
	};


	/// <summary>
	/// Search across all of the prototypes for those that match the search criteria
	/// and return the count of those that match.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/count
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesCountGet(const prototypesCountGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesTypesDistinctGetParams
	{
		const std::optional<bool>& isGlobal;
	};


	/// <summary>
	/// Returns the distinct set of prototype `Type` values currently in use. The
	/// isGlobal query parameter controls scope: `true` = globals only,
	/// `false` = caller's tenant only, omitted = both. Sorted case-insensitively. Used by
	/// the Inspector "type" combobox so admins can pick from existing types rather than typing
	/// free-form.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/types/distinct
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesTypesDistinctGet(const prototypesTypesDistinctGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Locates the prototype by its unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{id}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesIdGet(const prototypesIdGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<PrototypeDto>& RequestBody;
	};


	/// <summary>
	/// Locates the prototype by its unique identifier id
	/// and updates the writable fields of that prototype with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{id}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesIdPut(const prototypesIdPutParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Locates the prototype by its unique identifier id
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesIdDelete(const prototypesIdDeleteParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesNameNameGetParams
	{
		const utility::string_t& name;
	};


	/// <summary>
	/// Locates the prototype by its unique name
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/name/{name}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesNameNameGet(const prototypesNameNameGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesDeletePostParams
	{
		const std::vector<utility::string_t>& RequestBody;
	};


	/// <summary>
	/// Locates all prototypes by their unique identifier(s) ids
	/// POST Endpoint so that we can send large lists of ids in the body
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/delete
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesDeletePost(const prototypesDeletePostParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesPrototypeIdStatePutParams
	{
		const utility::string_t& prototypeId;
		const std::map<utility::string_t, utility::string_t>& RequestBody;
	};


	/// <summary>
	/// Creates state key value pairs or updates existing - any previously existing state
	/// not referenced in the call are left unchanged.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/state
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesPrototypeIdStatePut(const prototypesPrototypeIdStatePutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesPrototypeIdStateGetParams
	{
		const utility::string_t& prototypeId;
		const std::optional<std::vector<utility::string_t>>& keys;
	};


	/// <summary>
	/// Gets the state of a prototype.  If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/state
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	virtual void prototypesPrototypeIdStateGet(const prototypesPrototypeIdStateGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IPrototypeApiBase() = default;
};

class ISnapshotApiBase : public csp::services::ApiBase
{
public:
	ISnapshotApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct productionrosterSnapshotGetParams
	{
		const std::optional<std::vector<utility::string_t>>& types;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
	};


	/// <summary>
	/// The requested slices of the roster, in one response.
	///
	/// ★ <b>Why this exists.</b> The grid's first load and its refresh pulse both need the same
	/// five things, and they were five parallel requests — per tick, per open client. Beyond the
	/// obvious cost, five requests are <b>five independently-timed reads of one logical state</b>:
	/// a person deleted between the people read and the assignment read leaves the client holding
	/// bookings for somebody who is no longer on the roster.
	/// `?types=people&types=projects` names what to include; omitting it returns
	/// everything, because a request that names nothing is far likelier to be a caller that
	/// forgot the parameter than one that wants an empty object. A type that was not requested
	/// comes back as an <b>absent key</b>, which is deliberately distinguishable from an empty
	/// list — see Magnopus.Logic.ProductionRoster.Dtos.RosterSnapshotDto.
	/// ⚠ `from` and `to` are <b>required</b> when `assignments` is requested. The
	/// roster is a studio's whole history and an unbounded read is never what a caller meant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/snapshot
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterSnapshotGet(const productionrosterSnapshotGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISnapshotApiBase() = default;
};

class ISystemClaimApiBase : public csp::services::ApiBase
{
public:
	ISystemClaimApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct batonSystemsSystemIdClaimPostParams
	{
		const utility::string_t& systemId;
		const std::shared_ptr<TakeBatonRequest>& RequestBody;
	};


	/// <summary>
	/// <b>Take the baton.</b> 200 with the system as it now stands, or <b>409 with the current
	///             holder in the body</b> so the UI can say "Matt took it a moment ago" rather than
	///             "something went wrong".
	/// </summary>
	/// <remarks>
	/// POST /api/v1/baton/systems/{systemId}/claim
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsSystemIdClaimPost(const batonSystemsSystemIdClaimPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsSystemIdClaimDeleteParams
	{
		const utility::string_t& systemId;
		const std::optional<bool>& force;
		const std::optional<utility::string_t>& note;
	};


	/// <summary>
	/// <b>Pass the baton.</b> Releases the caller's own hold; `?force=true` releases
	///              whoever is holding it.
	///
	///
	/// The force is gated by <b>accountability, not by role</b> (D24). Three real controls:
	///              the query parameter has to be asked for explicitly, so nobody forces by accident and the
	///              API cannot be misread as "release whatever is there"; the forcer's id lands on the closed
	///              claim, where differing from the holder <i>is</i> the record; and an audit record is
	///              written outside the tool, where the forced party can find it without Baton's cooperation.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/baton/systems/{systemId}/claim
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsSystemIdClaimDelete(const batonSystemsSystemIdClaimDeleteParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISystemClaimApiBase() = default;
};

class ISystemHistoryApiBase : public csp::services::ApiBase
{
public:
	ISystemHistoryApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct batonSystemsSystemIdHistoryGetParams
	{
		const utility::string_t& systemId;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// One page of a system's holds, <b>newest first</b>, each with the duration computed at
	/// release. <b>Archived systems still answer</b> — history outlives them.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/baton/systems/{systemId}/history
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsSystemIdHistoryGet(const batonSystemsSystemIdHistoryGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISystemHistoryApiBase() = default;
};

class ISystemQueueApiBase : public csp::services::ApiBase
{
public:
	ISystemQueueApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct batonSystemsSystemIdQueueGetParams
	{
		const utility::string_t& systemId;
	};


	/// <summary>
	/// One system's queue, in order, with each person's place in line.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/baton/systems/{systemId}/queue
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsSystemIdQueueGet(const batonSystemsSystemIdQueueGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsSystemIdQueuePostParams
	{
		const utility::string_t& systemId;
		const std::shared_ptr<JoinQueueRequest>& RequestBody;
	};


	/// <summary>
	/// <b>Get in line.</b> 200 with your place in it, <b>409 if you are already in</b> — decided
	///             by the unique `(SystemId, UserId)` index at insert time, never by a preceding read —
	///             and <b>404 if the system has been archived</b>, because it is gone rather than in a
	///             conflicting state (D26).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/baton/systems/{systemId}/queue
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsSystemIdQueuePost(const batonSystemsSystemIdQueuePostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsSystemIdQueueDeleteParams
	{
		const utility::string_t& systemId;
		const std::optional<utility::string_t>& userId;
		const std::optional<bool>& force;
	};


	/// <summary>
	/// <b>Leave the line.</b> Removes the caller; `?force=true&userId=…` removes
	///              somebody else.
	///
	///
	/// ⚠ <b>Without `force`, userId is ignored entirely</b> and the
	///              caller is removed — the same shape as a plain pass being unable to touch somebody else's
	///              hold. A parameter that quietly becomes destructive when a second one is present is how an
	///              API gets misread; here the flag has to be asked for, and the person removed is told it
	///              happened.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/baton/systems/{systemId}/queue
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsSystemIdQueueDelete(const batonSystemsSystemIdQueueDeleteParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISystemQueueApiBase() = default;
};

class ISystemsApiBase : public csp::services::ApiBase
{
public:
	ISystemsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct batonSystemsGetParams
	{
		const std::optional<utility::string_t>& Search;
		const std::optional<bool>& Archived;
		const std::optional<utility::string_t>& SortBy;
		const std::optional<std::shared_ptr<SortDirection>>& SortDirection;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// One page of the tenant's systems — held first, then most recently released.
	///
	/// `?search=` is a contains-match across name, description and the current holder's
	/// name; `?sortBy=name` switches to alphabetical; `?skip=` / `?limit=` are the
	/// infinite scroll's page. Paging, filtering and sorting are all server-side because a paged
	/// list cannot be ordered or filtered on the client (baton-plan.md D7).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/baton/systems
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsGet(const batonSystemsGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsPostParams
	{
		const std::shared_ptr<SystemCreateRequest>& RequestBody;
	};


	/// <summary>
	/// Registers a system. <b>409 when this tenant already has one by that name</b> — decided by
	/// the unique index at insert time, never by a preceding read.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/baton/systems
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsPost(const batonSystemsPostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct batonSystemsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// A single system by id. Archived systems still resolve — history outlives them.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/baton/systems/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsIdGet(const batonSystemsIdGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<SystemUpdateRequest>& RequestBody;
	};


	/// <summary>
	/// Edits a system's name, description, console link and grace window. 409 on a name that is
	/// already taken. <b>Never touches the hold</b> — that is Lane B's conditional update.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/baton/systems/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsIdPut(const batonSystemsIdPutParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsIdDeleteParams
	{
		const utility::string_t& id;
		const std::optional<bool>& confirm;
	};


	/// <summary>
	/// Archives a system: it leaves the list, its history stays.
	///
	/// ⚠ <b>`?confirm=true` is required</b>, the same shape as Lane B's `?force=true`
	/// (baton-plan.md §8.1). Nobody retires a shared system by accident, and the API cannot be
	/// misread as "remove whatever is at this id".
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/baton/systems/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsIdDelete(const batonSystemsIdDeleteParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISystemsApiBase() = default;
};

class ISystemThumbnailApiBase : public csp::services::ApiBase
{
public:
	ISystemThumbnailApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct batonSystemsIdThumbnailPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<SystemThumbnailRequest>& RequestBody;
	};


	/// <summary>
	/// Point a system at the Prototype holding its picture. The bytes themselves are uploaded
	/// straight to the Prototype service by the client; this records the reference.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/baton/systems/{id}/thumbnail
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsIdThumbnailPut(const batonSystemsIdThumbnailPutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISystemThumbnailApiBase() = default;
};

class IVersionsApiBase : public csp::services::ApiBase
{
public:
	IVersionsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct rsionsGetParams
	{
	};


	/// <summary>
	/// Get Versions of available Controllers and versioned types
	/// </summary>
	/// <remarks>
	/// GET /api/versions
	/// Authorization: Anonymous
	/// </remarks>
	virtual void rsionsGet(const rsionsGetParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IVersionsApiBase() = default;
};

class IWazzupAgentOverridesApiBase : public csp::services::ApiBase
{
public:
	IWazzupAgentOverridesApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct wazzupAgent_overridesGetParams
	{
	};


	/// <summary>
	/// Every override the caller has stored.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/agent-overrides
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupAgent_overridesGet(const wazzupAgent_overridesGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct wazzupAgent_overridesDeleteParams
	{
		const std::optional<bool>& confirm;
	};


	/// <summary>
	/// Resets every agent to its defaults. `confirm=true` is required.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/wazzup/agent-overrides
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupAgent_overridesDelete(const wazzupAgent_overridesDeleteParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct wazzupAgent_overridesAgentIdPutParams
	{
		const utility::string_t& agentId;
		const std::shared_ptr<AgentOverrideRequest>& RequestBody;
	};


	/// <summary>
	/// Creates or replaces the caller's override for one agent.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/wazzup/agent-overrides/{agentId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupAgent_overridesAgentIdPut(const wazzupAgent_overridesAgentIdPutParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct wazzupAgent_overridesAgentIdDeleteParams
	{
		const utility::string_t& agentId;
	};


	/// <summary>
	/// Resets one agent to its defaults.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/wazzup/agent-overrides/{agentId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupAgent_overridesAgentIdDelete(const wazzupAgent_overridesAgentIdDeleteParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IWazzupAgentOverridesApiBase() = default;
};

class IWazzupCapabilitiesApiBase : public csp::services::ApiBase
{
public:
	IWazzupCapabilitiesApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct wazzupCapabilitiesGetParams
	{
	};


	/// <summary>
	/// The transit encodings the prompt-bearing request fields may use.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/capabilities
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupCapabilitiesGet(const wazzupCapabilitiesGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IWazzupCapabilitiesApiBase() = default;
};

class IWazzupLlmApiBase : public csp::services::ApiBase
{
public:
	IWazzupLlmApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct wazzupLlmProvidersGetParams
	{
	};


	/// <summary>
	/// The providers this environment offers.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/llm/providers
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupLlmProvidersGet(const wazzupLlmProvidersGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct wazzupLlmGeneratePostParams
	{
		const std::shared_ptr<LlmGenerateRequest>& RequestBody;
	};


	/// <summary>
	/// Runs one generation for one swarm agent.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/wazzup/llm/generate
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupLlmGeneratePost(const wazzupLlmGeneratePostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IWazzupLlmApiBase() = default;
};

class IWazzupSessionsApiBase : public csp::services::ApiBase
{
public:
	IWazzupSessionsApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct wazzupSessionsGetParams
	{
		const std::optional<utility::string_t>& Search;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// One page of the caller's sessions, newest first.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/sessions
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupSessionsGet(const wazzupSessionsGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct wazzupSessionsPostParams
	{
		const std::shared_ptr<MiningSessionSaveRequest>& RequestBody;
	};


	/// <summary>
	/// Saves a new session.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/wazzup/sessions
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupSessionsPost(const wazzupSessionsPostParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct wazzupSessionsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// One session with its payload.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/sessions/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupSessionsIdGet(const wazzupSessionsIdGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct wazzupSessionsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<MiningSessionSaveRequest>& RequestBody;
	};


	/// <summary>
	/// Overwrites a session.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/wazzup/sessions/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupSessionsIdPut(const wazzupSessionsIdPutParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct wazzupSessionsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Deletes a session.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/wazzup/sessions/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupSessionsIdDelete(const wazzupSessionsIdDeleteParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IWazzupSessionsApiBase() = default;
};

class IWazzupStorageApiBase : public csp::services::ApiBase
{
public:
	IWazzupStorageApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct wazzupStorageCdn_fetchPostParams
	{
		const std::shared_ptr<CdnFetchRequest>& RequestBody;
	};


	/// <summary>
	/// Fetches one CDN asset with the mined tenant's token. POST rather than GET so neither the URI
	/// nor the token lands in an access log.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/wazzup/storage/cdn-fetch
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupStorageCdn_fetchPost(const wazzupStorageCdn_fetchPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct wazzupStorageLegacyTenantObjectsGetParams
	{
		const utility::string_t& tenant;
		const std::optional<utility::string_t>& prefix;
		const std::optional<utility::string_t>& pageToken;
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// One page of a tenant's legacy Nodey objects.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/storage/legacy/{tenant}/objects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupStorageLegacyTenantObjectsGet(const wazzupStorageLegacyTenantObjectsGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct wazzupStorageLegacyTenantObjectGetParams
	{
		const utility::string_t& tenant;
		const std::optional<utility::string_t>& key;
	};


	/// <summary>
	/// Reads one legacy Nodey object.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/storage/legacy/{tenant}/object
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupStorageLegacyTenantObjectGet(const wazzupStorageLegacyTenantObjectGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IWazzupStorageApiBase() = default;
};


} // namespace csp::services::generated::prototypeservice