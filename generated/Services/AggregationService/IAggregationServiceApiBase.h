

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "Services/ApiBase/ApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::aggregationservice
{


class IAloMovesApiBase : public csp::services::ApiBase
{
public:
	IAloMovesApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct aloHarmonizePostParams
	{
		const std::shared_ptr<HarmonizeAloRequest>& RequestBody;
	};


	/// <summary>
	/// Harmonize with Meta
	/// </summary>
	/// <remarks>
	/// POST /api/v1/alo/harmonize
	/// Authorization: Anonymous
	/// </remarks>
	virtual void aloHarmonizePost(const aloHarmonizePostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct aloVersions_matrixPostParams
	{
	};


	/// <summary>
	/// Get min compatible versions
	/// </summary>
	/// <remarks>
	/// POST /api/v1/alo/versions-matrix
	/// Authorization: Anonymous
	/// </remarks>
	virtual void aloVersions_matrixPost(const aloVersions_matrixPostParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct aloUserIdClassesClassDefinitionIdCompletedPostParams
	{
		const utility::string_t& userId;
		const utility::string_t& classDefinitionId;
		const std::shared_ptr<AloClassCompletedRequest>& RequestBody;
	};


	/// <summary>
	/// Class Completed
	/// </summary>
	/// <remarks>
	/// POST /api/v1/alo/{userId}/classes/{classDefinitionId}/completed
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void aloUserIdClassesClassDefinitionIdCompletedPost(const aloUserIdClassesClassDefinitionIdCompletedPostParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct aloQaUserIdBadge_expressionsPostParams
	{
		const utility::string_t& userId;
		const std::optional<utility::string_t>& classDefinitionId;
		const std::optional<utility::string_t>& expression;
		const std::optional<bool>& createFinalClass;
		const std::optional<bool>& deletePreviousData;
	};


	/// <summary>
	/// QA test function to setup the scenario to test a specific badge.  Note Bene!!!: this contract
	/// you are accepting when calling this function is that it will delete all your class and badge data.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/alo/qa/{userId}/badge-expressions
	/// ```markdown
	/// ### Badge Creation DSL Documentation
	///
	/// This guide explains how to use the Badge Creation DSL to simulate class completions and test badge awarding in our application.You’ll use
	/// these expressions in Swagger to automate the creation of class records.
	///
	/// #### DSL Format
	///
	/// The DSL expression follows this format:
	///
	/// ```
	/// [total_classes] [frequency] [interval] [consecutive | flexible][across_year]
	/// ```
	///
	/// - **total_classes**: The number of classes to be completed.
	/// - **frequency**: The time unit for class completions :
	///   - `D` for daily
	///   - `W` for weekly
	///   - `M` for monthly
	///   - `Y` for yearly
	/// - **interval**: The number of days, weeks, months, or years over which the classes are spread.
	/// - **consecutive | flexible** (optional):
	///   - `consecutive`: Classes must occur on consecutive days/weeks/months.
	///   - `flexible`: Classes can be spread out within the interval(default if not specified).
	/// - **across_year** (optional): Use this if the interval crosses from one year into the next.
	///
	/// #### Examples
	///
	/// 1. **7 consecutive days in a row**:
	///    ```
	///    7 D 1 consecutive
	///    ```
	///    - Simulates 7 classes completed on consecutive days.
	///
	/// 2. **5 classes within one week**:
	///    ```
	///    5 W 1 flexible
	///    ```
	///    - Simulates 5 classes spread out within a single week.
	///
	/// 3. **1 class per month for 3 consecutive months**:
	///    ```
	///    1 M 3 consecutive
	///    ```
	///    - Simulates 1 class each month for 3 consecutive months.
	///
	/// 4. **15 classes in one month**:
	///    ```
	///    15 M 1 flexible
	///    ```
	///    - Simulates 15 classes within a single month.
	///
	/// 5. **5 classes across a week that crosses into the next year**:
	///    ```
	///    5 W 1 flexible across_year
	///    ```
	///    - Simulates 5 classes within a week that spans the end of one year and the beginning of the next.
	///
	/// #### How to Use in Swagger
	///
	/// 1. Enter the expression into the designated field in Swagger.
	/// 2. The system will automatically create the necessary class completions according to the rules defined in your DSL expression.
	/// 3. Verify that the appropriate badge is awarded as expected.
	///
	/// #### Tips
	///
	/// - Use `consecutive` when you need classes to be back-to-back.
	/// - Use `flexible` for more relaxed scheduling within the specified interval.
	/// - Use `across_year` if your scenario involves a time period that spans two years.
	///
	/// This DSL simplifies your testing by automating class creation. If you encounter any issues or need help, refer back to this guide or contact
	/// the development team.
	/// ```
	/// </remarks>
	virtual void aloQaUserIdBadge_expressionsPost(const aloQaUserIdBadge_expressionsPostParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct aloUserIdClassesRecommendationsGetParams
	{
		const utility::string_t& userId;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
		const std::optional<bool>& isSeries;
	};


	/// <summary>
	/// Gets recommended classes for the user
	/// </summary>
	/// <remarks>
	/// GET /api/v1/alo/{userId}/classes/recommendations
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void aloUserIdClassesRecommendationsGet(const aloUserIdClassesRecommendationsGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct aloQaSyncClass_dataPutParams
	{
	};


	/// <summary>
	/// QA method for asynchronously syncing class data manually
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/alo/qa/sync/class-data
	/// Authorization: admin
	/// </remarks>
	virtual void aloQaSyncClass_dataPut(const aloQaSyncClass_dataPutParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct aloClassesMost_visitedGetParams
	{
		const std::optional<int32_t>& maxResults;
	};


	/// <summary>
	/// Gets the X most visited class definitions
	/// </summary>
	/// <remarks>
	/// GET /api/v1/alo/classes/most-visited
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void aloClassesMost_visitedGet(const aloClassesMost_visitedGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAloMovesApiBase() = default;
};

class IAnalyticsApiBase : public csp::services::ApiBase
{
public:
	IAnalyticsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
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

class ICacheApiBase : public csp::services::ApiBase
{
public:
	ICacheApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
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

class ICoalescenceApiBase : public csp::services::ApiBase
{
public:
	ICoalescenceApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct coalescenceIdPostParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Returns a coalescence object by its id.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/coalescence/{id}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void coalescenceIdPost(const coalescenceIdPostParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ICoalescenceApiBase() = default;
};

class IConfigurationApiBase : public csp::services::ApiBase
{
public:
	IConfigurationApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
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

class IExternalServiceProxyApiBase : public csp::services::ApiBase
{
public:
	IExternalServiceProxyApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct service_proxyPostParams
	{
		const std::shared_ptr<ServiceRequest>& RequestBody;
	};


	/// <summary>
	/// Used to make a call to an external API
	/// </summary>
	/// <remarks>
	/// POST /service-proxy
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void service_proxyPost(const service_proxyPostParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IExternalServiceProxyApiBase() = default;
};

class IGroupRolesApiBase : public csp::services::ApiBase
{
public:
	IGroupRolesApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct usersUserIdGroupsGroupIdRolesPutParams
	{
		const utility::string_t& userId;
		const utility::string_t& groupId;
		const std::shared_ptr<GroupRoleDto>& RequestBody;
	};


	/// <summary>
	/// Set a user's group role in a group they're already a member of.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/groups/{groupId}/roles
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdGroupsGroupIdRolesPut(const usersUserIdGroupsGroupIdRolesPutParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IGroupRolesApiBase() = default;
};

class IInspectorApiBase : public csp::services::ApiBase
{
public:
	IInspectorApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct inspectorExecutionsGetParams
	{
		const std::optional<utility::string_t>& tenant;
		const std::optional<utility::string_t>& status;
		const std::optional<utility::string_t>& userId;
		const std::optional<utility::string_t>& graphHash;
		const std::optional<utility::string_t>& graphName;
		const std::optional<utility::string_t>& createdAfter;
		const std::optional<utility::string_t>& createdBefore;
		const std::optional<int64_t>& minDurationMs;
		const std::optional<int64_t>& maxDurationMs;
		const std::optional<int64_t>& modifiedSince;
		const std::optional<int32_t>& skip;
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// List graph executions with optional filters and pagination.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/executions
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorExecutionsGet(const inspectorExecutionsGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorExecutionsExecutionIdGetParams
	{
		const utility::string_t& executionId;
	};


	/// <summary>
	/// Get details of a specific execution by execution ID.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/executions/{executionId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorExecutionsExecutionIdGet(const inspectorExecutionsExecutionIdGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorExecutionsExecutionIdStateGetParams
	{
		const utility::string_t& executionId;
	};


	/// <summary>
	/// Get real-time state from S3 for an execution.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/executions/{executionId}/state
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorExecutionsExecutionIdStateGet(const inspectorExecutionsExecutionIdStateGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorExecutionsExecutionIdGraphGetParams
	{
		const utility::string_t& executionId;
	};


	/// <summary>
	/// Get the graph definition from S3 for an execution.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/executions/{executionId}/graph
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorExecutionsExecutionIdGraphGet(const inspectorExecutionsExecutionIdGraphGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorExecutionsExecutionIdLogsGetParams
	{
		const utility::string_t& executionId;
	};


	/// <summary>
	/// Get all logs for an execution from S3.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/executions/{executionId}/logs
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorExecutionsExecutionIdLogsGet(const inspectorExecutionsExecutionIdLogsGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorStatsGetParams
	{
		const std::optional<utility::string_t>& tenant;
		const std::optional<int32_t>& sinceDays;
	};


	/// <summary>
	/// Get execution statistics summary.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/stats
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorStatsGet(const inspectorStatsGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorExecutionsRunningGetParams
	{
		const std::optional<utility::string_t>& tenant;
	};


	/// <summary>
	/// Get currently running executions.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/executions/running
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorExecutionsRunningGet(const inspectorExecutionsRunningGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorObserveExecutionIdPostParams
	{
		const utility::string_t& executionId;
		const std::shared_ptr<StartObserveRequest>& RequestBody;
	};


	/// <summary>
	/// Start observing an execution's logs in real-time.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/observe/{executionId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorObserveExecutionIdPost(const inspectorObserveExecutionIdPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorQueue_healthGetParams
	{
		const std::optional<int64_t>& modifiedSince;
	};


	/// <summary>
	/// Returns a snapshot of queue health data for all discovered SQS queues.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/queue-health
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorQueue_healthGet(const inspectorQueue_healthGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorQueue_healthQueueNameDlqRedrivePostParams
	{
		const utility::string_t& queueName;
		const std::shared_ptr<StartRedriveRequest>& RequestBody;
	};


	/// <summary>
	/// Start a redrive to move messages from a queue's DLQ back to the source queue.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/queue-health/{queueName}/dlq/redrive
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void inspectorQueue_healthQueueNameDlqRedrivePost(const inspectorQueue_healthQueueNameDlqRedrivePostParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorQueue_healthQueueNameDlqRedrive_tasksGetParams
	{
		const utility::string_t& queueName;
	};


	/// <summary>
	/// List recent redrive tasks for a queue's DLQ.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/queue-health/{queueName}/dlq/redrive-tasks
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void inspectorQueue_healthQueueNameDlqRedrive_tasksGet(const inspectorQueue_healthQueueNameDlqRedrive_tasksGetParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorQueue_healthQueueNameDlqRedriveTaskHandleCancelPostParams
	{
		const utility::string_t& queueName;
		const utility::string_t& taskHandle;
	};


	/// <summary>
	/// Cancel a running redrive task.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/queue-health/{queueName}/dlq/redrive/{taskHandle}/cancel
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void
		inspectorQueue_healthQueueNameDlqRedriveTaskHandleCancelPost(const inspectorQueue_healthQueueNameDlqRedriveTaskHandleCancelPostParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorQueue_healthQueueNameDlqPurgePostParams
	{
		const utility::string_t& queueName;
	};


	/// <summary>
	/// Purge all messages from a queue's DLQ.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/queue-health/{queueName}/dlq/purge
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void inspectorQueue_healthQueueNameDlqPurgePost(const inspectorQueue_healthQueueNameDlqPurgePostParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorChaosQueueNameActivatePostParams
	{
		const utility::string_t& queueName;
		const std::shared_ptr<ActivateChaosRequest>& RequestBody;
	};


	/// <summary>
	/// Activate the chaos monkey for a queue.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/chaos/{queueName}/activate
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void inspectorChaosQueueNameActivatePost(const inspectorChaosQueueNameActivatePostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorChaosQueueNameDeactivatePostParams
	{
		const utility::string_t& queueName;
	};


	/// <summary>
	/// Deactivate the chaos monkey for a queue.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/chaos/{queueName}/deactivate
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void inspectorChaosQueueNameDeactivatePost(const inspectorChaosQueueNameDeactivatePostParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorChaosGetParams
	{
	};


	/// <summary>
	/// Get all active chaos monkey configs across all known queues.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/chaos
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void inspectorChaosGet(const inspectorChaosGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageExecutions_per_dayGetParams
	{
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& userId;
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Get daily execution counts for usage charts.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/executions-per-day
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorUsageExecutions_per_dayGet(const inspectorUsageExecutions_per_dayGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageQueues_per_dayGetParams
	{
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& userId;
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Get daily distributed queue usage counts for usage charts.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/queues-per-day
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorUsageQueues_per_dayGet(const inspectorUsageQueues_per_dayGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageNode_types_per_dayGetParams
	{
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& userId;
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Get daily node type usage counts for usage charts.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/node-types-per-day
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorUsageNode_types_per_dayGet(const inspectorUsageNode_types_per_dayGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageKey_usage_per_dayGetParams
	{
		const std::optional<std::vector<utility::string_t>>& tenantNames;
		const std::optional<utility::string_t>& userId;
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Get daily key usage counts (tenant-aware).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/key-usage-per-day
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorUsageKey_usage_per_dayGet(const inspectorUsageKey_usage_per_dayGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageProcessing_timeGetParams
	{
		const std::optional<utility::string_t>& groupBy;
		const std::optional<utility::string_t>& metric;
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& userId;
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Get processing time breakdown grouped by day, queue, or node type.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/processing-time
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorUsageProcessing_timeGet(const inspectorUsageProcessing_timeGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageQueue_wait_summaryGetParams
	{
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& userId;
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Get queue wait summary with percentiles and per-queue breakdown.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/queue-wait-summary
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorUsageQueue_wait_summaryGet(const inspectorUsageQueue_wait_summaryGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageUser_sparklinesGetParams
	{
		const std::optional<utility::string_t>& userIds;
		const std::optional<int32_t>& days;
	};


	/// <summary>
	/// Get 7-day execution sparkline data for multiple users (batch endpoint).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/user-sparklines
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorUsageUser_sparklinesGet(const inspectorUsageUser_sparklinesGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageSustained_activity_per_dayGetParams
	{
		const std::optional<std::vector<utility::string_t>>& tenantNames;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Get daily sustained activity hours for one or more tenants.
	/// Returns a dictionary of tenant name to daily hour entries.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/sustained-activity-per-day
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorUsageSustained_activity_per_dayGet(const inspectorUsageSustained_activity_per_dayGetParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageTenant_activity_sparklinesGetParams
	{
		const std::optional<utility::string_t>& tenantNames;
		const std::optional<int32_t>& days;
	};


	/// <summary>
	/// Get 7-day sustained activity sparkline data for multiple tenants (batch endpoint).
	/// Returns a dictionary of tenant name to an array of daily hours (zero-filled, length = days).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/tenant-activity-sparklines
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorUsageTenant_activity_sparklinesGet(const inspectorUsageTenant_activity_sparklinesGetParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorValidate_gacPostParams
	{
		const std::shared_ptr<GacValidationRequest>& RequestBody;
	};


	/// <summary>
	/// Validate a GAC (GCP Service Account JSON) credential against configured checks.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/validate-gac
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorValidate_gacPost(const inspectorValidate_gacPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorSave_validated_gacPostParams
	{
		const std::shared_ptr<SaveValidatedGacRequest>& RequestBody;
	};


	/// <summary>
	/// Save a GAC credential that has already been validated, persisting both the
	/// value and the validation result to metadata.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/save-validated-gac
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorSave_validated_gacPost(const inspectorSave_validated_gacPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorGac_validation_metadataGetParams
	{
		const std::optional<utility::string_t>& tenantName;
	};


	/// <summary>
	/// Returns persisted GAC validation metadata for a tenant's secrets.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/gac-validation-metadata
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorGac_validation_metadataGet(const inspectorGac_validation_metadataGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorValidate_secretPostParams
	{
		const std::shared_ptr<ValidateSecretRequest>& RequestBody;
	};


	/// <summary>
	/// Validate a secret value against the registered provider probe.
	/// Supports both saved values (omit rawValue) and try-before-save (provide rawValue).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/validate-secret
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorValidate_secretPost(const inspectorValidate_secretPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorSave_validated_secretPostParams
	{
		const std::shared_ptr<SaveValidatedSecretRequest>& RequestBody;
	};


	/// <summary>
	/// Save a secret value that has already been validated, persisting both
	/// the value and the validation result atomically.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/save-validated-secret
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorSave_validated_secretPost(const inspectorSave_validated_secretPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorSecret_validation_metadataGetParams
	{
		const std::optional<utility::string_t>& tenantName;
	};


	/// <summary>
	/// Returns persisted validation metadata for a tenant's secrets (both GAC and API key types).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/secret-validation-metadata
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorSecret_validation_metadataGet(const inspectorSecret_validation_metadataGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorApiBase() = default;
};

class IInspectorAuditTrailApiBase : public csp::services::ApiBase
{
public:
	IInspectorAuditTrailApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct inspectorAudit_trailGetParams
	{
		const std::optional<utility::string_t>& search;
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& eventType;
		const std::optional<utility::string_t>& userId;
		const std::optional<int64_t>& from;
		const std::optional<int64_t>& to;
		const std::optional<int64_t>& modifiedSince;
		const std::optional<int32_t>& skip;
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// Search audit records with optional filters and pagination.
	/// Only accessible from the MAG_SUP tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/audit-trail
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorAudit_trailGet(const inspectorAudit_trailGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorAuditTrailApiBase() = default;
};

class IInspectorBugReportApiBase : public csp::services::ApiBase
{
public:
	IInspectorBugReportApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct inspectorBug_reportsPostParams
	{
		const std::shared_ptr<BugReportCreateRequest>& RequestBody;
	};


	/// <summary>
	/// Create a new bug report. Any authenticated user.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/bug-reports
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorBug_reportsPost(const inspectorBug_reportsPostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorBug_reportsGetParams
	{
		const std::optional<utility::string_t>& status;
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& search;
		const std::optional<utility::string_t>& assignedTo;
		const std::optional<bool>& unassigned;
		const std::optional<utility::string_t>& type;
		const std::optional<int32_t>& skip;
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// List bug reports with optional filters. Magnopus-admin/magnopus-support only.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/bug-reports
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorBug_reportsGet(const inspectorBug_reportsGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorBug_reportsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Get a single bug report by ID. Magnopus-admin/magnopus-support only.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/bug-reports/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorBug_reportsIdGet(const inspectorBug_reportsIdGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorBug_reportsIdStatusPatchParams
	{
		const utility::string_t& id;
		const std::shared_ptr<BugReportStatusUpdateRequest>& RequestBody;
	};


	/// <summary>
	/// Update the status of a bug report (Open → Acknowledged → Resolved).
	/// </summary>
	/// <remarks>
	/// PATCH /api/v1/inspector/bug-reports/{id}/status
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorBug_reportsIdStatusPatch(const inspectorBug_reportsIdStatusPatchParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorBug_reportsIdAssignmentPatchParams
	{
		const utility::string_t& id;
		const std::shared_ptr<BugReportAssignRequest>& RequestBody;
	};


	/// <summary>
	/// Assign or unassign a bug report. Null/empty AssignTo = unassign.
	/// </summary>
	/// <remarks>
	/// PATCH /api/v1/inspector/bug-reports/{id}/assignment
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorBug_reportsIdAssignmentPatch(const inspectorBug_reportsIdAssignmentPatchParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorBug_reportsIdScreenshotGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Get the screenshot for a bug report. Returns image/jpeg bytes.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/bug-reports/{id}/screenshot
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorBug_reportsIdScreenshotGet(const inspectorBug_reportsIdScreenshotGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorBugReportApiBase() = default;
};

class IInspectorNodeDefinitionApiBase : public csp::services::ApiBase
{
public:
	IInspectorNodeDefinitionApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct inspectorNode_definitionsGetParams
	{
		const std::optional<utility::string_t>& status;
		const std::optional<utility::string_t>& category;
		const std::optional<utility::string_t>& search;
		const std::optional<utility::string_t>& runtimeId;
		const std::optional<utility::string_t>& provider;
		const std::optional<utility::string_t>& tag;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// List node definitions with optional filters and pagination.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/node-definitions
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorNode_definitionsGet(const inspectorNode_definitionsGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorNode_definitionsPostParams
	{
		const std::shared_ptr<NodeDefinitionCreateRequest>& RequestBody;
	};


	/// <summary>
	/// Create a new node definition (version 1).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/node-definitions
	/// Authorization: magnopus-admin,magnopus-nodey-developer
	/// </remarks>
	virtual void inspectorNode_definitionsPost(const inspectorNode_definitionsPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorNode_definitionsNodeTypeIdGetParams
	{
		const utility::string_t& nodeTypeId;
	};


	/// <summary>
	/// Get a single node definition by its type ID.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/node-definitions/{nodeTypeId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorNode_definitionsNodeTypeIdGet(const inspectorNode_definitionsNodeTypeIdGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorNode_definitionsNodeTypeIdPutParams
	{
		const utility::string_t& nodeTypeId;
		const std::shared_ptr<NodeDefinitionUpdateRequest>& RequestBody;
	};


	/// <summary>
	/// Update an existing node definition. Creates a new version.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/inspector/node-definitions/{nodeTypeId}
	/// Authorization: magnopus-admin,magnopus-nodey-developer
	/// </remarks>
	virtual void inspectorNode_definitionsNodeTypeIdPut(const inspectorNode_definitionsNodeTypeIdPutParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorNode_definitionsNodeTypeIdStatusPatchParams
	{
		const utility::string_t& nodeTypeId;
		const std::shared_ptr<NodeDefinitionStatusRequest>& RequestBody;
	};


	/// <summary>
	/// Change the status of a node definition (active/draft/deprecated).
	/// </summary>
	/// <remarks>
	/// PATCH /api/v1/inspector/node-definitions/{nodeTypeId}/status
	/// Authorization: magnopus-admin,magnopus-nodey-developer
	/// </remarks>
	virtual void inspectorNode_definitionsNodeTypeIdStatusPatch(const inspectorNode_definitionsNodeTypeIdStatusPatchParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorNode_definitionsNodeTypeIdHistoryGetParams
	{
		const utility::string_t& nodeTypeId;
	};


	/// <summary>
	/// Get version history for a node definition.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/node-definitions/{nodeTypeId}/history
	/// Authorization: magnopus-admin,magnopus-nodey-developer
	/// </remarks>
	virtual void inspectorNode_definitionsNodeTypeIdHistoryGet(const inspectorNode_definitionsNodeTypeIdHistoryGetParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorNode_definitionsNodeTypeIdHistoryVerGetParams
	{
		const utility::string_t& nodeTypeId;
		const int32_t& ver;
	};


	/// <summary>
	/// Get a specific version snapshot of a node definition.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/node-definitions/{nodeTypeId}/history/{ver}
	/// Authorization: magnopus-admin,magnopus-nodey-developer
	/// </remarks>
	virtual void inspectorNode_definitionsNodeTypeIdHistoryVerGet(const inspectorNode_definitionsNodeTypeIdHistoryVerGetParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorNode_definitionsNodeTypeIdRestoreVerPostParams
	{
		const utility::string_t& nodeTypeId;
		const int32_t& ver;
	};


	/// <summary>
	/// Restore a previous version (creates a new version from the old snapshot).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/node-definitions/{nodeTypeId}/restore/{ver}
	/// Authorization: magnopus-admin,magnopus-nodey-developer
	/// </remarks>
	virtual void inspectorNode_definitionsNodeTypeIdRestoreVerPost(const inspectorNode_definitionsNodeTypeIdRestoreVerPostParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorNodeDefinitionApiBase() = default;
};

class IInspectorWorkerRuntimeApiBase : public csp::services::ApiBase
{
public:
	IInspectorWorkerRuntimeApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct inspectorWorker_runtimesGetParams
	{
	};


	/// <summary>
	/// List all active worker runtimes.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/worker-runtimes
	/// Authorization: magnopus-admin,magnopus-nodey-developer
	/// </remarks>
	virtual void inspectorWorker_runtimesGet(const inspectorWorker_runtimesGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorWorkerRuntimeApiBase() = default;
};

class IMusubiGraphApiBase : public csp::services::ApiBase
{
public:
	IMusubiGraphApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct musubiExecute_graphPostParams
	{
		const std::shared_ptr<GraphExecutionRequest>& RequestBody;
	};


	/// <summary>
	/// Submits a graph for execution via Musubi pipeline.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/musubi/execute-graph
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void musubiExecute_graphPost(const musubiExecute_graphPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct musubiExecute_graphExecutionIdStatusGetParams
	{
		const utility::string_t& executionId;
	};


	/// <summary>
	/// Gets the status of a graph execution
	/// </summary>
	/// <remarks>
	/// GET /api/v1/musubi/execute-graph/{executionId}/status
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void musubiExecute_graphExecutionIdStatusGet(const musubiExecute_graphExecutionIdStatusGetParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct musubiExecute_graphExecutionIdStatusPostParams
	{
		const utility::string_t& executionId;
		const std::shared_ptr<ExecutionStatusUpdateRequest>& RequestBody;
	};


	/// <summary>
	/// Updates the status of a graph execution. Called by the Graph Execution Runner.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/musubi/execute-graph/{executionId}/status
	/// Authorization: graph-status-update
	/// </remarks>
	virtual void musubiExecute_graphExecutionIdStatusPost(const musubiExecute_graphExecutionIdStatusPostParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct musubiChaosQueueNameActiveGetParams
	{
		const utility::string_t& queueName;
	};


	/// <summary>
	/// Checks if the chaos monkey is still active for a given queue.
	/// Called once per graph execution by the runner to verify stale signals.
	/// Uses the same scoped callback JWT as UpdateExecutionStatus.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/musubi/chaos/{queueName}/active
	/// Authorization: graph-status-update
	/// </remarks>
	virtual void musubiChaosQueueNameActiveGet(const musubiChaosQueueNameActiveGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IMusubiGraphApiBase() = default;
};

class INodeDefinitionApiBase : public csp::services::ApiBase
{
public:
	INodeDefinitionApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct node_definitionsFlatGetParams
	{
	};


	/// <summary>
	/// Get all active node definitions as a flat map keyed by node type ID.
	/// Replaces Nodey's filesystem-based /nodes endpoint.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/node-definitions/flat
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void node_definitionsFlatGet(const node_definitionsFlatGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct node_definitionsNestedGetParams
	{
	};


	/// <summary>
	/// Get all active node definitions as a nested map grouped by category.
	/// Replaces Nodey's filesystem-based /nested_nodes endpoint.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/node-definitions/nested
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void node_definitionsNestedGet(const node_definitionsNestedGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~INodeDefinitionApiBase() = default;
};

class INtpApiBase : public csp::services::ApiBase
{
public:
	INtpApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
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

class IPingApiBase : public csp::services::ApiBase
{
public:
	IPingApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
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

class ISequenceApiBase : public csp::services::ApiBase
{
public:
	ISequenceApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct sequencesGetParams
	{
		const std::optional<std::vector<utility::string_t>>& Keys;
		const std::optional<utility::string_t>& KeyLikeRegex;
		const std::optional<utility::string_t>& ReferenceType;
		const std::optional<std::vector<utility::string_t>>& ReferenceIds;
		const std::optional<std::vector<utility::string_t>>& Items;
		const std::optional<std::map<utility::string_t, utility::string_t>>& Metadata;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Finds all matching sequences.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/sequences
	/// Requests may leverage any of the available search criteria to find sequences. The one
	/// caveat is that if you are searching by reference then you must specify both a `ReferenceType`
	/// (e.g. the literal string "GroupId") and at least one `ReferenceId` (e.g. the Id of the group).
	/// If multiple criteria are supplied (e.g. `KeyLikeRegex`, `Metadata`, and `ReferenceType` +
	/// `ReferenceIds`), this endpoint will return sequences that match ALL specified criteria.
	///
	/// This search is paginated. To page through the search results, call this endpoint multiple
	/// times with the same search criteria and different `Skip` and `Limit` values. If no pagination is
	/// specified, it will default to the first 10 results.
	///
	/// <b>Sample Requests:</b>
	///
	///     GET /oly-aggregations/api/v1/sequences?Keys=key1&Keys=key2
	///
	///     GET /oly-aggregations/api/v1/sequences?KeyLikeRegEx=key%5Cd%2B
	///
	///     GET /oly-aggregations/api/v1/sequences?ReferenceType=GroupId&ReferenceIds=000000000000000000000000
	///
	///     GET /oly-aggregations/api/v1/sequences?Metadata[key1]=value1&Metadata[key2]=value2
	/// </remarks>
	virtual void sequencesGet(const sequencesGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct sequencesPutParams
	{
		const std::optional<utility::string_t>& newKey;
		const std::shared_ptr<SequenceDto>& RequestBody;
	};


	/// <summary>
	/// Creates or updates a sequence.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/sequences
	/// If a sequence with this key already exists and the current user has permission to modify
	/// the sequence then update the sequence. If the sequence does not exist and the current user
	/// has permission to create the specified sequence then create the sequence. Otherwise, return
	/// 403 Forbidden. See the description of the 403 Forbidden response for more details.
	///
	/// If a sequence is created or updated and the `ReferenceType` is "GroupId" then a multiplayer
	/// message will be sent to clients via the Global scope for the group.
	///
	/// If you include a new key in the query string, and key in the querystring doesn't already exist
	/// on another document, this will update the key for an existing document to the new key.
	///
	/// <b>Sample Requests:</b>
	///
	///     PUT /oly-aggregations/api/v1/sequences?newKey=newKey
	///     {
	///         "key": "key1",
	///         "referenceType": "GroupId",
	///         "referenceId": "000000000000000000000000",
	///         "items": [
	///             "item1",
	///             "item2",
	///             "item3"
	///         ],
	///         "metadata": {
	///             "property1": "value1",
	///             "property2": "value2"
	///         }
	///     }
	/// </remarks>
	virtual void sequencesPut(const sequencesPutParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct sequencesKeysKeyGetParams
	{
		const utility::string_t& key;
	};


	/// <summary>
	/// Gets a sequence by key.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/sequences/keys/{key}
	/// Returns the sequence with the specified `key`, if it exists. Otherwise, return 404 NotFound.
	///
	/// <b>Sample Requests:</b>
	///
	///     GET /oly-aggregations/api/v1/sequences/keys/key1
	///
	///     GET /oly-aggregations/api/v1/sequences/keys/key2
	/// </remarks>
	virtual void sequencesKeysKeyGet(const sequencesKeysKeyGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct sequencesKeysKeyDeleteParams
	{
		const utility::string_t& key;
	};


	/// <summary>
	/// Deletes a sequence with the given key.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/sequences/keys/{key}
	/// Returns 204 No Content regardless of whether or not a sequence with the specified `key`
	/// existed or not.
	///
	/// If a sequence is deleted with the `ReferenceType` of "GroupId" then a multiplayer message will
	/// be sent to clients via the Global scope for that group.
	///
	/// <b>Sample Requests:</b>
	///
	///     DELETE /oly-aggregations/api/v1/sequences/keys/key1
	/// </remarks>
	virtual void sequencesKeysKeyDelete(const sequencesKeysKeyDeleteParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct sequencesKeysOldKeyKeyPutParams
	{
		const utility::string_t& oldKey;
		const utility::string_t& newKey;
	};


	/// <summary>
	/// Moves a sequence from one key to another.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/sequences/keys/{oldKey}/key
	/// If the a sequence with the `oldKey` exists and a sequence with the `newKey` does not exist
	/// and the current user has permission to modify the sequence then update the key of the
	/// sequence to `newKey`. If no sequence with `oldKey` exists then return 404 NotFound. If a
	/// sequence with `newKey` already exists then return 409 Conflict.
	///
	/// If a sequence is moved with the `ReferenceType` of "GroupId" then a multiplayer message will
	/// be sent to clients via the Global scope for the group.
	///
	/// <b>Sample Requests:</b>
	///
	///     PUT /oly-aggregations/api/v1/sequences/keys/key1/key/key2
	/// </remarks>
	[[deprecated("'PUT /api/v1/sequences/keys/{oldKey}/key' is deprecated!")]]
	virtual void sequencesKeysOldKeyKeyPut(const sequencesKeysOldKeyKeyPutParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct sequencesKeysDeleteParams
	{
		const std::vector<utility::string_t>& keys;
	};


	/// <summary>
	/// Deletes all sequences with the given keys.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/sequences/keys
	/// Returns 204 No Content regardless of whether or not any sequences with the specified `keys`
	/// existed or not.
	///
	/// Each sequence that is deleted with the `ReferenceType` of "GroupId" will result in a multiplayer
	/// message being sent to clients via the Global scope for that group.
	///
	/// <b>Sample Requests:</b>
	///
	///     DELETE /oly-aggregations/api/v1/sequences?keys=key1&keys=key2
	/// </remarks>
	virtual void sequencesKeysDelete(const sequencesKeysDeleteParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct sequencesReference_typeReferenceTypeReference_idReferenceIdDeleteParams
	{
		const utility::string_t& referenceType;
		const utility::string_t& referenceId;
	};


	/// <summary>
	/// Deletes all sequences with the given reference.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/sequences/reference-type/{referenceType}/reference-id/{referenceId}
	/// Returns 204 No Content regardless of whether or not any sequences with the specified `referenceType`
	/// and `referenceId` existed or not.
	///
	/// Each sequence that is deleted with the `ReferenceType` is "GroupId" will result in a multiplayer
	/// message being sent to clients via the Global scope for that group.
	///
	/// <b>Sample Requests:</b>
	///
	///     DELETE /oly-aggregations/api/v1/sequences/reference-type/GroupId/reference-id/000000000000000000000000
	/// </remarks>
	virtual void sequencesReference_typeReferenceTypeReference_idReferenceIdDelete(
		const sequencesReference_typeReferenceTypeReference_idReferenceIdDeleteParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISequenceApiBase() = default;
};

class IShopifyApiBase : public csp::services::ApiBase
{
public:
	IShopifyApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct spacesSpaceIdVendorsShopifyProductsProductIdGetParams
	{
		const utility::string_t& spaceId;
		const utility::string_t& productId;
	};


	/// <summary>
	/// Find one product and return it and all its variants
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/vendors/shopify/products/{productId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsShopifyProductsProductIdGet(const spacesSpaceIdVendorsShopifyProductsProductIdGetParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdVendorsShopifyProductsVariantsGetParams
	{
		const utility::string_t& spaceId;
		const std::optional<std::vector<utility::string_t>>& ids;
	};


	/// <summary>
	/// Find one or more products by variant ids and include the variant data too
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/vendors/shopify/products/variants
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsShopifyProductsVariantsGet(const spacesSpaceIdVendorsShopifyProductsVariantsGetParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdVendorsShopifyPutParams
	{
		const utility::string_t& spaceId;
		const std::shared_ptr<ShopifyStorefrontDto>& RequestBody;
	};


	/// <summary>
	/// Creates an record that contains the Shopify integration info
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/spaces/{spaceId}/vendors/shopify
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsShopifyPut(const spacesSpaceIdVendorsShopifyPutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct vendorsShopifyValidatePutParams
	{
		const std::shared_ptr<ShopifyStorefrontValidationRequest>& RequestBody;
	};


	/// <summary>
	/// Tests the provided info against Shopify to verify it's validity
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/vendors/shopify/validate
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void vendorsShopifyValidatePut(const vendorsShopifyValidatePutParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct vendorsShopifyUsersUserIdStorefrontsGetParams
	{
		const utility::string_t& userId;
		const std::optional<bool>& active;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Returns all storefronts for the provided user
	/// </summary>
	/// <remarks>
	/// GET /api/v1/vendors/shopify/users/{userId}/storefronts
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void vendorsShopifyUsersUserIdStorefrontsGet(const vendorsShopifyUsersUserIdStorefrontsGetParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdVendorsShopifyCartsPostParams
	{
		const utility::string_t& spaceId;
	};


	/// <summary>
	/// Creates a Cart at Shopify for the store associated to the provided SpaceId
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/vendors/shopify/carts
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsShopifyCartsPost(const spacesSpaceIdVendorsShopifyCartsPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdVendorsShopifyCartsCartIdGetParams
	{
		const utility::string_t& spaceId;
		const utility::string_t& cartId;
	};


	/// <summary>
	/// Uses the CartId to reach out to Shopify and get Cart Data.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsShopifyCartsCartIdGet(const spacesSpaceIdVendorsShopifyCartsCartIdGetParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct spacesSpaceIdVendorsShopifyCartsCartIdPutParams
	{
		const utility::string_t& spaceId;
		const utility::string_t& cartId;
		const std::shared_ptr<ShopifyCartUpdateDto>& RequestBody;
	};


	/// <summary>
	/// Updates the Cart
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsShopifyCartsCartIdPut(const spacesSpaceIdVendorsShopifyCartsCartIdPutParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdVendorsShopifyCartsCartIdCheckout_infoGetParams
	{
		const utility::string_t& spaceId;
		const utility::string_t& cartId;
	};


	/// <summary>
	/// Get shopify cart checkout info
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}/checkout-info
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsShopifyCartsCartIdCheckout_infoGet(const spacesSpaceIdVendorsShopifyCartsCartIdCheckout_infoGetParams& Params,
																		csp::services::ApiResponseHandlerBase* ResponseHandler,
																		csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IShopifyApiBase() = default;
};

class ISpaceApiBase : public csp::services::ApiBase
{
public:
	ISpaceApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct spacesSpaceIdDeleteParams
	{
		const utility::string_t& spaceId;
	};


	/// <summary>
	/// Locates the Space by its unique groupId represented here as spaceId and the associated objects that belong to it
	/// and deletes it from the data store.
	/// This Function will search for items related to a spaceId even if the spaceId itself has already been deleted.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/spaces/{spaceId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	[[deprecated("'DELETE /api/v1/spaces/{spaceId}' is deprecated!")]]
	virtual void spacesSpaceIdDelete(const spacesSpaceIdDeleteParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesDeleteParams
	{
		const std::optional<std::vector<utility::string_t>>& spaceIds;
		const std::optional<bool>& asyncCall;
	};


	/// <summary>
	/// Locates the Spaces by their unique groupIds represented here as spaceIds and the associated objects that belong to it
	/// and deletes it from the data store.
	/// This Function will search for items related to a spaceId even if the spaceId itself has already been deleted.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/spaces
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesDelete(const spacesDeleteParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdMultiplayer_objectsKmlGetParams
	{
		const utility::string_t& spaceId;
	};


	/// <summary>
	/// Locates the Space by its unique groupId represented here as spaceId and the associated objects that belong to it
	/// and returns those objects as KML style XML for google earth
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/multiplayer-objects/kml
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdMultiplayer_objectsKmlGet(const spacesSpaceIdMultiplayer_objectsKmlGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdDuplicatePostParams
	{
		const utility::string_t& spaceId;
		const std::optional<bool>& asyncCall;
		const std::shared_ptr<DuplicateSpaceOptions>& RequestBody;
	};


	/// <summary>
	/// Creates a duplicate of a space and assigns it to a specific group
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/duplicate
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdDuplicatePost(const spacesSpaceIdDuplicatePostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdExportPostParams
	{
		const utility::string_t& spaceId;
		const std::optional<bool>& asyncCall;
		const std::optional<bool>& includeMusubi;
	};


	/// <summary>
	/// Extracts the quintessence of the referenced Space to be compressed and distilled into a pair of Artifacts
	/// accessible in other places and times.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/export
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void spacesSpaceIdExportPost(const spacesSpaceIdExportPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesExportsExportIdImportPostParams
	{
		const utility::string_t& exportId;
		const std::optional<bool>& asyncCall;
		const std::shared_ptr<ImportSpaceOptions>& RequestBody;
	};


	/// <summary>
	/// Takes an exported space, that has been saved in a location accessible to all environments. Translates it, and imports it into an environment
	/// as a new space
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/exports/{exportId}/import
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void spacesExportsExportIdImportPost(const spacesExportsExportIdImportPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdCheckpointsPostParams
	{
		const utility::string_t& spaceId;
		const std::shared_ptr<SpaceCheckpointOptions>& RequestBody;
	};


	/// <summary>
	/// Creates an export of the space and associated records in a single file for optimized space-load flows
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/checkpoints
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdCheckpointsPost(const spacesSpaceIdCheckpointsPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISpaceApiBase() = default;
};

class ITicketedSpaceApiBase : public csp::services::ApiBase
{
public:
	ITicketedSpaceApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct spacesSpaceIdEventsPostParams
	{
		const utility::string_t& spaceId;
		const std::shared_ptr<SpaceEventDto>& RequestBody;
	};


	/// <summary>
	/// Creates an event associated with a space
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/events
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdEventsPost(const spacesSpaceIdEventsPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdEventsEventIdPutParams
	{
		const utility::string_t& spaceId;
		const utility::string_t& eventId;
		const std::shared_ptr<SpaceEventDto>& RequestBody;
	};


	/// <summary>
	/// Updates an event associated with a space
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/spaces/{spaceId}/events/{eventId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdEventsEventIdPut(const spacesSpaceIdEventsEventIdPutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesEventsGetParams
	{
		const std::optional<std::vector<utility::string_t>>& VendorEventIds;
		const std::optional<utility::string_t>& VendorName;
		const std::optional<std::vector<utility::string_t>>& SpaceIds;
		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<bool>& IsTicketingActive;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Search space events that matches the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/events
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesEventsGet(const spacesEventsGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPutParams
	{
		const utility::string_t& spaceId;
		const utility::string_t& vendorName;
		const utility::string_t& vendorEventId;
		const utility::string_t& vendorTicketId;
		const std::optional<utility::string_t>& onBehalfOfUserId;
	};


	/// <summary>
	/// Applies the ticket purchased from 3rd party event ticket vendor to enter a space event
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/spaces/{spaceId}/vendors/{vendorName}/events/{vendorEventId}/tickets/{vendorTicketId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPut(
		const spacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesTicketedGetParams
	{
		const std::optional<std::vector<utility::string_t>>& spaceIds;
	};


	/// <summary>
	/// Returns which spaces have active ticketing and which do not
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/ticketed
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesTicketedGet(const spacesTicketedGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct vendorsVendorNameOauthGetParams
	{
		const utility::string_t& vendorName;
		const std::optional<utility::string_t>& code;
		const std::optional<utility::string_t>& userId;
		const std::optional<utility::string_t>& tenant;
		const std::optional<utility::string_t>& error_code;
	};


	/// <summary>
	/// OAuth endpoint for exchanging vendor provider auth code for an API bearer token.
	/// returns a redirect to a client-provided server-approved redirect URL
	/// </summary>
	/// <remarks>
	/// GET /api/v1/vendors/{vendorName}/oauth
	/// Authorization: Anonymous
	/// </remarks>
	virtual void vendorsVendorNameOauthGet(const vendorsVendorNameOauthGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct vendorsVendorNameUsersUserIdProvider_infoGetParams
	{
		const utility::string_t& vendorName;
		const utility::string_t& userId;
		const std::optional<utility::string_t>& tenant;
	};


	/// <summary>
	/// Returns info related to initiating oauth flow with a specific vendor
	/// </summary>
	/// <remarks>
	/// GET /api/v1/vendors/{vendorName}/users/{userId}/provider-info
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void vendorsVendorNameUsersUserIdProvider_infoGet(const vendorsVendorNameUsersUserIdProvider_infoGetParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ITicketedSpaceApiBase() = default;
};

class IUserSustainedActivityApiBase : public csp::services::ApiBase
{
public:
	IUserSustainedActivityApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct usersSustained_activityGetParams
	{
		const std::optional<std::vector<utility::string_t>>& tenants;
		const std::optional<utility::string_t>& start;
		const std::optional<utility::string_t>& end;
	};


	/// <summary>
	/// Get the all users' sustained activity of the given tenants within a time range - inclusive of the start time and exclusive of the end time
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/sustained-activity
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void usersSustained_activityGet(const usersSustained_activityGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IUserSustainedActivityApiBase() = default;
};

class IVersionsApiBase : public csp::services::ApiBase
{
public:
	IVersionsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
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

class IVersionsAggregatorApiBase : public csp::services::ApiBase
{
public:
	IVersionsAggregatorApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
	{
	}



	struct rsions_aggregatedGetParams
	{
	};


	/// <summary>
	/// Aggregate the versions from this and downstream services
	/// </summary>
	/// <remarks>
	/// GET /api/versions-aggregated
	/// Authorization: Anonymous
	/// </remarks>
	virtual void rsions_aggregatedGet(const rsions_aggregatedGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IVersionsAggregatorApiBase() = default;
};


} // namespace csp::services::generated::aggregationservice