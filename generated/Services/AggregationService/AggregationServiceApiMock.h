

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