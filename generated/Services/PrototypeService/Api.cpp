

#include "Api.h"

#include "CSP/CSPFoundation.h"
#include "Common/Web/HttpAuth.h"
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


	if (Params.OrganizationIds.has_value())
	{
		Uri.AddQueryParams("OrganizationIds", Params.OrganizationIds.value());
	}


	if (Params.ExcludedTypes.has_value())
	{
		Uri.AddQueryParams("ExcludedTypes", Params.ExcludedTypes.value());
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


	if (Params.OrganizationIds.has_value())
	{
		Uri.AddQueryParams("OrganizationIds", Params.OrganizationIds.value());
	}


	if (Params.ExcludedTypes.has_value())
	{
		Uri.AddQueryParams("ExcludedTypes", Params.ExcludedTypes.value());
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


	if (Params.OrganizationIds.has_value())
	{
		Uri.AddQueryParams("OrganizationIds", Params.OrganizationIds.value());
	}


	if (Params.ExcludedTypes.has_value())
	{
		Uri.AddQueryParams("ExcludedTypes", Params.ExcludedTypes.value());
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



} // namespace csp::services::generated::prototypeservice