

#pragma once

#include "Services/MultiplayerService/Dto.h"
#include "Services/MultiplayerService/IMultiplayerServiceApiBase.h"

#include <gmock/gmock.h>

namespace csp::services::generated::multiplayerservice
{


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

class AreaOfInterestApiMock final : public IAreaOfInterestApiBase
{
public:
	AreaOfInterestApiMock() : IAreaOfInterestApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				area_of_interestUserIdResetPut,
				(const area_of_interestUserIdResetPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				area_of_interestUserIdGet,
				(const area_of_interestUserIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class AssignmentsApiMock final : public IAssignmentsApiBase
{
public:
	AssignmentsApiMock() : IAssignmentsApiBase(nullptr)
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

class ClientConnectionApiMock final : public IClientConnectionApiBase
{
public:
	ClientConnectionApiMock() : IClientConnectionApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				client_connectionsGet,
				(const client_connectionsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				client_connectionsRequest_to_disconnectPost,
				(const client_connectionsRequest_to_disconnectPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				client_connectionsMeCleanupDelete,
				(const client_connectionsMeCleanupDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class ConfigApiMock final : public IConfigApiBase
{
public:
	ConfigApiMock() : IConfigApiBase(nullptr)
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

class ContentReferenceApiMock final : public IContentReferenceApiBase
{
public:
	ContentReferenceApiMock() : IContentReferenceApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				objectsContent_changedPost,
				(const objectsContent_changedPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class DaigramsApiMock final : public IDaigramsApiBase
{
public:
	DaigramsApiMock() : IDaigramsApiBase(nullptr)
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
	DepartmentsApiMock() : IDepartmentsApiBase(nullptr)
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
	EffortResourcesApiMock() : IEffortResourcesApiBase(nullptr)
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

class EventMessageApiMock final : public IEventMessageApiBase
{
public:
	EventMessageApiMock() : IEventMessageApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				eventsPost,
				(const eventsPostParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class JiraResourcesApiMock final : public IJiraResourcesApiBase
{
public:
	JiraResourcesApiMock() : IJiraResourcesApiBase(nullptr)
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

class ObjectMessageApiMock final : public IObjectMessageApiBase
{
public:
	ObjectMessageApiMock() : IObjectMessageApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				objectsPost,
				(const objectsPostParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				objectsGet,
				(const objectsGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				objectsDelete,
				(const objectsDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				objectsBatchPost,
				(const objectsBatchPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				objectsOwnersUserIdBatchPost,
				(const objectsOwnersUserIdBatchPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				object_documentsGet,
				(const object_documentsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				objectsImportExportIdPost,
				(const objectsImportExportIdPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				objectsIdGet,
				(const objectsIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				objectsIdPut,
				(const objectsIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				objectsIdDelete,
				(const objectsIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				objectsIdPartial_updatePut,
				(const objectsIdPartial_updatePutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class PeopleApiMock final : public IPeopleApiBase
{
public:
	PeopleApiMock() : IPeopleApiBase(nullptr)
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
	PingApiMock() : IPingApiBase(nullptr)
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
	ProjectsApiMock() : IProjectsApiBase(nullptr)
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

class ScopeLeaderApiMock final : public IScopeLeaderApiBase
{
public:
	ScopeLeaderApiMock() : IScopeLeaderApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				scopesScopeIdLeaderGet,
				(const scopesScopeIdLeaderGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				scopesScopeIdLeader_electionPost,
				(const scopesScopeIdLeader_electionPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class ScopesApiMock final : public IScopesApiBase
{
public:
	ScopesApiMock() : IScopesApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				scopesPost,
				(const scopesPostParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				scopesPut,
				(const scopesPutParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				scopesGet,
				(const scopesGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				scopesIdGet,
				(const scopesIdGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				scopesIdDelete,
				(const scopesIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				scopesIdPut,
				(const scopesIdPutParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				scopesReferenceTypeReferenceTypeReferenceIdReferenceIdGet,
				(const scopesReferenceTypeReferenceTypeReferenceIdReferenceIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				scopesReferenceTypeReferenceTypeReferenceIdReferenceIdDelete,
				(const scopesReferenceTypeReferenceTypeReferenceIdReferenceIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class SnapshotApiMock final : public ISnapshotApiBase
{
public:
	SnapshotApiMock() : ISnapshotApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				productionrosterSnapshotGet,
				(const productionrosterSnapshotGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class SystemClaimApiMock final : public ISystemClaimApiBase
{
public:
	SystemClaimApiMock() : ISystemClaimApiBase(nullptr)
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
	SystemHistoryApiMock() : ISystemHistoryApiBase(nullptr)
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
	SystemQueueApiMock() : ISystemQueueApiBase(nullptr)
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
	SystemsApiMock() : ISystemsApiBase(nullptr)
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
	SystemThumbnailApiMock() : ISystemThumbnailApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				batonSystemsIdThumbnailPut,
				(const batonSystemsIdThumbnailPutParams&,
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

class WazzupAgentOverridesApiMock final : public IWazzupAgentOverridesApiBase
{
public:
	WazzupAgentOverridesApiMock() : IWazzupAgentOverridesApiBase(nullptr)
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
	WazzupCapabilitiesApiMock() : IWazzupCapabilitiesApiBase(nullptr)
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
	WazzupLlmApiMock() : IWazzupLlmApiBase(nullptr)
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
	WazzupSessionsApiMock() : IWazzupSessionsApiBase(nullptr)
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
	WazzupStorageApiMock() : IWazzupStorageApiBase(nullptr)
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


} // namespace csp::services::generated::multiplayerservice