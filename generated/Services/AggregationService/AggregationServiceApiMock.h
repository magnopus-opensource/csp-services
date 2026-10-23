

#pragma once

#include "Services/AggregationService/Dto.h"
#include "Services/AggregationService/IAggregationServiceApiBase.h"

#include <gmock/gmock.h>

namespace csp::services::generated::aggregationservice
{


class AloMovesApiMock final : public IAloMovesApiBase
{
public:
	AloMovesApiMock() : IAloMovesApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				aloHarmonizePost,
				(const aloHarmonizePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				aloVersions_matrixPost,
				(const aloVersions_matrixPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				aloUserIdClassesClassDefinitionIdCompletedPost,
				(const aloUserIdClassesClassDefinitionIdCompletedPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				aloQaUserIdBadge_expressionsPost,
				(const aloQaUserIdBadge_expressionsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				aloUserIdClassesRecommendationsGet,
				(const aloUserIdClassesRecommendationsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				aloQaSyncClass_dataPut,
				(const aloQaSyncClass_dataPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				aloClassesMost_visitedGet,
				(const aloClassesMost_visitedGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class AnalyticsApiMock final : public IAnalyticsApiBase
{
public:
	AnalyticsApiMock() : IAnalyticsApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				analyticsBulkPost,
				(const analyticsBulkPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				analyticsStreamPost,
				(const analyticsStreamPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				analyticsStream_urlPost,
				(const analyticsStream_urlPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class AssignmentsApiMock final : public IAssignmentsApiBase
{
public:
	AssignmentsApiMock() : IAssignmentsApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				productionrosterAssignmentsGet,
				(const productionrosterAssignmentsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				productionrosterAssignmentsPut,
				(const productionrosterAssignmentsPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				productionrosterAssignmentsIdDelete,
				(const productionrosterAssignmentsIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				productionrosterAssignmentsBulkPost,
				(const productionrosterAssignmentsBulkPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class BillingCadenceDevApiMock final : public IBillingCadenceDevApiBase
{
public:
	BillingCadenceDevApiMock() : IBillingCadenceDevApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				billingDevCadence_triggerPost,
				(const billingDevCadence_triggerPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class CacheApiMock final : public ICacheApiBase
{
public:
	CacheApiMock() : ICacheApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				cache_keysGet,
				(const cache_keysGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				cache_keysDelete,
				(const cache_keysDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class CoalescenceApiMock final : public ICoalescenceApiBase
{
public:
	CoalescenceApiMock() : ICoalescenceApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				coalescenceIdPost,
				(const coalescenceIdPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class ConfigApiMock final : public IConfigApiBase
{
public:
	ConfigApiMock() : IConfigApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				productionrosterConfigGet,
				(const productionrosterConfigGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				productionrosterConfigGroupPost,
				(const productionrosterConfigGroupPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				productionrosterConfigGroupGroupIdPut,
				(const productionrosterConfigGroupGroupIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class ConfigurationApiMock final : public IConfigurationApiBase
{
public:
	ConfigurationApiMock() : IConfigurationApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				appsettingsGet,
				(const appsettingsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				appsettingsReloadPost,
				(const appsettingsReloadPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				featureflagsGet,
				(const featureflagsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class DaigramsApiMock final : public IDaigramsApiBase
{
public:
	DaigramsApiMock() : IDaigramsApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				daigramsPost,
				(const daigramsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				daigramsGet,
				(const daigramsGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				daigramsIdGet,
				(const daigramsIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				daigramsIdPut,
				(const daigramsIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				daigramsIdDelete,
				(const daigramsIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				daigramsIdThumbnailPut,
				(const daigramsIdThumbnailPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class DepartmentsApiMock final : public IDepartmentsApiBase
{
public:
	DepartmentsApiMock() : IDepartmentsApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				productionrosterDepartmentsGet,
				(const productionrosterDepartmentsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				productionrosterDepartmentsPost,
				(const productionrosterDepartmentsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				productionrosterDepartmentsIdPut,
				(const productionrosterDepartmentsIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				productionrosterDepartmentsIdDelete,
				(const productionrosterDepartmentsIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class EffortResourcesApiMock final : public IEffortResourcesApiBase
{
public:
	EffortResourcesApiMock() : IEffortResourcesApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				watchtowerEffortBulk_upsertPost,
				(const watchtowerEffortBulk_upsertPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				watchtowerEffortBulk_removePost,
				(const watchtowerEffortBulk_removePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				watchtowerEffortBulk_getPost,
				(const watchtowerEffortBulk_getPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				watchtowerEffortSearchPost,
				(const watchtowerEffortSearchPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class ExternalServiceProxyApiMock final : public IExternalServiceProxyApiBase
{
public:
	ExternalServiceProxyApiMock() : IExternalServiceProxyApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				service_proxyPost,
				(const service_proxyPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class GroupRolesApiMock final : public IGroupRolesApiBase
{
public:
	GroupRolesApiMock() : IGroupRolesApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				usersUserIdGroupsGroupIdRolesPut,
				(const usersUserIdGroupsGroupIdRolesPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class InspectorApiMock final : public IInspectorApiBase
{
public:
	InspectorApiMock() : IInspectorApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				inspectorExecutionsGet,
				(const inspectorExecutionsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorExecutionsFailed_nodesCsvGet,
				(const inspectorExecutionsFailed_nodesCsvGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorExecutionsExecutionIdGet,
				(const inspectorExecutionsExecutionIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorExecutionsExecutionIdStateGet,
				(const inspectorExecutionsExecutionIdStateGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorExecutionsExecutionIdGraphGet,
				(const inspectorExecutionsExecutionIdGraphGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorExecutionsExecutionIdLogsGet,
				(const inspectorExecutionsExecutionIdLogsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorStatsGet,
				(const inspectorStatsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorExecutionsRunningGet,
				(const inspectorExecutionsRunningGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorObserveExecutionIdPost,
				(const inspectorObserveExecutionIdPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorQueue_healthGet,
				(const inspectorQueue_healthGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorQueue_healthQueueNameDlqPurgePost,
				(const inspectorQueue_healthQueueNameDlqPurgePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorQueue_healthQueueNameDlqRedrivePost,
				(const inspectorQueue_healthQueueNameDlqRedrivePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorQueue_healthQueueNameDlqRedrive_tasksGet,
				(const inspectorQueue_healthQueueNameDlqRedrive_tasksGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorQueue_healthQueueNameDlqRedriveTaskHandleCancelPost,
				(const inspectorQueue_healthQueueNameDlqRedriveTaskHandleCancelPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorChaosQueueNameActivatePost,
				(const inspectorChaosQueueNameActivatePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorChaosQueueNameDeactivatePost,
				(const inspectorChaosQueueNameDeactivatePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorChaosGet,
				(const inspectorChaosGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsageExecutions_per_dayGet,
				(const inspectorUsageExecutions_per_dayGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsageQueues_per_dayGet,
				(const inspectorUsageQueues_per_dayGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsageNode_types_per_dayGet,
				(const inspectorUsageNode_types_per_dayGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsageKey_usage_per_dayGet,
				(const inspectorUsageKey_usage_per_dayGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsageTop_users_per_keyGet,
				(const inspectorUsageTop_users_per_keyGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsageNode_type_keysGet,
				(const inspectorUsageNode_type_keysGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsageProcessing_timeGet,
				(const inspectorUsageProcessing_timeGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsageQueue_wait_summaryGet,
				(const inspectorUsageQueue_wait_summaryGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsageUser_sparklinesGet,
				(const inspectorUsageUser_sparklinesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsageSustained_activity_per_dayGet,
				(const inspectorUsageSustained_activity_per_dayGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsageTenant_activity_sparklinesGet,
				(const inspectorUsageTenant_activity_sparklinesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorValidate_gacPost,
				(const inspectorValidate_gacPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorSave_validated_gacPost,
				(const inspectorSave_validated_gacPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorGac_validation_metadataGet,
				(const inspectorGac_validation_metadataGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorValidate_secretPost,
				(const inspectorValidate_secretPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorSave_validated_secretPost,
				(const inspectorSave_validated_secretPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorSecret_validation_metadataGet,
				(const inspectorSecret_validation_metadataGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorPlus_addressingAllowed_providersGet,
				(const inspectorPlus_addressingAllowed_providersGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorMigration_statusGet,
				(const inspectorMigration_statusGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorTenant_hostnamesGet,
				(const inspectorTenant_hostnamesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorSecret_definitionsApplicationNamePost,
				(const inspectorSecret_definitionsApplicationNamePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorSecret_definitionsApplicationNameEnvVarNamePut,
				(const inspectorSecret_definitionsApplicationNameEnvVarNamePutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class InspectorAuditTrailApiMock final : public IInspectorAuditTrailApiBase
{
public:
	InspectorAuditTrailApiMock() : IInspectorAuditTrailApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				inspectorAudit_trailGet,
				(const inspectorAudit_trailGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorAudit_trailFilter_optionsGet,
				(const inspectorAudit_trailFilter_optionsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class InspectorBackfillApiMock final : public IInspectorBackfillApiBase
{
public:
	InspectorBackfillApiMock() : IInspectorBackfillApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				inspectorBackfillExecutionsPost,
				(const inspectorBackfillExecutionsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorBackfillExecutionsExecutionIdGet,
				(const inspectorBackfillExecutionsExecutionIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorBackfillExecutionsExecutionIdDelete,
				(const inspectorBackfillExecutionsExecutionIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class InspectorBugReportApiMock final : public IInspectorBugReportApiBase
{
public:
	InspectorBugReportApiMock() : IInspectorBugReportApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				inspectorBug_reportsPost,
				(const inspectorBug_reportsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorBug_reportsGet,
				(const inspectorBug_reportsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorBug_reportsIdGet,
				(const inspectorBug_reportsIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorBug_reportsIdStatusPatch,
				(const inspectorBug_reportsIdStatusPatchParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorBug_reportsIdAssignmentPatch,
				(const inspectorBug_reportsIdAssignmentPatchParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorBug_reportsIdScreenshotGet,
				(const inspectorBug_reportsIdScreenshotGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class InspectorExecutionsApiMock final : public IInspectorExecutionsApiBase
{
public:
	InspectorExecutionsApiMock() : IInspectorExecutionsApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				inspectorExecutionsSelf_reportPost,
				(const inspectorExecutionsSelf_reportPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class InspectorMarketplaceApiMock final : public IInspectorMarketplaceApiBase
{
public:
	InspectorMarketplaceApiMock() : IInspectorMarketplaceApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				inspectorMarketplaceCustomersGet,
				(const inspectorMarketplaceCustomersGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorMarketplaceCustomersCustomerIdGet,
				(const inspectorMarketplaceCustomersCustomerIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorMarketplaceStatsGet,
				(const inspectorMarketplaceStatsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class InspectorNodeDefinitionApiMock final : public IInspectorNodeDefinitionApiBase
{
public:
	InspectorNodeDefinitionApiMock() : IInspectorNodeDefinitionApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				inspectorNode_definitionsGet,
				(const inspectorNode_definitionsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorNode_definitionsPost,
				(const inspectorNode_definitionsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorNode_definitionsNodeTypeIdGet,
				(const inspectorNode_definitionsNodeTypeIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorNode_definitionsNodeTypeIdPut,
				(const inspectorNode_definitionsNodeTypeIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorNode_definitionsNodeTypeIdStatusPatch,
				(const inspectorNode_definitionsNodeTypeIdStatusPatchParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorNode_definitionsNodeTypeIdHistoryGet,
				(const inspectorNode_definitionsNodeTypeIdHistoryGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorNode_definitionsNodeTypeIdHistoryVerGet,
				(const inspectorNode_definitionsNodeTypeIdHistoryVerGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorNode_definitionsNodeTypeIdRestoreVerPost,
				(const inspectorNode_definitionsNodeTypeIdRestoreVerPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class InspectorOrganizationApiMock final : public IInspectorOrganizationApiBase
{
public:
	InspectorOrganizationApiMock() : IInspectorOrganizationApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				inspectorOrganizationsGet,
				(const inspectorOrganizationsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorOrganizationsPost,
				(const inspectorOrganizationsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorOrganizationsOrganizationIdGet,
				(const inspectorOrganizationsOrganizationIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorOrganizationsOrganizationIdPut,
				(const inspectorOrganizationsOrganizationIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorOrganizationsOrganizationIdTenantsPost,
				(const inspectorOrganizationsOrganizationIdTenantsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorOrganizationsOrganizationIdTenantsTenantNameDelete,
				(const inspectorOrganizationsOrganizationIdTenantsTenantNameDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorOrganizationsOrganizationIdAdministrative_tenantPut,
				(const inspectorOrganizationsOrganizationIdAdministrative_tenantPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorOrganizationsOrganizationIdOwnerPut,
				(const inspectorOrganizationsOrganizationIdOwnerPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class InspectorQueueOverrideApiMock final : public IInspectorQueueOverrideApiBase
{
public:
	InspectorQueueOverrideApiMock() : IInspectorQueueOverrideApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				inspectorQueue_overridesGet,
				(const inspectorQueue_overridesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorQueue_overridesPost,
				(const inspectorQueue_overridesPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorQueue_overridesDelete,
				(const inspectorQueue_overridesDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorQueue_overridesCandidate_nodesGet,
				(const inspectorQueue_overridesCandidate_nodesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class InspectorUsageLedgerApiMock final : public IInspectorUsageLedgerApiBase
{
public:
	InspectorUsageLedgerApiMock() : IInspectorUsageLedgerApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				inspectorUsage_ledgerRowsGet,
				(const inspectorUsage_ledgerRowsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsage_ledgerTotalsGet,
				(const inspectorUsage_ledgerTotalsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class InspectorUsageReportingApiMock final : public IInspectorUsageReportingApiBase
{
public:
	InspectorUsageReportingApiMock() : IInspectorUsageReportingApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				inspectorUsage_reportingDry_runGet,
				(const inspectorUsage_reportingDry_runGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsage_reportingRunsGet,
				(const inspectorUsage_reportingRunsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsage_reportingRunsRunIdGet,
				(const inspectorUsage_reportingRunsRunIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsage_reportingTenantsTenantNameBatchesGet,
				(const inspectorUsage_reportingTenantsTenantNameBatchesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				inspectorUsage_reportingBackfillPost,
				(const inspectorUsage_reportingBackfillPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class InspectorWorkerRuntimeApiMock final : public IInspectorWorkerRuntimeApiBase
{
public:
	InspectorWorkerRuntimeApiMock() : IInspectorWorkerRuntimeApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				inspectorWorker_runtimesGet,
				(const inspectorWorker_runtimesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class JiraResourcesApiMock final : public IJiraResourcesApiBase
{
public:
	JiraResourcesApiMock() : IJiraResourcesApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				watchtowerJiraBulk_upsertPost,
				(const watchtowerJiraBulk_upsertPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				watchtowerJiraBulk_getPost,
				(const watchtowerJiraBulk_getPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				watchtowerJiraSearchPost,
				(const watchtowerJiraSearchPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				watchtowerJiraCreatemetaProjectGet,
				(const watchtowerJiraCreatemetaProjectGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				watchtowerJiraCreatemetaUpsertPost,
				(const watchtowerJiraCreatemetaUpsertPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				watchtowerJiraReferenceProjectKindGet,
				(const watchtowerJiraReferenceProjectKindGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				watchtowerJiraReferenceUpsertPost,
				(const watchtowerJiraReferenceUpsertPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class MarketplaceApiMock final : public IMarketplaceApiBase
{
public:
	MarketplaceApiMock() : IMarketplaceApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				marketplaceSignupGet,
				(const marketplaceSignupGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceSignupPost,
				(const marketplaceSignupPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceOnboardingDetailsPost,
				(const marketplaceOnboardingDetailsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceOnboardingAvailabilityGet,
				(const marketplaceOnboardingAvailabilityGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceOnboardingCallbackPost,
				(const marketplaceOnboardingCallbackPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceProvisioningPreparePost,
				(const marketplaceProvisioningPreparePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceProvisioningPost,
				(const marketplaceProvisioningPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceOnboardingStateGet,
				(const marketplaceOnboardingStateGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceAppsGet,
				(const marketplaceAppsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class MarketplaceAdminApiMock final : public IMarketplaceAdminApiBase
{
public:
	MarketplaceAdminApiMock() : IMarketplaceAdminApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				marketplaceAdminProcurement_checkGet,
				(const marketplaceAdminProcurement_checkGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceAdminAccountsAccountIdProcurement_checkGet,
				(const marketplaceAdminAccountsAccountIdProcurement_checkGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceAdminOrganizationsBackfillPost,
				(const marketplaceAdminOrganizationsBackfillPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceAdminBootstrapPost,
				(const marketplaceAdminBootstrapPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceAdminBootstrap_fullPost,
				(const marketplaceAdminBootstrap_fullPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceAdminInsert_entitlementPost,
				(const marketplaceAdminInsert_entitlementPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceAdminCustomerCustomerIdDelete,
				(const marketplaceAdminCustomerCustomerIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceAdminAccountsAccountIdResetPost,
				(const marketplaceAdminAccountsAccountIdResetPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceAdminAccountsAccountIdReset_and_delete_tenantPost,
				(const marketplaceAdminAccountsAccountIdReset_and_delete_tenantPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceAdminCustomerCustomerIdLockPost,
				(const marketplaceAdminCustomerCustomerIdLockPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceAdminCustomerCustomerIdUnlockPost,
				(const marketplaceAdminCustomerCustomerIdUnlockPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceAdminAccountsAccountIdRejectPost,
				(const marketplaceAdminAccountsAccountIdRejectPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				marketplaceAdminTenantsTenantNameHostnamesHostnameDelete,
				(const marketplaceAdminTenantsTenantNameHostnamesHostnameDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class McpStateApiMock final : public IMcpStateApiBase
{
public:
	McpStateApiMock() : IMcpStateApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				mcp_oauthStateCollectionKeyGet,
				(const mcp_oauthStateCollectionKeyGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				mcp_oauthStateCollectionKeyPut,
				(const mcp_oauthStateCollectionKeyPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				mcp_oauthStateCollectionKeyDelete,
				(const mcp_oauthStateCollectionKeyDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class MusubiGraphApiMock final : public IMusubiGraphApiBase
{
public:
	MusubiGraphApiMock() : IMusubiGraphApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				musubiExecute_graphPost,
				(const musubiExecute_graphPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				musubiExecute_graphExecutionIdStatusGet,
				(const musubiExecute_graphExecutionIdStatusGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				musubiExecute_graphExecutionIdStatusPost,
				(const musubiExecute_graphExecutionIdStatusPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				musubiExecute_graphExecutionIdGraph_resultGet,
				(const musubiExecute_graphExecutionIdGraph_resultGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				musubiExecute_graphExecutionIdNode_inputNodeIdGet,
				(const musubiExecute_graphExecutionIdNode_inputNodeIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				musubiExecute_graphExecutionIdGraphGet,
				(const musubiExecute_graphExecutionIdGraphGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				musubiExecute_graphExecutionIdNode_completeNodeIdPost,
				(const musubiExecute_graphExecutionIdNode_completeNodeIdPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				musubiExecute_graphExecutionIdNode_errorNodeIdPost,
				(const musubiExecute_graphExecutionIdNode_errorNodeIdPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				musubiExecute_graphExecutionIdLogsPost,
				(const musubiExecute_graphExecutionIdLogsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				musubiChaosQueueNameActiveGet,
				(const musubiChaosQueueNameActiveGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class MyOrganizationApiMock final : public IMyOrganizationApiBase
{
public:
	MyOrganizationApiMock() : IMyOrganizationApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				my_organizationGet,
				(const my_organizationGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				my_organizationPut,
				(const my_organizationPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class NodeDefinitionApiMock final : public INodeDefinitionApiBase
{
public:
	NodeDefinitionApiMock() : INodeDefinitionApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				node_definitionsFlatGet,
				(const node_definitionsFlatGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				node_definitionsNestedGet,
				(const node_definitionsNestedGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class NtpApiMock final : public INtpApiBase
{
public:
	NtpApiMock() : INtpApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				datetimeGet,
				(const datetimeGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class OrganizationTenantApiMock final : public IOrganizationTenantApiBase
{
public:
	OrganizationTenantApiMock() : IOrganizationTenantApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				organizationsOrganizationIdTenantsSpin_upPost,
				(const organizationsOrganizationIdTenantsSpin_upPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				organizationsOrganizationIdTenantsCheck_addressGet,
				(const organizationsOrganizationIdTenantsCheck_addressGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				organizationsOrganizationIdTenantsTenantIdPreparePost,
				(const organizationsOrganizationIdTenantsTenantIdPreparePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				organizationsOrganizationIdTenantsTenantIdProvisionPost,
				(const organizationsOrganizationIdTenantsTenantIdProvisionPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				organizationsOrganizationIdTenantsTenantIdStatusGet,
				(const organizationsOrganizationIdTenantsTenantIdStatusGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				organizationsOrganizationIdTenantsTenantIdDelete,
				(const organizationsOrganizationIdTenantsTenantIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class PeopleApiMock final : public IPeopleApiBase
{
public:
	PeopleApiMock() : IPeopleApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				productionrosterPeopleGet,
				(const productionrosterPeopleGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				productionrosterPeoplePost,
				(const productionrosterPeoplePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				productionrosterPeopleIdPut,
				(const productionrosterPeopleIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				productionrosterPeopleIdDelete,
				(const productionrosterPeopleIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class PingApiMock final : public IPingApiBase
{
public:
	PingApiMock() : IPingApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				pingGet,
				(const pingGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class ProjectsApiMock final : public IProjectsApiBase
{
public:
	ProjectsApiMock() : IProjectsApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				productionrosterProjectsGet,
				(const productionrosterProjectsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				productionrosterProjectsPost,
				(const productionrosterProjectsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				productionrosterProjectsIdPut,
				(const productionrosterProjectsIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				productionrosterProjectsIdDelete,
				(const productionrosterProjectsIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class SequenceApiMock final : public ISequenceApiBase
{
public:
	SequenceApiMock() : ISequenceApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				sequencesGet,
				(const sequencesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				sequencesPut,
				(const sequencesPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				sequencesKeysKeyGet,
				(const sequencesKeysKeyGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				sequencesKeysKeyDelete,
				(const sequencesKeysKeyDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				sequencesKeysOldKeyKeyPut,
				(const sequencesKeysOldKeyKeyPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				sequencesKeysDelete,
				(const sequencesKeysDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				sequencesReference_typeReferenceTypeReference_idReferenceIdDelete,
				(const sequencesReference_typeReferenceTypeReference_idReferenceIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class ShopifyApiMock final : public IShopifyApiBase
{
public:
	ShopifyApiMock() : IShopifyApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				spacesSpaceIdVendorsShopifyProductsProductIdGet,
				(const spacesSpaceIdVendorsShopifyProductsProductIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdVendorsShopifyProductsVariantsGet,
				(const spacesSpaceIdVendorsShopifyProductsVariantsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdVendorsShopifyPut,
				(const spacesSpaceIdVendorsShopifyPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				vendorsShopifyValidatePut,
				(const vendorsShopifyValidatePutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				vendorsShopifyUsersUserIdStorefrontsGet,
				(const vendorsShopifyUsersUserIdStorefrontsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdVendorsShopifyCartsPost,
				(const spacesSpaceIdVendorsShopifyCartsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdVendorsShopifyCartsCartIdGet,
				(const spacesSpaceIdVendorsShopifyCartsCartIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdVendorsShopifyCartsCartIdPut,
				(const spacesSpaceIdVendorsShopifyCartsCartIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdVendorsShopifyCartsCartIdCheckout_infoGet,
				(const spacesSpaceIdVendorsShopifyCartsCartIdCheckout_infoGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class SnapshotApiMock final : public ISnapshotApiBase
{
public:
	SnapshotApiMock() : ISnapshotApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				productionrosterSnapshotGet,
				(const productionrosterSnapshotGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class SpaceApiMock final : public ISpaceApiBase
{
public:
	SpaceApiMock() : ISpaceApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				spacesSpaceIdDelete,
				(const spacesSpaceIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesDelete,
				(const spacesDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdMultiplayer_objectsKmlGet,
				(const spacesSpaceIdMultiplayer_objectsKmlGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdDuplicatePost,
				(const spacesSpaceIdDuplicatePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdExportPost,
				(const spacesSpaceIdExportPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesExportsExportIdImportPost,
				(const spacesExportsExportIdImportPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdCheckpointsPost,
				(const spacesSpaceIdCheckpointsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdSnapshotPost,
				(const spacesSpaceIdSnapshotPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdSnapshotsGet,
				(const spacesSpaceIdSnapshotsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSnapshotsGet,
				(const spacesSnapshotsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdSnapshotsCancelPost,
				(const spacesSpaceIdSnapshotsCancelPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdSnapshotsSnapshotIdDelete,
				(const spacesSpaceIdSnapshotsSnapshotIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdSnapshotsSnapshotIdApplyPost,
				(const spacesSpaceIdSnapshotsSnapshotIdApplyPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class SupportApiMock final : public ISupportApiBase
{
public:
	SupportApiMock() : ISupportApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				supportIssuesPost,
				(const supportIssuesPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				supportIssuesIssueKeyAttachmentsPost,
				(const supportIssuesIssueKeyAttachmentsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class SystemClaimApiMock final : public ISystemClaimApiBase
{
public:
	SystemClaimApiMock() : ISystemClaimApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				batonSystemsSystemIdClaimPost,
				(const batonSystemsSystemIdClaimPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				batonSystemsSystemIdClaimDelete,
				(const batonSystemsSystemIdClaimDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class SystemHistoryApiMock final : public ISystemHistoryApiBase
{
public:
	SystemHistoryApiMock() : ISystemHistoryApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				batonSystemsSystemIdHistoryGet,
				(const batonSystemsSystemIdHistoryGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class SystemQueueApiMock final : public ISystemQueueApiBase
{
public:
	SystemQueueApiMock() : ISystemQueueApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				batonSystemsSystemIdQueueGet,
				(const batonSystemsSystemIdQueueGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				batonSystemsSystemIdQueuePost,
				(const batonSystemsSystemIdQueuePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				batonSystemsSystemIdQueueDelete,
				(const batonSystemsSystemIdQueueDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class SystemsApiMock final : public ISystemsApiBase
{
public:
	SystemsApiMock() : ISystemsApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				batonSystemsGet,
				(const batonSystemsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				batonSystemsPost,
				(const batonSystemsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				batonSystemsIdGet,
				(const batonSystemsIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				batonSystemsIdPut,
				(const batonSystemsIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				batonSystemsIdDelete,
				(const batonSystemsIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class SystemThumbnailApiMock final : public ISystemThumbnailApiBase
{
public:
	SystemThumbnailApiMock() : ISystemThumbnailApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				batonSystemsIdThumbnailPut,
				(const batonSystemsIdThumbnailPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class TenantAppUrlApiMock final : public ITenantAppUrlApiBase
{
public:
	TenantAppUrlApiMock() : ITenantAppUrlApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				tenantsTenantNameApp_urlsProvisionableGet,
				(const tenantsTenantNameApp_urlsProvisionableGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsTenantNameApp_urlsAppKeyPost,
				(const tenantsTenantNameApp_urlsAppKeyPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsTenantNameApp_urlsAppKeyGet,
				(const tenantsTenantNameApp_urlsAppKeyGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class TicketedSpaceApiMock final : public ITicketedSpaceApiBase
{
public:
	TicketedSpaceApiMock() : ITicketedSpaceApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				spacesSpaceIdEventsPost,
				(const spacesSpaceIdEventsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdEventsEventIdPut,
				(const spacesSpaceIdEventsEventIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesEventsGet,
				(const spacesEventsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPut,
				(const spacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacesTicketedGet,
				(const spacesTicketedGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				vendorsVendorNameOauthGet,
				(const vendorsVendorNameOauthGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				vendorsVendorNameUsersUserIdProvider_infoGet,
				(const vendorsVendorNameUsersUserIdProvider_infoGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class UsageReporterDevApiMock final : public IUsageReporterDevApiBase
{
public:
	UsageReporterDevApiMock() : IUsageReporterDevApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				billingDevReport_triggerPost,
				(const billingDevReport_triggerPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class UserSustainedActivityApiMock final : public IUserSustainedActivityApiBase
{
public:
	UserSustainedActivityApiMock() : IUserSustainedActivityApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				usersSustained_activityGet,
				(const usersSustained_activityGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class VersionsApiMock final : public IVersionsApiBase
{
public:
	VersionsApiMock() : IVersionsApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				rsionsGet,
				(const rsionsGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class VersionsAggregatorApiMock final : public IVersionsAggregatorApiBase
{
public:
	VersionsAggregatorApiMock() : IVersionsAggregatorApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				rsions_aggregatedGet,
				(const rsions_aggregatedGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class WazzupAgentOverridesApiMock final : public IWazzupAgentOverridesApiBase
{
public:
	WazzupAgentOverridesApiMock() : IWazzupAgentOverridesApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				wazzupAgent_overridesGet,
				(const wazzupAgent_overridesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				wazzupAgent_overridesDelete,
				(const wazzupAgent_overridesDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				wazzupAgent_overridesAgentIdPut,
				(const wazzupAgent_overridesAgentIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				wazzupAgent_overridesAgentIdDelete,
				(const wazzupAgent_overridesAgentIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class WazzupCapabilitiesApiMock final : public IWazzupCapabilitiesApiBase
{
public:
	WazzupCapabilitiesApiMock() : IWazzupCapabilitiesApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				wazzupCapabilitiesGet,
				(const wazzupCapabilitiesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class WazzupLlmApiMock final : public IWazzupLlmApiBase
{
public:
	WazzupLlmApiMock() : IWazzupLlmApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				wazzupLlmProvidersGet,
				(const wazzupLlmProvidersGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				wazzupLlmGeneratePost,
				(const wazzupLlmGeneratePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class WazzupSessionsApiMock final : public IWazzupSessionsApiBase
{
public:
	WazzupSessionsApiMock() : IWazzupSessionsApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				wazzupSessionsGet,
				(const wazzupSessionsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				wazzupSessionsPost,
				(const wazzupSessionsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				wazzupSessionsIdGet,
				(const wazzupSessionsIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				wazzupSessionsIdPut,
				(const wazzupSessionsIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				wazzupSessionsIdDelete,
				(const wazzupSessionsIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class WazzupStorageApiMock final : public IWazzupStorageApiBase
{
public:
	WazzupStorageApiMock() : IWazzupStorageApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				wazzupStorageCdn_fetchPost,
				(const wazzupStorageCdn_fetchPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				wazzupStorageLegacyTenantObjectsGet,
				(const wazzupStorageLegacyTenantObjectsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				wazzupStorageLegacyTenantObjectGet,
				(const wazzupStorageLegacyTenantObjectGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};


} // namespace csp::services::generated::aggregationservice