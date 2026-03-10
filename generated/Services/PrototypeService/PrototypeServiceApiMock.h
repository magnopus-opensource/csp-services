

#pragma once

#include "Services/PrototypeService/Dto.h"
#include "Services/PrototypeService/IPrototypeServiceApiBase.h"

#include <gmock/gmock.h>

namespace csp::services::generated::prototypeservice
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

class AssetDetailApiMock final : public IAssetDetailApiBase
{
public:
	AssetDetailApiMock() : IAssetDetailApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				prototypesPrototypeIdAsset_detailsPost,
				(const prototypesPrototypeIdAsset_detailsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesPrototypeIdAsset_detailsGet,
				(const prototypesPrototypeIdAsset_detailsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesPrototypeIdAsset_detailsBulkPut,
				(const prototypesPrototypeIdAsset_detailsBulkPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesPrototypeIdAsset_detailsAssetDetailIdGet,
				(const prototypesPrototypeIdAsset_detailsAssetDetailIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesPrototypeIdAsset_detailsAssetDetailIdPut,
				(const prototypesPrototypeIdAsset_detailsAssetDetailIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesPrototypeIdAsset_detailsAssetDetailIdDelete,
				(const prototypesPrototypeIdAsset_detailsAssetDetailIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesAsset_detailsGet,
				(const prototypesAsset_detailsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPost,
				(const prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesPrototypeIdAsset_detailsAssetDetailIdInternal_copyPost,
				(const prototypesPrototypeIdAsset_detailsAssetDetailIdInternal_copyPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdPut,
				(const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdDelete,
				(const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdPut,
				(const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdDelete,
				(const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesAsset_detailsAsset_pipeline_modelGet,
				(const prototypesAsset_detailsAsset_pipeline_modelGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelGet,
				(const prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelPut,
				(const prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelPutParams&,
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

class PrototypeApiMock final : public IPrototypeApiBase
{
public:
	PrototypeApiMock() : IPrototypeApiBase(nullptr)
	{
	}

	MOCK_METHOD(void,
				prototypesPost,
				(const prototypesPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesGet,
				(const prototypesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesDelete,
				(const prototypesDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesGroup_ownedOriginalGroupIdDuplicateNewGroupIdPost,
				(const prototypesGroup_ownedOriginalGroupIdDuplicateNewGroupIdPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesGroup_ownedOriginalGroupIdExportsExportIdPost,
				(const prototypesGroup_ownedOriginalGroupIdExportsExportIdPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesGroup_ownedNewGroupIdExportsExportIdImportPost,
				(const prototypesGroup_ownedNewGroupIdExportsExportIdImportPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesBulkPut,
				(const prototypesBulkPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesIdsGet,
				(const prototypesIdsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesCountGet,
				(const prototypesCountGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesIdGet,
				(const prototypesIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesIdPut,
				(const prototypesIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesIdDelete,
				(const prototypesIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesNameNameGet,
				(const prototypesNameNameGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesDeletePost,
				(const prototypesDeletePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesPrototypeIdStatePut,
				(const prototypesPrototypeIdStatePutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesPrototypeIdStateGet,
				(const prototypesPrototypeIdStateGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				prototypesMost_referencedGet,
				(const prototypesMost_referencedGetParams&,
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


} // namespace csp::services::generated::prototypeservice