

#pragma once

#include "Services/SpatialDataService/Dto.h"
#include "Services/SpatialDataService/ISpatialDataServiceApiBase.h"

#include <gmock/gmock.h>

namespace csp::services::generated::spatialdataservice
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

class AnchorsApiMock final : public IAnchorsApiBase
{
public:
	AnchorsApiMock() : IAnchorsApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				anchorsIdGet,
				(const anchorsIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				anchorsIdPut,
				(const anchorsIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				anchorsIdDelete,
				(const anchorsIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				anchorsPost,
				(const anchorsPostParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				anchorsDelete,
				(const anchorsDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				anchorsGet,
				(const anchorsGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				anchor_resolutionsPost,
				(const anchor_resolutionsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				anchor_resolutionsGet,
				(const anchor_resolutionsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				anchor_resolutionsStatsGet,
				(const anchor_resolutionsStatsGetParams&,
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

class PersonalPointOfInterestApiMock final : public IPersonalPointOfInterestApiBase
{
public:
	PersonalPointOfInterestApiMock() : IPersonalPointOfInterestApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				usersUserIdPoiGet,
				(const usersUserIdPoiGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdPoiPoiIdPut,
				(const usersUserIdPoiPoiIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdPoiPoiIdDelete,
				(const usersUserIdPoiPoiIdDeleteParams&,
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

class PointOfInterestApiMock final : public IPointOfInterestApiBase
{
public:
	PointOfInterestApiMock() : IPointOfInterestApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				poiIdGet,
				(const poiIdGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				poiIdPut,
				(const poiIdPutParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				poiIdDelete,
				(const poiIdDeleteParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				poi_liteGet,
				(const poi_liteGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				poi_idGet,
				(const poi_idGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				poiGet,
				(const poiGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				poiPost,
				(const poiPostParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				poiPut,
				(const poiPutParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				poiDelete,
				(const poiDeleteParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				poiBulkPut,
				(const poiBulkPutParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				poiIdPartial_updatePut,
				(const poiIdPartial_updatePutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				poiTagsGet,
				(const poiTagsGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class PositionApiMock final : public IPositionApiBase
{
public:
	PositionApiMock() : IPositionApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				usersUserIdPositionsGet,
				(const usersUserIdPositionsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdPositionsPost,
				(const usersUserIdPositionsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersPositionsLatestGet,
				(const usersPositionsLatestGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdPositionsLatestGet,
				(const usersUserIdPositionsLatestGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdPositionsPositionIdGet,
				(const usersUserIdPositionsPositionIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdPositionsPositionIdDelete,
				(const usersUserIdPositionsPositionIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdPositionsLatestGet,
				(const groupsGroupIdPositionsLatestGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsPositionsLatestGet,
				(const groupsPositionsLatestGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersPositionsGet,
				(const usersPositionsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class PositionSpoofingApiMock final : public IPositionSpoofingApiBase
{
public:
	PositionSpoofingApiMock() : IPositionSpoofingApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				usersUserIdPositionsSpoofPost,
				(const usersUserIdPositionsSpoofPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdPositionsSpoofGet,
				(const usersUserIdPositionsSpoofGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdPositionsSpoofDelete,
				(const usersUserIdPositionsSpoofDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				positionsSpoofUsersGet,
				(const positionsSpoofUsersGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
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

class SpaceTimeApiMock final : public ISpaceTimeApiBase
{
public:
	SpaceTimeApiMock() : ISpaceTimeApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				usersUserIdSpacetimeIdGet,
				(const usersUserIdSpacetimeIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdSpacetimeIdDelete,
				(const usersUserIdSpacetimeIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdSpacetimeIdPut,
				(const usersUserIdSpacetimeIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdSpacetimePost,
				(const usersUserIdSpacetimePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				spacetimeGet,
				(const spacetimeGetParams&,
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


} // namespace csp::services::generated::spatialdataservice