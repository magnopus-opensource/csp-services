

#pragma once

#include "Services/UserService/Dto.h"
#include "Services/UserService/IUserServiceApiBase.h"

#include <gmock/gmock.h>

namespace csp::services::generated::userservice
{


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

class ApiKeyApiMock final : public IApiKeyApiBase
{
public:
	ApiKeyApiMock() : IApiKeyApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				api_keysPost,
				(const api_keysPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				api_keysGet,
				(const api_keysGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				api_keysSettingsGet,
				(const api_keysSettingsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				api_keysTenantGet,
				(const api_keysTenantGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				api_keysJtiDelete,
				(const api_keysJtiDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				api_keysTenantJtiRevokePost,
				(const api_keysTenantJtiRevokePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				api_keysRevoked_jti_setGet,
				(const api_keysRevoked_jti_setGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class ApplicationSecretsApiMock final : public IApplicationSecretsApiBase
{
public:
	ApplicationSecretsApiMock() : IApplicationSecretsApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				application_secretsApplicationNameGet,
				(const application_secretsApplicationNameGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				application_secretsApplicationNamePost,
				(const application_secretsApplicationNamePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				application_secretsApplicationNameEnvVarNamePut,
				(const application_secretsApplicationNameEnvVarNamePutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				application_secretsApplicationNameEnvVarNameDelete,
				(const application_secretsApplicationNameEnvVarNameDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				application_secretsQuota_featuresGet,
				(const application_secretsQuota_featuresGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				application_secretsCorkage_enabledGet,
				(const application_secretsCorkage_enabledGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				application_secretsApplicationsGet,
				(const application_secretsApplicationsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class ApplicationSettingsApiMock final : public IApplicationSettingsApiBase
{
public:
	ApplicationSettingsApiMock() : IApplicationSettingsApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				applicationsApplicationNameSettingsContextPut,
				(const applicationsApplicationNameSettingsContextPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				applicationsApplicationNameSettingsContextGet,
				(const applicationsApplicationNameSettingsContextGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				applicationsApplicationNameSettingsContextDelete,
				(const applicationsApplicationNameSettingsContextDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsTenantApplicationsApplicationNameSettingsContextGet,
				(const tenantsTenantApplicationsApplicationNameSettingsContextGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				applicationsApplicationNameSettingsGet,
				(const applicationsApplicationNameSettingsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				applicationsApplicationNameSettingsDelete,
				(const applicationsApplicationNameSettingsDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				applicationsApplicationNameSettingsContextKeynameDelete,
				(const applicationsApplicationNameSettingsContextKeynameDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				global_settingsGet,
				(const global_settingsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				global_settingsApplicationNameContextPut,
				(const global_settingsApplicationNameContextPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				global_settingsApplicationNameContextGet,
				(const global_settingsApplicationNameContextGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				global_settingsApplicationNameContextDelete,
				(const global_settingsApplicationNameContextDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				global_settingsApplicationNameGet,
				(const global_settingsApplicationNameGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				global_settingsApplicationNameDelete,
				(const global_settingsApplicationNameDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				global_settingsApplicationNameContextKeynameDelete,
				(const global_settingsApplicationNameContextKeynameDeleteParams&,
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

class AuthenticationApiMock final : public IAuthenticationApiBase
{
public:
	AuthenticationApiMock() : IAuthenticationApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				usersLoginPost,
				(const usersLoginPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersLogin_guestPost,
				(const usersLogin_guestPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersLogin_socialPost,
				(const usersLogin_socialPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersSocialIdentity_capturePost,
				(const usersSocialIdentity_capturePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				social_providersProviderGet,
				(const social_providersProviderGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersLogoutPost,
				(const usersLogoutPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersRefreshPost,
				(const usersRefreshPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersExchange_tenancyPost,
				(const usersExchange_tenancyPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				authPlus_address_identitiesGet,
				(const authPlus_address_identitiesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				authPlus_address_identitiesTenantNameGet,
				(const authPlus_address_identitiesTenantNameGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				authPlus_address_identitiesBatchPost,
				(const authPlus_address_identitiesBatchPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersExchange_profilePost,
				(const usersExchange_profilePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class AvatarsApiMock final : public IAvatarsApiBase
{
public:
	AvatarsApiMock() : IAvatarsApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				usersUserIdAvatarsPost,
				(const usersUserIdAvatarsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdAvatarsAvatarIdGet,
				(const usersUserIdAvatarsAvatarIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdAvatarsAvatarIdPut,
				(const usersUserIdAvatarsAvatarIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdAvatarsAvatarIdDelete,
				(const usersUserIdAvatarsAvatarIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdAvatarsAvatarIdExistsGet,
				(const usersUserIdAvatarsAvatarIdExistsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class BillingMatrixApiMock final : public IBillingMatrixApiBase
{
public:
	BillingMatrixApiMock() : IBillingMatrixApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				billing_matrixMetricsGet,
				(const billing_matrixMetricsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixMetricsPost,
				(const billing_matrixMetricsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixMetricsMetricKeyGet,
				(const billing_matrixMetricsMetricKeyGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixMetricsMetricKeyPut,
				(const billing_matrixMetricsMetricKeyPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixMetricsMetricKeyDelete,
				(const billing_matrixMetricsMetricKeyDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixMetricsMetricKeyHistoryGet,
				(const billing_matrixMetricsMetricKeyHistoryGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixMetricsMetricKeyRestoreTargetVersionPost,
				(const billing_matrixMetricsMetricKeyRestoreTargetVersionPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixBase_typesGet,
				(const billing_matrixBase_typesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixEntriesGet,
				(const billing_matrixEntriesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixEntriesPost,
				(const billing_matrixEntriesPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixEntriesSearchGet,
				(const billing_matrixEntriesSearchGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixEntriesIdGet,
				(const billing_matrixEntriesIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixEntriesIdPut,
				(const billing_matrixEntriesIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixEntriesIdDelete,
				(const billing_matrixEntriesIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixEntriesImportPost,
				(const billing_matrixEntriesImportPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixEntriesIdHistoryGet,
				(const billing_matrixEntriesIdHistoryGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixEntriesIdRestoreTargetVersionPost,
				(const billing_matrixEntriesIdRestoreTargetVersionPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixOverridesGet,
				(const billing_matrixOverridesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixOverridesPost,
				(const billing_matrixOverridesPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixEntriesMatrixEntryIdOverridesGet,
				(const billing_matrixEntriesMatrixEntryIdOverridesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixOverridesBy_entriesGet,
				(const billing_matrixOverridesBy_entriesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixOverridesIdGet,
				(const billing_matrixOverridesIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixOverridesIdPut,
				(const billing_matrixOverridesIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixOverridesIdDelete,
				(const billing_matrixOverridesIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixOverridesIdHistoryGet,
				(const billing_matrixOverridesIdHistoryGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixOverridesIdRestoreTargetVersionPost,
				(const billing_matrixOverridesIdRestoreTargetVersionPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheetsGet,
				(const billing_matrixSheetsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheetsPost,
				(const billing_matrixSheetsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheetsIdGet,
				(const billing_matrixSheetsIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheetsIdPut,
				(const billing_matrixSheetsIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheetsIdDelete,
				(const billing_matrixSheetsIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheetsIdPublishPost,
				(const billing_matrixSheetsIdPublishPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheetsIdHistoryGet,
				(const billing_matrixSheetsIdHistoryGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheetsIdRestoreTargetVersionPost,
				(const billing_matrixSheetsIdRestoreTargetVersionPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheet_exceptionsGet,
				(const billing_matrixSheet_exceptionsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheet_exceptionsPost,
				(const billing_matrixSheet_exceptionsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheetsSheetIdExceptionsGet,
				(const billing_matrixSheetsSheetIdExceptionsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheet_exceptionsBy_entriesGet,
				(const billing_matrixSheet_exceptionsBy_entriesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheet_exceptionsIdPut,
				(const billing_matrixSheet_exceptionsIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheet_exceptionsIdDelete,
				(const billing_matrixSheet_exceptionsIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheet_exceptionsIdHistoryGet,
				(const billing_matrixSheet_exceptionsIdHistoryGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSheet_exceptionsIdRestoreTargetVersionPost,
				(const billing_matrixSheet_exceptionsIdRestoreTargetVersionPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSettingsGet,
				(const billing_matrixSettingsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSettingsKeyGet,
				(const billing_matrixSettingsKeyGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSettingsKeyPut,
				(const billing_matrixSettingsKeyPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSettingsKeyHistoryGet,
				(const billing_matrixSettingsKeyHistoryGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixSettingsKeyRestoreTargetVersionPost,
				(const billing_matrixSettingsKeyRestoreTargetVersionPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				billing_matrixEpochGet,
				(const billing_matrixEpochGetParams&,
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

class CdnAuthCookieApiMock final : public ICdnAuthCookieApiBase
{
public:
	CdnAuthCookieApiMock() : ICdnAuthCookieApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				cdn_sessionPost,
				(const cdn_sessionPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				cdn_sessionDelete,
				(const cdn_sessionDeleteParams&,
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

class CrossTenantSettingsApiMock final : public ICrossTenantSettingsApiBase
{
public:
	CrossTenantSettingsApiMock() : ICrossTenantSettingsApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				usersMeCross_tenant_settingsContextPut,
				(const usersMeCross_tenant_settingsContextPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersMeCross_tenant_settingsContextGet,
				(const usersMeCross_tenant_settingsContextGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersMeCross_tenant_settingsContextDelete,
				(const usersMeCross_tenant_settingsContextDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersMeCross_tenant_settingsGet,
				(const usersMeCross_tenant_settingsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersMeCross_tenant_settingsContextKeynameDelete,
				(const usersMeCross_tenant_settingsContextKeynameDeleteParams&,
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

class EncryptedValueApiMock final : public IEncryptedValueApiBase
{
public:
	EncryptedValueApiMock() : IEncryptedValueApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				encrypted_valuesTenantGet,
				(const encrypted_valuesTenantGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				encrypted_valuesTenantKey_namesGet,
				(const encrypted_valuesTenantKey_namesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				encrypted_valuesTenantKey_infoGet,
				(const encrypted_valuesTenantKey_infoGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				encrypted_valuesTenantKeyNamePut,
				(const encrypted_valuesTenantKeyNamePutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				encrypted_valuesTenantKeyNameDelete,
				(const encrypted_valuesTenantKeyNameDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class GroupApiMock final : public IGroupApiBase
{
public:
	GroupApiMock() : IGroupApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				groupsPost,
				(const groupsPostParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsPut,
				(const groupsPutParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsDelete,
				(const groupsDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGet,
				(const groupsGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				group_codesGroupCodeUsersUserIdPut,
				(const group_codesGroupCodeUsersUserIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdGroup_code_resetPost,
				(const groupsGroupIdGroup_code_resetPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdBanned_usersUserIdPut,
				(const groupsGroupIdBanned_usersUserIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdBanned_usersUserIdDelete,
				(const groupsGroupIdBanned_usersUserIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdDelete,
				(const groupsGroupIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdGet,
				(const groupsGroupIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdGroupsGet,
				(const usersUserIdGroupsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdUsersUserIdDelete,
				(const groupsGroupIdUsersUserIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groups_summariesGet,
				(const groups_summariesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdEmail_invitesPost,
				(const groupsGroupIdEmail_invitesPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdEmail_invitesGet,
				(const groupsGroupIdEmail_invitesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdEmail_invitesBulkPost,
				(const groupsGroupIdEmail_invitesBulkPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdLitePut,
				(const groupsGroupIdLitePutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdLiteGet,
				(const groupsGroupIdLiteGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdOwnerNewGroupOwnerIdPut,
				(const groupsGroupIdOwnerNewGroupOwnerIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdEmail_invitesAcceptedGet,
				(const groupsGroupIdEmail_invitesAcceptedGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdEmail_invitesEmailInviteIdDelete,
				(const groupsGroupIdEmail_invitesEmailInviteIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdModeratorsUserIdPut,
				(const groupsGroupIdModeratorsUserIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdModeratorsUserIdDelete,
				(const groupsGroupIdModeratorsUserIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsLiteGet,
				(const groupsLiteGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsLitePost,
				(const groupsLitePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsUsersUserIdEmail_invitesGet,
				(const groupsUsersUserIdEmail_invitesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsGroupIdUsersUserIdEmail_invitesEmailInviteIdAcceptPost,
				(const groupsGroupIdUsersUserIdEmail_invitesEmailInviteIdAcceptPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				groupsArchivedPut,
				(const groupsArchivedPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class InventoryApiMock final : public IInventoryApiBase
{
public:
	InventoryApiMock() : IInventoryApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				usersUserIdInventory_itemsGet,
				(const usersUserIdInventory_itemsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdInventory_itemsPost,
				(const usersUserIdInventory_itemsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdInventory_idsGet,
				(const usersUserIdInventory_idsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersInventory_itemsOwnersGet,
				(const usersInventory_itemsOwnersGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersInventory_countGet,
				(const usersInventory_countGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdInventory_itemsIdGet,
				(const usersUserIdInventory_itemsIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdInventory_itemsIdDelete,
				(const usersUserIdInventory_itemsIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdInventory_itemsIdPut,
				(const usersUserIdInventory_itemsIdPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdInventory_itemsIdEquipPut,
				(const usersUserIdInventory_itemsIdEquipPutParams&,
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

class ProfileApiMock final : public IProfileApiBase
{
public:
	ProfileApiMock() : IProfileApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				usersPost,
				(const usersPostParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersGet,
				(const usersGetParams&, csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersCreate_socialPost,
				(const usersCreate_socialPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdUpgrade_guestPost,
				(const usersUserIdUpgrade_guestPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdUpgrade_guest_socialPost,
				(const usersUserIdUpgrade_guest_socialPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdDelete,
				(const usersUserIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdGet,
				(const usersUserIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdHard_deleteDelete,
				(const usersUserIdHard_deleteDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersHard_deleteDelete,
				(const usersHard_deleteDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdTenanciesGet,
				(const usersUserIdTenanciesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersAll_tenantsGet,
				(const usersAll_tenantsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersProfile_idsPost,
				(const usersProfile_idsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersTenantsTenantProfile_idsPost,
				(const usersTenantsTenantProfile_idsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdToken_change_passwordPost,
				(const usersUserIdToken_change_passwordPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersForgot_passwordPost,
				(const usersForgot_passwordPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdConfirm_emailPost,
				(const usersUserIdConfirm_emailPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersEmailsEmailConfirm_emailRe_sendPost,
				(const usersEmailsEmailConfirm_emailRe_sendPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdMetagamePut,
				(const usersUserIdMetagamePutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdMetagameGet,
				(const usersUserIdMetagameGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdFirst_nameFirstNamePut,
				(const usersUserIdFirst_nameFirstNamePutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdDisplay_namePut,
				(const usersUserIdDisplay_namePutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdLiteGet,
				(const usersUserIdLiteGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersMeSocialProviderIdGet,
				(const usersMeSocialProviderIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersLiteGet,
				(const usersLiteGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersAdmin_litePost,
				(const usersAdmin_litePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdLock_accountPut,
				(const usersUserIdLock_accountPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdUnlock_accountPut,
				(const usersUserIdUnlock_accountPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
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

class SettingsApiMock final : public ISettingsApiBase
{
public:
	SettingsApiMock() : ISettingsApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				usersUserIdSettingsContextPut,
				(const usersUserIdSettingsContextPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdSettingsContextGet,
				(const usersUserIdSettingsContextGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdSettingsContextDelete,
				(const usersUserIdSettingsContextDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersSettingsContextGet,
				(const usersSettingsContextGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdSettingsGet,
				(const usersUserIdSettingsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdSettingsContextKeynameDelete,
				(const usersUserIdSettingsContextKeynameDeleteParams&,
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

class StripeApiMock final : public IStripeApiBase
{
public:
	StripeApiMock() : IStripeApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				vendorsStripeWebhookPost,
				(const vendorsStripeWebhookPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				vendorsStripeCheckout_sessionsPost,
				(const vendorsStripeCheckout_sessionsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				vendorsStripeCustomersUserIdGet,
				(const vendorsStripeCustomersUserIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				vendorsStripeCustomer_portalsUserIdGet,
				(const vendorsStripeCustomer_portalsUserIdGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class SuperAdminTenantApiMock final : public ISuperAdminTenantApiBase
{
public:
	SuperAdminTenantApiMock() : ISuperAdminTenantApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				super_adminTenantsGet,
				(const super_adminTenantsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameGet,
				(const super_adminTenantsTenantNameGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameDelete,
				(const super_adminTenantsTenantNameDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameUsersGet,
				(const super_adminTenantsTenantNameUsersGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameUsersUserIdLock_accountPut,
				(const super_adminTenantsTenantNameUsersUserIdLock_accountPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameUsersUserIdUnlock_accountPut,
				(const super_adminTenantsTenantNameUsersUserIdUnlock_accountPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameUsersUserIdDelete,
				(const super_adminTenantsTenantNameUsersUserIdDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameUsersUserIdRolesPut,
				(const super_adminTenantsTenantNameUsersUserIdRolesPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameEmail_settingsGet,
				(const super_adminTenantsTenantNameEmail_settingsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameEmail_settingsPut,
				(const super_adminTenantsTenantNameEmail_settingsPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameSecretsKey_namesGet,
				(const super_adminTenantsTenantNameSecretsKey_namesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameSecretsGet,
				(const super_adminTenantsTenantNameSecretsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameSecretsKey_infoGet,
				(const super_adminTenantsTenantNameSecretsKey_infoGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameSecretsKeyNameMagnopus_ownedPut,
				(const super_adminTenantsTenantNameSecretsKeyNameMagnopus_ownedPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameSecretsMagnopus_ownedPut,
				(const super_adminTenantsTenantNameSecretsMagnopus_ownedPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameSecretsKeyNamePut,
				(const super_adminTenantsTenantNameSecretsKeyNamePutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameSecretsKeyNameDelete,
				(const super_adminTenantsTenantNameSecretsKeyNameDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameLegacy_hostnamesPost,
				(const super_adminTenantsTenantNameLegacy_hostnamesPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameLegacy_hostnamesHostnamePut,
				(const super_adminTenantsTenantNameLegacy_hostnamesHostnamePutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameLegacy_hostnamesHostnameDelete,
				(const super_adminTenantsTenantNameLegacy_hostnamesHostnameDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameSso_redirectsHostname_diffGet,
				(const super_adminTenantsTenantNameSso_redirectsHostname_diffGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameSso_redirectsSync_from_hostnamesPost,
				(const super_adminTenantsTenantNameSso_redirectsSync_from_hostnamesPostParams&,
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

class TenantApiMock final : public ITenantApiBase
{
public:
	TenantApiMock() : ITenantApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				tenantsSelfGet,
				(const tenantsSelfGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsSelfClient_settingsGet,
				(const tenantsSelfClient_settingsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsInferred_nameGet,
				(const tenantsInferred_nameGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsSelfEmail_settingsPut,
				(const tenantsSelfEmail_settingsPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsNamesTenantNamePost,
				(const tenantsNamesTenantNamePostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsNamesTenantNameGet,
				(const tenantsNamesTenantNameGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsNamesTenantNameSettingsPut,
				(const tenantsNamesTenantNameSettingsPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsMarketplace_provisionPost,
				(const tenantsMarketplace_provisionPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsOrganization_provisionPost,
				(const tenantsOrganization_provisionPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsPendingDelete,
				(const tenantsPendingDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsNamesNameDelete,
				(const tenantsNamesNameDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsResolve_by_urlGet,
				(const tenantsResolve_by_urlGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsNamesTenantNameIdentity_providersGet,
				(const tenantsNamesTenantNameIdentity_providersGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class TenantAdminApiMock final : public ITenantAdminApiBase
{
public:
	TenantAdminApiMock() : ITenantAdminApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				tenant_adminTenantGet,
				(const tenant_adminTenantGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenant_adminTenantPut,
				(const tenant_adminTenantPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenant_adminUsersGet,
				(const tenant_adminUsersGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenant_adminUsersUserIdLock_accountPut,
				(const tenant_adminUsersUserIdLock_accountPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenant_adminUsersUserIdUnlock_accountPut,
				(const tenant_adminUsersUserIdUnlock_accountPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenant_adminUsersUserIdRolesPut,
				(const tenant_adminUsersUserIdRolesPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenant_adminEmail_settingsGet,
				(const tenant_adminEmail_settingsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenant_adminEmail_settingsPut,
				(const tenant_adminEmail_settingsPutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenant_adminSecretsKey_namesGet,
				(const tenant_adminSecretsKey_namesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenant_adminSecretsGet,
				(const tenant_adminSecretsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenant_adminSecretsKey_infoGet,
				(const tenant_adminSecretsKey_infoGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenant_adminSecretsKeyNamePut,
				(const tenant_adminSecretsKeyNamePutParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenant_adminSecretsKeyNameDelete,
				(const tenant_adminSecretsKeyNameDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class TenantHostnameApiMock final : public ITenantHostnameApiBase
{
public:
	TenantHostnameApiMock() : ITenantHostnameApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				tenantsTenantNameHostnamesPost,
				(const tenantsTenantNameHostnamesPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsTenantNameHostnamesHostnameDns_statusGet,
				(const tenantsTenantNameHostnamesHostnameDns_statusGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsTenantNameHostnamesExternalPost,
				(const tenantsTenantNameHostnamesExternalPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsTenantNameHostnamesGcp_lbPost,
				(const tenantsTenantNameHostnamesGcp_lbPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsTenantNameEmail_redirect_patternsPost,
				(const tenantsTenantNameEmail_redirect_patternsPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsTenantNameHostnamesHostnameDelete,
				(const tenantsTenantNameHostnamesHostnameDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminDns_settingsGet,
				(const super_adminDns_settingsGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameHostnamesPost,
				(const super_adminTenantsTenantNameHostnamesPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameHostnamesHostnameDelete,
				(const super_adminTenantsTenantNameHostnamesHostnameDeleteParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				tenantsTenantNameHostnamesHostnameDeprovision_statusGet,
				(const tenantsTenantNameHostnamesHostnameDeprovision_statusGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameHostnamesHostnameDns_statusGet,
				(const super_adminTenantsTenantNameHostnamesHostnameDns_statusGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				super_adminTenantsTenantNameHostnamesHostnameRetryPost,
				(const super_adminTenantsTenantNameHostnamesHostnameRetryPostParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
};

class UserRolesApiMock final : public IUserRolesApiBase
{
public:
	UserRolesApiMock() : IUserRolesApiBase(nullptr, csp::ServiceDefinition {})
	{
	}

	MOCK_METHOD(void,
				usersUserIdRolesGet,
				(const usersUserIdRolesGetParams&,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken),
				(const, override));
	MOCK_METHOD(void,
				usersUserIdRolesPut,
				(const usersUserIdRolesPutParams&,
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


} // namespace csp::services::generated::userservice