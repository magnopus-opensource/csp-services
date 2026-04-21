

#pragma once

#include "Services/AggregationService/Dto.h"
#include "Services/AggregationService/IAggregationServiceApiBase.h"

#include <gmock/gmock.h>

namespace csp::services::generated::aggregationservice
{


class AloMovesApiMock final : public IAloMovesApiBase
{
public:
	AloMovesApiMock() : IAloMovesApiBase(nullptr)
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
	AnalyticsApiMock() : IAnalyticsApiBase(nullptr)
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

class CacheApiMock final : public ICacheApiBase
{
public:
	CacheApiMock() : ICacheApiBase(nullptr)
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
	CoalescenceApiMock() : ICoalescenceApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				coalescenceIdPost,
				(const coalescenceIdPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class ConfigurationApiMock final : public IConfigurationApiBase
{
public:
	ConfigurationApiMock() : IConfigurationApiBase(nullptr)
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

class ExternalServiceProxyApiMock final : public IExternalServiceProxyApiBase
{
public:
	ExternalServiceProxyApiMock() : IExternalServiceProxyApiBase(nullptr)
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
	GroupRolesApiMock() : IGroupRolesApiBase(nullptr)
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
	InspectorApiMock() : IInspectorApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				inspectorExecutionsGet,
				(const inspectorExecutionsGetParams&,
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
				inspectorQueue_healthQueueNameDlqPurgePost,
				(const inspectorQueue_healthQueueNameDlqPurgePostParams&,
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
};

class InspectorAuditTrailApiMock final : public IInspectorAuditTrailApiBase
{
public:
	InspectorAuditTrailApiMock() : IInspectorAuditTrailApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				inspectorAudit_trailGet,
				(const inspectorAudit_trailGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class InspectorBugReportApiMock final : public IInspectorBugReportApiBase
{
public:
	InspectorBugReportApiMock() : IInspectorBugReportApiBase(nullptr)
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

class InspectorNodeDefinitionApiMock final : public IInspectorNodeDefinitionApiBase
{
public:
	InspectorNodeDefinitionApiMock() : IInspectorNodeDefinitionApiBase(nullptr)
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

class InspectorWorkerRuntimeApiMock final : public IInspectorWorkerRuntimeApiBase
{
public:
	InspectorWorkerRuntimeApiMock() : IInspectorWorkerRuntimeApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				inspectorWorker_runtimesGet,
				(const inspectorWorker_runtimesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class MusubiGraphApiMock final : public IMusubiGraphApiBase
{
public:
	MusubiGraphApiMock() : IMusubiGraphApiBase(nullptr)
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
				musubiChaosQueueNameActiveGet,
				(const musubiChaosQueueNameActiveGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class NodeDefinitionApiMock final : public INodeDefinitionApiBase
{
public:
	NodeDefinitionApiMock() : INodeDefinitionApiBase(nullptr)
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
	NtpApiMock() : INtpApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				datetimeGet,
				(const datetimeGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class PingApiMock final : public IPingApiBase
{
public:
	PingApiMock() : IPingApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				pingGet,
				(const pingGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class SequenceApiMock final : public ISequenceApiBase
{
public:
	SequenceApiMock() : ISequenceApiBase(nullptr)
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
	ShopifyApiMock() : IShopifyApiBase(nullptr)
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

class SpaceApiMock final : public ISpaceApiBase
{
public:
	SpaceApiMock() : ISpaceApiBase(nullptr)
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
};

class TicketedSpaceApiMock final : public ITicketedSpaceApiBase
{
public:
	TicketedSpaceApiMock() : ITicketedSpaceApiBase(nullptr)
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

class UserSustainedActivityApiMock final : public IUserSustainedActivityApiBase
{
public:
	UserSustainedActivityApiMock() : IUserSustainedActivityApiBase(nullptr)
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
	VersionsApiMock() : IVersionsApiBase(nullptr)
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
	VersionsAggregatorApiMock() : IVersionsAggregatorApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				rsions_aggregatedGet,
				(const rsions_aggregatedGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};


} // namespace csp::services::generated::aggregationservice