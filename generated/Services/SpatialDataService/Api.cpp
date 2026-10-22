

#include "Api.h"

#include "CSP/CSPFoundation.h"
#include "Common/Web/HttpAuth.h"
#include "Common/Web/HttpPayload.h"

#include <fmt/format.h>
#include <string>


namespace csp::services::generated::spatialdataservice
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



AnchorsApi::AnchorsApi(csp::web::WebClient* InWebClient) : IAnchorsApiBase(InWebClient)
{
}

AnchorsApi::~AnchorsApi()
{
}



void AnchorsApi::anchorsIdGet([[maybe_unused]] const anchorsIdGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void AnchorsApi::anchorsIdPut([[maybe_unused]] const anchorsIdPutParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void AnchorsApi::anchorsIdDelete([[maybe_unused]] const anchorsIdDeleteParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void AnchorsApi::anchorsPost([[maybe_unused]] const anchorsPostParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void AnchorsApi::anchorsDelete([[maybe_unused]] const anchorsDeleteParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors").c_str(), {});


	if (Params.ids.has_value())
	{
		Uri.AddQueryParams("ids", Params.ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}


void AnchorsApi::anchorsGet([[maybe_unused]] const anchorsGetParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors").c_str(), {});


	if (Params.Keys.has_value())
	{
		Uri.AddQueryParams("Keys", Params.Keys.value());
	}


	if (Params.Values.has_value())
	{
		Uri.AddQueryParams("Values", Params.Values.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.ThirdPartyProviderNames.has_value())
	{
		Uri.AddQueryParams("ThirdPartyProviderNames", Params.ThirdPartyProviderNames.value());
	}


	if (Params.ThirdPartyAnchorIds.has_value())
	{
		Uri.AddQueryParams("ThirdPartyAnchorIds", Params.ThirdPartyAnchorIds.value());
	}


	if (Params.ReferenceIds.has_value())
	{
		Uri.AddQueryParams("ReferenceIds", Params.ReferenceIds.value());
	}


	if (Params.AnchoredObjectIds.has_value())
	{
		Uri.AddQueryParams("AnchoredObjectIds", Params.AnchoredObjectIds.value());
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



void AnchorsApi::anchor_resolutionsPost([[maybe_unused]] const anchor_resolutionsPostParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchor-resolutions").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void AnchorsApi::anchor_resolutionsGet([[maybe_unused]] const anchor_resolutionsGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchor-resolutions").c_str(),
		{});


	if (Params.AnchorIds.has_value())
	{
		Uri.AddQueryParams("AnchorIds", Params.AnchorIds.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.SuccessfullyResolved.has_value())
	{
		Uri.AddQueryParams("SuccessfullyResolved", Params.SuccessfullyResolved.value());
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



void AnchorsApi::anchor_resolutionsStatsGet([[maybe_unused]] const anchor_resolutionsStatsGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchor-resolutions/stats").c_str(),
		{});


	if (Params.AnchorIds.has_value())
	{
		Uri.AddQueryParams("AnchorIds", Params.AnchorIds.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.SuccessfullyResolved.has_value())
	{
		Uri.AddQueryParams("SuccessfullyResolved", Params.SuccessfullyResolved.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
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



PersonalPointOfInterestApi::PersonalPointOfInterestApi(csp::web::WebClient* InWebClient) : IPersonalPointOfInterestApiBase(InWebClient)
{
}

PersonalPointOfInterestApi::~PersonalPointOfInterestApi()
{
}



void PersonalPointOfInterestApi::usersUserIdPoiGet([[maybe_unused]] const usersUserIdPoiGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/poi").c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PersonalPointOfInterestApi::usersUserIdPoiPoiIdPut([[maybe_unused]] const usersUserIdPoiPoiIdPutParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/poi/{poiId}").c_str(),
		{Params.userId, Params.poiId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void PersonalPointOfInterestApi::usersUserIdPoiPoiIdDelete([[maybe_unused]] const usersUserIdPoiPoiIdDeleteParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/poi/{poiId}").c_str(),
		{Params.userId, Params.poiId});

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



PointOfInterestApi::PointOfInterestApi(csp::web::WebClient* InWebClient) : IPointOfInterestApiBase(InWebClient)
{
}

PointOfInterestApi::~PointOfInterestApi()
{
}



void PointOfInterestApi::poiIdGet([[maybe_unused]] const poiIdGetParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void PointOfInterestApi::poiIdPut([[maybe_unused]] const poiIdPutParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void PointOfInterestApi::poiIdDelete([[maybe_unused]] const poiIdDeleteParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::poi_liteGet([[maybe_unused]] const poi_liteGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi-lite").c_str(), {});


	if (Params.ppoiUserId.has_value())
	{
		Uri.AddQueryParams("ppoiUserId", Params.ppoiUserId.value());
	}


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.Type.has_value())
	{
		Uri.AddQueryParams("Type", Params.Type.value());
	}


	if (Params.Types.has_value())
	{
		Uri.AddQueryParams("Types", Params.Types.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.Geofence.has_value())
	{
		Uri.AddQueryParams("Geofence", Params.Geofence.value());
	}


	if (Params.Name.has_value())
	{
		Uri.AddQueryParams("Name", Params.Name.value());
	}


	if (Params.Names.has_value())
	{
		Uri.AddQueryParams("Names", Params.Names.value());
	}


	if (Params.Title.has_value())
	{
		Uri.AddQueryParams("Title", Params.Title.value());
	}


	if (Params.ZoomLevel.has_value())
	{
		Uri.AddQueryParams("ZoomLevel", Params.ZoomLevel.value());
	}


	if (Params.EventStartTime.has_value())
	{
		Uri.AddQueryParams("EventStartTime", Params.EventStartTime.value());
	}


	if (Params.EventEndTime.has_value())
	{
		Uri.AddQueryParams("EventEndTime", Params.EventEndTime.value());
	}


	if (Params.ReferenceLookups.has_value())
	{
		Uri.AddQueryParams("ReferenceLookups", Params.ReferenceLookups.value());
	}


	if (Params.IncludeHidden.has_value())
	{
		Uri.AddQueryParams("IncludeHidden", Params.IncludeHidden.value());
	}


	if (Params.MediaTypes.has_value())
	{
		Uri.AddQueryParams("MediaTypes", Params.MediaTypes.value());
	}


	if (Params.HasSchedule.has_value())
	{
		Uri.AddQueryParams("HasSchedule", Params.HasSchedule.value());
	}


	if (Params.PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", Params.PrototypeNames.value());
	}


	if (Params.PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", Params.PrototypeIds.value());
	}


	if (Params.GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", Params.GroupIds.value());
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



void PointOfInterestApi::poi_idGet([[maybe_unused]] const poi_idGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi-id").c_str(), {});


	if (Params.ppoiUserId.has_value())
	{
		Uri.AddQueryParams("ppoiUserId", Params.ppoiUserId.value());
	}


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.Type.has_value())
	{
		Uri.AddQueryParams("Type", Params.Type.value());
	}


	if (Params.Types.has_value())
	{
		Uri.AddQueryParams("Types", Params.Types.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.Geofence.has_value())
	{
		Uri.AddQueryParams("Geofence", Params.Geofence.value());
	}


	if (Params.Name.has_value())
	{
		Uri.AddQueryParams("Name", Params.Name.value());
	}


	if (Params.Names.has_value())
	{
		Uri.AddQueryParams("Names", Params.Names.value());
	}


	if (Params.Title.has_value())
	{
		Uri.AddQueryParams("Title", Params.Title.value());
	}


	if (Params.ZoomLevel.has_value())
	{
		Uri.AddQueryParams("ZoomLevel", Params.ZoomLevel.value());
	}


	if (Params.EventStartTime.has_value())
	{
		Uri.AddQueryParams("EventStartTime", Params.EventStartTime.value());
	}


	if (Params.EventEndTime.has_value())
	{
		Uri.AddQueryParams("EventEndTime", Params.EventEndTime.value());
	}


	if (Params.ReferenceLookups.has_value())
	{
		Uri.AddQueryParams("ReferenceLookups", Params.ReferenceLookups.value());
	}


	if (Params.IncludeHidden.has_value())
	{
		Uri.AddQueryParams("IncludeHidden", Params.IncludeHidden.value());
	}


	if (Params.MediaTypes.has_value())
	{
		Uri.AddQueryParams("MediaTypes", Params.MediaTypes.value());
	}


	if (Params.HasSchedule.has_value())
	{
		Uri.AddQueryParams("HasSchedule", Params.HasSchedule.value());
	}


	if (Params.PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", Params.PrototypeNames.value());
	}


	if (Params.PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", Params.PrototypeIds.value());
	}


	if (Params.GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", Params.GroupIds.value());
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



void PointOfInterestApi::poiGet([[maybe_unused]] const poiGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi").c_str(), {});


	if (Params.ppoiUserId.has_value())
	{
		Uri.AddQueryParams("ppoiUserId", Params.ppoiUserId.value());
	}


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.Type.has_value())
	{
		Uri.AddQueryParams("Type", Params.Type.value());
	}


	if (Params.Types.has_value())
	{
		Uri.AddQueryParams("Types", Params.Types.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.Geofence.has_value())
	{
		Uri.AddQueryParams("Geofence", Params.Geofence.value());
	}


	if (Params.Name.has_value())
	{
		Uri.AddQueryParams("Name", Params.Name.value());
	}


	if (Params.Names.has_value())
	{
		Uri.AddQueryParams("Names", Params.Names.value());
	}


	if (Params.Title.has_value())
	{
		Uri.AddQueryParams("Title", Params.Title.value());
	}


	if (Params.ZoomLevel.has_value())
	{
		Uri.AddQueryParams("ZoomLevel", Params.ZoomLevel.value());
	}


	if (Params.EventStartTime.has_value())
	{
		Uri.AddQueryParams("EventStartTime", Params.EventStartTime.value());
	}


	if (Params.EventEndTime.has_value())
	{
		Uri.AddQueryParams("EventEndTime", Params.EventEndTime.value());
	}


	if (Params.ReferenceLookups.has_value())
	{
		Uri.AddQueryParams("ReferenceLookups", Params.ReferenceLookups.value());
	}


	if (Params.IncludeHidden.has_value())
	{
		Uri.AddQueryParams("IncludeHidden", Params.IncludeHidden.value());
	}


	if (Params.MediaTypes.has_value())
	{
		Uri.AddQueryParams("MediaTypes", Params.MediaTypes.value());
	}


	if (Params.HasSchedule.has_value())
	{
		Uri.AddQueryParams("HasSchedule", Params.HasSchedule.value());
	}


	if (Params.PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", Params.PrototypeNames.value());
	}


	if (Params.PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", Params.PrototypeIds.value());
	}


	if (Params.GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", Params.GroupIds.value());
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


void PointOfInterestApi::poiPost([[maybe_unused]] const poiPostParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void PointOfInterestApi::poiPut([[maybe_unused]] const poiPutParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void PointOfInterestApi::poiDelete([[maybe_unused]] const poiDeleteParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi").c_str(), {});


	if (Params.ids.has_value())
	{
		Uri.AddQueryParams("ids", Params.ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::poiBulkPut([[maybe_unused]] const poiBulkPutParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/bulk").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::poiIdPartial_updatePut([[maybe_unused]] const poiIdPartial_updatePutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/{id}/partial-update").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::poiTagsGet([[maybe_unused]] const poiTagsGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/tags").c_str(), {});


	if (Params.tagNameWith.has_value())
	{
		Uri.AddQueryParams("tagNameWith", Params.tagNameWith.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PositionApi::PositionApi(csp::web::WebClient* InWebClient) : IPositionApiBase(InWebClient)
{
}

PositionApi::~PositionApi()
{
}



void PositionApi::usersUserIdPositionsGet([[maybe_unused]] const usersUserIdPositionsGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions").c_str(),
		{Params.userId});


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}


	if (Params.DeviceIds.has_value())
	{
		Uri.AddQueryParams("DeviceIds", Params.DeviceIds.value());
	}


	if (Params.PositionIds.has_value())
	{
		Uri.AddQueryParams("PositionIds", Params.PositionIds.value());
	}


	if (Params.StartTimestamp.has_value())
	{
		Uri.AddQueryParams("StartTimestamp", Params.StartTimestamp.value());
	}


	if (Params.EndTimestamp.has_value())
	{
		Uri.AddQueryParams("EndTimestamp", Params.EndTimestamp.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.FindUsersOutsideGeoSphere.has_value())
	{
		Uri.AddQueryParams("FindUsersOutsideGeoSphere", Params.FindUsersOutsideGeoSphere.value());
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


void PositionApi::usersUserIdPositionsPost([[maybe_unused]] const usersUserIdPositionsPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions").c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::usersPositionsLatestGet([[maybe_unused]] const usersPositionsLatestGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/positions/latest").c_str(),
		{});


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}


	if (Params.DeviceIds.has_value())
	{
		Uri.AddQueryParams("DeviceIds", Params.DeviceIds.value());
	}


	if (Params.PositionIds.has_value())
	{
		Uri.AddQueryParams("PositionIds", Params.PositionIds.value());
	}


	if (Params.StartTimestamp.has_value())
	{
		Uri.AddQueryParams("StartTimestamp", Params.StartTimestamp.value());
	}


	if (Params.EndTimestamp.has_value())
	{
		Uri.AddQueryParams("EndTimestamp", Params.EndTimestamp.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.FindUsersOutsideGeoSphere.has_value())
	{
		Uri.AddQueryParams("FindUsersOutsideGeoSphere", Params.FindUsersOutsideGeoSphere.value());
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



void PositionApi::usersUserIdPositionsLatestGet([[maybe_unused]] const usersUserIdPositionsLatestGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/latest")
			.c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::usersUserIdPositionsPositionIdGet([[maybe_unused]] const usersUserIdPositionsPositionIdGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/{positionId}")
			.c_str(),
		{Params.userId, Params.positionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void PositionApi::usersUserIdPositionsPositionIdDelete([[maybe_unused]] const usersUserIdPositionsPositionIdDeleteParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/{positionId}")
			.c_str(),
		{Params.userId, Params.positionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::groupsGroupIdPositionsLatestGet([[maybe_unused]] const groupsGroupIdPositionsLatestGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/positions/latest")
			.c_str(),
		{Params.groupId});


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::groupsPositionsLatestGet([[maybe_unused]] const groupsPositionsLatestGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/positions/latest").c_str(),
		{});


	if (Params.groupIds.has_value())
	{
		Uri.AddQueryParams("groupIds", Params.groupIds.value());
	}


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::usersPositionsGet([[maybe_unused]] const usersPositionsGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/positions").c_str(),
					  {});


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}


	if (Params.DeviceIds.has_value())
	{
		Uri.AddQueryParams("DeviceIds", Params.DeviceIds.value());
	}


	if (Params.PositionIds.has_value())
	{
		Uri.AddQueryParams("PositionIds", Params.PositionIds.value());
	}


	if (Params.StartTimestamp.has_value())
	{
		Uri.AddQueryParams("StartTimestamp", Params.StartTimestamp.value());
	}


	if (Params.EndTimestamp.has_value())
	{
		Uri.AddQueryParams("EndTimestamp", Params.EndTimestamp.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.FindUsersOutsideGeoSphere.has_value())
	{
		Uri.AddQueryParams("FindUsersOutsideGeoSphere", Params.FindUsersOutsideGeoSphere.value());
	}


	if (Params.onlyLatestPosition.has_value())
	{
		Uri.AddQueryParams("onlyLatestPosition", Params.onlyLatestPosition.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PositionSpoofingApi::PositionSpoofingApi(csp::web::WebClient* InWebClient) : IPositionSpoofingApiBase(InWebClient)
{
}

PositionSpoofingApi::~PositionSpoofingApi()
{
}



void PositionSpoofingApi::usersUserIdPositionsSpoofPost([[maybe_unused]] const usersUserIdPositionsSpoofPostParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/spoof").c_str(),
		{Params.userId});


	if (Params.duration.has_value())
	{
		Uri.AddQueryParams("duration", Params.duration.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void PositionSpoofingApi::usersUserIdPositionsSpoofGet([[maybe_unused]] const usersUserIdPositionsSpoofGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/spoof").c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void PositionSpoofingApi::usersUserIdPositionsSpoofDelete([[maybe_unused]] const usersUserIdPositionsSpoofDeleteParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/spoof").c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionSpoofingApi::positionsSpoofUsersGet([[maybe_unused]] const positionsSpoofUsersGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/positions/spoof/users").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

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



SpaceTimeApi::SpaceTimeApi(csp::web::WebClient* InWebClient) : ISpaceTimeApiBase(InWebClient)
{
}

SpaceTimeApi::~SpaceTimeApi()
{
}



void SpaceTimeApi::usersUserIdSpacetimeIdGet([[maybe_unused]] const usersUserIdSpacetimeIdGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/spacetime/{id}").c_str(),
		{Params.userId, Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void SpaceTimeApi::usersUserIdSpacetimeIdDelete([[maybe_unused]] const usersUserIdSpacetimeIdDeleteParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/spacetime/{id}").c_str(),
		{Params.userId, Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}


void SpaceTimeApi::usersUserIdSpacetimeIdPut([[maybe_unused]] const usersUserIdSpacetimeIdPutParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/spacetime/{id}").c_str(),
		{Params.userId, Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceTimeApi::usersUserIdSpacetimePost([[maybe_unused]] const usersUserIdSpacetimePostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/spacetime").c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceTimeApi::spacetimeGet([[maybe_unused]] const spacetimeGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spacetime").c_str(), {});


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}


	if (Params.StartTimestamp.has_value())
	{
		Uri.AddQueryParams("StartTimestamp", Params.StartTimestamp.value());
	}


	if (Params.EndTimestamp.has_value())
	{
		Uri.AddQueryParams("EndTimestamp", Params.EndTimestamp.value());
	}


	if (Params.GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", Params.GroupIds.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.PoiIds.has_value())
	{
		Uri.AddQueryParams("PoiIds", Params.PoiIds.value());
	}


	if (Params.PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", Params.PrototypeIds.value());
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



} // namespace csp::services::generated::spatialdataservice