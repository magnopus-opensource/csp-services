

#include "Api.h"

#include "CSP/CSPFoundation.h"
#include "Web/HttpAuth.h"
#include "Web/HttpPayload.h"


namespace csp::services::generated::prototypeservice
{


AssetDetailApi::AssetDetailApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().PrototypeServiceURI)
{
}

AssetDetailApi::~AssetDetailApi()
{
}



void AssetDetailApi::apiV1PrototypesPrototypeIdAssetDetailsPost(const utility::string_t& prototypeId,
																const std::shared_ptr<AssetDetailDto>& RequestBody,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{prototypeId}/asset-details", {prototypeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}

void AssetDetailApi::apiV1PrototypesPrototypeIdAssetDetailsGet(const utility::string_t& prototypeId,
															   const std::optional<std::vector<utility::string_t>>& Ids,
															   const std::optional<std::vector<utility::string_t>>& SupportedPlatforms,
															   const std::optional<std::vector<utility::string_t>>& AssetTypes,
															   const std::optional<std::vector<utility::string_t>>& Styles,
															   const std::optional<std::vector<utility::string_t>>& Names,
															   const std::optional<utility::string_t>& CreatedAfter,
															   const std::optional<std::vector<utility::string_t>>& PrototypeIds,
															   const std::optional<std::vector<utility::string_t>>& PrototypeNames,
															   const std::optional<std::vector<utility::string_t>>& PrototypeParentNames,
															   const std::optional<std::vector<utility::string_t>>& Tags,
															   const std::optional<bool>& TagsAll,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{prototypeId}/asset-details", {prototypeId});


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (SupportedPlatforms.has_value())
	{
		Uri.AddQueryParams("SupportedPlatforms", SupportedPlatforms.value());
	}


	if (AssetTypes.has_value())
	{
		Uri.AddQueryParams("AssetTypes", AssetTypes.value());
	}


	if (Styles.has_value())
	{
		Uri.AddQueryParams("Styles", Styles.value());
	}


	if (Names.has_value())
	{
		Uri.AddQueryParams("Names", Names.value());
	}


	if (CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", CreatedAfter.value());
	}


	if (PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", PrototypeIds.value());
	}


	if (PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", PrototypeNames.value());
	}


	if (PrototypeParentNames.has_value())
	{
		Uri.AddQueryParams("PrototypeParentNames", PrototypeParentNames.value());
	}


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::apiV1PrototypesPrototypeIdAssetDetailsBulkPut(const utility::string_t& prototypeId,
																   const std::vector<std::shared_ptr<BulkUpsertAssetDetailDto>>& RequestBody,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{prototypeId}/asset-details/bulk", {prototypeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdGet(const utility::string_t& prototypeId,
																			const utility::string_t& assetDetailId,
																			csp::services::ApiResponseHandlerBase* ResponseHandler,
																			csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}", {prototypeId, assetDetailId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void AssetDetailApi::apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdPut(const utility::string_t& prototypeId,
																			const utility::string_t& assetDetailId,
																			const std::shared_ptr<AssetDetailDto>& RequestBody,
																			csp::services::ApiResponseHandlerBase* ResponseHandler,
																			csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}", {prototypeId, assetDetailId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void AssetDetailApi::apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdDelete(const utility::string_t& prototypeId,
																			   const utility::string_t& assetDetailId,
																			   csp::services::ApiResponseHandlerBase* ResponseHandler,
																			   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}", {prototypeId, assetDetailId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::apiV1PrototypesAssetDetailsGet(const std::optional<std::vector<utility::string_t>>& Ids,
													const std::optional<std::vector<utility::string_t>>& SupportedPlatforms,
													const std::optional<std::vector<utility::string_t>>& AssetTypes,
													const std::optional<std::vector<utility::string_t>>& Styles,
													const std::optional<std::vector<utility::string_t>>& Names,
													const std::optional<utility::string_t>& CreatedAfter,
													const std::optional<std::vector<utility::string_t>>& PrototypeIds,
													const std::optional<std::vector<utility::string_t>>& PrototypeNames,
													const std::optional<std::vector<utility::string_t>>& PrototypeParentNames,
													const std::optional<std::vector<utility::string_t>>& Tags,
													const std::optional<bool>& TagsAll,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/asset-details", {});


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (SupportedPlatforms.has_value())
	{
		Uri.AddQueryParams("SupportedPlatforms", SupportedPlatforms.value());
	}


	if (AssetTypes.has_value())
	{
		Uri.AddQueryParams("AssetTypes", AssetTypes.value());
	}


	if (Styles.has_value())
	{
		Uri.AddQueryParams("Styles", Styles.value());
	}


	if (Names.has_value())
	{
		Uri.AddQueryParams("Names", Names.value());
	}


	if (CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", CreatedAfter.value());
	}


	if (PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", PrototypeIds.value());
	}


	if (PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", PrototypeNames.value());
	}


	if (PrototypeParentNames.has_value())
	{
		Uri.AddQueryParams("PrototypeParentNames", PrototypeParentNames.value());
	}


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdBlobPost(const utility::string_t& prototypeId,
																				 const utility::string_t& assetDetailId,
																				 const std::optional<bool>& skipAssetPipeline,
																				 const std::shared_ptr<csp::web::HttpPayload>& FormFile,
																				 csp::services::ApiResponseHandlerBase* ResponseHandler,
																				 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/blob", {prototypeId, assetDetailId});


	if (skipAssetPipeline.has_value())
	{
		Uri.AddQueryParams("skipAssetPipeline", skipAssetPipeline.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddFormParam("FormFile", FormFile);
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdAddressableAddressableIdPut(
	const utility::string_t& prototypeId,
	const utility::string_t& assetDetailId,
	const utility::string_t& addressableId,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}",
					  {prototypeId, assetDetailId, addressableId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void AssetDetailApi::apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdAddressableAddressableIdDelete(
	const utility::string_t& prototypeId,
	const utility::string_t& assetDetailId,
	const utility::string_t& addressableId,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}",
					  {prototypeId, assetDetailId, addressableId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdAddressableThirdPartyReferenceIdPut(
	const utility::string_t& prototypeId,
	const utility::string_t& assetDetailId,
	const utility::string_t& thirdPartyReferenceId,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{thirdPartyReferenceId}",
					  {prototypeId, assetDetailId, thirdPartyReferenceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void AssetDetailApi::apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdAddressableThirdPartyReferenceIdDelete(
	const utility::string_t& prototypeId,
	const utility::string_t& assetDetailId,
	const utility::string_t& thirdPartyReferenceId,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{thirdPartyReferenceId}",
					  {prototypeId, assetDetailId, thirdPartyReferenceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::apiV1PrototypesAssetDetailsAssetPipelineModelGet(const std::optional<std::vector<utility::string_t>>& Ids,
																	  const std::optional<std::vector<utility::string_t>>& SupportedPlatforms,
																	  const std::optional<std::vector<utility::string_t>>& AssetTypes,
																	  const std::optional<std::vector<utility::string_t>>& Styles,
																	  const std::optional<std::vector<utility::string_t>>& Names,
																	  const std::optional<utility::string_t>& CreatedAfter,
																	  const std::optional<std::vector<utility::string_t>>& PrototypeIds,
																	  const std::optional<std::vector<utility::string_t>>& PrototypeNames,
																	  const std::optional<std::vector<utility::string_t>>& PrototypeParentNames,
																	  const std::optional<std::vector<utility::string_t>>& Tags,
																	  const std::optional<bool>& TagsAll,
																	  csp::services::ApiResponseHandlerBase* ResponseHandler,
																	  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/asset-details/asset-pipeline-model", {});


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (SupportedPlatforms.has_value())
	{
		Uri.AddQueryParams("SupportedPlatforms", SupportedPlatforms.value());
	}


	if (AssetTypes.has_value())
	{
		Uri.AddQueryParams("AssetTypes", AssetTypes.value());
	}


	if (Styles.has_value())
	{
		Uri.AddQueryParams("Styles", Styles.value());
	}


	if (Names.has_value())
	{
		Uri.AddQueryParams("Names", Names.value());
	}


	if (CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", CreatedAfter.value());
	}


	if (PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", PrototypeIds.value());
	}


	if (PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", PrototypeNames.value());
	}


	if (PrototypeParentNames.has_value())
	{
		Uri.AddQueryParams("PrototypeParentNames", PrototypeParentNames.value());
	}


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdAssetPipelineModelGet(const utility::string_t& prototypeId,
																							  const utility::string_t& assetDetailId,
																							  csp::services::ApiResponseHandlerBase* ResponseHandler,
																							  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/asset-pipeline-model", {prototypeId, assetDetailId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void AssetDetailApi::apiV1PrototypesPrototypeIdAssetDetailsAssetDetailIdAssetPipelineModelPut(
	const utility::string_t& prototypeId,
	const utility::string_t& assetDetailId,
	const std::shared_ptr<AssetPipelineModelDto>& RequestBody,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/asset-pipeline-model", {prototypeId, assetDetailId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



ConfigurationApi::ConfigurationApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().PrototypeServiceURI)
{
}

ConfigurationApi::~ConfigurationApi()
{
}



void ConfigurationApi::appsettingsGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/appsettings", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::appsettingsReloadPost(csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/appsettings/reload", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::featureflagsGet(csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/featureflags", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



NtpApi::NtpApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().PrototypeServiceURI)
{
}

NtpApi::~NtpApi()
{
}



void NtpApi::datetimeGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/datetime", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PingApi::PingApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().PrototypeServiceURI)
{
}

PingApi::~PingApi()
{
}



void PingApi::pingGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/ping", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PrototypeApi::PrototypeApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().PrototypeServiceURI)
{
}

PrototypeApi::~PrototypeApi()
{
}



void PrototypeApi::apiV1PrototypesPost(const std::shared_ptr<PrototypeDto>& RequestBody,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}

void PrototypeApi::apiV1PrototypesGet(const std::optional<std::vector<utility::string_t>>& Tags,
									  const std::optional<bool>& TagsAll,
									  const std::optional<std::vector<utility::string_t>>& Ids,
									  const std::optional<std::vector<utility::string_t>>& Names,
									  const std::optional<std::vector<utility::string_t>>& PartialNames,
									  const std::optional<std::vector<utility::string_t>>& ExcludedIds,
									  const std::optional<std::vector<utility::string_t>>& PointOfInterestIds,
									  const std::optional<utility::string_t>& ParentId,
									  const std::optional<std::vector<utility::string_t>>& GroupIds,
									  const std::optional<std::vector<utility::string_t>>& Types,
									  const std::optional<bool>& HasGroup,
									  const std::optional<utility::string_t>& CreatedBy,
									  const std::optional<utility::string_t>& CreatedAfter,
									  const std::optional<std::vector<utility::string_t>>& PrototypeOwnerIds,
									  const std::optional<std::vector<utility::string_t>>& ReadAccessFilters,
									  const std::optional<std::vector<utility::string_t>>& WriteAccessFilters,
									  const std::optional<std::vector<utility::string_t>>& OrganizationIds,
									  const std::optional<int32_t>& Skip,
									  const std::optional<int32_t>& Limit,
									  const std::optional<utility::string_t>& SortBy,
									  const std::optional<std::shared_ptr<SortDirection>>& SortDirection,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes", {});


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (Names.has_value())
	{
		Uri.AddQueryParams("Names", Names.value());
	}


	if (PartialNames.has_value())
	{
		Uri.AddQueryParams("PartialNames", PartialNames.value());
	}


	if (ExcludedIds.has_value())
	{
		Uri.AddQueryParams("ExcludedIds", ExcludedIds.value());
	}


	if (PointOfInterestIds.has_value())
	{
		Uri.AddQueryParams("PointOfInterestIds", PointOfInterestIds.value());
	}


	if (ParentId.has_value())
	{
		Uri.AddQueryParams("ParentId", ParentId.value());
	}


	if (GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", GroupIds.value());
	}


	if (Types.has_value())
	{
		Uri.AddQueryParams("Types", Types.value());
	}


	if (HasGroup.has_value())
	{
		Uri.AddQueryParams("HasGroup", HasGroup.value());
	}


	if (CreatedBy.has_value())
	{
		Uri.AddQueryParams("CreatedBy", CreatedBy.value());
	}


	if (CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", CreatedAfter.value());
	}


	if (PrototypeOwnerIds.has_value())
	{
		Uri.AddQueryParams("PrototypeOwnerIds", PrototypeOwnerIds.value());
	}


	if (ReadAccessFilters.has_value())
	{
		Uri.AddQueryParams("ReadAccessFilters", ReadAccessFilters.value());
	}


	if (WriteAccessFilters.has_value())
	{
		Uri.AddQueryParams("WriteAccessFilters", WriteAccessFilters.value());
	}


	if (OrganizationIds.has_value())
	{
		Uri.AddQueryParams("OrganizationIds", OrganizationIds.value());
	}


	if (Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Skip.value());
	}


	if (Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Limit.value());
	}


	if (SortBy.has_value())
	{
		Uri.AddQueryParams("SortBy", SortBy.value());
	}


	if (SortDirection.has_value())
	{
		Uri.AddQueryParams("SortDirection", SortDirection.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void PrototypeApi::apiV1PrototypesDelete(const std::optional<std::vector<utility::string_t>>& ids,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes", {});


	if (ids.has_value())
	{
		Uri.AddQueryParams("ids", ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::apiV1PrototypesGroupOwnedOriginalGroupIdDuplicateNewGroupIdPost(
	const std::optional<std::vector<utility::string_t>>& Tags,
	const std::optional<bool>& TagsAll,
	const std::optional<std::vector<utility::string_t>>& Ids,
	const std::optional<std::vector<utility::string_t>>& Names,
	const std::optional<std::vector<utility::string_t>>& PartialNames,
	const std::optional<std::vector<utility::string_t>>& ExcludedIds,
	const std::optional<std::vector<utility::string_t>>& PointOfInterestIds,
	const std::optional<utility::string_t>& ParentId,
	const std::optional<std::vector<utility::string_t>>& GroupIds,
	const std::optional<std::vector<utility::string_t>>& Types,
	const std::optional<bool>& HasGroup,
	const std::optional<utility::string_t>& CreatedBy,
	const std::optional<utility::string_t>& CreatedAfter,
	const std::optional<std::vector<utility::string_t>>& PrototypeOwnerIds,
	const std::optional<std::vector<utility::string_t>>& ReadAccessFilters,
	const std::optional<std::vector<utility::string_t>>& WriteAccessFilters,
	const std::optional<std::vector<utility::string_t>>& OrganizationIds,
	const utility::string_t& originalGroupId,
	const utility::string_t& newGroupId,
	const std::optional<bool>& shallowCopy,
	const std::optional<bool>& asyncCall,
	const std::optional<utility::string_t>& onBehalfOf,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/group-owned/{originalGroupId}/duplicate/{newGroupId}", {originalGroupId, newGroupId});


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (Names.has_value())
	{
		Uri.AddQueryParams("Names", Names.value());
	}


	if (PartialNames.has_value())
	{
		Uri.AddQueryParams("PartialNames", PartialNames.value());
	}


	if (ExcludedIds.has_value())
	{
		Uri.AddQueryParams("ExcludedIds", ExcludedIds.value());
	}


	if (PointOfInterestIds.has_value())
	{
		Uri.AddQueryParams("PointOfInterestIds", PointOfInterestIds.value());
	}


	if (ParentId.has_value())
	{
		Uri.AddQueryParams("ParentId", ParentId.value());
	}


	if (GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", GroupIds.value());
	}


	if (Types.has_value())
	{
		Uri.AddQueryParams("Types", Types.value());
	}


	if (HasGroup.has_value())
	{
		Uri.AddQueryParams("HasGroup", HasGroup.value());
	}


	if (CreatedBy.has_value())
	{
		Uri.AddQueryParams("CreatedBy", CreatedBy.value());
	}


	if (CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", CreatedAfter.value());
	}


	if (PrototypeOwnerIds.has_value())
	{
		Uri.AddQueryParams("PrototypeOwnerIds", PrototypeOwnerIds.value());
	}


	if (ReadAccessFilters.has_value())
	{
		Uri.AddQueryParams("ReadAccessFilters", ReadAccessFilters.value());
	}


	if (WriteAccessFilters.has_value())
	{
		Uri.AddQueryParams("WriteAccessFilters", WriteAccessFilters.value());
	}


	if (OrganizationIds.has_value())
	{
		Uri.AddQueryParams("OrganizationIds", OrganizationIds.value());
	}


	if (shallowCopy.has_value())
	{
		Uri.AddQueryParams("shallowCopy", shallowCopy.value());
	}


	if (asyncCall.has_value())
	{
		Uri.AddQueryParams("asyncCall", asyncCall.value());
	}


	if (onBehalfOf.has_value())
	{
		Uri.AddQueryParams("onBehalfOf", onBehalfOf.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::apiV1PrototypesBulkPut(const std::vector<std::shared_ptr<BulkUpsertPrototypeDto>>& RequestBody,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/bulk", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::apiV1PrototypesCountGet(const std::optional<std::vector<utility::string_t>>& Tags,
										   const std::optional<bool>& TagsAll,
										   const std::optional<std::vector<utility::string_t>>& Ids,
										   const std::optional<std::vector<utility::string_t>>& Names,
										   const std::optional<std::vector<utility::string_t>>& PartialNames,
										   const std::optional<std::vector<utility::string_t>>& ExcludedIds,
										   const std::optional<std::vector<utility::string_t>>& PointOfInterestIds,
										   const std::optional<utility::string_t>& ParentId,
										   const std::optional<std::vector<utility::string_t>>& GroupIds,
										   const std::optional<std::vector<utility::string_t>>& Types,
										   const std::optional<bool>& HasGroup,
										   const std::optional<utility::string_t>& CreatedBy,
										   const std::optional<utility::string_t>& CreatedAfter,
										   const std::optional<std::vector<utility::string_t>>& PrototypeOwnerIds,
										   const std::optional<std::vector<utility::string_t>>& ReadAccessFilters,
										   const std::optional<std::vector<utility::string_t>>& WriteAccessFilters,
										   const std::optional<std::vector<utility::string_t>>& OrganizationIds,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/count", {});


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (Names.has_value())
	{
		Uri.AddQueryParams("Names", Names.value());
	}


	if (PartialNames.has_value())
	{
		Uri.AddQueryParams("PartialNames", PartialNames.value());
	}


	if (ExcludedIds.has_value())
	{
		Uri.AddQueryParams("ExcludedIds", ExcludedIds.value());
	}


	if (PointOfInterestIds.has_value())
	{
		Uri.AddQueryParams("PointOfInterestIds", PointOfInterestIds.value());
	}


	if (ParentId.has_value())
	{
		Uri.AddQueryParams("ParentId", ParentId.value());
	}


	if (GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", GroupIds.value());
	}


	if (Types.has_value())
	{
		Uri.AddQueryParams("Types", Types.value());
	}


	if (HasGroup.has_value())
	{
		Uri.AddQueryParams("HasGroup", HasGroup.value());
	}


	if (CreatedBy.has_value())
	{
		Uri.AddQueryParams("CreatedBy", CreatedBy.value());
	}


	if (CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", CreatedAfter.value());
	}


	if (PrototypeOwnerIds.has_value())
	{
		Uri.AddQueryParams("PrototypeOwnerIds", PrototypeOwnerIds.value());
	}


	if (ReadAccessFilters.has_value())
	{
		Uri.AddQueryParams("ReadAccessFilters", ReadAccessFilters.value());
	}


	if (WriteAccessFilters.has_value())
	{
		Uri.AddQueryParams("WriteAccessFilters", WriteAccessFilters.value());
	}


	if (OrganizationIds.has_value())
	{
		Uri.AddQueryParams("OrganizationIds", OrganizationIds.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::apiV1PrototypesIdGet(const utility::string_t& id,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{id}", {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void PrototypeApi::apiV1PrototypesIdPut(const utility::string_t& id,
										const std::shared_ptr<PrototypeDto>& RequestBody,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{id}", {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void PrototypeApi::apiV1PrototypesIdDelete(const utility::string_t& id,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{id}", {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::apiV1PrototypesNameNameGet(const utility::string_t& name,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/name/{name}", {name});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::apiV1PrototypesPrototypeIdStatePut(const utility::string_t& prototypeId,
													  const std::map<utility::string_t, utility::string_t>& RequestBody,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{prototypeId}/state", {prototypeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void PrototypeApi::apiV1PrototypesPrototypeIdStateGet(const utility::string_t& prototypeId,
													  const std::optional<std::vector<utility::string_t>>& keys,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/prototypes/{prototypeId}/state", {prototypeId});


	if (keys.has_value())
	{
		Uri.AddQueryParams("keys", keys.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



} // namespace csp::services::generated::prototypeservice