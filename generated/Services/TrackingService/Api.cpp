

#include "Api.h"

#include "CSP/CSPFoundation.h"
#include "Common/Web/HttpAuth.h"
#include "Common/Web/HttpPayload.h"

#include <fmt/format.h>
#include <string>


namespace csp::services::generated::trackingservice
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



QuotaActivityApi::QuotaActivityApi(csp::web::WebClient* InWebClient) : IQuotaActivityApiBase(InWebClient)
{
}

QuotaActivityApi::~QuotaActivityApi()
{
}



void QuotaActivityApi::usersUserIdQuota_progressGet([[maybe_unused]] const usersUserIdQuota_progressGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/quota-progress").c_str(),
		{Params.userId});


	if (Params.features.has_value())
	{
		Uri.AddQueryParams("features", Params.features.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaActivityApi::groupsGroupIdQuota_progressGet([[maybe_unused]] const groupsGroupIdQuota_progressGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/quota-progress")
			.c_str(),
		{Params.groupId});


	if (Params.features.has_value())
	{
		Uri.AddQueryParams("features", Params.features.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaActivityApi::userUserIdQuota_activityGet([[maybe_unused]] const userUserIdQuota_activityGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/user/{userId}/quota-activity").c_str(),
		{Params.userId});


	if (Params.Features.has_value())
	{
		Uri.AddQueryParams("Features", Params.Features.value());
	}


	if (Params.StartDateTime.has_value())
	{
		Uri.AddQueryParams("StartDateTime", Params.StartDateTime.value());
	}


	if (Params.EndDateTime.has_value())
	{
		Uri.AddQueryParams("EndDateTime", Params.EndDateTime.value());
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



void QuotaActivityApi::groupGroupIdQuota_activityGet([[maybe_unused]] const groupGroupIdQuota_activityGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/group/{groupId}/quota-activity").c_str(),
		{Params.groupId});


	if (Params.Features.has_value())
	{
		Uri.AddQueryParams("Features", Params.Features.value());
	}


	if (Params.StartDateTime.has_value())
	{
		Uri.AddQueryParams("StartDateTime", Params.StartDateTime.value());
	}


	if (Params.EndDateTime.has_value())
	{
		Uri.AddQueryParams("EndDateTime", Params.EndDateTime.value());
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



QuotaManagementApi::QuotaManagementApi(csp::web::WebClient* InWebClient) : IQuotaManagementApiBase(InWebClient)
{
}

QuotaManagementApi::~QuotaManagementApi()
{
}



void QuotaManagementApi::tiersGet([[maybe_unused]] const tiersGetParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tiers").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaManagementApi::tiersTierNameQuotasGet([[maybe_unused]] const tiersTierNameQuotasGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tiers/{tierName}/quotas").c_str(),
		{Params.tierName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaManagementApi::tiersTierNameFeaturesFeatureNameQuotaGet([[maybe_unused]] const tiersTierNameFeaturesFeatureNameQuotaGetParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/tiers/{tierName}/features/{featureName}/quota")
						  .c_str(),
					  {Params.tierName, Params.featureName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void QuotaManagementApi::tiersTierNameFeaturesFeatureNameQuotaPut([[maybe_unused]] const tiersTierNameFeaturesFeatureNameQuotaPutParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/tiers/{tierName}/features/{featureName}/quota")
						  .c_str(),
					  {Params.tierName, Params.featureName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void QuotaManagementApi::tiersTierNameFeaturesFeatureNameQuotaDelete([[maybe_unused]] const tiersTierNameFeaturesFeatureNameQuotaDeleteParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/tiers/{tierName}/features/{featureName}/quota")
						  .c_str(),
					  {Params.tierName, Params.featureName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaManagementApi::quota_featuresGet([[maybe_unused]] const quota_featuresGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/quota-features").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaManagementApi::tiersTierNameFeaturesFeatureNameHistoryGet([[maybe_unused]] const tiersTierNameFeaturesFeatureNameHistoryGetParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/tiers/{tierName}/features/{featureName}/history")
						  .c_str(),
					  {Params.tierName, Params.featureName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaManagementApi::tiersTierNameFeaturesFeatureNameHistoryVerGet(
	[[maybe_unused]] const tiersTierNameFeaturesFeatureNameHistoryVerGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/tiers/{tierName}/features/{featureName}/history/{ver}")
						  .c_str(),
					  {Params.tierName, Params.featureName, std::to_string(Params.ver).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaManagementApi::tiersTierNameFeaturesFeatureNameRestoreVerPost(
	[[maybe_unused]] const tiersTierNameFeaturesFeatureNameRestoreVerPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/tiers/{tierName}/features/{featureName}/restore/{ver}")
						  .c_str(),
					  {Params.tierName, Params.featureName, std::to_string(Params.ver).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



QuotaTierApi::QuotaTierApi(csp::web::WebClient* InWebClient) : IQuotaTierApiBase(InWebClient)
{
}

QuotaTierApi::~QuotaTierApi()
{
}



void QuotaTierApi::tier_definitionsGet([[maybe_unused]] const tier_definitionsGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tier-definitions").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaTierApi::tier_definitionsTierNameGet([[maybe_unused]] const tier_definitionsTierNameGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tier-definitions/{tierName}").c_str(),
		{Params.tierName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void QuotaTierApi::tier_definitionsTierNamePost([[maybe_unused]] const tier_definitionsTierNamePostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tier-definitions/{tierName}").c_str(),
		{Params.tierName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void QuotaTierApi::tier_definitionsTierNamePut([[maybe_unused]] const tier_definitionsTierNamePutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tier-definitions/{tierName}").c_str(),
		{Params.tierName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void QuotaTierApi::tier_definitionsTierNameDelete([[maybe_unused]] const tier_definitionsTierNameDeleteParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tier-definitions/{tierName}").c_str(),
		{Params.tierName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaTierApi::tier_definitionsSeedPost([[maybe_unused]] const tier_definitionsSeedPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tier-definitions/seed").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



QuotaTierAssignmentApi::QuotaTierAssignmentApi(csp::web::WebClient* InWebClient) : IQuotaTierAssignmentApiBase(InWebClient)
{
}

QuotaTierAssignmentApi::~QuotaTierAssignmentApi()
{
}



void QuotaTierAssignmentApi::tier_assignmentsIdGet([[maybe_unused]] const tier_assignmentsIdGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tier-assignments/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaTierAssignmentApi::usersUserIdTier_assignmentGet([[maybe_unused]] const usersUserIdTier_assignmentGetParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/tier-assignment").c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void QuotaTierAssignmentApi::usersUserIdTier_assignmentPut([[maybe_unused]] const usersUserIdTier_assignmentPutParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/tier-assignment").c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void QuotaTierAssignmentApi::usersUserIdTier_assignmentDelete([[maybe_unused]] const usersUserIdTier_assignmentDeleteParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/tier-assignment").c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaTierAssignmentApi::tenantsTenantNameTier_assignmentGet([[maybe_unused]] const tenantsTenantNameTier_assignmentGetParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tenants/{tenantName}/tier-assignment")
			.c_str(),
		{Params.tenantName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void QuotaTierAssignmentApi::tenantsTenantNameTier_assignmentPut([[maybe_unused]] const tenantsTenantNameTier_assignmentPutParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tenants/{tenantName}/tier-assignment")
			.c_str(),
		{Params.tenantName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void QuotaTierAssignmentApi::tenantsTenantNameTier_assignmentDelete([[maybe_unused]] const tenantsTenantNameTier_assignmentDeleteParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tenants/{tenantName}/tier-assignment")
			.c_str(),
		{Params.tenantName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaTierAssignmentApi::usersTier_assignmentsGet([[maybe_unused]] const usersTier_assignmentsGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/tier-assignments").c_str(),
		{});


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaTierAssignmentApi::groupsTier_assignmentsGet([[maybe_unused]] const groupsTier_assignmentsGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/tier-assignments").c_str(),
		{});


	if (Params.groupIds.has_value())
	{
		Uri.AddQueryParams("groupIds", Params.groupIds.value());
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



} // namespace csp::services::generated::trackingservice