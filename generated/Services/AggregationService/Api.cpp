

#include "Api.h"

#include "CSP/CSPFoundation.h"
#include "Common/Web/HttpAuth.h"
#include "Common/Web/HttpPayload.h"

#include <fmt/format.h>
#include <string>


namespace csp::services::generated::aggregationservice
{


AloMovesApi::AloMovesApi(csp::web::WebClient* InWebClient) : IAloMovesApiBase(InWebClient)
{
}

AloMovesApi::~AloMovesApi()
{
}



void AloMovesApi::aloHarmonizePost([[maybe_unused]] const aloHarmonizePostParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/harmonize").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AloMovesApi::aloVersions_matrixPost([[maybe_unused]] const aloVersions_matrixPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/versions-matrix").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AloMovesApi::aloUserIdClassesClassDefinitionIdCompletedPost([[maybe_unused]] const aloUserIdClassesClassDefinitionIdCompletedPostParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/alo/{userId}/classes/{classDefinitionId}/completed")
						  .c_str(),
					  {Params.userId, Params.classDefinitionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AloMovesApi::aloQaUserIdBadge_expressionsPost([[maybe_unused]] const aloQaUserIdBadge_expressionsPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/qa/{userId}/badge-expressions")
			.c_str(),
		{Params.userId});


	if (Params.classDefinitionId.has_value())
	{
		Uri.AddQueryParams("classDefinitionId", Params.classDefinitionId.value());
	}


	if (Params.expression.has_value())
	{
		Uri.AddQueryParams("expression", Params.expression.value());
	}


	if (Params.createFinalClass.has_value())
	{
		Uri.AddQueryParams("createFinalClass", Params.createFinalClass.value());
	}


	if (Params.deletePreviousData.has_value())
	{
		Uri.AddQueryParams("deletePreviousData", Params.deletePreviousData.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AloMovesApi::aloUserIdClassesRecommendationsGet([[maybe_unused]] const aloUserIdClassesRecommendationsGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/{userId}/classes/recommendations")
			.c_str(),
		{Params.userId});


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}


	if (Params.isSeries.has_value())
	{
		Uri.AddQueryParams("isSeries", Params.isSeries.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void AloMovesApi::aloQaSyncClass_dataPut([[maybe_unused]] const aloQaSyncClass_dataPutParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/qa/sync/class-data").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void AloMovesApi::aloClassesMost_visitedGet([[maybe_unused]] const aloClassesMost_visitedGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/classes/most-visited").c_str(),
		{});


	if (Params.maxResults.has_value())
	{
		Uri.AddQueryParams("maxResults", Params.maxResults.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



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



CoalescenceApi::CoalescenceApi(csp::web::WebClient* InWebClient) : ICoalescenceApiBase(InWebClient)
{
}

CoalescenceApi::~CoalescenceApi()
{
}



void CoalescenceApi::coalescenceIdPost([[maybe_unused]] const coalescenceIdPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/coalescence/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
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



ExternalServiceProxyApi::ExternalServiceProxyApi(csp::web::WebClient* InWebClient) : IExternalServiceProxyApiBase(InWebClient)
{
}

ExternalServiceProxyApi::~ExternalServiceProxyApi()
{
}



void ExternalServiceProxyApi::service_proxyPost([[maybe_unused]] const service_proxyPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/service-proxy").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



GroupRolesApi::GroupRolesApi(csp::web::WebClient* InWebClient) : IGroupRolesApiBase(InWebClient)
{
}

GroupRolesApi::~GroupRolesApi()
{
}



void GroupRolesApi::usersUserIdGroupsGroupIdRolesPut([[maybe_unused]] const usersUserIdGroupsGroupIdRolesPutParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/groups/{groupId}/roles")
			.c_str(),
		{Params.userId, Params.groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorApi::InspectorApi(csp::web::WebClient* InWebClient) : IInspectorApiBase(InWebClient)
{
}

InspectorApi::~InspectorApi()
{
}



void InspectorApi::inspectorExecutionsGet([[maybe_unused]] const inspectorExecutionsGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/executions").c_str(),
		{});


	if (Params.tenant.has_value())
	{
		Uri.AddQueryParams("tenant", Params.tenant.value());
	}


	if (Params.status.has_value())
	{
		Uri.AddQueryParams("status", Params.status.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.graphHash.has_value())
	{
		Uri.AddQueryParams("graphHash", Params.graphHash.value());
	}


	if (Params.graphName.has_value())
	{
		Uri.AddQueryParams("graphName", Params.graphName.value());
	}


	if (Params.createdAfter.has_value())
	{
		Uri.AddQueryParams("createdAfter", Params.createdAfter.value());
	}


	if (Params.createdBefore.has_value())
	{
		Uri.AddQueryParams("createdBefore", Params.createdBefore.value());
	}


	if (Params.minDurationMs.has_value())
	{
		Uri.AddQueryParams("minDurationMs", Params.minDurationMs.value());
	}


	if (Params.maxDurationMs.has_value())
	{
		Uri.AddQueryParams("maxDurationMs", Params.maxDurationMs.value());
	}


	if (Params.modifiedSince.has_value())
	{
		Uri.AddQueryParams("modifiedSince", Params.modifiedSince.value());
	}


	if (Params.skip.has_value())
	{
		Uri.AddQueryParams("skip", Params.skip.value());
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



void InspectorApi::inspectorExecutionsExecutionIdGet([[maybe_unused]] const inspectorExecutionsExecutionIdGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/executions/{executionId}")
			.c_str(),
		{Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorExecutionsExecutionIdStateGet([[maybe_unused]] const inspectorExecutionsExecutionIdStateGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/executions/{executionId}/state")
						  .c_str(),
					  {Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorExecutionsExecutionIdGraphGet([[maybe_unused]] const inspectorExecutionsExecutionIdGraphGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/executions/{executionId}/graph")
						  .c_str(),
					  {Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorExecutionsExecutionIdLogsGet([[maybe_unused]] const inspectorExecutionsExecutionIdLogsGetParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/executions/{executionId}/logs")
			.c_str(),
		{Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorStatsGet([[maybe_unused]] const inspectorStatsGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/stats").c_str(),
					  {});


	if (Params.tenant.has_value())
	{
		Uri.AddQueryParams("tenant", Params.tenant.value());
	}


	if (Params.sinceDays.has_value())
	{
		Uri.AddQueryParams("sinceDays", Params.sinceDays.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorExecutionsRunningGet([[maybe_unused]] const inspectorExecutionsRunningGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/executions/running").c_str(),
		{});


	if (Params.tenant.has_value())
	{
		Uri.AddQueryParams("tenant", Params.tenant.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorObserveExecutionIdPost([[maybe_unused]] const inspectorObserveExecutionIdPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/observe/{executionId}")
			.c_str(),
		{Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorQueue_healthGet([[maybe_unused]] const inspectorQueue_healthGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/queue-health").c_str(),
		{});


	if (Params.modifiedSince.has_value())
	{
		Uri.AddQueryParams("modifiedSince", Params.modifiedSince.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorQueue_healthQueueNameDlqRedrivePost([[maybe_unused]] const inspectorQueue_healthQueueNameDlqRedrivePostParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/queue-health/{queueName}/dlq/redrive")
						  .c_str(),
					  {Params.queueName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorQueue_healthQueueNameDlqRedrive_tasksGet(
	[[maybe_unused]] const inspectorQueue_healthQueueNameDlqRedrive_tasksGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/queue-health/{queueName}/dlq/redrive-tasks")
						  .c_str(),
					  {Params.queueName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorQueue_healthQueueNameDlqRedriveTaskHandleCancelPost(
	[[maybe_unused]] const inspectorQueue_healthQueueNameDlqRedriveTaskHandleCancelPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/queue-health/{queueName}/dlq/redrive/{taskHandle}/cancel")
						  .c_str(),
					  {Params.queueName, Params.taskHandle});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorQueue_healthQueueNameDlqPurgePost([[maybe_unused]] const inspectorQueue_healthQueueNameDlqPurgePostParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/queue-health/{queueName}/dlq/purge")
						  .c_str(),
					  {Params.queueName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorChaosQueueNameActivatePost([[maybe_unused]] const inspectorChaosQueueNameActivatePostParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/chaos/{queueName}/activate")
			.c_str(),
		{Params.queueName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorChaosQueueNameDeactivatePost([[maybe_unused]] const inspectorChaosQueueNameDeactivatePostParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/chaos/{queueName}/deactivate")
			.c_str(),
		{Params.queueName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorChaosGet([[maybe_unused]] const inspectorChaosGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/chaos").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageExecutions_per_dayGet([[maybe_unused]] const inspectorUsageExecutions_per_dayGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/executions-per-day")
			.c_str(),
		{});


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageQueues_per_dayGet([[maybe_unused]] const inspectorUsageQueues_per_dayGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/queues-per-day").c_str(),
		{});


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageNode_types_per_dayGet([[maybe_unused]] const inspectorUsageNode_types_per_dayGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/node-types-per-day")
			.c_str(),
		{});


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageKey_usage_per_dayGet([[maybe_unused]] const inspectorUsageKey_usage_per_dayGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/key-usage-per-day")
			.c_str(),
		{});


	if (Params.tenantNames.has_value())
	{
		Uri.AddQueryParams("tenantNames", Params.tenantNames.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageProcessing_timeGet([[maybe_unused]] const inspectorUsageProcessing_timeGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/processing-time")
			.c_str(),
		{});


	if (Params.groupBy.has_value())
	{
		Uri.AddQueryParams("groupBy", Params.groupBy.value());
	}


	if (Params.metric.has_value())
	{
		Uri.AddQueryParams("metric", Params.metric.value());
	}


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageQueue_wait_summaryGet([[maybe_unused]] const inspectorUsageQueue_wait_summaryGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/queue-wait-summary")
			.c_str(),
		{});


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageUser_sparklinesGet([[maybe_unused]] const inspectorUsageUser_sparklinesGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/user-sparklines")
			.c_str(),
		{});


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.days.has_value())
	{
		Uri.AddQueryParams("days", Params.days.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageSustained_activity_per_dayGet([[maybe_unused]] const inspectorUsageSustained_activity_per_dayGetParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/usage/sustained-activity-per-day")
						  .c_str(),
					  {});


	if (Params.tenantNames.has_value())
	{
		Uri.AddQueryParams("tenantNames", Params.tenantNames.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageTenant_activity_sparklinesGet([[maybe_unused]] const inspectorUsageTenant_activity_sparklinesGetParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/usage/tenant-activity-sparklines")
						  .c_str(),
					  {});


	if (Params.tenantNames.has_value())
	{
		Uri.AddQueryParams("tenantNames", Params.tenantNames.value());
	}


	if (Params.days.has_value())
	{
		Uri.AddQueryParams("days", Params.days.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorValidate_gacPost([[maybe_unused]] const inspectorValidate_gacPostParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/validate-gac").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorSave_validated_gacPost([[maybe_unused]] const inspectorSave_validated_gacPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/save-validated-gac").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorGac_validation_metadataGet([[maybe_unused]] const inspectorGac_validation_metadataGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/gac-validation-metadata")
			.c_str(),
		{});


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorValidate_secretPost([[maybe_unused]] const inspectorValidate_secretPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/validate-secret").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorSave_validated_secretPost([[maybe_unused]] const inspectorSave_validated_secretPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/save-validated-secret")
			.c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorSecret_validation_metadataGet([[maybe_unused]] const inspectorSecret_validation_metadataGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/secret-validation-metadata")
			.c_str(),
		{});


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorAuditTrailApi::InspectorAuditTrailApi(csp::web::WebClient* InWebClient) : IInspectorAuditTrailApiBase(InWebClient)
{
}

InspectorAuditTrailApi::~InspectorAuditTrailApi()
{
}



void InspectorAuditTrailApi::inspectorAudit_trailGet([[maybe_unused]] const inspectorAudit_trailGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/audit-trail").c_str(),
		{});


	if (Params.search.has_value())
	{
		Uri.AddQueryParams("search", Params.search.value());
	}


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.eventType.has_value())
	{
		Uri.AddQueryParams("eventType", Params.eventType.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.modifiedSince.has_value())
	{
		Uri.AddQueryParams("modifiedSince", Params.modifiedSince.value());
	}


	if (Params.skip.has_value())
	{
		Uri.AddQueryParams("skip", Params.skip.value());
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



InspectorBugReportApi::InspectorBugReportApi(csp::web::WebClient* InWebClient) : IInspectorBugReportApiBase(InWebClient)
{
}

InspectorBugReportApi::~InspectorBugReportApi()
{
}



void InspectorBugReportApi::inspectorBug_reportsPost([[maybe_unused]] const inspectorBug_reportsPostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/bug-reports").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void InspectorBugReportApi::inspectorBug_reportsGet([[maybe_unused]] const inspectorBug_reportsGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/bug-reports").c_str(),
		{});


	if (Params.status.has_value())
	{
		Uri.AddQueryParams("status", Params.status.value());
	}


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.search.has_value())
	{
		Uri.AddQueryParams("search", Params.search.value());
	}


	if (Params.assignedTo.has_value())
	{
		Uri.AddQueryParams("assignedTo", Params.assignedTo.value());
	}


	if (Params.unassigned.has_value())
	{
		Uri.AddQueryParams("unassigned", Params.unassigned.value());
	}


	if (Params.type.has_value())
	{
		Uri.AddQueryParams("type", Params.type.value());
	}


	if (Params.skip.has_value())
	{
		Uri.AddQueryParams("skip", Params.skip.value());
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



void InspectorBugReportApi::inspectorBug_reportsIdGet([[maybe_unused]] const inspectorBug_reportsIdGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/bug-reports/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorBugReportApi::inspectorBug_reportsIdStatusPatch([[maybe_unused]] const inspectorBug_reportsIdStatusPatchParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/bug-reports/{id}/status")
			.c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PATCH, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorBugReportApi::inspectorBug_reportsIdAssignmentPatch([[maybe_unused]] const inspectorBug_reportsIdAssignmentPatchParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/bug-reports/{id}/assignment")
			.c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PATCH, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorBugReportApi::inspectorBug_reportsIdScreenshotGet([[maybe_unused]] const inspectorBug_reportsIdScreenshotGetParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/bug-reports/{id}/screenshot")
			.c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorNodeDefinitionApi::InspectorNodeDefinitionApi(csp::web::WebClient* InWebClient) : IInspectorNodeDefinitionApiBase(InWebClient)
{
}

InspectorNodeDefinitionApi::~InspectorNodeDefinitionApi()
{
}



void InspectorNodeDefinitionApi::inspectorNode_definitionsGet([[maybe_unused]] const inspectorNode_definitionsGetParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/node-definitions").c_str(),
		{});


	if (Params.status.has_value())
	{
		Uri.AddQueryParams("status", Params.status.value());
	}


	if (Params.category.has_value())
	{
		Uri.AddQueryParams("category", Params.category.value());
	}


	if (Params.search.has_value())
	{
		Uri.AddQueryParams("search", Params.search.value());
	}


	if (Params.runtimeId.has_value())
	{
		Uri.AddQueryParams("runtimeId", Params.runtimeId.value());
	}


	if (Params.provider.has_value())
	{
		Uri.AddQueryParams("provider", Params.provider.value());
	}


	if (Params.tag.has_value())
	{
		Uri.AddQueryParams("tag", Params.tag.value());
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


void InspectorNodeDefinitionApi::inspectorNode_definitionsPost([[maybe_unused]] const inspectorNode_definitionsPostParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/node-definitions").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorNodeDefinitionApi::inspectorNode_definitionsNodeTypeIdGet([[maybe_unused]] const inspectorNode_definitionsNodeTypeIdGetParams& Params,
																		csp::services::ApiResponseHandlerBase* ResponseHandler,
																		csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/node-definitions/{nodeTypeId}")
			.c_str(),
		{Params.nodeTypeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void InspectorNodeDefinitionApi::inspectorNode_definitionsNodeTypeIdPut([[maybe_unused]] const inspectorNode_definitionsNodeTypeIdPutParams& Params,
																		csp::services::ApiResponseHandlerBase* ResponseHandler,
																		csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/node-definitions/{nodeTypeId}")
			.c_str(),
		{Params.nodeTypeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorNodeDefinitionApi::inspectorNode_definitionsNodeTypeIdStatusPatch(
	[[maybe_unused]] const inspectorNode_definitionsNodeTypeIdStatusPatchParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/node-definitions/{nodeTypeId}/status")
						  .c_str(),
					  {Params.nodeTypeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PATCH, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorNodeDefinitionApi::inspectorNode_definitionsNodeTypeIdHistoryGet(
	[[maybe_unused]] const inspectorNode_definitionsNodeTypeIdHistoryGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/node-definitions/{nodeTypeId}/history")
						  .c_str(),
					  {Params.nodeTypeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorNodeDefinitionApi::inspectorNode_definitionsNodeTypeIdHistoryVerGet(
	[[maybe_unused]] const inspectorNode_definitionsNodeTypeIdHistoryVerGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/node-definitions/{nodeTypeId}/history/{ver}")
						  .c_str(),
					  {Params.nodeTypeId, std::to_string(Params.ver).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorNodeDefinitionApi::inspectorNode_definitionsNodeTypeIdRestoreVerPost(
	[[maybe_unused]] const inspectorNode_definitionsNodeTypeIdRestoreVerPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/node-definitions/{nodeTypeId}/restore/{ver}")
						  .c_str(),
					  {Params.nodeTypeId, std::to_string(Params.ver).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorWorkerRuntimeApi::InspectorWorkerRuntimeApi(csp::web::WebClient* InWebClient) : IInspectorWorkerRuntimeApiBase(InWebClient)
{
}

InspectorWorkerRuntimeApi::~InspectorWorkerRuntimeApi()
{
}



void InspectorWorkerRuntimeApi::inspectorWorker_runtimesGet([[maybe_unused]] const inspectorWorker_runtimesGetParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/worker-runtimes").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



MusubiGraphApi::MusubiGraphApi(csp::web::WebClient* InWebClient) : IMusubiGraphApiBase(InWebClient)
{
}

MusubiGraphApi::~MusubiGraphApi()
{
}



void MusubiGraphApi::musubiExecute_graphPost([[maybe_unused]] const musubiExecute_graphPostParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/musubi/execute-graph").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MusubiGraphApi::musubiExecute_graphExecutionIdStatusGet([[maybe_unused]] const musubiExecute_graphExecutionIdStatusGetParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/musubi/execute-graph/{executionId}/status")
						  .c_str(),
					  {Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void MusubiGraphApi::musubiExecute_graphExecutionIdStatusPost([[maybe_unused]] const musubiExecute_graphExecutionIdStatusPostParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/musubi/execute-graph/{executionId}/status")
						  .c_str(),
					  {Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MusubiGraphApi::musubiChaosQueueNameActiveGet([[maybe_unused]] const musubiChaosQueueNameActiveGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/musubi/chaos/{queueName}/active")
			.c_str(),
		{Params.queueName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



NodeDefinitionApi::NodeDefinitionApi(csp::web::WebClient* InWebClient) : INodeDefinitionApiBase(InWebClient)
{
}

NodeDefinitionApi::~NodeDefinitionApi()
{
}



void NodeDefinitionApi::node_definitionsFlatGet([[maybe_unused]] const node_definitionsFlatGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/node-definitions/flat").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void NodeDefinitionApi::node_definitionsNestedGet([[maybe_unused]] const node_definitionsNestedGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/node-definitions/nested").c_str(),
		{});

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



SequenceApi::SequenceApi(csp::web::WebClient* InWebClient) : ISequenceApiBase(InWebClient)
{
}

SequenceApi::~SequenceApi()
{
}



void SequenceApi::sequencesGet([[maybe_unused]] const sequencesGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences").c_str(), {});


	if (Params.Keys.has_value())
	{
		Uri.AddQueryParams("Keys", Params.Keys.value());
	}


	if (Params.KeyLikeRegex.has_value())
	{
		Uri.AddQueryParams("KeyLikeRegex", Params.KeyLikeRegex.value());
	}


	if (Params.ReferenceType.has_value())
	{
		Uri.AddQueryParams("ReferenceType", Params.ReferenceType.value());
	}


	if (Params.ReferenceIds.has_value())
	{
		Uri.AddQueryParams("ReferenceIds", Params.ReferenceIds.value());
	}


	if (Params.Items.has_value())
	{
		Uri.AddQueryParams("Items", Params.Items.value());
	}


	if (Params.Metadata.has_value())
	{
		Uri.AddQueryParams("Metadata", Params.Metadata.value());
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


void SequenceApi::sequencesPut([[maybe_unused]] const sequencesPutParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences").c_str(), {});


	if (Params.newKey.has_value())
	{
		Uri.AddQueryParams("newKey", Params.newKey.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void SequenceApi::sequencesKeysKeyGet([[maybe_unused]] const sequencesKeysKeyGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences/keys/{key}").c_str(),
		{Params.key});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void SequenceApi::sequencesKeysKeyDelete([[maybe_unused]] const sequencesKeysKeyDeleteParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences/keys/{key}").c_str(),
		{Params.key});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void SequenceApi::sequencesKeysOldKeyKeyPut([[maybe_unused]] const sequencesKeysOldKeyKeyPutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences/keys/{oldKey}/key").c_str(),
		{Params.oldKey});


	Uri.AddQueryParams("newKey", Params.newKey);

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void SequenceApi::sequencesKeysDelete([[maybe_unused]] const sequencesKeysDeleteParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences/keys").c_str(),
					  {});


	Uri.AddQueryParams("keys", Params.keys);

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void SequenceApi::sequencesReference_typeReferenceTypeReference_idReferenceIdDelete(
	[[maybe_unused]] const sequencesReference_typeReferenceTypeReference_idReferenceIdDeleteParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/sequences/reference-type/{referenceType}/reference-id/{referenceId}")
						  .c_str(),
					  {Params.referenceType, Params.referenceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



ShopifyApi::ShopifyApi(csp::web::WebClient* InWebClient) : IShopifyApiBase(InWebClient)
{
}

ShopifyApi::~ShopifyApi()
{
}



void ShopifyApi::spacesSpaceIdVendorsShopifyProductsProductIdGet([[maybe_unused]] const spacesSpaceIdVendorsShopifyProductsProductIdGetParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/spaces/{spaceId}/vendors/shopify/products/{productId}")
						  .c_str(),
					  {Params.spaceId, Params.productId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ShopifyApi::spacesSpaceIdVendorsShopifyProductsVariantsGet([[maybe_unused]] const spacesSpaceIdVendorsShopifyProductsVariantsGetParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/spaces/{spaceId}/vendors/shopify/products/variants")
						  .c_str(),
					  {Params.spaceId});


	if (Params.ids.has_value())
	{
		Uri.AddQueryParams("ids", Params.ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ShopifyApi::spacesSpaceIdVendorsShopifyPut([[maybe_unused]] const spacesSpaceIdVendorsShopifyPutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/vendors/shopify")
			.c_str(),
		{Params.spaceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void ShopifyApi::vendorsShopifyValidatePut([[maybe_unused]] const vendorsShopifyValidatePutParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/vendors/shopify/validate").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void ShopifyApi::vendorsShopifyUsersUserIdStorefrontsGet([[maybe_unused]] const vendorsShopifyUsersUserIdStorefrontsGetParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/vendors/shopify/users/{userId}/storefronts")
						  .c_str(),
					  {Params.userId});


	if (Params.active.has_value())
	{
		Uri.AddQueryParams("active", Params.active.value());
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



void ShopifyApi::spacesSpaceIdVendorsShopifyCartsPost([[maybe_unused]] const spacesSpaceIdVendorsShopifyCartsPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/vendors/shopify/carts")
			.c_str(),
		{Params.spaceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ShopifyApi::spacesSpaceIdVendorsShopifyCartsCartIdGet([[maybe_unused]] const spacesSpaceIdVendorsShopifyCartsCartIdGetParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/spaces/{spaceId}/vendors/shopify/carts/{cartId}")
						  .c_str(),
					  {Params.spaceId, Params.cartId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void ShopifyApi::spacesSpaceIdVendorsShopifyCartsCartIdPut([[maybe_unused]] const spacesSpaceIdVendorsShopifyCartsCartIdPutParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/spaces/{spaceId}/vendors/shopify/carts/{cartId}")
						  .c_str(),
					  {Params.spaceId, Params.cartId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void ShopifyApi::spacesSpaceIdVendorsShopifyCartsCartIdCheckout_infoGet(
	[[maybe_unused]] const spacesSpaceIdVendorsShopifyCartsCartIdCheckout_infoGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/spaces/{spaceId}/vendors/shopify/carts/{cartId}/checkout-info")
						  .c_str(),
					  {Params.spaceId, Params.cartId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



SpaceApi::SpaceApi(csp::web::WebClient* InWebClient) : ISpaceApiBase(InWebClient)
{
}

SpaceApi::~SpaceApi()
{
}



void SpaceApi::spacesSpaceIdDelete([[maybe_unused]] const spacesSpaceIdDeleteParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}").c_str(),
					  {Params.spaceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesDelete([[maybe_unused]] const spacesDeleteParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces").c_str(), {});


	if (Params.spaceIds.has_value())
	{
		Uri.AddQueryParams("spaceIds", Params.spaceIds.value());
	}


	if (Params.asyncCall.has_value())
	{
		Uri.AddQueryParams("asyncCall", Params.asyncCall.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesSpaceIdMultiplayer_objectsKmlGet([[maybe_unused]] const spacesSpaceIdMultiplayer_objectsKmlGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/spaces/{spaceId}/multiplayer-objects/kml")
						  .c_str(),
					  {Params.spaceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesSpaceIdDuplicatePost([[maybe_unused]] const spacesSpaceIdDuplicatePostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/duplicate").c_str(),
		{Params.spaceId});


	if (Params.asyncCall.has_value())
	{
		Uri.AddQueryParams("asyncCall", Params.asyncCall.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesSpaceIdExportPost([[maybe_unused]] const spacesSpaceIdExportPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/export").c_str(),
		{Params.spaceId});


	if (Params.asyncCall.has_value())
	{
		Uri.AddQueryParams("asyncCall", Params.asyncCall.value());
	}


	if (Params.includeMusubi.has_value())
	{
		Uri.AddQueryParams("includeMusubi", Params.includeMusubi.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesExportsExportIdImportPost([[maybe_unused]] const spacesExportsExportIdImportPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/exports/{exportId}/import")
			.c_str(),
		{Params.exportId});


	if (Params.asyncCall.has_value())
	{
		Uri.AddQueryParams("asyncCall", Params.asyncCall.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesSpaceIdCheckpointsPost([[maybe_unused]] const spacesSpaceIdCheckpointsPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/checkpoints").c_str(),
		{Params.spaceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



TicketedSpaceApi::TicketedSpaceApi(csp::web::WebClient* InWebClient) : ITicketedSpaceApiBase(InWebClient)
{
}

TicketedSpaceApi::~TicketedSpaceApi()
{
}



void TicketedSpaceApi::spacesSpaceIdEventsPost([[maybe_unused]] const spacesSpaceIdEventsPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/events").c_str(),
		{Params.spaceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void TicketedSpaceApi::spacesSpaceIdEventsEventIdPut([[maybe_unused]] const spacesSpaceIdEventsEventIdPutParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/events/{eventId}")
			.c_str(),
		{Params.spaceId, Params.eventId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void TicketedSpaceApi::spacesEventsGet([[maybe_unused]] const spacesEventsGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/events").c_str(),
					  {});


	if (Params.VendorEventIds.has_value())
	{
		Uri.AddQueryParams("VendorEventIds", Params.VendorEventIds.value());
	}


	if (Params.VendorName.has_value())
	{
		Uri.AddQueryParams("VendorName", Params.VendorName.value());
	}


	if (Params.SpaceIds.has_value())
	{
		Uri.AddQueryParams("SpaceIds", Params.SpaceIds.value());
	}


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}


	if (Params.IsTicketingActive.has_value())
	{
		Uri.AddQueryParams("IsTicketingActive", Params.IsTicketingActive.value());
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



void TicketedSpaceApi::spacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPut(
	[[maybe_unused]] const spacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPutParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/spaces/{spaceId}/vendors/{vendorName}/events/{vendorEventId}/tickets/{vendorTicketId}")
						  .c_str(),
					  {Params.spaceId, Params.vendorName, Params.vendorEventId, Params.vendorTicketId});


	if (Params.onBehalfOfUserId.has_value())
	{
		Uri.AddQueryParams("onBehalfOfUserId", Params.onBehalfOfUserId.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void TicketedSpaceApi::spacesTicketedGet([[maybe_unused]] const spacesTicketedGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/ticketed").c_str(),
					  {});


	if (Params.spaceIds.has_value())
	{
		Uri.AddQueryParams("spaceIds", Params.spaceIds.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void TicketedSpaceApi::vendorsVendorNameOauthGet([[maybe_unused]] const vendorsVendorNameOauthGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/vendors/{vendorName}/oauth").c_str(),
		{Params.vendorName});


	if (Params.code.has_value())
	{
		Uri.AddQueryParams("code", Params.code.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.tenant.has_value())
	{
		Uri.AddQueryParams("tenant", Params.tenant.value());
	}


	if (Params.error_code.has_value())
	{
		Uri.AddQueryParams("error_code", Params.error_code.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void TicketedSpaceApi::vendorsVendorNameUsersUserIdProvider_infoGet([[maybe_unused]] const vendorsVendorNameUsersUserIdProvider_infoGetParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/vendors/{vendorName}/users/{userId}/provider-info")
						  .c_str(),
					  {Params.vendorName, Params.userId});


	if (Params.tenant.has_value())
	{
		Uri.AddQueryParams("tenant", Params.tenant.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



UserSustainedActivityApi::UserSustainedActivityApi(csp::web::WebClient* InWebClient) : IUserSustainedActivityApiBase(InWebClient)
{
}

UserSustainedActivityApi::~UserSustainedActivityApi()
{
}



void UserSustainedActivityApi::usersSustained_activityGet([[maybe_unused]] const usersSustained_activityGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/sustained-activity").c_str(),
		{});


	if (Params.tenants.has_value())
	{
		Uri.AddQueryParams("tenants", Params.tenants.value());
	}


	if (Params.start.has_value())
	{
		Uri.AddQueryParams("start", Params.start.value());
	}


	if (Params.end.has_value())
	{
		Uri.AddQueryParams("end", Params.end.value());
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



VersionsAggregatorApi::VersionsAggregatorApi(csp::web::WebClient* InWebClient) : IVersionsAggregatorApiBase(InWebClient)
{
}

VersionsAggregatorApi::~VersionsAggregatorApi()
{
}



void VersionsAggregatorApi::rsions_aggregatedGet([[maybe_unused]] const rsions_aggregatedGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "rsions-aggregated").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



} // namespace csp::services::generated::aggregationservice