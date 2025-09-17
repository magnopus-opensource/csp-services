

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
		analyticsBulkPostParams() = default;

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
		analyticsStreamPostParams() = default;
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
		analyticsStream_urlPostParams() = default;
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
		prototypesPrototypeIdAsset_detailsPostParams() = default;

		const utility::string_t& prototypeId;
		const std::shared_ptr<AssetDetailDto>& RequestBody;
	};


	/// <summary>
	/// Creates a new AssetBundle linked to a Prototype
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/{prototypeId}/asset-details
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsPost(const prototypesPrototypeIdAsset_detailsPostParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesPrototypeIdAsset_detailsGetParams
	{
		prototypesPrototypeIdAsset_detailsGetParams() = default;

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
	};


	/// <summary>
	/// Locates the assetDetail by its unique identifier prototypeId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/asset-details
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsGet(const prototypesPrototypeIdAsset_detailsGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesPrototypeIdAsset_detailsBulkPutParams
	{
		prototypesPrototypeIdAsset_detailsBulkPutParams() = default;

		const utility::string_t& prototypeId;
		const std::vector<std::shared_ptr<BulkUpsertAssetDetailDto>>& RequestBody;
	};


	/// <summary>
	/// Bulk Upsert for a set of AssetDetails linked to a Prototype
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsBulkPut(const prototypesPrototypeIdAsset_detailsBulkPutParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesPrototypeIdAsset_detailsAssetDetailIdGetParams
	{
		prototypesPrototypeIdAsset_detailsAssetDetailIdGetParams() = default;

		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
	};


	/// <summary>
	/// Locates the assetDetail by its unique identifier prototype
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdGet(const prototypesPrototypeIdAsset_detailsAssetDetailIdGetParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesPrototypeIdAsset_detailsAssetDetailIdPutParams
	{
		prototypesPrototypeIdAsset_detailsAssetDetailIdPutParams() = default;

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
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdPut(const prototypesPrototypeIdAsset_detailsAssetDetailIdPutParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesPrototypeIdAsset_detailsAssetDetailIdDeleteParams
	{
		prototypesPrototypeIdAsset_detailsAssetDetailIdDeleteParams() = default;

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
		prototypesAsset_detailsGetParams() = default;

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
	};


	/// <summary>
	/// Locates the assetDetails by asset detail filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/asset-details
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesAsset_detailsGet(const prototypesAsset_detailsGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPostParams
	{
		prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPostParams() = default;

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
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPost(const prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPostParams& Params,
																		 csp::services::ApiResponseHandlerBase* ResponseHandler,
																		 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesPrototypeIdAsset_detailsAssetDetailIdInternal_copyPostParams
	{
		prototypesPrototypeIdAsset_detailsAssetDetailIdInternal_copyPostParams() = default;

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
		prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdPutParams() = default;

		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
		const utility::string_t& addressableId;
	};


	/// <summary>
	/// Updates an addressable id.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	[[deprecated("'PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}' is deprecated!")]]
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdPut(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdDeleteParams
	{
		prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdDeleteParams() = default;

		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
		const utility::string_t& addressableId;
	};


	/// <summary>
	/// Deletes/Clears the string which associates this asset with an AddressableId.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	[[deprecated("'DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}' is deprecated!")]]
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdDelete(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdDeleteParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdPutParams
	{
		prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdPutParams() = default;

		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
		const utility::string_t& thirdPartyReferenceId;
	};


	/// <summary>
	/// Updates a Third Party Reference Id.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{thirdPartyReferenceId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdPut(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdDeleteParams
	{
		prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdDeleteParams() = default;

		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
		const utility::string_t& thirdPartyReferenceId;
	};


	/// <summary>
	/// Deletes/Clears the string which associates this asset with an ThirdPartyReferenceId.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{thirdPartyReferenceId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdDelete(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdDeleteParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesAsset_detailsAsset_pipeline_modelGetParams
	{
		prototypesAsset_detailsAsset_pipeline_modelGetParams() = default;

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
	};


	/// <summary>
	/// Bulk endpoint to get the parameters for all generated assets of a 3d models.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/asset-details/asset-pipeline-model
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesAsset_detailsAsset_pipeline_modelGet(const prototypesAsset_detailsAsset_pipeline_modelGetParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelGetParams
	{
		prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelGetParams() = default;

		const utility::string_t& prototypeId;
		const utility::string_t& assetDetailId;
	};


	/// <summary>
	/// Gets the parameters for generated assets of a 3d model.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/asset-pipeline-model
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelGet(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelGetParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelPutParams
	{
		prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelPutParams() = default;

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
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelPut(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAssetDetailApiBase() = default;
};

class IConfigurationApiBase : public csp::services::ApiBase
{
public:
	IConfigurationApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct appsettingsGetParams
	{
		appsettingsGetParams() = default;
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
		appsettingsReloadPostParams() = default;
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
		featureflagsGetParams() = default;
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

class INtpApiBase : public csp::services::ApiBase
{
public:
	INtpApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct datetimeGetParams
	{
		datetimeGetParams() = default;
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

class IPingApiBase : public csp::services::ApiBase
{
public:
	IPingApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct pingGetParams
	{
		pingGetParams() = default;
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

class IPrototypeApiBase : public csp::services::ApiBase
{
public:
	IPrototypeApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct prototypesPostParams
	{
		prototypesPostParams() = default;

		const std::shared_ptr<PrototypeDto>& RequestBody;
	};


	/// <summary>
	/// Creates a new prototype
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesPost(const prototypesPostParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesGetParams
	{
		prototypesGetParams() = default;

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
		const std::optional<std::vector<utility::string_t>>& OrganizationIds;
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
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesGet(const prototypesGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesDeleteParams
	{
		prototypesDeleteParams() = default;

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
		prototypesGroup_ownedOriginalGroupIdDuplicateNewGroupIdPostParams() = default;

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
		prototypesGroup_ownedOriginalGroupIdExportsExportIdPostParams() = default;

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
		prototypesGroup_ownedNewGroupIdExportsExportIdImportPostParams() = default;

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
		prototypesBulkPutParams() = default;

		const std::vector<std::shared_ptr<BulkUpsertPrototypeDto>>& RequestBody;
	};


	/// <summary>
	/// Bulk upsert operation for prototypes
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesBulkPut(const prototypesBulkPutParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesIdsGetParams
	{
		prototypesIdsGetParams() = default;

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
		const std::optional<std::vector<utility::string_t>>& OrganizationIds;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Search across the prototypes for those that match the search criteria and returns the id's
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/ids
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesIdsGet(const prototypesIdsGetParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesCountGetParams
	{
		prototypesCountGetParams() = default;

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
		const std::optional<std::vector<utility::string_t>>& OrganizationIds;
	};


	/// <summary>
	/// Search across all of the prototypes for those that match the search criteria
	/// and return the count of those that match.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/count
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesCountGet(const prototypesCountGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesIdGetParams
	{
		prototypesIdGetParams() = default;

		const utility::string_t& id;
	};


	/// <summary>
	/// Locates the prototype by its unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesIdGet(const prototypesIdGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesIdPutParams
	{
		prototypesIdPutParams() = default;

		const utility::string_t& id;
		const std::shared_ptr<PrototypeDto>& RequestBody;
	};


	/// <summary>
	/// Locates the prototype by its unique identifier id
	/// and updates the writable fields of that prototype with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesIdPut(const prototypesIdPutParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesIdDeleteParams
	{
		prototypesIdDeleteParams() = default;

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
		prototypesNameNameGetParams() = default;

		const utility::string_t& name;
	};


	/// <summary>
	/// Locates the prototype by its unique name
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/name/{name}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesNameNameGet(const prototypesNameNameGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct prototypesPrototypeIdStatePutParams
	{
		prototypesPrototypeIdStatePutParams() = default;

		const utility::string_t& prototypeId;
		const std::map<utility::string_t, utility::string_t>& RequestBody;
	};


	/// <summary>
	/// Creates state key value pairs or updates existing - any previously existing state
	/// not referenced in the call are left unchanged.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/state
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesPrototypeIdStatePut(const prototypesPrototypeIdStatePutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct prototypesPrototypeIdStateGetParams
	{
		prototypesPrototypeIdStateGetParams() = default;

		const utility::string_t& prototypeId;
		const std::optional<std::vector<utility::string_t>>& keys;
	};


	/// <summary>
	/// Gets the state of a prototype.  If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/state
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void prototypesPrototypeIdStateGet(const prototypesPrototypeIdStateGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IPrototypeApiBase() = default;
};

class IVersionsApiBase : public csp::services::ApiBase
{
public:
	IVersionsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().PrototypeService)
	{
	}



	struct rsionsGetParams
	{
		rsionsGetParams() = default;
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


} // namespace csp::services::generated::prototypeservice