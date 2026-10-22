

#include "Api.h"

#include "CSP/CSPFoundation.h"
#include "Common/Web/HttpPayload.h"

#include <fmt/format.h>
#include <string>


namespace csp::services::generated::prototypeservice
{


AnalyticsApi::AnalyticsApi(csp::web::WebClient* InWebClient) : IAnalyticsApiBase(InWebClient)
{
}

AnalyticsApi::~AnalyticsApi()
{
}



void AnalyticsApi::analyticsBulkPost([[maybe_unused]] const analyticsBulkPostParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/analytics/bulk").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AnalyticsApi::analyticsStreamPost([[maybe_unused]] const analyticsStreamPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/analytics/stream").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AnalyticsApi::analyticsStream_urlPost([[maybe_unused]] const analyticsStream_urlPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/analytics/stream-url").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



AssetDetailApi::AssetDetailApi(csp::web::WebClient* InWebClient) : IAssetDetailApiBase(InWebClient)
{
}

AssetDetailApi::~AssetDetailApi()
{
}



void AssetDetailApi::prototypesPrototypeIdAsset_detailsPost([[maybe_unused]] const prototypesPrototypeIdAsset_detailsPostParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes/{prototypeId}/asset-details")
			.c_str(),
		{Params.prototypeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void AssetDetailApi::prototypesPrototypeIdAsset_detailsGet([[maybe_unused]] const prototypesPrototypeIdAsset_detailsGetParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes/{prototypeId}/asset-details")
			.c_str(),
		{Params.prototypeId});


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.SupportedPlatforms.has_value())
	{
		Uri.AddQueryParams("SupportedPlatforms", Params.SupportedPlatforms.value());
	}


	if (Params.AssetTypes.has_value())
	{
		Uri.AddQueryParams("AssetTypes", Params.AssetTypes.value());
	}


	if (Params.Styles.has_value())
	{
		Uri.AddQueryParams("Styles", Params.Styles.value());
	}


	if (Params.Names.has_value())
	{
		Uri.AddQueryParams("Names", Params.Names.value());
	}


	if (Params.CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", Params.CreatedAfter.value());
	}


	if (Params.PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", Params.PrototypeIds.value());
	}


	if (Params.PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", Params.PrototypeNames.value());
	}


	if (Params.PrototypeParentNames.has_value())
	{
		Uri.AddQueryParams("PrototypeParentNames", Params.PrototypeParentNames.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.ExcludedTags.has_value())
	{
		Uri.AddQueryParams("ExcludedTags", Params.ExcludedTags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.Scope.has_value())
	{
		Uri.AddQueryParams("Scope", Params.Scope.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::prototypesPrototypeIdAsset_detailsBulkPut([[maybe_unused]] const prototypesPrototypeIdAsset_detailsBulkPutParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/{prototypeId}/asset-details/bulk")
						  .c_str(),
					  {Params.prototypeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::prototypesPrototypeIdAsset_detailsAssetDetailIdGet(
	[[maybe_unused]] const prototypesPrototypeIdAsset_detailsAssetDetailIdGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/{prototypeId}/asset-details/{assetDetailId}")
						  .c_str(),
					  {Params.prototypeId, Params.assetDetailId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void AssetDetailApi::prototypesPrototypeIdAsset_detailsAssetDetailIdPut(
	[[maybe_unused]] const prototypesPrototypeIdAsset_detailsAssetDetailIdPutParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/{prototypeId}/asset-details/{assetDetailId}")
						  .c_str(),
					  {Params.prototypeId, Params.assetDetailId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void AssetDetailApi::prototypesPrototypeIdAsset_detailsAssetDetailIdDelete(
	[[maybe_unused]] const prototypesPrototypeIdAsset_detailsAssetDetailIdDeleteParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/{prototypeId}/asset-details/{assetDetailId}")
						  .c_str(),
					  {Params.prototypeId, Params.assetDetailId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::prototypesAsset_detailsGet([[maybe_unused]] const prototypesAsset_detailsGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes/asset-details").c_str(),
		{});


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.SupportedPlatforms.has_value())
	{
		Uri.AddQueryParams("SupportedPlatforms", Params.SupportedPlatforms.value());
	}


	if (Params.AssetTypes.has_value())
	{
		Uri.AddQueryParams("AssetTypes", Params.AssetTypes.value());
	}


	if (Params.Styles.has_value())
	{
		Uri.AddQueryParams("Styles", Params.Styles.value());
	}


	if (Params.Names.has_value())
	{
		Uri.AddQueryParams("Names", Params.Names.value());
	}


	if (Params.CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", Params.CreatedAfter.value());
	}


	if (Params.PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", Params.PrototypeIds.value());
	}


	if (Params.PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", Params.PrototypeNames.value());
	}


	if (Params.PrototypeParentNames.has_value())
	{
		Uri.AddQueryParams("PrototypeParentNames", Params.PrototypeParentNames.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.ExcludedTags.has_value())
	{
		Uri.AddQueryParams("ExcludedTags", Params.ExcludedTags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.Scope.has_value())
	{
		Uri.AddQueryParams("Scope", Params.Scope.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::prototypesAsset_detailsTypesDistinctGet([[maybe_unused]] const prototypesAsset_detailsTypesDistinctGetParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes/asset-details/types/distinct")
			.c_str(),
		{});


	if (Params.isGlobal.has_value())
	{
		Uri.AddQueryParams("isGlobal", Params.isGlobal.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPost(
	[[maybe_unused]] const prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/{prototypeId}/asset-details/{assetDetailId}/blob")
						  .c_str(),
					  {Params.prototypeId, Params.assetDetailId});


	if (Params.skipAssetPipeline.has_value())
	{
		Uri.AddQueryParams("skipAssetPipeline", Params.skipAssetPipeline.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddFormParam("FormFile", Params.FormFile);
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::prototypesPrototypeIdAsset_detailsAssetDetailIdInternal_copyPost(
	[[maybe_unused]] const prototypesPrototypeIdAsset_detailsAssetDetailIdInternal_copyPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/{prototypeId}/asset-details/{assetDetailId}/internal-copy")
						  .c_str(),
					  {Params.prototypeId, Params.assetDetailId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdPut(
	[[maybe_unused]] const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdPutParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}")
						  .c_str(),
					  {Params.prototypeId, Params.assetDetailId, Params.addressableId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void AssetDetailApi::prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdDelete(
	[[maybe_unused]] const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdDeleteParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}")
						  .c_str(),
					  {Params.prototypeId, Params.assetDetailId, Params.addressableId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdPut(
	[[maybe_unused]] const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdPutParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{thirdPartyReferenceId}")
						  .c_str(),
					  {Params.prototypeId, Params.assetDetailId, Params.thirdPartyReferenceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void AssetDetailApi::prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdDelete(
	[[maybe_unused]] const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdDeleteParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{thirdPartyReferenceId}")
						  .c_str(),
					  {Params.prototypeId, Params.assetDetailId, Params.thirdPartyReferenceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::prototypesAsset_detailsAsset_pipeline_modelGet(
	[[maybe_unused]] const prototypesAsset_detailsAsset_pipeline_modelGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/asset-details/asset-pipeline-model")
						  .c_str(),
					  {});


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.SupportedPlatforms.has_value())
	{
		Uri.AddQueryParams("SupportedPlatforms", Params.SupportedPlatforms.value());
	}


	if (Params.AssetTypes.has_value())
	{
		Uri.AddQueryParams("AssetTypes", Params.AssetTypes.value());
	}


	if (Params.Styles.has_value())
	{
		Uri.AddQueryParams("Styles", Params.Styles.value());
	}


	if (Params.Names.has_value())
	{
		Uri.AddQueryParams("Names", Params.Names.value());
	}


	if (Params.CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", Params.CreatedAfter.value());
	}


	if (Params.PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", Params.PrototypeIds.value());
	}


	if (Params.PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", Params.PrototypeNames.value());
	}


	if (Params.PrototypeParentNames.has_value())
	{
		Uri.AddQueryParams("PrototypeParentNames", Params.PrototypeParentNames.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.ExcludedTags.has_value())
	{
		Uri.AddQueryParams("ExcludedTags", Params.ExcludedTags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.Scope.has_value())
	{
		Uri.AddQueryParams("Scope", Params.Scope.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssetDetailApi::prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelGet(
	[[maybe_unused]] const prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/{prototypeId}/asset-details/{assetDetailId}/asset-pipeline-model")
						  .c_str(),
					  {Params.prototypeId, Params.assetDetailId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void AssetDetailApi::prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelPut(
	[[maybe_unused]] const prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelPutParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/{prototypeId}/asset-details/{assetDetailId}/asset-pipeline-model")
						  .c_str(),
					  {Params.prototypeId, Params.assetDetailId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



AssignmentsApi::AssignmentsApi(csp::web::WebClient* InWebClient) : IAssignmentsApiBase(InWebClient)
{
}

AssignmentsApi::~AssignmentsApi()
{
}



void AssignmentsApi::productionrosterAssignmentsGet([[maybe_unused]] const productionrosterAssignmentsGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/assignments").c_str(),
		{});


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.personId.has_value())
	{
		Uri.AddQueryParams("personId", Params.personId.value());
	}


	if (Params.projectId.has_value())
	{
		Uri.AddQueryParams("projectId", Params.projectId.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void AssignmentsApi::productionrosterAssignmentsPut([[maybe_unused]] const productionrosterAssignmentsPutParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/assignments").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssignmentsApi::productionrosterAssignmentsIdDelete([[maybe_unused]] const productionrosterAssignmentsIdDeleteParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/assignments/{id}")
			.c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssignmentsApi::productionrosterAssignmentsBulkPost([[maybe_unused]] const productionrosterAssignmentsBulkPostParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/assignments/bulk")
			.c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



CacheApi::CacheApi(csp::web::WebClient* InWebClient) : ICacheApiBase(InWebClient)
{
}

CacheApi::~CacheApi()
{
}



void CacheApi::cache_keysGet([[maybe_unused]] const cache_keysGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/cache-keys").c_str(), {});


	if (Params.pattern.has_value())
	{
		Uri.AddQueryParams("pattern", Params.pattern.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void CacheApi::cache_keysDelete([[maybe_unused]] const cache_keysDeleteParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/cache-keys").c_str(), {});


	if (Params.pattern.has_value())
	{
		Uri.AddQueryParams("pattern", Params.pattern.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



ConfigApi::ConfigApi(csp::web::WebClient* InWebClient) : IConfigApiBase(InWebClient)
{
}

ConfigApi::~ConfigApi()
{
}



void ConfigApi::productionrosterConfigGet([[maybe_unused]] const productionrosterConfigGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/config").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigApi::productionrosterConfigGroupPost([[maybe_unused]] const productionrosterConfigGroupPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/config/group").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigApi::productionrosterConfigGroupGroupIdPut([[maybe_unused]] const productionrosterConfigGroupGroupIdPutParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/config/group/{groupId}")
			.c_str(),
		{Params.groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



ConfigurationApi::ConfigurationApi(csp::web::WebClient* InWebClient) : IConfigurationApiBase(InWebClient)
{
}

ConfigurationApi::~ConfigurationApi()
{
}



void ConfigurationApi::appsettingsGet([[maybe_unused]] const appsettingsGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/appsettings").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::appsettingsReloadPost([[maybe_unused]] const appsettingsReloadPostParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/appsettings/reload").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::featureflagsGet([[maybe_unused]] const featureflagsGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/featureflags").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



DaigramsApi::DaigramsApi(csp::web::WebClient* InWebClient) : IDaigramsApiBase(InWebClient)
{
}

DaigramsApi::~DaigramsApi()
{
}



void DaigramsApi::daigramsPost([[maybe_unused]] const daigramsPostParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/daigrams").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void DaigramsApi::daigramsGet([[maybe_unused]] const daigramsGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/daigrams").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void DaigramsApi::daigramsIdGet([[maybe_unused]] const daigramsIdGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/daigrams/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void DaigramsApi::daigramsIdPut([[maybe_unused]] const daigramsIdPutParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/daigrams/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void DaigramsApi::daigramsIdDelete([[maybe_unused]] const daigramsIdDeleteParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/daigrams/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void DaigramsApi::daigramsIdThumbnailPut([[maybe_unused]] const daigramsIdThumbnailPutParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/daigrams/{id}/thumbnail").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



DepartmentsApi::DepartmentsApi(csp::web::WebClient* InWebClient) : IDepartmentsApiBase(InWebClient)
{
}

DepartmentsApi::~DepartmentsApi()
{
}



void DepartmentsApi::productionrosterDepartmentsGet([[maybe_unused]] const productionrosterDepartmentsGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/departments").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void DepartmentsApi::productionrosterDepartmentsPost([[maybe_unused]] const productionrosterDepartmentsPostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/departments").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void DepartmentsApi::productionrosterDepartmentsIdPut([[maybe_unused]] const productionrosterDepartmentsIdPutParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/departments/{id}")
			.c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void DepartmentsApi::productionrosterDepartmentsIdDelete([[maybe_unused]] const productionrosterDepartmentsIdDeleteParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/departments/{id}")
			.c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



EffortResourcesApi::EffortResourcesApi(csp::web::WebClient* InWebClient) : IEffortResourcesApiBase(InWebClient)
{
}

EffortResourcesApi::~EffortResourcesApi()
{
}



void EffortResourcesApi::watchtowerEffortBulk_upsertPost([[maybe_unused]] const watchtowerEffortBulk_upsertPostParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/effort/bulk-upsert").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void EffortResourcesApi::watchtowerEffortBulk_removePost([[maybe_unused]] const watchtowerEffortBulk_removePostParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/effort/bulk-remove").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void EffortResourcesApi::watchtowerEffortBulk_getPost([[maybe_unused]] const watchtowerEffortBulk_getPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/effort/bulk-get").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void EffortResourcesApi::watchtowerEffortSearchPost([[maybe_unused]] const watchtowerEffortSearchPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/effort/search").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorGlobalAssetDetailApi::InspectorGlobalAssetDetailApi(csp::web::WebClient* InWebClient) : IInspectorGlobalAssetDetailApiBase(InWebClient)
{
}

InspectorGlobalAssetDetailApi::~InspectorGlobalAssetDetailApi()
{
}



void InspectorGlobalAssetDetailApi::inspectorGlobal_prototypesPrototypeIdAsset_detailsGet(
	[[maybe_unused]] const inspectorGlobal_prototypesPrototypeIdAsset_detailsGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/global-prototypes/{prototypeId}/asset-details")
						  .c_str(),
					  {Params.prototypeId});


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.SupportedPlatforms.has_value())
	{
		Uri.AddQueryParams("SupportedPlatforms", Params.SupportedPlatforms.value());
	}


	if (Params.AssetTypes.has_value())
	{
		Uri.AddQueryParams("AssetTypes", Params.AssetTypes.value());
	}


	if (Params.Styles.has_value())
	{
		Uri.AddQueryParams("Styles", Params.Styles.value());
	}


	if (Params.Names.has_value())
	{
		Uri.AddQueryParams("Names", Params.Names.value());
	}


	if (Params.CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", Params.CreatedAfter.value());
	}


	if (Params.PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", Params.PrototypeIds.value());
	}


	if (Params.PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", Params.PrototypeNames.value());
	}


	if (Params.PrototypeParentNames.has_value())
	{
		Uri.AddQueryParams("PrototypeParentNames", Params.PrototypeParentNames.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.ExcludedTags.has_value())
	{
		Uri.AddQueryParams("ExcludedTags", Params.ExcludedTags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.Scope.has_value())
	{
		Uri.AddQueryParams("Scope", Params.Scope.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void InspectorGlobalAssetDetailApi::inspectorGlobal_prototypesPrototypeIdAsset_detailsPost(
	[[maybe_unused]] const inspectorGlobal_prototypesPrototypeIdAsset_detailsPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/global-prototypes/{prototypeId}/asset-details")
						  .c_str(),
					  {Params.prototypeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorGlobalAssetDetailApi::inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdGet(
	[[maybe_unused]] const inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/global-prototypes/{prototypeId}/asset-details/{assetDetailId}")
						  .c_str(),
					  {Params.prototypeId, Params.assetDetailId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void InspectorGlobalAssetDetailApi::inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdPut(
	[[maybe_unused]] const inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdPutParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/global-prototypes/{prototypeId}/asset-details/{assetDetailId}")
						  .c_str(),
					  {Params.prototypeId, Params.assetDetailId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void InspectorGlobalAssetDetailApi::inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdDelete(
	[[maybe_unused]] const inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdDeleteParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/global-prototypes/{prototypeId}/asset-details/{assetDetailId}")
						  .c_str(),
					  {Params.prototypeId, Params.assetDetailId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorGlobalAssetDetailApi::inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPost(
	[[maybe_unused]] const inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/global-prototypes/{prototypeId}/asset-details/{assetDetailId}/blob")
						  .c_str(),
					  {Params.prototypeId, Params.assetDetailId});


	if (Params.skipAssetPipeline.has_value())
	{
		Uri.AddQueryParams("skipAssetPipeline", Params.skipAssetPipeline.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddFormParam("FormFile", Params.FormFile);
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorGlobalPrototypeApi::InspectorGlobalPrototypeApi(csp::web::WebClient* InWebClient) : IInspectorGlobalPrototypeApiBase(InWebClient)
{
}

InspectorGlobalPrototypeApi::~InspectorGlobalPrototypeApi()
{
}



void InspectorGlobalPrototypeApi::inspectorGlobal_prototypesGet([[maybe_unused]] const inspectorGlobal_prototypesGetParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/global-prototypes").c_str(),
		{});


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.ExcludedTags.has_value())
	{
		Uri.AddQueryParams("ExcludedTags", Params.ExcludedTags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.Names.has_value())
	{
		Uri.AddQueryParams("Names", Params.Names.value());
	}


	if (Params.PartialNames.has_value())
	{
		Uri.AddQueryParams("PartialNames", Params.PartialNames.value());
	}


	if (Params.ExcludedIds.has_value())
	{
		Uri.AddQueryParams("ExcludedIds", Params.ExcludedIds.value());
	}


	if (Params.PointOfInterestIds.has_value())
	{
		Uri.AddQueryParams("PointOfInterestIds", Params.PointOfInterestIds.value());
	}


	if (Params.ParentId.has_value())
	{
		Uri.AddQueryParams("ParentId", Params.ParentId.value());
	}


	if (Params.GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", Params.GroupIds.value());
	}


	if (Params.Types.has_value())
	{
		Uri.AddQueryParams("Types", Params.Types.value());
	}


	if (Params.HasGroup.has_value())
	{
		Uri.AddQueryParams("HasGroup", Params.HasGroup.value());
	}


	if (Params.CreatedBy.has_value())
	{
		Uri.AddQueryParams("CreatedBy", Params.CreatedBy.value());
	}


	if (Params.CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", Params.CreatedAfter.value());
	}


	if (Params.PrototypeOwnerIds.has_value())
	{
		Uri.AddQueryParams("PrototypeOwnerIds", Params.PrototypeOwnerIds.value());
	}


	if (Params.ReadAccessFilters.has_value())
	{
		Uri.AddQueryParams("ReadAccessFilters", Params.ReadAccessFilters.value());
	}


	if (Params.WriteAccessFilters.has_value())
	{
		Uri.AddQueryParams("WriteAccessFilters", Params.WriteAccessFilters.value());
	}


	if (Params.ExcludedTypes.has_value())
	{
		Uri.AddQueryParams("ExcludedTypes", Params.ExcludedTypes.value());
	}


	if (Params.Scope.has_value())
	{
		Uri.AddQueryParams("Scope", Params.Scope.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}


	if (Params.SortBy.has_value())
	{
		Uri.AddQueryParams("SortBy", Params.SortBy.value());
	}


	if (Params.SortDirection.has_value())
	{
		Uri.AddQueryParams("SortDirection", Params.SortDirection.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void InspectorGlobalPrototypeApi::inspectorGlobal_prototypesPost([[maybe_unused]] const inspectorGlobal_prototypesPostParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/global-prototypes").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorGlobalPrototypeApi::inspectorGlobal_prototypesIdGet([[maybe_unused]] const inspectorGlobal_prototypesIdGetParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/global-prototypes/{id}")
			.c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void InspectorGlobalPrototypeApi::inspectorGlobal_prototypesIdPut([[maybe_unused]] const inspectorGlobal_prototypesIdPutParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/global-prototypes/{id}")
			.c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void InspectorGlobalPrototypeApi::inspectorGlobal_prototypesIdDelete([[maybe_unused]] const inspectorGlobal_prototypesIdDeleteParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/global-prototypes/{id}")
			.c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



JiraResourcesApi::JiraResourcesApi(csp::web::WebClient* InWebClient) : IJiraResourcesApiBase(InWebClient)
{
}

JiraResourcesApi::~JiraResourcesApi()
{
}



void JiraResourcesApi::watchtowerJiraBulk_upsertPost([[maybe_unused]] const watchtowerJiraBulk_upsertPostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/jira/bulk-upsert").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void JiraResourcesApi::watchtowerJiraBulk_getPost([[maybe_unused]] const watchtowerJiraBulk_getPostParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/jira/bulk-get").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void JiraResourcesApi::watchtowerJiraSearchPost([[maybe_unused]] const watchtowerJiraSearchPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/jira/search").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void JiraResourcesApi::watchtowerJiraCreatemetaProjectGet([[maybe_unused]] const watchtowerJiraCreatemetaProjectGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/jira/createmeta/{project}")
			.c_str(),
		{Params.project});


	if (Params.family.has_value())
	{
		Uri.AddQueryParams("family", Params.family.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void JiraResourcesApi::watchtowerJiraCreatemetaUpsertPost([[maybe_unused]] const watchtowerJiraCreatemetaUpsertPostParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/jira/createmeta/upsert")
			.c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void JiraResourcesApi::watchtowerJiraReferenceProjectKindGet([[maybe_unused]] const watchtowerJiraReferenceProjectKindGetParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/watchtower/jira/reference/{project}/{kind}")
						  .c_str(),
					  {Params.project, Params.kind});


	if (Params.family.has_value())
	{
		Uri.AddQueryParams("family", Params.family.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void JiraResourcesApi::watchtowerJiraReferenceUpsertPost([[maybe_unused]] const watchtowerJiraReferenceUpsertPostParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/jira/reference/upsert")
			.c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



NtpApi::NtpApi(csp::web::WebClient* InWebClient) : INtpApiBase(InWebClient)
{
}

NtpApi::~NtpApi()
{
}



void NtpApi::datetimeGet([[maybe_unused]] const datetimeGetParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/datetime").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PeopleApi::PeopleApi(csp::web::WebClient* InWebClient) : IPeopleApiBase(InWebClient)
{
}

PeopleApi::~PeopleApi()
{
}



void PeopleApi::productionrosterPeopleGet([[maybe_unused]] const productionrosterPeopleGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/people").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void PeopleApi::productionrosterPeoplePost([[maybe_unused]] const productionrosterPeoplePostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/people").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void PeopleApi::productionrosterPeopleIdPut([[maybe_unused]] const productionrosterPeopleIdPutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/people/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void PeopleApi::productionrosterPeopleIdDelete([[maybe_unused]] const productionrosterPeopleIdDeleteParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/people/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



PingApi::PingApi(csp::web::WebClient* InWebClient) : IPingApiBase(InWebClient)
{
}

PingApi::~PingApi()
{
}



void PingApi::pingGet([[maybe_unused]] const pingGetParams& Params,
					  csp::services::ApiResponseHandlerBase* ResponseHandler,
					  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/ping").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



ProjectsApi::ProjectsApi(csp::web::WebClient* InWebClient) : IProjectsApiBase(InWebClient)
{
}

ProjectsApi::~ProjectsApi()
{
}



void ProjectsApi::productionrosterProjectsGet([[maybe_unused]] const productionrosterProjectsGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/projects").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void ProjectsApi::productionrosterProjectsPost([[maybe_unused]] const productionrosterProjectsPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/projects").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProjectsApi::productionrosterProjectsIdPut([[maybe_unused]] const productionrosterProjectsIdPutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/projects/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void ProjectsApi::productionrosterProjectsIdDelete([[maybe_unused]] const productionrosterProjectsIdDeleteParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/projects/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



PrototypeApi::PrototypeApi(csp::web::WebClient* InWebClient) : IPrototypeApiBase(InWebClient)
{
}

PrototypeApi::~PrototypeApi()
{
}



void PrototypeApi::prototypesPost([[maybe_unused]] const prototypesPostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void PrototypeApi::prototypesGet([[maybe_unused]] const prototypesGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes").c_str(), {});


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.ExcludedTags.has_value())
	{
		Uri.AddQueryParams("ExcludedTags", Params.ExcludedTags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.Names.has_value())
	{
		Uri.AddQueryParams("Names", Params.Names.value());
	}


	if (Params.PartialNames.has_value())
	{
		Uri.AddQueryParams("PartialNames", Params.PartialNames.value());
	}


	if (Params.ExcludedIds.has_value())
	{
		Uri.AddQueryParams("ExcludedIds", Params.ExcludedIds.value());
	}


	if (Params.PointOfInterestIds.has_value())
	{
		Uri.AddQueryParams("PointOfInterestIds", Params.PointOfInterestIds.value());
	}


	if (Params.ParentId.has_value())
	{
		Uri.AddQueryParams("ParentId", Params.ParentId.value());
	}


	if (Params.GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", Params.GroupIds.value());
	}


	if (Params.Types.has_value())
	{
		Uri.AddQueryParams("Types", Params.Types.value());
	}


	if (Params.HasGroup.has_value())
	{
		Uri.AddQueryParams("HasGroup", Params.HasGroup.value());
	}


	if (Params.CreatedBy.has_value())
	{
		Uri.AddQueryParams("CreatedBy", Params.CreatedBy.value());
	}


	if (Params.CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", Params.CreatedAfter.value());
	}


	if (Params.PrototypeOwnerIds.has_value())
	{
		Uri.AddQueryParams("PrototypeOwnerIds", Params.PrototypeOwnerIds.value());
	}


	if (Params.ReadAccessFilters.has_value())
	{
		Uri.AddQueryParams("ReadAccessFilters", Params.ReadAccessFilters.value());
	}


	if (Params.WriteAccessFilters.has_value())
	{
		Uri.AddQueryParams("WriteAccessFilters", Params.WriteAccessFilters.value());
	}


	if (Params.ExcludedTypes.has_value())
	{
		Uri.AddQueryParams("ExcludedTypes", Params.ExcludedTypes.value());
	}


	if (Params.Scope.has_value())
	{
		Uri.AddQueryParams("Scope", Params.Scope.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}


	if (Params.SortBy.has_value())
	{
		Uri.AddQueryParams("SortBy", Params.SortBy.value());
	}


	if (Params.SortDirection.has_value())
	{
		Uri.AddQueryParams("SortDirection", Params.SortDirection.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void PrototypeApi::prototypesDelete([[maybe_unused]] const prototypesDeleteParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes").c_str(), {});


	if (Params.ids.has_value())
	{
		Uri.AddQueryParams("ids", Params.ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::prototypesGroup_ownedOriginalGroupIdDuplicateNewGroupIdPost(
	[[maybe_unused]] const prototypesGroup_ownedOriginalGroupIdDuplicateNewGroupIdPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/group-owned/{originalGroupId}/duplicate/{newGroupId}")
						  .c_str(),
					  {Params.originalGroupId, Params.newGroupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::prototypesGroup_ownedOriginalGroupIdExportsExportIdPost(
	[[maybe_unused]] const prototypesGroup_ownedOriginalGroupIdExportsExportIdPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/group-owned/{originalGroupId}/exports/{exportId}")
						  .c_str(),
					  {Params.originalGroupId, Params.exportId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::prototypesGroup_ownedNewGroupIdExportsExportIdImportPost(
	[[maybe_unused]] const prototypesGroup_ownedNewGroupIdExportsExportIdImportPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/prototypes/group-owned/{newGroupId}/exports/{exportId}/import")
						  .c_str(),
					  {Params.exportId, Params.newGroupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::prototypesBulkPut([[maybe_unused]] const prototypesBulkPutParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes/bulk").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::prototypesIdsGet([[maybe_unused]] const prototypesIdsGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes/ids").c_str(),
					  {});


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.ExcludedTags.has_value())
	{
		Uri.AddQueryParams("ExcludedTags", Params.ExcludedTags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.Names.has_value())
	{
		Uri.AddQueryParams("Names", Params.Names.value());
	}


	if (Params.PartialNames.has_value())
	{
		Uri.AddQueryParams("PartialNames", Params.PartialNames.value());
	}


	if (Params.ExcludedIds.has_value())
	{
		Uri.AddQueryParams("ExcludedIds", Params.ExcludedIds.value());
	}


	if (Params.PointOfInterestIds.has_value())
	{
		Uri.AddQueryParams("PointOfInterestIds", Params.PointOfInterestIds.value());
	}


	if (Params.ParentId.has_value())
	{
		Uri.AddQueryParams("ParentId", Params.ParentId.value());
	}


	if (Params.GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", Params.GroupIds.value());
	}


	if (Params.Types.has_value())
	{
		Uri.AddQueryParams("Types", Params.Types.value());
	}


	if (Params.HasGroup.has_value())
	{
		Uri.AddQueryParams("HasGroup", Params.HasGroup.value());
	}


	if (Params.CreatedBy.has_value())
	{
		Uri.AddQueryParams("CreatedBy", Params.CreatedBy.value());
	}


	if (Params.CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", Params.CreatedAfter.value());
	}


	if (Params.PrototypeOwnerIds.has_value())
	{
		Uri.AddQueryParams("PrototypeOwnerIds", Params.PrototypeOwnerIds.value());
	}


	if (Params.ReadAccessFilters.has_value())
	{
		Uri.AddQueryParams("ReadAccessFilters", Params.ReadAccessFilters.value());
	}


	if (Params.WriteAccessFilters.has_value())
	{
		Uri.AddQueryParams("WriteAccessFilters", Params.WriteAccessFilters.value());
	}


	if (Params.ExcludedTypes.has_value())
	{
		Uri.AddQueryParams("ExcludedTypes", Params.ExcludedTypes.value());
	}


	if (Params.Scope.has_value())
	{
		Uri.AddQueryParams("Scope", Params.Scope.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::prototypesCountGet([[maybe_unused]] const prototypesCountGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes/count").c_str(),
					  {});


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.ExcludedTags.has_value())
	{
		Uri.AddQueryParams("ExcludedTags", Params.ExcludedTags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.Names.has_value())
	{
		Uri.AddQueryParams("Names", Params.Names.value());
	}


	if (Params.PartialNames.has_value())
	{
		Uri.AddQueryParams("PartialNames", Params.PartialNames.value());
	}


	if (Params.ExcludedIds.has_value())
	{
		Uri.AddQueryParams("ExcludedIds", Params.ExcludedIds.value());
	}


	if (Params.PointOfInterestIds.has_value())
	{
		Uri.AddQueryParams("PointOfInterestIds", Params.PointOfInterestIds.value());
	}


	if (Params.ParentId.has_value())
	{
		Uri.AddQueryParams("ParentId", Params.ParentId.value());
	}


	if (Params.GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", Params.GroupIds.value());
	}


	if (Params.Types.has_value())
	{
		Uri.AddQueryParams("Types", Params.Types.value());
	}


	if (Params.HasGroup.has_value())
	{
		Uri.AddQueryParams("HasGroup", Params.HasGroup.value());
	}


	if (Params.CreatedBy.has_value())
	{
		Uri.AddQueryParams("CreatedBy", Params.CreatedBy.value());
	}


	if (Params.CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", Params.CreatedAfter.value());
	}


	if (Params.PrototypeOwnerIds.has_value())
	{
		Uri.AddQueryParams("PrototypeOwnerIds", Params.PrototypeOwnerIds.value());
	}


	if (Params.ReadAccessFilters.has_value())
	{
		Uri.AddQueryParams("ReadAccessFilters", Params.ReadAccessFilters.value());
	}


	if (Params.WriteAccessFilters.has_value())
	{
		Uri.AddQueryParams("WriteAccessFilters", Params.WriteAccessFilters.value());
	}


	if (Params.ExcludedTypes.has_value())
	{
		Uri.AddQueryParams("ExcludedTypes", Params.ExcludedTypes.value());
	}


	if (Params.Scope.has_value())
	{
		Uri.AddQueryParams("Scope", Params.Scope.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::prototypesTypesDistinctGet([[maybe_unused]] const prototypesTypesDistinctGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes/types/distinct").c_str(),
		{});


	if (Params.isGlobal.has_value())
	{
		Uri.AddQueryParams("isGlobal", Params.isGlobal.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::prototypesIdGet([[maybe_unused]] const prototypesIdGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void PrototypeApi::prototypesIdPut([[maybe_unused]] const prototypesIdPutParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void PrototypeApi::prototypesIdDelete([[maybe_unused]] const prototypesIdDeleteParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::prototypesNameNameGet([[maybe_unused]] const prototypesNameNameGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes/name/{name}").c_str(),
		{Params.name});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::prototypesDeletePost([[maybe_unused]] const prototypesDeletePostParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes/delete").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void PrototypeApi::prototypesPrototypeIdStatePut([[maybe_unused]] const prototypesPrototypeIdStatePutParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes/{prototypeId}/state").c_str(),
		{Params.prototypeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void PrototypeApi::prototypesPrototypeIdStateGet([[maybe_unused]] const prototypesPrototypeIdStateGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/prototypes/{prototypeId}/state").c_str(),
		{Params.prototypeId});


	if (Params.keys.has_value())
	{
		Uri.AddQueryParams("keys", Params.keys.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



SnapshotApi::SnapshotApi(csp::web::WebClient* InWebClient) : ISnapshotApiBase(InWebClient)
{
}

SnapshotApi::~SnapshotApi()
{
}



void SnapshotApi::productionrosterSnapshotGet([[maybe_unused]] const productionrosterSnapshotGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/snapshot").c_str(),
		{});


	if (Params.types.has_value())
	{
		Uri.AddQueryParams("types", Params.types.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



SystemClaimApi::SystemClaimApi(csp::web::WebClient* InWebClient) : ISystemClaimApiBase(InWebClient)
{
}

SystemClaimApi::~SystemClaimApi()
{
}



void SystemClaimApi::batonSystemsSystemIdClaimPost([[maybe_unused]] const batonSystemsSystemIdClaimPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{systemId}/claim").c_str(),
		{Params.systemId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void SystemClaimApi::batonSystemsSystemIdClaimDelete([[maybe_unused]] const batonSystemsSystemIdClaimDeleteParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{systemId}/claim").c_str(),
		{Params.systemId});


	if (Params.force.has_value())
	{
		Uri.AddQueryParams("force", Params.force.value());
	}


	if (Params.note.has_value())
	{
		Uri.AddQueryParams("note", Params.note.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



SystemHistoryApi::SystemHistoryApi(csp::web::WebClient* InWebClient) : ISystemHistoryApiBase(InWebClient)
{
}

SystemHistoryApi::~SystemHistoryApi()
{
}



void SystemHistoryApi::batonSystemsSystemIdHistoryGet([[maybe_unused]] const batonSystemsSystemIdHistoryGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{systemId}/history")
			.c_str(),
		{Params.systemId});


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



SystemQueueApi::SystemQueueApi(csp::web::WebClient* InWebClient) : ISystemQueueApiBase(InWebClient)
{
}

SystemQueueApi::~SystemQueueApi()
{
}



void SystemQueueApi::batonSystemsSystemIdQueueGet([[maybe_unused]] const batonSystemsSystemIdQueueGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{systemId}/queue").c_str(),
		{Params.systemId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void SystemQueueApi::batonSystemsSystemIdQueuePost([[maybe_unused]] const batonSystemsSystemIdQueuePostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{systemId}/queue").c_str(),
		{Params.systemId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void SystemQueueApi::batonSystemsSystemIdQueueDelete([[maybe_unused]] const batonSystemsSystemIdQueueDeleteParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{systemId}/queue").c_str(),
		{Params.systemId});


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.force.has_value())
	{
		Uri.AddQueryParams("force", Params.force.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



SystemsApi::SystemsApi(csp::web::WebClient* InWebClient) : ISystemsApiBase(InWebClient)
{
}

SystemsApi::~SystemsApi()
{
}



void SystemsApi::batonSystemsGet([[maybe_unused]] const batonSystemsGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems").c_str(),
					  {});


	if (Params.Search.has_value())
	{
		Uri.AddQueryParams("Search", Params.Search.value());
	}


	if (Params.Archived.has_value())
	{
		Uri.AddQueryParams("Archived", Params.Archived.value());
	}


	if (Params.SortBy.has_value())
	{
		Uri.AddQueryParams("SortBy", Params.SortBy.value());
	}


	if (Params.SortDirection.has_value())
	{
		Uri.AddQueryParams("SortDirection", Params.SortDirection.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void SystemsApi::batonSystemsPost([[maybe_unused]] const batonSystemsPostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SystemsApi::batonSystemsIdGet([[maybe_unused]] const batonSystemsIdGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void SystemsApi::batonSystemsIdPut([[maybe_unused]] const batonSystemsIdPutParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void SystemsApi::batonSystemsIdDelete([[maybe_unused]] const batonSystemsIdDeleteParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{id}").c_str(),
		{Params.id});


	if (Params.confirm.has_value())
	{
		Uri.AddQueryParams("confirm", Params.confirm.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



SystemThumbnailApi::SystemThumbnailApi(csp::web::WebClient* InWebClient) : ISystemThumbnailApiBase(InWebClient)
{
}

SystemThumbnailApi::~SystemThumbnailApi()
{
}



void SystemThumbnailApi::batonSystemsIdThumbnailPut([[maybe_unused]] const batonSystemsIdThumbnailPutParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{id}/thumbnail").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



VersionsApi::VersionsApi(csp::web::WebClient* InWebClient) : IVersionsApiBase(InWebClient)
{
}

VersionsApi::~VersionsApi()
{
}



void VersionsApi::rsionsGet([[maybe_unused]] const rsionsGetParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "rsions").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



WazzupAgentOverridesApi::WazzupAgentOverridesApi(csp::web::WebClient* InWebClient) : IWazzupAgentOverridesApiBase(InWebClient)
{
}

WazzupAgentOverridesApi::~WazzupAgentOverridesApi()
{
}



void WazzupAgentOverridesApi::wazzupAgent_overridesGet([[maybe_unused]] const wazzupAgent_overridesGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/agent-overrides").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void WazzupAgentOverridesApi::wazzupAgent_overridesDelete([[maybe_unused]] const wazzupAgent_overridesDeleteParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/agent-overrides").c_str(),
		{});


	if (Params.confirm.has_value())
	{
		Uri.AddQueryParams("confirm", Params.confirm.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void WazzupAgentOverridesApi::wazzupAgent_overridesAgentIdPut([[maybe_unused]] const wazzupAgent_overridesAgentIdPutParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/agent-overrides/{agentId}")
			.c_str(),
		{Params.agentId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void WazzupAgentOverridesApi::wazzupAgent_overridesAgentIdDelete([[maybe_unused]] const wazzupAgent_overridesAgentIdDeleteParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/agent-overrides/{agentId}")
			.c_str(),
		{Params.agentId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



WazzupCapabilitiesApi::WazzupCapabilitiesApi(csp::web::WebClient* InWebClient) : IWazzupCapabilitiesApiBase(InWebClient)
{
}

WazzupCapabilitiesApi::~WazzupCapabilitiesApi()
{
}



void WazzupCapabilitiesApi::wazzupCapabilitiesGet([[maybe_unused]] const wazzupCapabilitiesGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/capabilities").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



WazzupLlmApi::WazzupLlmApi(csp::web::WebClient* InWebClient) : IWazzupLlmApiBase(InWebClient)
{
}

WazzupLlmApi::~WazzupLlmApi()
{
}



void WazzupLlmApi::wazzupLlmProvidersGet([[maybe_unused]] const wazzupLlmProvidersGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/llm/providers").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void WazzupLlmApi::wazzupLlmGeneratePost([[maybe_unused]] const wazzupLlmGeneratePostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/llm/generate").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



WazzupSessionsApi::WazzupSessionsApi(csp::web::WebClient* InWebClient) : IWazzupSessionsApiBase(InWebClient)
{
}

WazzupSessionsApi::~WazzupSessionsApi()
{
}



void WazzupSessionsApi::wazzupSessionsGet([[maybe_unused]] const wazzupSessionsGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/sessions").c_str(),
					  {});


	if (Params.Search.has_value())
	{
		Uri.AddQueryParams("Search", Params.Search.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void WazzupSessionsApi::wazzupSessionsPost([[maybe_unused]] const wazzupSessionsPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/sessions").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void WazzupSessionsApi::wazzupSessionsIdGet([[maybe_unused]] const wazzupSessionsIdGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/sessions/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void WazzupSessionsApi::wazzupSessionsIdPut([[maybe_unused]] const wazzupSessionsIdPutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/sessions/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void WazzupSessionsApi::wazzupSessionsIdDelete([[maybe_unused]] const wazzupSessionsIdDeleteParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/sessions/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



WazzupStorageApi::WazzupStorageApi(csp::web::WebClient* InWebClient) : IWazzupStorageApiBase(InWebClient)
{
}

WazzupStorageApi::~WazzupStorageApi()
{
}



void WazzupStorageApi::wazzupStorageCdn_fetchPost([[maybe_unused]] const wazzupStorageCdn_fetchPostParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/storage/cdn-fetch").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void WazzupStorageApi::wazzupStorageLegacyTenantObjectsGet([[maybe_unused]] const wazzupStorageLegacyTenantObjectsGetParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/storage/legacy/{tenant}/objects")
			.c_str(),
		{Params.tenant});


	if (Params.prefix.has_value())
	{
		Uri.AddQueryParams("prefix", Params.prefix.value());
	}


	if (Params.pageToken.has_value())
	{
		Uri.AddQueryParams("pageToken", Params.pageToken.value());
	}


	if (Params.limit.has_value())
	{
		Uri.AddQueryParams("limit", Params.limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void WazzupStorageApi::wazzupStorageLegacyTenantObjectGet([[maybe_unused]] const wazzupStorageLegacyTenantObjectGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/storage/legacy/{tenant}/object")
			.c_str(),
		{Params.tenant});


	if (Params.key.has_value())
	{
		Uri.AddQueryParams("key", Params.key.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



} // namespace csp::services::generated::prototypeservice