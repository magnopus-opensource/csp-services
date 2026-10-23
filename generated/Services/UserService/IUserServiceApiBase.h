

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "Services/ApiBase/ApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::userservice
{


class IAnalyticsApiBase : public csp::services::ApiBase
{
public:
	IAnalyticsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
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

class IApiKeyApiBase : public csp::services::ApiBase
{
public:
	IApiKeyApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct api_keysPostParams
	{
		const std::shared_ptr<CreateApiKeyRequest>& RequestBody;
	};


	/// <summary>
	/// Creates a new API key. Only admins can create keys.
	/// The caller can specify a TargetUserId to assign a different user's identity to the key.
	/// The encoded token is returned only once in the response.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/api-keys
	/// Authorization: admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void api_keysPost(const api_keysPostParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct api_keysGetParams
	{
	};


	/// <summary>
	/// Lists all API keys for the current user in the current tenant.
	/// Returns metadata only — never the encoded token.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/api-keys
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void api_keysGet(const api_keysGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct api_keysSettingsGetParams
	{
	};


	/// <summary>
	/// Returns API key configuration settings (allowed roles, expiry presets, max expiry).
	/// Used by the Inspector frontend to populate the creation form.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/api-keys/settings
	/// Authorization: admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void api_keysSettingsGet(const api_keysSettingsGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct api_keysTenantGetParams
	{
		const std::optional<utility::string_t>& tenantName;
	};


	/// <summary>
	/// Lists all API keys in the caller's tenant (admin view).
	/// Magnopus-admin can optionally filter by a specific tenant via query parameter.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/api-keys/tenant
	/// Authorization: admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void api_keysTenantGet(const api_keysTenantGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct api_keysJtiDeleteParams
	{
		const utility::string_t& jti;
	};


	/// <summary>
	/// Revokes an API key by its JTI (owner revocation).
	/// Idempotent — revoking an already-revoked key returns success.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/api-keys/{jti}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void api_keysJtiDelete(const api_keysJtiDeleteParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct api_keysTenantJtiRevokePostParams
	{
		const utility::string_t& jti;
	};


	/// <summary>
	/// Admin revocation — revokes any API key in the tenant by its JTI.
	/// Idempotent — revoking an already-revoked key returns success.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/api-keys/tenant/{jti}/revoke
	/// Authorization: admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void api_keysTenantJtiRevokePost(const api_keysTenantJtiRevokePostParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct api_keysRevoked_jti_setGetParams
	{
	};


	/// <summary>
	/// Returns the set of revoked JTIs for API keys that have not yet expired.
	/// Used by external services (e.g., Nodey) to sync their local revocation sets.
	/// Requires internal-service authentication.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/api-keys/revoked-jti-set
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,tenant-secrets
	/// </remarks>
	virtual void api_keysRevoked_jti_setGet(const api_keysRevoked_jti_setGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IApiKeyApiBase() = default;
};

class IApplicationSecretsApiBase : public csp::services::ApiBase
{
public:
	IApplicationSecretsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct application_secretsApplicationNameGetParams
	{
		const utility::string_t& applicationName;
	};


	/// <summary>
	/// List secret definitions for an application.
	/// Magnopus-admin / magnopus-support: returns all definitions with AllowedTenants field.
	/// Tenant users: returns only definitions visible to their tenant, without AllowedTenants.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/application-secrets/{applicationName}
	/// !AUTHORIZATION REQUIREMENTS NOT SET!
	/// </remarks>
	virtual void application_secretsApplicationNameGet(const application_secretsApplicationNameGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct application_secretsApplicationNamePostParams
	{
		const utility::string_t& applicationName;
		const std::shared_ptr<CreateApplicationSecretRequest>& RequestBody;
	};


	/// <summary>
	/// Create a new secret definition for an application.
	/// Magnopus-admin only.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/application-secrets/{applicationName}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void application_secretsApplicationNamePost(const application_secretsApplicationNamePostParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct application_secretsApplicationNameEnvVarNamePutParams
	{
		const utility::string_t& applicationName;
		const utility::string_t& envVarName;
		const std::shared_ptr<UpdateApplicationSecretRequest>& RequestBody;
	};


	/// <summary>
	/// Update an existing secret definition.
	/// Magnopus-admin only.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/application-secrets/{applicationName}/{envVarName}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void application_secretsApplicationNameEnvVarNamePut(const application_secretsApplicationNameEnvVarNamePutParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct application_secretsApplicationNameEnvVarNameDeleteParams
	{
		const utility::string_t& applicationName;
		const utility::string_t& envVarName;
	};


	/// <summary>
	/// Delete a secret definition.
	/// Magnopus-admin only.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/application-secrets/{applicationName}/{envVarName}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void application_secretsApplicationNameEnvVarNameDelete(const application_secretsApplicationNameEnvVarNameDeleteParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct application_secretsQuota_featuresGetParams
	{
	};


	/// <summary>
	/// Get all secret definitions across all applications that have a QuotaFeatureName assigned.
	/// Used by inter-service clients to build envVarName → quotaFeatureName mappings.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/application-secrets/quota-features
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void application_secretsQuota_featuresGet(const application_secretsQuota_featuresGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct application_secretsCorkage_enabledGetParams
	{
	};


	/// <summary>
	/// Get all secret definitions across all applications with corkage charging enabled.
	/// Used by the corkage cycle-charge emitter (inter-service) to build its eligibility set.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/application-secrets/corkage-enabled
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void application_secretsCorkage_enabledGet(const application_secretsCorkage_enabledGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct application_secretsApplicationsGetParams
	{
	};


	/// <summary>
	/// List distinct application names that have secret definitions.
	/// Magnopus-admin only.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/application-secrets/applications
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void application_secretsApplicationsGet(const application_secretsApplicationsGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IApplicationSecretsApiBase() = default;
};

class IApplicationSettingsApiBase : public csp::services::ApiBase
{
public:
	IApplicationSettingsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct applicationsApplicationNameSettingsContextPutParams
	{
		const utility::string_t& applicationName;
		const utility::string_t& context;
		const std::shared_ptr<ApplicationSettingsDto>& RequestBody;
	};


	/// <summary>
	/// Creates context settings or updates existing settings - any previously existing settings
	/// stored in the context not referenced in the call are left unchanged but all other fields,
	/// including allowAnonymous, will be overwritten if not provided.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/applications/{applicationName}/settings/{context}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void applicationsApplicationNameSettingsContextPut(const applicationsApplicationNameSettingsContextPutParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct applicationsApplicationNameSettingsContextGetParams
	{
		const utility::string_t& applicationName;
		const utility::string_t& context;
		const std::optional<std::vector<utility::string_t>>& keys;
	};


	/// <summary>
	/// Gets the settings for an application by context.  If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/applications/{applicationName}/settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void applicationsApplicationNameSettingsContextGet(const applicationsApplicationNameSettingsContextGetParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct applicationsApplicationNameSettingsContextDeleteParams
	{
		const utility::string_t& applicationName;
		const utility::string_t& context;
	};


	/// <summary>
	/// Deletes all application settings related to a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/applications/{applicationName}/settings/{context}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void applicationsApplicationNameSettingsContextDelete(const applicationsApplicationNameSettingsContextDeleteParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsTenantApplicationsApplicationNameSettingsContextGetParams
	{
		const utility::string_t& tenant;
		const utility::string_t& applicationName;
		const utility::string_t& context;
		const std::optional<std::vector<utility::string_t>>& keys;
	};


	/// <summary>
	/// Anonymously gets the settings for an application by context. If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/{tenant}/applications/{applicationName}/settings/{context}
	/// Authorization: Anonymous
	/// </remarks>
	virtual void
		tenantsTenantApplicationsApplicationNameSettingsContextGet(const tenantsTenantApplicationsApplicationNameSettingsContextGetParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct applicationsApplicationNameSettingsGetParams
	{
		const utility::string_t& applicationName;
	};


	/// <summary>
	/// Gets all the contexts for which the application has settings
	/// </summary>
	/// <remarks>
	/// GET /api/v1/applications/{applicationName}/settings
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void applicationsApplicationNameSettingsGet(const applicationsApplicationNameSettingsGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct applicationsApplicationNameSettingsDeleteParams
	{
		const utility::string_t& applicationName;
	};


	/// <summary>
	/// Deletes all settings related to a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/applications/{applicationName}/settings
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void applicationsApplicationNameSettingsDelete(const applicationsApplicationNameSettingsDeleteParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct applicationsApplicationNameSettingsContextKeynameDeleteParams
	{
		const utility::string_t& applicationName;
		const utility::string_t& context;
		const utility::string_t& keyname;
	};


	/// <summary>
	/// Deletes keyname setting at a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/applications/{applicationName}/settings/{context}/{keyname}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void applicationsApplicationNameSettingsContextKeynameDelete(const applicationsApplicationNameSettingsContextKeynameDeleteParams& Params,
																		 csp::services::ApiResponseHandlerBase* ResponseHandler,
																		 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct global_settingsGetParams
	{
	};


	/// <summary>
	/// Gets all distinct application names that have global settings defined.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/global-settings
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void global_settingsGet(const global_settingsGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct global_settingsApplicationNameContextPutParams
	{
		const utility::string_t& applicationName;
		const utility::string_t& context;
		const std::shared_ptr<ApplicationSettingsDto>& RequestBody;
	};


	/// <summary>
	/// Creates or updates global application settings for a given context.
	/// Global settings act as cross-tenant defaults that can be overridden by tenant-specific settings.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/global-settings/{applicationName}/{context}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void global_settingsApplicationNameContextPut(const global_settingsApplicationNameContextPutParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct global_settingsApplicationNameContextGetParams
	{
		const utility::string_t& applicationName;
		const utility::string_t& context;
		const std::optional<std::vector<utility::string_t>>& keys;
	};


	/// <summary>
	/// Gets global application settings by context. If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/global-settings/{applicationName}/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void global_settingsApplicationNameContextGet(const global_settingsApplicationNameContextGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct global_settingsApplicationNameContextDeleteParams
	{
		const utility::string_t& applicationName;
		const utility::string_t& context;
	};


	/// <summary>
	/// Deletes all global settings related to a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/global-settings/{applicationName}/{context}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void global_settingsApplicationNameContextDelete(const global_settingsApplicationNameContextDeleteParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct global_settingsApplicationNameGetParams
	{
		const utility::string_t& applicationName;
	};


	/// <summary>
	/// Gets all the contexts for which global application settings exist.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/global-settings/{applicationName}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void global_settingsApplicationNameGet(const global_settingsApplicationNameGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct global_settingsApplicationNameDeleteParams
	{
		const utility::string_t& applicationName;
	};


	/// <summary>
	/// Deletes all global settings for a given application name.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/global-settings/{applicationName}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void global_settingsApplicationNameDelete(const global_settingsApplicationNameDeleteParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct global_settingsApplicationNameContextKeynameDeleteParams
	{
		const utility::string_t& applicationName;
		const utility::string_t& context;
		const utility::string_t& keyname;
	};


	/// <summary>
	/// Deletes a specific key from global settings at a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/global-settings/{applicationName}/{context}/{keyname}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void global_settingsApplicationNameContextKeynameDelete(const global_settingsApplicationNameContextKeynameDeleteParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IApplicationSettingsApiBase() = default;
};

class IAssignmentsApiBase : public csp::services::ApiBase
{
public:
	IAssignmentsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct productionrosterAssignmentsGetParams
	{
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& personId;
		const std::optional<utility::string_t>& projectId;
	};


	/// <summary>
	/// ★ <b>THE GRID'S ONE READ</b> (roster-experiment-plan.md §4).
	///
	/// `?from=` and `?to=` are inclusive `yyyy-MM-dd` days and are required;
	/// `?personId=` and `?projectId=` narrow it. Everything the week draws comes from
	/// this call plus the roster, and the client computes utilization from exactly this set —
	/// there is no aggregate endpoint until something proves one is needed (§3.3).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/assignments
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterAssignmentsGet(const productionrosterAssignmentsGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterAssignmentsPutParams
	{
		const std::shared_ptr<AssignmentUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Upserts ONE grid cell, keyed on `(personId, date)`.
	///
	/// <b>Zero hours clears the cell</b> and comes back with a `null` body, which is the
	/// honest answer to "what is in that cell now". 409 when the person-day already carries more
	/// than one row — unreachable from the v1 UI, and refused rather than collapsed (DG-2).
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/assignments
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterAssignmentsPut(const productionrosterAssignmentsPutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterAssignmentsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Clears one cell by id.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/assignments/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterAssignmentsIdDelete(const productionrosterAssignmentsIdDeleteParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterAssignmentsBulkPostParams
	{
		const std::shared_ptr<BulkAssignRequest>& RequestBody;
	};


	/// <summary>
	/// ★ <b>THE SPAN WRITE</b> (§3.4). Producers think "three weeks at half time", so the write
	/// is a span and the server expands it into per-day rows in one call.
	///
	/// ⚠ <b>200 even when it declines to write</b>, and that is deliberate. §10 D2's
	/// recommendation is taken — with `overwrite: false` it REPORTS what it would replace
	/// and writes nothing — and the platform's 409 body is a bare string, so a structured
	/// conflict list has nowhere to ride on a conflict response. The client branches on
	/// `applied`. Frozen in the S0 contract fixture.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/assignments/bulk
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterAssignmentsBulkPost(const productionrosterAssignmentsBulkPostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAssignmentsApiBase() = default;
};

class IAuthenticationApiBase : public csp::services::ApiBase
{
public:
	IAuthenticationApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct usersLoginPostParams
	{
		const std::shared_ptr<LoginRequest>& RequestBody;
	};


	/// <summary>
	/// Provides ability to login with username/pw or auto-register/login by unique identifier.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/login
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersLoginPost(const usersLoginPostParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersLogin_guestPostParams
	{
		const std::shared_ptr<LoginGuestRequest>& RequestBody;
	};


	/// <summary>
	/// Provides ability to login auto-register/login by unique identifier. The behavior on this endpoint is very specific.
	/// This endpoint should and can only be used in certain circumstances.  In fact, it's protected by a feature flag that
	/// is off for most environments.  The impact of this endpoint is to defer the creation of the user's profile if this
	/// is the users' first login.  This means that while the response will contain a UserId - that UserId may not be valid
	/// for several minutes until a bulk write process is triggered and completes. Any other endpoints that requires a userId
	/// should not be expected to be capable of returning valid results about this login session for an undetermined amount
	/// of time after using this method. If your application requires those endpoints, you should use the full login.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/login-guest
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersLogin_guestPost(const usersLogin_guestPostParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersLogin_socialPostParams
	{
		const std::shared_ptr<LoginSocialRequest>& RequestBody;
	};


	/// <summary>
	/// Provides ability to login with a social authentication provider's token (such as Google).
	/// Also dynamically creates a new user profile when
	/// an account is not found by the email address from the social authentication provider.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/login-social
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersLogin_socialPost(const usersLogin_socialPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersSocialIdentity_capturePostParams
	{
		const std::shared_ptr<SocialIdentityCaptureRequest>& RequestBody;
	};


	/// <summary>
	/// Captures a verified identity (email + provider user id) from a social provider's authorization code,
	/// WITHOUT creating a session or requiring a tenant. Used by the pre-tenant marketplace onboarding flow.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/social/identity-capture
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersSocialIdentity_capturePost(const usersSocialIdentity_capturePostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct social_providersProviderGetParams
	{
		const utility::string_t& provider;
		const std::optional<utility::string_t>& redirectUrl;
		const std::optional<utility::string_t>& tenant;
		const std::optional<utility::string_t>& client;
	};


	/// <summary>
	/// Looks up the basic info required by a client to perform oauth2 flow
	/// with a social authentication provider by the provider's name.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/social-providers/{provider}
	/// Authorization: Anonymous
	/// </remarks>
	virtual void social_providersProviderGet(const social_providersProviderGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersLogoutPostParams
	{
		const std::shared_ptr<LogoutRequest>& RequestBody;
	};


	/// <summary>
	/// Provides registered accounts with the ability to logout with username/pw.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/logout
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersLogoutPost(const usersLogoutPostParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersRefreshPostParams
	{
		const std::shared_ptr<RefreshRequest>& RequestBody;
	};


	/// <summary>
	/// Provides ability to refresh the authentication tokens (access token and refresh token)
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/refresh
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersRefreshPost(const usersRefreshPostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersExchange_tenancyPostParams
	{
		const std::shared_ptr<ExchangeTenancyRequest>& RequestBody;
	};


	/// <summary>
	/// Exchanges a valid refresh token for new auth tokens in a different tenant.
	/// The caller's identity is proved via the refresh token in the body (not the bearer header).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/exchange-tenancy
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersExchange_tenancyPost(const usersExchange_tenancyPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct authPlus_address_identitiesGetParams
	{
	};


	/// <summary>
	/// Returns all plus-addressed identity variants available to the current user in the current tenant.
	/// Only returns results for SSO sessions where the user's domain and provider match a
	/// PlusAddressingDomains entry on the tenant. Returns empty list for password-based sessions.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/auth/plus-address-identities
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void authPlus_address_identitiesGet(const authPlus_address_identitiesGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct authPlus_address_identitiesTenantNameGetParams
	{
		const utility::string_t& tenantName;
	};


	/// <summary>
	/// Returns all plus-addressed identity variants available to the current user in the
	/// specified target tenant. Used by the accounts dropdown to show per-tenant identity
	/// options without requiring the blanket cross-tenant discovery of the base endpoint.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/auth/plus-address-identities/{tenantName}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void authPlus_address_identitiesTenantNameGet(const authPlus_address_identitiesTenantNameGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct authPlus_address_identitiesBatchPostParams
	{
		const std::shared_ptr<PlusAddressIdentitiesBatchRequest>& RequestBody;
	};


	/// <summary>
	/// Returns the plus-addressed identity variants available to the current user in EACH of a
	/// list of tenants, in one round trip. The batch form of
	/// M:Magnopus.Service.User.Controllers.AuthenticationController.GetPlusAddressIdentitiesForTenant(System.String), which stays for the genuine
	/// lazy single-tenant case. A POST because the payload is an array of tenant names: a query string hits URL length limits and array-encoding
	/// ambiguity. It is a read — nothing here mutates. Same authorization as the per-tenant endpoint, and for the same reason: the logic only ever
	/// returns plus-address variants of the CALLER'S OWN base email, so there is nothing here a caller could not already ask for one tenant at a
	/// time. Tenants the caller cannot reach come back as empty lists, never as an error, so the response does not disclose which of the requested
	/// tenants exist.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/auth/plus-address-identities/batch
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void authPlus_address_identitiesBatchPost(const authPlus_address_identitiesBatchPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersExchange_profilePostParams
	{
		const std::shared_ptr<ExchangeProfileRequest>& RequestBody;
	};


	/// <summary>
	/// Switches to a different plus-addressed identity within the same tenant.
	/// Requires an SSO session and the target must be a passwordless plus-address variant
	/// of the caller's base email.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/exchange-profile
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersExchange_profilePost(const usersExchange_profilePostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAuthenticationApiBase() = default;
};

class IAvatarsApiBase : public csp::services::ApiBase
{
public:
	IAvatarsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct usersUserIdAvatarsPostParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<AvatarManifestDto>& RequestBody;
	};


	/// <summary>
	/// Creates a new avatar manifest
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/avatars
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdAvatarsPost(const usersUserIdAvatarsPostParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdAvatarsAvatarIdGetParams
	{
		const utility::string_t& userId;
		const utility::string_t& avatarId;
	};


	/// <summary>
	/// Finds avatar manifest by its unique identifier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/avatars/{avatarId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdAvatarsAvatarIdGet(const usersUserIdAvatarsAvatarIdGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdAvatarsAvatarIdPutParams
	{
		const utility::string_t& userId;
		const utility::string_t& avatarId;
		const std::shared_ptr<AvatarManifestDto>& RequestBody;
	};


	/// <summary>
	/// Locates avatar manifest by its unique identifier avatarId
	/// and updates the writable fields of that avatar manifest with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/avatars/{avatarId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdAvatarsAvatarIdPut(const usersUserIdAvatarsAvatarIdPutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdAvatarsAvatarIdDeleteParams
	{
		const utility::string_t& userId;
		const utility::string_t& avatarId;
	};


	/// <summary>
	/// Locates the avatar manifest by its ID avatarId
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/avatars/{avatarId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdAvatarsAvatarIdDelete(const usersUserIdAvatarsAvatarIdDeleteParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdAvatarsAvatarIdExistsGetParams
	{
		const utility::string_t& userId;
		const utility::string_t& avatarId;
	};


	/// <summary>
	/// Finds whether an avatar manifest exists by its unique identifier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/avatars/{avatarId}/exists
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdAvatarsAvatarIdExistsGet(const usersUserIdAvatarsAvatarIdExistsGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAvatarsApiBase() = default;
};

class IBillingMatrixApiBase : public csp::services::ApiBase
{
public:
	IBillingMatrixApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct billing_matrixMetricsGetParams
	{
	};


	/// <summary>
	/// List all billing metrics. Bulk-read consumed by the runtime rating cache.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/metrics
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void billing_matrixMetricsGet(const billing_matrixMetricsGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct billing_matrixMetricsPostParams
	{
		const std::shared_ptr<CreateBillingMetricRequest>& RequestBody;
	};


	/// <summary>
	/// Create a billing metric.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/billing-matrix/metrics
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixMetricsPost(const billing_matrixMetricsPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixMetricsMetricKeyGetParams
	{
		const utility::string_t& metricKey;
	};


	/// <summary>
	/// Get a single billing metric by key.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/metrics/{metricKey}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixMetricsMetricKeyGet(const billing_matrixMetricsMetricKeyGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct billing_matrixMetricsMetricKeyPutParams
	{
		const utility::string_t& metricKey;
		const std::shared_ptr<UpdateBillingMetricRequest>& RequestBody;
	};


	/// <summary>
	/// Update a billing metric.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/billing-matrix/metrics/{metricKey}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixMetricsMetricKeyPut(const billing_matrixMetricsMetricKeyPutParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct billing_matrixMetricsMetricKeyDeleteParams
	{
		const utility::string_t& metricKey;
	};


	/// <summary>
	/// Delete a billing metric.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/billing-matrix/metrics/{metricKey}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixMetricsMetricKeyDelete(const billing_matrixMetricsMetricKeyDeleteParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixMetricsMetricKeyHistoryGetParams
	{
		const utility::string_t& metricKey;
	};


	/// <summary>
	/// List version history for a billing metric, newest first.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/metrics/{metricKey}/history
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixMetricsMetricKeyHistoryGet(const billing_matrixMetricsMetricKeyHistoryGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixMetricsMetricKeyRestoreTargetVersionPostParams
	{
		const utility::string_t& metricKey;
		const int32_t& targetVersion;
	};


	/// <summary>
	/// Restore a billing metric to a prior version.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/billing-matrix/metrics/{metricKey}/restore/{targetVersion}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixMetricsMetricKeyRestoreTargetVersionPost(const billing_matrixMetricsMetricKeyRestoreTargetVersionPostParams& Params,
																		csp::services::ApiResponseHandlerBase* ResponseHandler,
																		csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixBase_typesGetParams
	{
	};


	/// <summary>
	/// The closed set of <b>base metric types</b> a matrix row's `TargetMetric` may name, in a
	/// stable order: `credit` / `compute` / `egress` / `apikey`.
	/// This is deliberately <b>not</b>M:Magnopus.Service.User.Controllers.BillingMatrixController.GetMetrics. A row targets a base <i>type</i>; the
	/// tier-qualified Google metric id (`{tier}_{type}`) is composed at rating time from the
	/// requesting tenant's tier (marketplace-tier-billing plan §4). So an admin UI's "target metric"
	/// picker must be built from <b>this</b> endpoint: offering the 13 per-tier mirrors instead makes
	/// every option one that `BillingMatrixAdminLogic.ValidateEntry` rejects, and leaves a
	/// correctly-stored `credit` row rendering as unset because its value isn't in the list.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/base-types
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixBase_typesGet(const billing_matrixBase_typesGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixEntriesGetParams
	{
	};


	/// <summary>
	/// List all matrix entries (full set). Intended for the runtime rating cache's bulk load; the
	/// admin UI should use
	/// M:Magnopus.Service.User.Controllers.BillingMatrixController.SearchEntries(Magnopus.Service.User.DataAccess.TokenMatrixEntryFilters,Magnopus.Common.Contracts.Structures.SearchPagination),
	/// which pages.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/entries
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void billing_matrixEntriesGet(const billing_matrixEntriesGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct billing_matrixEntriesPostParams
	{
		const std::shared_ptr<CreateTokenMatrixEntryRequest>& RequestBody;
	};


	/// <summary>
	/// Create a matrix entry.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/billing-matrix/entries
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixEntriesPost(const billing_matrixEntriesPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixEntriesSearchGetParams
	{
		const std::optional<utility::string_t>& Search;
		const std::optional<utility::string_t>& TargetMetric;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// A page of matrix entries matching the filters — the paged admin listing (the matrix can grow
	/// to many thousands of rows at provider scale, so this is the right surface for UI browsing).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/entries/search
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixEntriesSearchGet(const billing_matrixEntriesSearchGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixEntriesIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Get a single matrix entry by id.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/entries/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixEntriesIdGet(const billing_matrixEntriesIdGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct billing_matrixEntriesIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<UpdateTokenMatrixEntryRequest>& RequestBody;
	};


	/// <summary>
	/// Update a matrix entry.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/billing-matrix/entries/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixEntriesIdPut(const billing_matrixEntriesIdPutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct billing_matrixEntriesIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Delete a matrix entry.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/billing-matrix/entries/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixEntriesIdDelete(const billing_matrixEntriesIdDeleteParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixEntriesImportPostParams
	{
		const std::shared_ptr<ImportTokenMatrixEntriesRequest>& RequestBody;
	};


	/// <summary>
	/// Bulk import (upsert) matrix entries — the reverse of the node-tree export. Each row is created
	/// if new, updated if its cost/metadata changed, or left as-is if unchanged; invalid rows are
	/// reported in the summary's `failed` list without aborting the batch. The whole batch bumps
	/// the matrix epoch at most once. CSV parsing stays client-side — this takes the priced rows as JSON.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/billing-matrix/entries/import
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixEntriesImportPost(const billing_matrixEntriesImportPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixEntriesIdHistoryGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// List version history for a matrix entry, newest first.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/entries/{id}/history
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixEntriesIdHistoryGet(const billing_matrixEntriesIdHistoryGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixEntriesIdRestoreTargetVersionPostParams
	{
		const utility::string_t& id;
		const int32_t& targetVersion;
	};


	/// <summary>
	/// Restore a matrix entry to a prior version.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/billing-matrix/entries/{id}/restore/{targetVersion}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixEntriesIdRestoreTargetVersionPost(const billing_matrixEntriesIdRestoreTargetVersionPostParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixOverridesGetParams
	{
	};


	/// <summary>
	/// List all per-tier price overrides. Bulk-read consumed by the runtime rating cache.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/overrides
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void billing_matrixOverridesGet(const billing_matrixOverridesGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct billing_matrixOverridesPostParams
	{
		const std::shared_ptr<CreateMatrixTierPriceOverrideRequest>& RequestBody;
	};


	/// <summary>
	/// Create a per-tier price override.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/billing-matrix/overrides
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixOverridesPost(const billing_matrixOverridesPostParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixEntriesMatrixEntryIdOverridesGetParams
	{
		const utility::string_t& matrixEntryId;
	};


	/// <summary>
	/// List per-tier price overrides for a matrix entry.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/entries/{matrixEntryId}/overrides
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixEntriesMatrixEntryIdOverridesGet(const billing_matrixEntriesMatrixEntryIdOverridesGetParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixOverridesBy_entriesGetParams
	{
		const std::optional<std::vector<utility::string_t>>& entryIds;
	};


	/// <summary>
	/// List per-tier price overrides for a batch of matrix entries (the paged grid enriches one page
	/// of rows at a time instead of loading every override).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/overrides/by-entries
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixOverridesBy_entriesGet(const billing_matrixOverridesBy_entriesGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixOverridesIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Get a single price override by id.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/overrides/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixOverridesIdGet(const billing_matrixOverridesIdGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct billing_matrixOverridesIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<UpdateMatrixTierPriceOverrideRequest>& RequestBody;
	};


	/// <summary>
	/// Update a per-tier price override.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/billing-matrix/overrides/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixOverridesIdPut(const billing_matrixOverridesIdPutParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct billing_matrixOverridesIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Delete a per-tier price override.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/billing-matrix/overrides/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixOverridesIdDelete(const billing_matrixOverridesIdDeleteParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixOverridesIdHistoryGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// List version history for a price override, newest first.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/overrides/{id}/history
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixOverridesIdHistoryGet(const billing_matrixOverridesIdHistoryGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixOverridesIdRestoreTargetVersionPostParams
	{
		const utility::string_t& id;
		const int32_t& targetVersion;
	};


	/// <summary>
	/// Restore a price override to a prior version.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/billing-matrix/overrides/{id}/restore/{targetVersion}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixOverridesIdRestoreTargetVersionPost(const billing_matrixOverridesIdRestoreTargetVersionPostParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixSheetsGetParams
	{
	};


	/// <summary>
	/// List all pricing sheets. Bulk-read consumed by the runtime rating cache.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/sheets
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void billing_matrixSheetsGet(const billing_matrixSheetsGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct billing_matrixSheetsPostParams
	{
		const std::shared_ptr<CreatePricingSheetRequest>& RequestBody;
	};


	/// <summary>
	/// Create a pricing sheet. The sheet is created as a draft; publish is a separate act.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/billing-matrix/sheets
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSheetsPost(const billing_matrixSheetsPostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixSheetsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Get a single pricing sheet by id.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/sheets/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSheetsIdGet(const billing_matrixSheetsIdGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct billing_matrixSheetsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<UpdatePricingSheetRequest>& RequestBody;
	};


	/// <summary>
	/// Update a pricing sheet's name, multiplier and enabled state.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/billing-matrix/sheets/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSheetsIdPut(const billing_matrixSheetsIdPutParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct billing_matrixSheetsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Delete a pricing sheet and its exceptions.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/billing-matrix/sheets/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSheetsIdDelete(const billing_matrixSheetsIdDeleteParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixSheetsIdPublishPostParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Publish a draft pricing sheet. This is the moment the sheet starts pricing its assigned
	/// tenants — resolution ignores a draft entirely.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/billing-matrix/sheets/{id}/publish
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSheetsIdPublishPost(const billing_matrixSheetsIdPublishPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixSheetsIdHistoryGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// List version history for a pricing sheet, newest first.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/sheets/{id}/history
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSheetsIdHistoryGet(const billing_matrixSheetsIdHistoryGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixSheetsIdRestoreTargetVersionPostParams
	{
		const utility::string_t& id;
		const int32_t& targetVersion;
	};


	/// <summary>
	/// Restore a pricing sheet to a prior version.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/billing-matrix/sheets/{id}/restore/{targetVersion}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSheetsIdRestoreTargetVersionPost(const billing_matrixSheetsIdRestoreTargetVersionPostParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixSheet_exceptionsGetParams
	{
	};


	/// <summary>
	/// List all pricing sheet exceptions. Bulk-read consumed by the runtime rating cache.
	/// Exceptions live at a top-level `sheet-exceptions` rather than under `sheets/…` to keep
	/// them off a collision course with M:Magnopus.Service.User.Controllers.BillingMatrixController.GetSheet(System.String)'s `sheets/{id}`.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/sheet-exceptions
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void billing_matrixSheet_exceptionsGet(const billing_matrixSheet_exceptionsGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct billing_matrixSheet_exceptionsPostParams
	{
		const std::shared_ptr<CreatePricingSheetExceptionRequest>& RequestBody;
	};


	/// <summary>
	/// Create a row-level exception on a pricing sheet.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/billing-matrix/sheet-exceptions
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSheet_exceptionsPost(const billing_matrixSheet_exceptionsPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixSheetsSheetIdExceptionsGetParams
	{
		const utility::string_t& sheetId;
	};


	/// <summary>
	/// List the exceptions belonging to one pricing sheet.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/sheets/{sheetId}/exceptions
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSheetsSheetIdExceptionsGet(const billing_matrixSheetsSheetIdExceptionsGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixSheet_exceptionsBy_entriesGetParams
	{
		const std::optional<std::vector<utility::string_t>>& entryIds;
	};


	/// <summary>
	/// List sheet exceptions for a batch of matrix entries (the paged grid enriches one page of rows
	/// at a time instead of loading every exception).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/sheet-exceptions/by-entries
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSheet_exceptionsBy_entriesGet(const billing_matrixSheet_exceptionsBy_entriesGetParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixSheet_exceptionsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<UpdatePricingSheetExceptionRequest>& RequestBody;
	};


	/// <summary>
	/// Update a pricing sheet exception.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/billing-matrix/sheet-exceptions/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSheet_exceptionsIdPut(const billing_matrixSheet_exceptionsIdPutParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct billing_matrixSheet_exceptionsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Delete a pricing sheet exception.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/billing-matrix/sheet-exceptions/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSheet_exceptionsIdDelete(const billing_matrixSheet_exceptionsIdDeleteParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixSheet_exceptionsIdHistoryGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// List version history for a pricing sheet exception, newest first.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/sheet-exceptions/{id}/history
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSheet_exceptionsIdHistoryGet(const billing_matrixSheet_exceptionsIdHistoryGetParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixSheet_exceptionsIdRestoreTargetVersionPostParams
	{
		const utility::string_t& id;
		const int32_t& targetVersion;
	};


	/// <summary>
	/// Restore a pricing sheet exception to a prior version.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/billing-matrix/sheet-exceptions/{id}/restore/{targetVersion}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void
		billing_matrixSheet_exceptionsIdRestoreTargetVersionPost(const billing_matrixSheet_exceptionsIdRestoreTargetVersionPostParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixSettingsGetParams
	{
	};


	/// <summary>
	/// List all billing-domain settings.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/settings
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSettingsGet(const billing_matrixSettingsGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixSettingsKeyGetParams
	{
		const utility::string_t& key;
	};


	/// <summary>
	/// Get the settings for a billing domain.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/settings/{key}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSettingsKeyGet(const billing_matrixSettingsKeyGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct billing_matrixSettingsKeyPutParams
	{
		const utility::string_t& key;
		const std::shared_ptr<UpsertBillingSettingsRequest>& RequestBody;
	};


	/// <summary>
	/// Create or update the settings for a billing domain (runs the domain validator).
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/billing-matrix/settings/{key}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSettingsKeyPut(const billing_matrixSettingsKeyPutParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixSettingsKeyHistoryGetParams
	{
		const utility::string_t& key;
	};


	/// <summary>
	/// List version history for a billing domain's settings, newest first.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/settings/{key}/history
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSettingsKeyHistoryGet(const billing_matrixSettingsKeyHistoryGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixSettingsKeyRestoreTargetVersionPostParams
	{
		const utility::string_t& key;
		const int32_t& targetVersion;
	};


	/// <summary>
	/// Restore a billing domain's settings to a prior version.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/billing-matrix/settings/{key}/restore/{targetVersion}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billing_matrixSettingsKeyRestoreTargetVersionPost(const billing_matrixSettingsKeyRestoreTargetVersionPostParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct billing_matrixEpochGetParams
	{
	};


	/// <summary>
	/// Read the current global matrix epoch. Bulk-read consumed by the runtime rating cache.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/billing-matrix/epoch
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void billing_matrixEpochGet(const billing_matrixEpochGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IBillingMatrixApiBase() = default;
};

class ICacheApiBase : public csp::services::ApiBase
{
public:
	ICacheApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
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

class ICdnAuthCookieApiBase : public csp::services::ApiBase
{
public:
	ICdnAuthCookieApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct cdn_sessionPostParams
	{
	};


	/// <summary>
	/// Sets the CDN auth cookie from the caller's bearer token. The token is trusted as-is because reaching this
	/// action means the JWT bearer middleware already validated signature and lifetime ([Authorize] below).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/cdn-session
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void cdn_sessionPost(const cdn_sessionPostParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct cdn_sessionDeleteParams
	{
		const std::optional<utility::string_t>& tenant;
	};


	/// <summary>
	/// Clears CDN auth cookies (logout). Anonymous on purpose: logout commonly happens with an
	/// already-expired token, and clearing a cookie only ever affects the caller's own browser.
	/// `?tenant=X` clears X's per-tenant cookie, and the legacy Magnopus.Service.User.Bootstrap.Settings.CdnAuthCookieSettings.CookieName
	/// cookie when it currently holds a token for X (D5) — so logout cannot leave that tenant's token behind in the
	/// shared legacy slot while MCS dual-writes (D12). With no `tenant`, clears the legacy cookie and every
	/// per-tenant cookie the request carries, preserving today's clear-everything contract.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/cdn-session
	/// Authorization: Anonymous
	/// </remarks>
	virtual void cdn_sessionDelete(const cdn_sessionDeleteParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ICdnAuthCookieApiBase() = default;
};

class IConfigApiBase : public csp::services::ApiBase
{
public:
	IConfigApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct productionrosterConfigGetParams
	{
	};


	/// <summary>
	/// The utilization thresholds, the week start day, and the multiplayer Group id.
	///
	/// ★ <b>Served, not duplicated into the client</b> (§3.3). The thresholds are a studio policy
	/// that will be argued about, and the argument should happen in one place.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/config
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterConfigGet(const productionrosterConfigGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterConfigGroupPostParams
	{
	};


	/// <summary>
	/// ★ <b>Provisions the studio's one presence Group and its Global Scope</b>, and records
	/// both (§7.4). Returns the same config `GET` serves, with `groupId` populated.
	///
	/// <b>Idempotent, and called by the client.</b> A roster client that reads a config with no
	/// `groupId` calls this once on mount; everybody after the first gets the existing
	/// record back untouched. That is what makes presence work on a fresh environment without
	/// anybody remembering a manual step — and it is why this is a `POST` of its own rather
	/// than a lazy write inside `GET /config`, which stays a read.
	/// ⚠ <b>A Scope is not optional.</b> The client resolves what to listen on from the Group's
	/// scopes, so a Group provisioned without one attaches to nothing. Both are created here, in
	/// that order, with the Group rolled back if the Scope fails.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/config/group
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterConfigGroupPost(const productionrosterConfigGroupPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterConfigGroupGroupIdPutParams
	{
		const utility::string_t& groupId;
	};


	/// <summary>
	/// Records a Group somebody provisioned by hand (§7.4).
	///
	/// ⚠ <b>Conditional on one not already being set</b>, so a second call cannot repoint the
	/// studio at a Group the already-attached clients are not in. The winner's id comes back
	/// either way, which is why this is not an error.
	/// ★ <b>Prefer `POST /config/group`.</b> This route records a Group id and provisions
	/// nothing, so it cannot know whether a Scope exists — and a Group without one attaches to
	/// an empty scope list and fails as an opaque hub error. Kept for the case where the Group
	/// already exists and only needs recording.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/config/group/{groupId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterConfigGroupGroupIdPut(const productionrosterConfigGroupGroupIdPutParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IConfigApiBase() = default;
};

class IConfigurationApiBase : public csp::services::ApiBase
{
public:
	IConfigurationApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
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

class ICrossTenantSettingsApiBase : public csp::services::ApiBase
{
public:
	ICrossTenantSettingsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct usersMeCross_tenant_settingsContextPutParams
	{
		const utility::string_t& context;
		const std::shared_ptr<CrossTenantSettingsDto>& RequestBody;
	};


	/// <summary>
	/// Creates or updates cross-tenant settings for the authenticated user at the given context.
	/// Any previously existing settings stored in the context not referenced in the call are left unchanged.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/me/cross-tenant-settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersMeCross_tenant_settingsContextPut(const usersMeCross_tenant_settingsContextPutParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersMeCross_tenant_settingsContextGetParams
	{
		const utility::string_t& context;
		const std::optional<std::vector<utility::string_t>>& keys;
	};


	/// <summary>
	/// Gets the cross-tenant settings for the authenticated user by context.
	/// If keys are provided then only values for those keys will be returned.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/me/cross-tenant-settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersMeCross_tenant_settingsContextGet(const usersMeCross_tenant_settingsContextGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersMeCross_tenant_settingsContextDeleteParams
	{
		const utility::string_t& context;
	};


	/// <summary>
	/// Deletes all cross-tenant settings related to a context for the authenticated user.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/me/cross-tenant-settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersMeCross_tenant_settingsContextDelete(const usersMeCross_tenant_settingsContextDeleteParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersMeCross_tenant_settingsGetParams
	{
	};


	/// <summary>
	/// Gets all the contexts for which the authenticated user has cross-tenant settings
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/me/cross-tenant-settings
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersMeCross_tenant_settingsGet(const usersMeCross_tenant_settingsGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersMeCross_tenant_settingsContextKeynameDeleteParams
	{
		const utility::string_t& context;
		const utility::string_t& keyname;
	};


	/// <summary>
	/// Deletes a specific key from cross-tenant settings at a context for the authenticated user.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/me/cross-tenant-settings/{context}/{keyname}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersMeCross_tenant_settingsContextKeynameDelete(const usersMeCross_tenant_settingsContextKeynameDeleteParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ICrossTenantSettingsApiBase() = default;
};

class IDaigramsApiBase : public csp::services::ApiBase
{
public:
	IDaigramsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct daigramsPostParams
	{
		const std::shared_ptr<DaigramCreateRequest>& RequestBody;
	};


	/// <summary>
	/// Create a daigram (provisions the backing group + scope) owned by the caller.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/daigrams
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsPost(const daigramsPostParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct daigramsGetParams
	{
	};


	/// <summary>
	/// List the daigrams the caller owns or can access via group membership.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/daigrams
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsGet(const daigramsGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct daigramsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Get a single daigram by id.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/daigrams/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsIdGet(const daigramsIdGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct daigramsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<DaigramUpdateRequest>& RequestBody;
	};


	/// <summary>
	/// Rename a daigram (metadata-only; caller must be owner or a group member/creator).
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/daigrams/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsIdPut(const daigramsIdPutParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct daigramsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Delete a daigram and tear down its group + scope + objects. Owner-only.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/daigrams/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsIdDelete(const daigramsIdDeleteParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct daigramsIdThumbnailPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<DaigramThumbnailRequest>& RequestBody;
	};


	/// <summary>
	/// Set a daigram's thumbnail Prototype id (capture-on-save). Owner or any group member —
	/// every member is a group creator, so any editor can capture the snapshot.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/daigrams/{id}/thumbnail
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsIdThumbnailPut(const daigramsIdThumbnailPutParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IDaigramsApiBase() = default;
};

class IDepartmentsApiBase : public csp::services::ApiBase
{
public:
	IDepartmentsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct productionrosterDepartmentsGetParams
	{
	};


	/// <summary>
	/// Every department with its ladder, in grid order.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/departments
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterDepartmentsGet(const productionrosterDepartmentsGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterDepartmentsPostParams
	{
		const std::shared_ptr<DepartmentUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Registers a department. <b>409 when the name is taken</b> — the unique index decides it.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/departments
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterDepartmentsPost(const productionrosterDepartmentsPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterDepartmentsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<DepartmentUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Edits a department, ladder included.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/departments/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterDepartmentsIdPut(const productionrosterDepartmentsIdPutParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterDepartmentsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Removes a department. <b>409 while people still belong to it.</b>
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/departments/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterDepartmentsIdDelete(const productionrosterDepartmentsIdDeleteParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IDepartmentsApiBase() = default;
};

class IEffortResourcesApiBase : public csp::services::ApiBase
{
public:
	IEffortResourcesApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct watchtowerEffortBulk_upsertPostParams
	{
		const std::shared_ptr<EffortResourceUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Bulk-upsert effort nodes (the write path for both the historical reconstructor and the live
	/// observer/agent). Super-user / agent gated. Provenance-gated: a lower-tier write never clobbers a
	/// higher-tier one.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/effort/bulk-upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerEffortBulk_upsertPost(const watchtowerEffortBulk_upsertPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerEffortBulk_removePostParams
	{
		const std::shared_ptr<EffortResourceRemoveRequest>& RequestBody;
	};


	/// <summary>
	/// Tombstone effort nodes by key — the removal verb for source units that have vanished. Keys only:
	/// the producer proposes a removal precisely because it no longer holds the payload. Soft: the entries
	/// keep their content and stay readable, marked `removed`, so the board draws them struck-through.
	/// Idempotent and provenance-gated; refused keys come back named. Same gate as bulk-upsert — this is a
	/// write.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/effort/bulk-remove
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerEffortBulk_removePost(const watchtowerEffortBulk_removePostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerEffortBulk_getPostParams
	{
		const std::shared_ptr<EffortResourceBulkGetRequest>& RequestBody;
	};


	/// <summary>
	/// Fetch effort nodes by key — the client hydration read. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/effort/bulk-get
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerEffortBulk_getPost(const watchtowerEffortBulk_getPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerEffortSearchPostParams
	{
		const std::shared_ptr<EffortResourceSearchRequest>& RequestBody;
	};


	/// <summary>
	/// The liveness search — nodes tagged with any of the requested daigram ids that changed since the
	/// caller's cursor, plus the cursor to pass next poll. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/effort/search
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerEffortSearchPost(const watchtowerEffortSearchPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IEffortResourcesApiBase() = default;
};

class IEncryptedValueApiBase : public csp::services::ApiBase
{
public:
	IEncryptedValueApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct encrypted_valuesTenantGetParams
	{
		const std::vector<utility::string_t>& keys;
		const std::optional<bool>& withUserOverrides;
	};


	/// <summary>
	/// Bulk retrieve tenant-owned encrypted values by key names.
	/// Returns decrypted values for authorized callers.
	/// Optionally includes user overrides where user keys take precedence over tenant keys.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/encrypted-values/tenant
	/// Authorization: tenant-secrets,admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void encrypted_valuesTenantGet(const encrypted_valuesTenantGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct encrypted_valuesTenantKey_namesGetParams
	{
	};


	/// <summary>
	/// Returns all key names for tenant-owned encrypted values, without decrypted values.
	/// Useful for populating a key management UI.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/encrypted-values/tenant/key-names
	/// Authorization: tenant-secrets,admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void encrypted_valuesTenantKey_namesGet(const encrypted_valuesTenantKey_namesGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct encrypted_valuesTenantKey_infoGetParams
	{
	};


	/// <summary>
	/// Returns key names and ownership info for tenant-owned encrypted values.
	/// Like M:Magnopus.Service.User.Controllers.EncryptedValueController.GetTenantKeyNames but includes
	/// Magnopus.Service.User.Dtos.TenantSecretKeyInfoDto.IsMagnopusOwned.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/encrypted-values/tenant/key-info
	/// Authorization: admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void encrypted_valuesTenantKey_infoGet(const encrypted_valuesTenantKey_infoGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct encrypted_valuesTenantKeyNamePutParams
	{
		const utility::string_t& keyName;
		const std::optional<utility::string_t>& applicationName;
		const std::shared_ptr<SetEncryptedValueRequest>& RequestBody;
	};


	/// <summary>
	/// Create or update a tenant-owned encrypted value.
	/// If the key already exists, it will be updated; otherwise, a new key will be created.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/encrypted-values/tenant/{keyName}
	/// Authorization: admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void encrypted_valuesTenantKeyNamePut(const encrypted_valuesTenantKeyNamePutParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct encrypted_valuesTenantKeyNameDeleteParams
	{
		const utility::string_t& keyName;
		const std::optional<utility::string_t>& applicationName;
	};


	/// <summary>
	/// Delete a tenant-owned encrypted value by key name.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/encrypted-values/tenant/{keyName}
	/// Authorization: admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void encrypted_valuesTenantKeyNameDelete(const encrypted_valuesTenantKeyNameDeleteParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IEncryptedValueApiBase() = default;
};

class IGroupApiBase : public csp::services::ApiBase
{
public:
	IGroupApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct groupsPostParams
	{
		const std::shared_ptr<GroupDto>& RequestBody;
	};


	/// <summary>
	/// Creates a new user group
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsPost(const groupsPostParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsPutParams
	{
		const std::shared_ptr<GroupDto>& RequestBody;
	};


	/// <summary>
	/// Creates or updates a user group
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void groupsPut(const groupsPutParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsDeleteParams
	{
		const std::optional<std::vector<utility::string_t>>& groupIds;
	};


	/// <summary>
	/// Locates the user groups by their ID groupIds
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsDelete(const groupsDeleteParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsGetParams
	{
		const std::optional<std::vector<utility::string_t>>& ids;
	};


	/// <summary>
	/// Locates groups by a provided list of ids
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGet(const groupsGetParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct group_codesGroupCodeUsersUserIdPutParams
	{
		const utility::string_t& groupCode;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Used to join a user group.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/group-codes/{groupCode}/users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void group_codesGroupCodeUsersUserIdPut(const group_codesGroupCodeUsersUserIdPutParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdGroup_code_resetPostParams
	{
		const utility::string_t& groupId;
	};


	/// <summary>
	/// Used to create new group code and remove old group code.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups/{groupId}/group-code-reset
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdGroup_code_resetPost(const groupsGroupIdGroup_code_resetPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdBanned_usersUserIdPutParams
	{
		const utility::string_t& groupId;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Finds a user by userId and bans the user from the group.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups/{groupId}/banned-users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdBanned_usersUserIdPut(const groupsGroupIdBanned_usersUserIdPutParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsGroupIdBanned_usersUserIdDeleteParams
	{
		const utility::string_t& groupId;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Finds a user by userId and removes the user from banned list for group
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups/{groupId}/banned-users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdBanned_usersUserIdDelete(const groupsGroupIdBanned_usersUserIdDeleteParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdDeleteParams
	{
		const utility::string_t& groupId;
	};


	/// <summary>
	/// Locates the user group by its ID groupId
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups/{groupId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdDelete(const groupsGroupIdDeleteParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsGroupIdGetParams
	{
		const utility::string_t& groupId;
	};


	/// <summary>
	/// Locates a group by the group's unique identifier groupId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdGet(const groupsGroupIdGetParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdGroupsGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Locates all groups for the user with unique identifier userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/groups
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdGroupsGet(const usersUserIdGroupsGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdUsersUserIdDeleteParams
	{
		const utility::string_t& groupId;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Finds a user by userId and removes the user from the group
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups/{groupId}/users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdUsersUserIdDelete(const groupsGroupIdUsersUserIdDeleteParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groups_summariesGetParams
	{
		const std::optional<utility::string_t>& groupCode;
	};


	/// <summary>
	/// Finds group summary by group code
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups-summaries
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groups_summariesGet(const groups_summariesGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdEmail_invitesPostParams
	{
		const utility::string_t& groupId;
		const std::optional<bool>& resendInvite;
		const std::optional<utility::string_t>& emailLinkUrl;
		const std::optional<utility::string_t>& signupUrl;
		const std::shared_ptr<GroupInviteDto>& RequestBody;
	};


	/// <summary>
	/// Sends email with a link to accept request to join a group with existing account or signup and join
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups/{groupId}/email-invites
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdEmail_invitesPost(const groupsGroupIdEmail_invitesPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsGroupIdEmail_invitesGetParams
	{
		const utility::string_t& groupId;
	};


	/// <summary>
	/// Finds all outstanding invites to a group for group owners
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}/email-invites
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdEmail_invitesGet(const groupsGroupIdEmail_invitesGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdEmail_invitesBulkPostParams
	{
		const utility::string_t& groupId;
		const std::optional<bool>& resendInvite;
		const std::optional<utility::string_t>& emailLinkUrl;
		const std::optional<utility::string_t>& signupUrl;
		const std::vector<std::shared_ptr<GroupInviteDto>>& RequestBody;
	};


	/// <summary>
	/// Sends email with a link to many people to accept request to join a group with existing account or signup and join
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups/{groupId}/email-invites/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdEmail_invitesBulkPost(const groupsGroupIdEmail_invitesBulkPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdLitePutParams
	{
		const utility::string_t& groupId;
		const std::shared_ptr<GroupLiteDto>& RequestBody;
	};


	/// <summary>
	/// Locates a group by its unique identifier and updates the updateable fields
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups/{groupId}/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdLitePut(const groupsGroupIdLitePutParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsGroupIdLiteGetParams
	{
		const utility::string_t& groupId;
	};


	/// <summary>
	/// Locates the simplified group by its unique identifier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdLiteGet(const groupsGroupIdLiteGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdOwnerNewGroupOwnerIdPutParams
	{
		const utility::string_t& groupId;
		const utility::string_t& newGroupOwnerId;
	};


	/// <summary>
	/// Used to reassign new owner to the group
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups/{groupId}/owner/{newGroupOwnerId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdOwnerNewGroupOwnerIdPut(const groupsGroupIdOwnerNewGroupOwnerIdPutParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdEmail_invitesAcceptedGetParams
	{
		const utility::string_t& groupId;
	};


	/// <summary>
	/// Finds all accepted invites to a group
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}/email-invites/accepted
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdEmail_invitesAcceptedGet(const groupsGroupIdEmail_invitesAcceptedGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdEmail_invitesEmailInviteIdDeleteParams
	{
		const utility::string_t& groupId;
		const utility::string_t& emailInviteId;
	};


	/// <summary>
	/// Finds the specified invite for a group and removes it
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups/{groupId}/email-invites/{emailInviteId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdEmail_invitesEmailInviteIdDelete(const groupsGroupIdEmail_invitesEmailInviteIdDeleteParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdModeratorsUserIdPutParams
	{
		const utility::string_t& groupId;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Used to add moderator to a group.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups/{groupId}/moderators/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdModeratorsUserIdPut(const groupsGroupIdModeratorsUserIdPutParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsGroupIdModeratorsUserIdDeleteParams
	{
		const utility::string_t& groupId;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Removes a user as moderator of the group
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups/{groupId}/moderators/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdModeratorsUserIdDelete(const groupsGroupIdModeratorsUserIdDeleteParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsLiteGetParams
	{
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& GroupTypes;
		const std::optional<std::vector<utility::string_t>>& Names;
		const std::optional<utility::string_t>& PartialName;
		const std::optional<std::vector<utility::string_t>>& GroupOwnerIds;
		const std::optional<std::vector<utility::string_t>>& ExcludeGroupOwnerIds;
		const std::optional<std::vector<utility::string_t>>& ExcludeIds;
		const std::optional<std::vector<utility::string_t>>& Users;
		const std::optional<bool>& Discoverable;
		const std::optional<bool>& AutoModerator;
		const std::optional<bool>& RequiresInvite;
		const std::optional<bool>& Archived;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<std::vector<utility::string_t>>& ExcludedTags;
		const std::optional<bool>& TagsAll;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Search across all the groups for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsLiteGet(const groupsLiteGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsLitePostParams
	{
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
		const std::shared_ptr<GroupFilters>& RequestBody;
	};


	/// <summary>
	/// Search across all the groups for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsLitePost(const groupsLitePostParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsUsersUserIdEmail_invitesGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Finds all outstanding invites for user
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/users/{userId}/email-invites
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsUsersUserIdEmail_invitesGet(const groupsUsersUserIdEmail_invitesGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdUsersUserIdEmail_invitesEmailInviteIdAcceptPostParams
	{
		const utility::string_t& groupId;
		const utility::string_t& userId;
		const utility::string_t& emailInviteId;
	};


	/// <summary>
	/// Accepts an email invite to join a group for a user
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups/{groupId}/users/{userId}/email-invites/{emailInviteId}/accept
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void
		groupsGroupIdUsersUserIdEmail_invitesEmailInviteIdAcceptPost(const groupsGroupIdUsersUserIdEmail_invitesEmailInviteIdAcceptPostParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsArchivedPutParams
	{
		const utility::string_t& groupOwnerId;
		const std::optional<std::vector<utility::string_t>>& groupIds;
		const bool& archived;
	};


	/// <summary>
	/// Used to set whether a Group is archived or not. Archived Groups
	/// cannot be modified, and they cannot be viewed by anyone but their owner.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups/archived
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsArchivedPut(const groupsArchivedPutParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IGroupApiBase() = default;
};

class IInventoryApiBase : public csp::services::ApiBase
{
public:
	IInventoryApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct usersUserIdInventory_itemsGetParams
	{
		const utility::string_t& userId;
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<bool>& Exchangeable;
		const std::optional<bool>& IsGift;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<std::map<utility::string_t, utility::string_t>>& State;
		const std::optional<std::vector<utility::string_t>>& ItemTypes;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<utility::string_t>& CreatedBefore;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Search across all of the user's inventory for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/inventory-items
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdInventory_itemsGet(const usersUserIdInventory_itemsGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdInventory_itemsPostParams
	{
		const utility::string_t& userId;
		const std::optional<bool>& notify;
		const std::shared_ptr<InventoryItemDto>& RequestBody;
	};


	/// <summary>
	/// Adds new item to user inventory items
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/inventory-items
	/// Authorization: external-service,magnopus-admin,magnopus-support,admin,support,internal-service,tester
	/// </remarks>
	virtual void usersUserIdInventory_itemsPost(const usersUserIdInventory_itemsPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdInventory_idsGetParams
	{
		const utility::string_t& userId;
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<bool>& Exchangeable;
		const std::optional<bool>& IsGift;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<std::map<utility::string_t, utility::string_t>>& State;
		const std::optional<std::vector<utility::string_t>>& ItemTypes;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<utility::string_t>& CreatedBefore;
	};


	/// <summary>
	/// Search across all of the inventory for those that match the search criteria
	/// and return a distinct list of only the Magnopus.Service.User.Dtos.InventoryItemDto.PrototypeId for each match.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/inventory-ids
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdInventory_idsGet(const usersUserIdInventory_idsGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersInventory_itemsOwnersGetParams
	{
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<bool>& Exchangeable;
		const std::optional<bool>& IsGift;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<std::map<utility::string_t, utility::string_t>>& State;
		const std::optional<std::vector<utility::string_t>>& ItemTypes;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<utility::string_t>& CreatedBefore;
	};


	/// <summary>
	/// Search across all of the item ids for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/inventory-items/owners
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void usersInventory_itemsOwnersGet(const usersInventory_itemsOwnersGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersInventory_countGetParams
	{
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<bool>& Exchangeable;
		const std::optional<bool>& IsGift;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<std::map<utility::string_t, utility::string_t>>& State;
		const std::optional<std::vector<utility::string_t>>& ItemTypes;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<utility::string_t>& CreatedBefore;
	};


	/// <summary>
	/// Count across all of the inventory for those that match the search criteria
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/inventory-count
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersInventory_countGet(const usersInventory_countGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdInventory_itemsIdGetParams
	{
		const utility::string_t& userId;
		const utility::string_t& id;
	};


	/// <summary>
	/// Locates the inventory items by its instance's unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/inventory-items/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdInventory_itemsIdGet(const usersUserIdInventory_itemsIdGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdInventory_itemsIdDeleteParams
	{
		const utility::string_t& userId;
		const utility::string_t& id;
	};


	/// <summary>
	/// Locates the inventory item by its user's unique identifier userId
	/// and item unique identifier id
	/// and removes it from the user's inventory items.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/inventory-items/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdInventory_itemsIdDelete(const usersUserIdInventory_itemsIdDeleteParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdInventory_itemsIdPutParams
	{
		const utility::string_t& userId;
		const utility::string_t& id;
		const std::shared_ptr<InventoryItemDto>& RequestBody;
	};


	/// <summary>
	/// Locates the inventory item instance by its unique identifier id
	/// and updates the fields of that item with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/inventory-items/{id}
	/// Authorization: external-service,magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void usersUserIdInventory_itemsIdPut(const usersUserIdInventory_itemsIdPutParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdInventory_itemsIdEquipPutParams
	{
		const utility::string_t& userId;
		const utility::string_t& id;
		const std::shared_ptr<EquipItemDto>& RequestBody;
	};


	/// <summary>
	/// Equip or UnEquip an inventory item based on a particular user
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/inventory-items/{id}/equip
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdInventory_itemsIdEquipPut(const usersUserIdInventory_itemsIdEquipPutParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInventoryApiBase() = default;
};

class IJiraResourcesApiBase : public csp::services::ApiBase
{
public:
	IJiraResourcesApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct watchtowerJiraBulk_upsertPostParams
	{
		const std::shared_ptr<JiraResourceUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Bulk-upsert read-model entries (the collector/agent write path). Super-user gated — this is a
	/// collector seam, not a user action. Callers should send only changed entries (the poller diffs).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/bulk-upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraBulk_upsertPost(const watchtowerJiraBulk_upsertPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraBulk_getPostParams
	{
		const std::shared_ptr<JiraResourceBulkGetRequest>& RequestBody;
	};


	/// <summary>
	/// Fetch read-model entries by key — the client hydration read. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/bulk-get
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraBulk_getPost(const watchtowerJiraBulk_getPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraSearchPostParams
	{
		const std::shared_ptr<JiraResourceSearchRequest>& RequestBody;
	};


	/// <summary>
	/// The liveness search — entries tagged with any of the requested daigram ids that changed since
	/// the caller's cursor, plus the cursor to pass next poll. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/search
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraSearchPost(const watchtowerJiraSearchPostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraCreatemetaProjectGetParams
	{
		const utility::string_t& project;
		const std::optional<utility::string_t>& family;
	};


	/// <summary>
	/// The stored create schema for a project (all creatable issue types + projected fields) — the
	/// inline-create form reads this. Null/no-content when not yet seeded (the form falls back to a
	/// summary-only create). Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/watchtower/jira/createmeta/{project}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraCreatemetaProjectGet(const watchtowerJiraCreatemetaProjectGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraCreatemetaUpsertPostParams
	{
		const std::shared_ptr<JiraCreateMetaUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Refresh a project's create schema (the collector write path). Super-user gated.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/createmeta/upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraCreatemetaUpsertPost(const watchtowerJiraCreatemetaUpsertPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraReferenceProjectKindGetParams
	{
		const utility::string_t& project;
		const utility::string_t& kind;
		const std::optional<utility::string_t>& family;
	};


	/// <summary>
	/// A project-scoped reference list (`components`/`versions`) for a typeahead — the big
	/// option sets kept out of the create schema. Null/no-content when not yet seeded. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/watchtower/jira/reference/{project}/{kind}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraReferenceProjectKindGet(const watchtowerJiraReferenceProjectKindGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraReferenceUpsertPostParams
	{
		const std::shared_ptr<JiraReferenceUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Refresh a project's reference list (the collector write path). Super-user gated.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/reference/upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraReferenceUpsertPost(const watchtowerJiraReferenceUpsertPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IJiraResourcesApiBase() = default;
};

class INtpApiBase : public csp::services::ApiBase
{
public:
	INtpApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
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

class IPeopleApiBase : public csp::services::ApiBase
{
public:
	IPeopleApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct productionrosterPeopleGetParams
	{
	};


	/// <summary>
	/// The whole roster, by name.
	///
	/// ⚠ <b>Unpaged, deliberately</b> (§3.3): the grid groups by department, divides by title
	/// ladder and totals utilization across the studio, all of which need every row.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/people
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterPeopleGet(const productionrosterPeopleGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterPeoplePostParams
	{
		const std::shared_ptr<PersonUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Adds a person. 409 on a duplicate name; 400 when the title is off the department's ladder.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/people
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterPeoplePost(const productionrosterPeoplePostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterPeopleIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<PersonUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Edits a person.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/people/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterPeopleIdPut(const productionrosterPeopleIdPutParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterPeopleIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Removes a person <b>and every assignment they hold</b>.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/people/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterPeopleIdDelete(const productionrosterPeopleIdDeleteParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IPeopleApiBase() = default;
};

class IPingApiBase : public csp::services::ApiBase
{
public:
	IPingApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
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

class IProfileApiBase : public csp::services::ApiBase
{
public:
	IProfileApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct usersPostParams
	{
		const std::shared_ptr<CreateUserRequest>& RequestBody;
	};


	/// <summary>
	/// Used to Create a User Profile.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersPost(const usersPostParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersGetParams
	{
		const std::optional<utility::string_t>& GuestDeviceId;
		const std::optional<utility::string_t>& PartialGuestDeviceId;
		const std::optional<utility::string_t>& Email;
		const std::optional<utility::string_t>& UserName;
		const std::optional<utility::string_t>& LastDeviceId;
		const std::optional<bool>& SearchPartialEmails;
		const std::optional<std::vector<utility::string_t>>& GuestDeviceIds;
		const std::optional<std::vector<utility::string_t>>& EmailAddresses;
		const std::optional<std::vector<utility::string_t>>& UserNames;
		const std::optional<std::vector<utility::string_t>>& LastDeviceIds;
		const std::optional<std::vector<utility::string_t>>& ProviderUserIds;
		const std::optional<utility::string_t>& EmailOrDisplayNameFragment;
		const std::optional<utility::string_t>& SortBy;
		const std::optional<utility::string_t>& SortDirection;
		const std::optional<bool>& PasswordLoginDisabled;
		const std::optional<utility::string_t>& EmailDisplayNameUserIdCombinedTerm;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Search across all the Users for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,account-manager
	/// </remarks>
	virtual void usersGet(const usersGetParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersCreate_socialPostParams
	{
		const std::shared_ptr<CreateUserSocialRequest>& RequestBody;
	};


	/// <summary>
	/// Used to Create a User Profile using a token from a social authentication provider.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/create-social
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersCreate_socialPost(const usersCreate_socialPostParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdUpgrade_guestPostParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<UpgradeGuestRequest>& RequestBody;
	};


	/// <summary>
	/// Used to upgrade a guest user into an registered User Profile.  This profile will not be email-verified
	/// unless the token included in the request is verified - implying that only tokens from partner systems
	/// where the user is already verified will end up verified in MGS.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/upgrade-guest
	/// Authorization: enduser,admin,support,account-manager,internal-service
	/// </remarks>
	virtual void usersUserIdUpgrade_guestPost(const usersUserIdUpgrade_guestPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdUpgrade_guest_socialPostParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<UpgradeGuestSocialRequest>& RequestBody;
	};


	/// <summary>
	/// Used to upgrade a guest user into an registered User Profile using a token from a social authentication provider.
	/// This profile will be email-verified.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/upgrade-guest-social
	/// Authorization: enduser,admin,support,account-manager,internal-service
	/// </remarks>
	virtual void usersUserIdUpgrade_guest_socialPost(const usersUserIdUpgrade_guest_socialPostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdDeleteParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Locates the user profile by its ID userId
	/// and anonymizes the user data, and deletes supporting data.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdDelete(const usersUserIdDeleteParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Locates the user profile by its unique identifier userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdGet(const usersUserIdGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdHard_deleteDeleteParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Locates the user profile by its ID userId
	/// and delete the profile as well as any supporting data.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/hard-delete
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void usersUserIdHard_deleteDelete(const usersUserIdHard_deleteDeleteParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersHard_deleteDeleteParams
	{
		const std::optional<std::vector<utility::string_t>>& ids;
	};


	/// <summary>
	/// Locates the user profiles by their IDs ids
	/// and delete the profiles as well as any supporting data.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/hard-delete
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void usersHard_deleteDelete(const usersHard_deleteDeleteParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdTenanciesGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Returns all tenants where the specified user's email has a profile.
	/// The caller must be the same user or a super-admin.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/tenancies
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdTenanciesGet(const usersUserIdTenanciesGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersAll_tenantsGetParams
	{
		const std::optional<utility::string_t>& GuestDeviceId;
		const std::optional<utility::string_t>& PartialGuestDeviceId;
		const std::optional<utility::string_t>& Email;
		const std::optional<utility::string_t>& UserName;
		const std::optional<utility::string_t>& LastDeviceId;
		const std::optional<bool>& SearchPartialEmails;
		const std::optional<std::vector<utility::string_t>>& GuestDeviceIds;
		const std::optional<std::vector<utility::string_t>>& EmailAddresses;
		const std::optional<std::vector<utility::string_t>>& UserNames;
		const std::optional<std::vector<utility::string_t>>& LastDeviceIds;
		const std::optional<std::vector<utility::string_t>>& ProviderUserIds;
		const std::optional<utility::string_t>& EmailOrDisplayNameFragment;
		const std::optional<utility::string_t>& SortBy;
		const std::optional<utility::string_t>& SortDirection;
		const std::optional<bool>& PasswordLoginDisabled;
		const std::optional<utility::string_t>& EmailDisplayNameUserIdCombinedTerm;
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// Search users across <b>every</b> tenant — the top matches for an admin autocomplete.
	/// M:Magnopus.Service.User.Controllers.ProfileController.SearchAll(Magnopus.Service.User.Structures.UserQuery,Magnopus.Common.Contracts.Structures.SearchPagination)
	/// resolves against the caller's ambient tenant, because `ProfileDocument` has no tenant field and isolation lives at the repo layer. That is
	/// correct for tenant-scoped admin screens, and wrong for MagGyver's Usage section in
	/// <b>All Tenant Usage</b> scope, where the user filter was silently only ever offering users
	/// from whichever tenant the operator happened to be signed into. This is the cross-tenant
	/// counterpart, so cross-tenant is explicit and role-gated (mirroring
	/// `SearchAllUserIds_CrossTenant` and
	/// M:Magnopus.Service.User.Controllers.ProfileController.SearchAdminLite(System.Collections.Generic.List{System.String})). <b>Capped, not paged,
	/// and it returns no total.</b> The text predicate is a regex OR, which no index can serve, so this is a scan of every profile in the
	/// environment; a total would double that scan for a number an autocomplete does not display. `limit` is clamped in the logic layer. Do not grow
	/// this into a paged cross-tenant user list without a different access path — see the note on `ProfileRepository.SearchAllUsers_CrossTenant`.
	/// Returns Magnopus.Service.User.Dtos.ProfileAdminLiteDto rather than `ProfileDto`: it carries the
	/// tenant name, which is exactly the column a cross-tenant picker has to show, and it exposes
	/// nothing beyond the admin-relevant fields
	/// M:Magnopus.Service.User.Controllers.ProfileController.SearchAdminLite(System.Collections.Generic.List{System.String}) already does under the
	/// same role gate.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/all-tenants
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void usersAll_tenantsGet(const usersAll_tenantsGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersProfile_idsPostParams
	{
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
		const std::shared_ptr<UserQuery>& RequestBody;
	};


	/// <summary>
	/// Search across all the Users for those that match the search criteria and returns a list of profile id's
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/profile-ids
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void usersProfile_idsPost(const usersProfile_idsPostParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersTenantsTenantProfile_idsPostParams
	{
		const utility::string_t& tenant;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
		const std::shared_ptr<UserQuery>& RequestBody;
	};


	/// <summary>
	/// Search across all the Users for those that match the search criteria and returns a list of profile id's
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/tenants/{tenant}/profile-ids
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void usersTenantsTenantProfile_idsPost(const usersTenantsTenantProfile_idsPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdToken_change_passwordPostParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<TokenResetPasswordRequest>& RequestBody;
	};


	/// <summary>
	/// Use email-provided token to change password
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/token-change-password
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersUserIdToken_change_passwordPost(const usersUserIdToken_change_passwordPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersForgot_passwordPostParams
	{
		const std::optional<utility::string_t>& redirect;
		const std::optional<bool>& useTokenChangePasswordUrl;
		const std::optional<utility::string_t>& emailLinkUrl;
		const std::shared_ptr<ForgotPasswordRequest>& RequestBody;
	};


	/// <summary>
	/// Send email to user with a link to reset user password
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/forgot-password
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersForgot_passwordPost(const usersForgot_passwordPostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdConfirm_emailPostParams
	{
		const utility::string_t& userId;
		const std::optional<utility::string_t>& redirect;
	};


	/// <summary>
	/// Sends email with a confirmation link to verify email address
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/confirm-email
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdConfirm_emailPost(const usersUserIdConfirm_emailPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersEmailsEmailConfirm_emailRe_sendPostParams
	{
		const utility::string_t& email;
		const std::optional<utility::string_t>& tenant;
		const std::optional<utility::string_t>& redirect;
	};


	/// <summary>
	/// Resends email with a confirmation link to verify email address
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/emails/{email}/confirm-email/re-send
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersEmailsEmailConfirm_emailRe_sendPost(const usersEmailsEmailConfirm_emailRe_sendPostParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdMetagamePutParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<MetagameUpdate>& RequestBody;
	};


	/// <summary>
	/// Locates the user metagame progress by its ID userId
	/// and updates the data based on the update to apply.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/metagame
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,external-service
	/// </remarks>
	virtual void usersUserIdMetagamePut(const usersUserIdMetagamePutParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdMetagameGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Locates the user metagame progress by its unique identifier userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/metagame
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdMetagameGet(const usersUserIdMetagameGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdFirst_nameFirstNamePutParams
	{
		const utility::string_t& userId;
		const utility::string_t& firstName;
	};


	/// <summary>
	/// Set the user profile's first name
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/first-name/{firstName}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdFirst_nameFirstNamePut(const usersUserIdFirst_nameFirstNamePutParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdDisplay_namePutParams
	{
		const utility::string_t& userId;
		const utility::string_t& displayName;
	};


	/// <summary>
	/// Set the user profile's display name
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/display-name
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdDisplay_namePut(const usersUserIdDisplay_namePutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdLiteGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Locates the simplified user profile by its unique identifier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdLiteGet(const usersUserIdLiteGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersMeSocialProviderIdGetParams
	{
		const utility::string_t& provider;
	};


	/// <summary>
	/// Returns the CALLER's own stable subject id for a social provider (e.g. their Google `sub`). Strictly
	/// self-scoped: the user id is taken from the authenticated principal, never from a route parameter, so a
	/// caller can only ever read their own provider id — this is not a cross-user lookup or an enumeration
	/// surface. Used by the marketplace admin bootstrap to capture the initiating Google subject of whoever
	/// drives onboarding.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/me/social/{provider}/id
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersMeSocialProviderIdGet(const usersMeSocialProviderIdGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersLiteGetParams
	{
		const std::optional<std::vector<utility::string_t>>& ids;
	};


	/// <summary>
	/// Get the user profile's personality type and/or personality values type />
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersLiteGet(const usersLiteGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersAdmin_litePostParams
	{
		const std::vector<utility::string_t>& RequestBody;
	};


	/// <summary>
	/// Bulk admin-lite resolution: maps a set of user ids to their email + admin-relevant
	/// fields. Unlike M:Magnopus.Service.User.Controllers.ProfileController.SearchLite(System.Collections.Generic.IList{System.String}) this includes
	/// email, so it is restricted to MagnopusSuperUsers and resolves cross-tenant (ProfileDocument has no tenant field; isolation is at the
	/// repo/service layer, so cross-tenant must be explicit and role-gated — mirrors `SearchAllUserIds_CrossTenant`). POST so large id sets don't hit
	/// URL limits.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/admin-lite
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void usersAdmin_litePost(const usersAdmin_litePostParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdLock_accountPutParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Sets the Users account to Locked
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/lock-account
	/// Authorization: account-manager,magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void usersUserIdLock_accountPut(const usersUserIdLock_accountPutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdUnlock_accountPutParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Sets the Users account to unlocked
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/unlock-account
	/// Authorization: account-manager,magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void usersUserIdUnlock_accountPut(const usersUserIdUnlock_accountPutParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IProfileApiBase() = default;
};

class IProjectsApiBase : public csp::services::ApiBase
{
public:
	IProjectsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct productionrosterProjectsGetParams
	{
	};


	/// <summary>
	/// Every project, by name.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/projects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterProjectsGet(const productionrosterProjectsGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterProjectsPostParams
	{
		const std::shared_ptr<ProjectUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Creates a project. <b>409 on a duplicate name</b> — see Magnopus.Logic.ProductionRoster.IProjectLogic.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/projects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterProjectsPost(const productionrosterProjectsPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterProjectsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<ProjectUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Renames or recolours a project. Every assignment follows, because they carry the id.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/projects/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterProjectsIdPut(const productionrosterProjectsIdPutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterProjectsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Removes a project and every assignment on it.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/projects/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterProjectsIdDelete(const productionrosterProjectsIdDeleteParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IProjectsApiBase() = default;
};

class ISettingsApiBase : public csp::services::ApiBase
{
public:
	ISettingsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct usersUserIdSettingsContextPutParams
	{
		const utility::string_t& userId;
		const utility::string_t& context;
		const std::shared_ptr<SettingsDto>& RequestBody;
	};


	/// <summary>
	/// Creates context settings or updates existing settings - any previously existing settings
	/// stored in the context not referenced in the call are left unchanged.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdSettingsContextPut(const usersUserIdSettingsContextPutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdSettingsContextGetParams
	{
		const utility::string_t& userId;
		const utility::string_t& context;
		const std::optional<std::vector<utility::string_t>>& keys;
	};


	/// <summary>
	/// Gets the settings for a user by context.  If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdSettingsContextGet(const usersUserIdSettingsContextGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdSettingsContextDeleteParams
	{
		const utility::string_t& userId;
		const utility::string_t& context;
	};


	/// <summary>
	/// Deletes all settings related to a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdSettingsContextDelete(const usersUserIdSettingsContextDeleteParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersSettingsContextGetParams
	{
		const utility::string_t& context;
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<std::vector<utility::string_t>>& keys;
	};


	/// <summary>
	/// Gets the settings for one or more users by context.  If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/settings/{context}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void usersSettingsContextGet(const usersSettingsContextGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdSettingsGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Gets all the contexts for which the user has settings
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/settings
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdSettingsGet(const usersUserIdSettingsGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdSettingsContextKeynameDeleteParams
	{
		const utility::string_t& userId;
		const utility::string_t& context;
		const utility::string_t& keyname;
	};


	/// <summary>
	/// Deletes keyname setting at a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/settings/{context}/{keyname}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdSettingsContextKeynameDelete(const usersUserIdSettingsContextKeynameDeleteParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISettingsApiBase() = default;
};

class ISnapshotApiBase : public csp::services::ApiBase
{
public:
	ISnapshotApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct productionrosterSnapshotGetParams
	{
		const std::optional<std::vector<utility::string_t>>& types;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
	};


	/// <summary>
	/// The requested slices of the roster, in one response.
	///
	/// ★ <b>Why this exists.</b> The grid's first load and its refresh pulse both need the same
	/// five things, and they were five parallel requests — per tick, per open client. Beyond the
	/// obvious cost, five requests are <b>five independently-timed reads of one logical state</b>:
	/// a person deleted between the people read and the assignment read leaves the client holding
	/// bookings for somebody who is no longer on the roster.
	/// `?types=people&types=projects` names what to include; omitting it returns
	/// everything, because a request that names nothing is far likelier to be a caller that
	/// forgot the parameter than one that wants an empty object. A type that was not requested
	/// comes back as an <b>absent key</b>, which is deliberately distinguishable from an empty
	/// list — see Magnopus.Logic.ProductionRoster.Dtos.RosterSnapshotDto.
	/// ⚠ `from` and `to` are <b>required</b> when `assignments` is requested. The
	/// roster is a studio's whole history and an unbounded read is never what a caller meant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/snapshot
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterSnapshotGet(const productionrosterSnapshotGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISnapshotApiBase() = default;
};

class IStripeApiBase : public csp::services::ApiBase
{
public:
	IStripeApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct vendorsStripeWebhookPostParams
	{
		const std::optional<utility::string_t>& tenant;
		const std::optional<utility::string_t>& environmentAlias;
	};


	/// <summary>
	/// Here to handle webhooks
	/// </summary>
	/// <remarks>
	/// POST /api/v1/vendors/stripe/webhook
	/// Authorization: Anonymous
	/// </remarks>
	virtual void vendorsStripeWebhookPost(const vendorsStripeWebhookPostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct vendorsStripeCheckout_sessionsPostParams
	{
		const std::shared_ptr<StripeCheckoutRequest>& RequestBody;
	};


	/// <summary>
	/// Here to handle checkout session creation
	/// </summary>
	/// <remarks>
	/// POST /api/v1/vendors/stripe/checkout-sessions
	/// Authorization: Anonymous
	/// </remarks>
	virtual void vendorsStripeCheckout_sessionsPost(const vendorsStripeCheckout_sessionsPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct vendorsStripeCustomersUserIdGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Here to handle checkout session creation
	/// </summary>
	/// <remarks>
	/// GET /api/v1/vendors/stripe/customers/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void vendorsStripeCustomersUserIdGet(const vendorsStripeCustomersUserIdGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct vendorsStripeCustomer_portalsUserIdGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Here to provide link to customer portal
	/// </summary>
	/// <remarks>
	/// GET /api/v1/vendors/stripe/customer-portals/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void vendorsStripeCustomer_portalsUserIdGet(const vendorsStripeCustomer_portalsUserIdGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IStripeApiBase() = default;
};

class ISuperAdminTenantApiBase : public csp::services::ApiBase
{
public:
	ISuperAdminTenantApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct super_adminTenantsGetParams
	{
		const std::optional<int32_t>& skip;
		const std::optional<int32_t>& limit;
		const std::optional<utility::string_t>& search;
		const std::optional<bool>& pendingAdmin;
		const std::optional<utility::string_t>& sortBy;
		const std::optional<utility::string_t>& sortDirection;
	};


	/// <summary>
	/// Lists all tenants with optional filtering and pagination.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsGet(const super_adminTenantsGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameGetParams
	{
		const utility::string_t& tenantName;
	};


	/// <summary>
	/// Gets a single tenant by name.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants/{tenantName}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameGet(const super_adminTenantsTenantNameGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct super_adminTenantsTenantNameDeleteParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& reason;
		const std::shared_ptr<TenantCleanupFilters>& RequestBody;
	};


	/// <summary>
	/// Deletes a tenant, and/or its data, from outside that tenant.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/super-admin/tenants/{tenantName}
	///
	/// This is the cross-tenant sibling of `DELETE tenants/names/{name}` on `TenantController`,
	///             which only ever accepts the caller's own tenant. It exists so an operator sitting in the super
	///             tenant can sweep tenants without exchanging tenancy into each one first.
	/// It is deliberately a <b>primitive</b>: it does not care how the tenant was created, so any
	///             "only delete marketplace tenants" policy belongs in the calling tool, not here.
	/// The work is queued as a `DeleteTenantData` message and carried out asynchronously by the
	///             Aggregation service, using exactly the same cleanup implementation as the own-tenant endpoint —
	///             so the cascade semantics of tenantCleanupFilters are identical. A 202 means
	///             "accepted for processing", not "deleted"; poll `GET super-admin/tenants/{tenantName}` to
	///             confirm the outcome.
	/// </remarks>
	virtual void super_adminTenantsTenantNameDelete(const super_adminTenantsTenantNameDeleteParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameUsersGetParams
	{
		const utility::string_t& tenantName;
		const std::optional<int32_t>& skip;
		const std::optional<int32_t>& limit;
		const std::optional<utility::string_t>& search;
		const std::optional<utility::string_t>& sortBy;
		const std::optional<utility::string_t>& sortDirection;
		const std::optional<bool>& passwordLoginDisabled;
	};


	/// <summary>
	/// Lists users for a specific tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants/{tenantName}/users
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameUsersGet(const super_adminTenantsTenantNameUsersGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameUsersUserIdLock_accountPutParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Locks a user account in the specified tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/super-admin/tenants/{tenantName}/users/{userId}/lock-account
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameUsersUserIdLock_accountPut(const super_adminTenantsTenantNameUsersUserIdLock_accountPutParams& Params,
																		csp::services::ApiResponseHandlerBase* ResponseHandler,
																		csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameUsersUserIdUnlock_accountPutParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Unlocks a user account in the specified tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/super-admin/tenants/{tenantName}/users/{userId}/unlock-account
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void
		super_adminTenantsTenantNameUsersUserIdUnlock_accountPut(const super_adminTenantsTenantNameUsersUserIdUnlock_accountPutParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameUsersUserIdDeleteParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Soft-deletes (anonymizes) a user account in the specified tenant.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/super-admin/tenants/{tenantName}/users/{userId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameUsersUserIdDelete(const super_adminTenantsTenantNameUsersUserIdDeleteParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameUsersUserIdRolesPutParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& userId;
		const std::shared_ptr<UpdateRolesRequest>& RequestBody;
	};


	/// <summary>
	/// Updates roles for a user in the specified tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/super-admin/tenants/{tenantName}/users/{userId}/roles
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameUsersUserIdRolesPut(const super_adminTenantsTenantNameUsersUserIdRolesPutParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameEmail_settingsGetParams
	{
		const utility::string_t& tenantName;
	};


	/// <summary>
	/// Gets email settings (including allow-list) for a specific tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants/{tenantName}/email-settings
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameEmail_settingsGet(const super_adminTenantsTenantNameEmail_settingsGetParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct super_adminTenantsTenantNameEmail_settingsPutParams
	{
		const utility::string_t& tenantName;
		const std::shared_ptr<UpdateEmailSettingsRequest>& RequestBody;
	};


	/// <summary>
	/// Updates email settings (including allow-list) for a specific tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/super-admin/tenants/{tenantName}/email-settings
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameEmail_settingsPut(const super_adminTenantsTenantNameEmail_settingsPutParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameSecretsKey_namesGetParams
	{
		const utility::string_t& tenantName;
	};


	/// <summary>
	/// Gets all secret key names for a specific tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants/{tenantName}/secrets/key-names
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameSecretsKey_namesGet(const super_adminTenantsTenantNameSecretsKey_namesGetParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameSecretsGetParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& keys;
	};


	/// <summary>
	/// Gets decrypted secret values for a specific tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants/{tenantName}/secrets
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameSecretsGet(const super_adminTenantsTenantNameSecretsGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameSecretsKey_infoGetParams
	{
		const utility::string_t& tenantName;
	};


	/// <summary>
	/// Returns key names and ownership info for a specific tenant's secrets.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants/{tenantName}/secrets/key-info
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameSecretsKey_infoGet(const super_adminTenantsTenantNameSecretsKey_infoGetParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameSecretsKeyNameMagnopus_ownedPutParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& keyName;
		const std::shared_ptr<SetMagnopusOwnedRequest>& RequestBody;
	};


	/// <summary>
	/// Sets the MagnopusOwned flag on a single secret for a specific tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/super-admin/tenants/{tenantName}/secrets/{keyName}/magnopus-owned
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void
		super_adminTenantsTenantNameSecretsKeyNameMagnopus_ownedPut(const super_adminTenantsTenantNameSecretsKeyNameMagnopus_ownedPutParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameSecretsMagnopus_ownedPutParams
	{
		const utility::string_t& tenantName;
		const std::shared_ptr<SetMagnopusOwnedBatchRequest>& RequestBody;
	};


	/// <summary>
	/// Sets the MagnopusOwned flag on multiple secrets for a specific tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/super-admin/tenants/{tenantName}/secrets/magnopus-owned
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameSecretsMagnopus_ownedPut(const super_adminTenantsTenantNameSecretsMagnopus_ownedPutParams& Params,
																	  csp::services::ApiResponseHandlerBase* ResponseHandler,
																	  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameSecretsKeyNamePutParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& keyName;
		const std::shared_ptr<SetEncryptedValueRequest>& RequestBody;
	};


	/// <summary>
	/// Sets a secret value for a specific tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/super-admin/tenants/{tenantName}/secrets/{keyName}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameSecretsKeyNamePut(const super_adminTenantsTenantNameSecretsKeyNamePutParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct super_adminTenantsTenantNameSecretsKeyNameDeleteParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& keyName;
	};


	/// <summary>
	/// Deletes a secret for a specific tenant.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/super-admin/tenants/{tenantName}/secrets/{keyName}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameSecretsKeyNameDelete(const super_adminTenantsTenantNameSecretsKeyNameDeleteParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameLegacy_hostnamesPostParams
	{
		const utility::string_t& tenantName;
		const std::shared_ptr<CreateLegacyHostnameRequest>& RequestBody;
	};


	/// <summary>
	/// Creates a legacy hostname mapping (adds to MappedHostnames without DNS provisioning).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/super-admin/tenants/{tenantName}/legacy-hostnames
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameLegacy_hostnamesPost(const super_adminTenantsTenantNameLegacy_hostnamesPostParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameLegacy_hostnamesHostnamePutParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& hostname;
		const std::shared_ptr<CreateLegacyHostnameRequest>& RequestBody;
	};


	/// <summary>
	/// Updates (renames) a legacy hostname mapping.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/super-admin/tenants/{tenantName}/legacy-hostnames/{hostname}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameLegacy_hostnamesHostnamePut(const super_adminTenantsTenantNameLegacy_hostnamesHostnamePutParams& Params,
																		 csp::services::ApiResponseHandlerBase* ResponseHandler,
																		 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct super_adminTenantsTenantNameLegacy_hostnamesHostnameDeleteParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& hostname;
	};


	/// <summary>
	/// Deletes a legacy hostname mapping.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/super-admin/tenants/{tenantName}/legacy-hostnames/{hostname}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void
		super_adminTenantsTenantNameLegacy_hostnamesHostnameDelete(const super_adminTenantsTenantNameLegacy_hostnamesHostnameDeleteParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameSso_redirectsHostname_diffGetParams
	{
		const utility::string_t& tenantName;
	};


	/// <summary>
	/// Returns the diff between a tenant's hostnames and its `AllowedSsoRedirectUris`.
	/// Used by Inspector to surface a "Sync to SSO Redirects" button + orphan note on the
	/// Hostnames tab when the two lists have drifted apart.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants/{tenantName}/sso-redirects/hostname-diff
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void
		super_adminTenantsTenantNameSso_redirectsHostname_diffGet(const super_adminTenantsTenantNameSso_redirectsHostname_diffGetParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameSso_redirectsSync_from_hostnamesPostParams
	{
		const utility::string_t& tenantName;
	};


	/// <summary>
	/// Additively syncs `AllowedSsoRedirectUris` from the tenant's hostnames: adds
	/// `https://{hostname}` for every typed or legacy hostname that is not already
	/// represented. Orphan URIs (no matching hostname) are surfaced in the response but
	/// never removed by this endpoint.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/super-admin/tenants/{tenantName}/sso-redirects/sync-from-hostnames
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameSso_redirectsSync_from_hostnamesPost(
		const super_adminTenantsTenantNameSso_redirectsSync_from_hostnamesPostParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISuperAdminTenantApiBase() = default;
};

class ISystemClaimApiBase : public csp::services::ApiBase
{
public:
	ISystemClaimApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct batonSystemsSystemIdClaimPostParams
	{
		const utility::string_t& systemId;
		const std::shared_ptr<TakeBatonRequest>& RequestBody;
	};


	/// <summary>
	/// <b>Take the baton.</b> 200 with the system as it now stands, or <b>409 with the current
	///             holder in the body</b> so the UI can say "Matt took it a moment ago" rather than
	///             "something went wrong".
	/// </summary>
	/// <remarks>
	/// POST /api/v1/baton/systems/{systemId}/claim
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsSystemIdClaimPost(const batonSystemsSystemIdClaimPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsSystemIdClaimDeleteParams
	{
		const utility::string_t& systemId;
		const std::optional<bool>& force;
		const std::optional<utility::string_t>& note;
	};


	/// <summary>
	/// <b>Pass the baton.</b> Releases the caller's own hold; `?force=true` releases
	///              whoever is holding it.
	///
	///
	/// The force is gated by <b>accountability, not by role</b> (D24). Three real controls:
	///              the query parameter has to be asked for explicitly, so nobody forces by accident and the
	///              API cannot be misread as "release whatever is there"; the forcer's id lands on the closed
	///              claim, where differing from the holder <i>is</i> the record; and an audit record is
	///              written outside the tool, where the forced party can find it without Baton's cooperation.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/baton/systems/{systemId}/claim
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsSystemIdClaimDelete(const batonSystemsSystemIdClaimDeleteParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISystemClaimApiBase() = default;
};

class ISystemHistoryApiBase : public csp::services::ApiBase
{
public:
	ISystemHistoryApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct batonSystemsSystemIdHistoryGetParams
	{
		const utility::string_t& systemId;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// One page of a system's holds, <b>newest first</b>, each with the duration computed at
	/// release. <b>Archived systems still answer</b> — history outlives them.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/baton/systems/{systemId}/history
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsSystemIdHistoryGet(const batonSystemsSystemIdHistoryGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISystemHistoryApiBase() = default;
};

class ISystemQueueApiBase : public csp::services::ApiBase
{
public:
	ISystemQueueApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct batonSystemsSystemIdQueueGetParams
	{
		const utility::string_t& systemId;
	};


	/// <summary>
	/// One system's queue, in order, with each person's place in line.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/baton/systems/{systemId}/queue
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsSystemIdQueueGet(const batonSystemsSystemIdQueueGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsSystemIdQueuePostParams
	{
		const utility::string_t& systemId;
		const std::shared_ptr<JoinQueueRequest>& RequestBody;
	};


	/// <summary>
	/// <b>Get in line.</b> 200 with your place in it, <b>409 if you are already in</b> — decided
	///             by the unique `(SystemId, UserId)` index at insert time, never by a preceding read —
	///             and <b>404 if the system has been archived</b>, because it is gone rather than in a
	///             conflicting state (D26).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/baton/systems/{systemId}/queue
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsSystemIdQueuePost(const batonSystemsSystemIdQueuePostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsSystemIdQueueDeleteParams
	{
		const utility::string_t& systemId;
		const std::optional<utility::string_t>& userId;
		const std::optional<bool>& force;
	};


	/// <summary>
	/// <b>Leave the line.</b> Removes the caller; `?force=true&userId=…` removes
	///              somebody else.
	///
	///
	/// ⚠ <b>Without `force`, userId is ignored entirely</b> and the
	///              caller is removed — the same shape as a plain pass being unable to touch somebody else's
	///              hold. A parameter that quietly becomes destructive when a second one is present is how an
	///              API gets misread; here the flag has to be asked for, and the person removed is told it
	///              happened.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/baton/systems/{systemId}/queue
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsSystemIdQueueDelete(const batonSystemsSystemIdQueueDeleteParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISystemQueueApiBase() = default;
};

class ISystemsApiBase : public csp::services::ApiBase
{
public:
	ISystemsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct batonSystemsGetParams
	{
		const std::optional<utility::string_t>& Search;
		const std::optional<bool>& Archived;
		const std::optional<utility::string_t>& SortBy;
		const std::optional<std::shared_ptr<SortDirection>>& SortDirection;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// One page of the tenant's systems — held first, then most recently released.
	///
	/// `?search=` is a contains-match across name, description and the current holder's
	/// name; `?sortBy=name` switches to alphabetical; `?skip=` / `?limit=` are the
	/// infinite scroll's page. Paging, filtering and sorting are all server-side because a paged
	/// list cannot be ordered or filtered on the client (baton-plan.md D7).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/baton/systems
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsGet(const batonSystemsGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsPostParams
	{
		const std::shared_ptr<SystemCreateRequest>& RequestBody;
	};


	/// <summary>
	/// Registers a system. <b>409 when this tenant already has one by that name</b> — decided by
	/// the unique index at insert time, never by a preceding read.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/baton/systems
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsPost(const batonSystemsPostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct batonSystemsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// A single system by id. Archived systems still resolve — history outlives them.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/baton/systems/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsIdGet(const batonSystemsIdGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<SystemUpdateRequest>& RequestBody;
	};


	/// <summary>
	/// Edits a system's name, description, console link and grace window. 409 on a name that is
	/// already taken. <b>Never touches the hold</b> — that is Lane B's conditional update.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/baton/systems/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsIdPut(const batonSystemsIdPutParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsIdDeleteParams
	{
		const utility::string_t& id;
		const std::optional<bool>& confirm;
	};


	/// <summary>
	/// Archives a system: it leaves the list, its history stays.
	///
	/// ⚠ <b>`?confirm=true` is required</b>, the same shape as Lane B's `?force=true`
	/// (baton-plan.md §8.1). Nobody retires a shared system by accident, and the API cannot be
	/// misread as "remove whatever is at this id".
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/baton/systems/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsIdDelete(const batonSystemsIdDeleteParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISystemsApiBase() = default;
};

class ISystemThumbnailApiBase : public csp::services::ApiBase
{
public:
	ISystemThumbnailApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct batonSystemsIdThumbnailPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<SystemThumbnailRequest>& RequestBody;
	};


	/// <summary>
	/// Point a system at the Prototype holding its picture. The bytes themselves are uploaded
	/// straight to the Prototype service by the client; this records the reference.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/baton/systems/{id}/thumbnail
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsIdThumbnailPut(const batonSystemsIdThumbnailPutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISystemThumbnailApiBase() = default;
};

class ITenantApiBase : public csp::services::ApiBase
{
public:
	ITenantApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct tenantsSelfGetParams
	{
	};


	/// <summary>
	/// Returns the current user's tenant data, scoped to fields relevant for the admin portal.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/self
	/// Authorization: admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenantsSelfGet(const tenantsSelfGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsSelfClient_settingsGetParams
	{
	};


	/// <summary>
	/// Returns the settings of the current user's tenant that clients are expected to obey.
	///
	/// Readable by any authenticated member of the tenant, unlike M:Magnopus.Service.User.Controllers.TenantController.FindCurrentTenant,
	/// which is the tenant-admin portal projection and requires an admin role. Nodey calls this
	/// on ordinary user requests (node listing and graph execution) with the end user's own
	/// token, so an admin guard here would leave the settings unreadable by exactly the code
	/// that has to honour them.
	///
	/// Authenticated rather than anonymous because the route resolves "self" from the ambient
	/// tenant context. An anonymous caller has no tenant to resolve, which is why the
	/// comparable anonymous route, M:Magnopus.Service.User.Controllers.TenantController.GetIdentityProviders(System.String), takes an explicit
	/// tenant name instead.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/self/client-settings
	/// !AUTHORIZATION REQUIREMENTS NOT SET!
	/// </remarks>
	virtual void tenantsSelfClient_settingsGet(const tenantsSelfClient_settingsGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsInferred_nameGetParams
	{
	};


	/// <summary>
	/// Returns the inferred tenant name based on the request Origin/Referer headers.
	/// Allows clients to discover their tenant before authentication.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/inferred-name
	/// Authorization: Anonymous
	/// </remarks>
	virtual void tenantsInferred_nameGet(const tenantsInferred_nameGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsSelfEmail_settingsPutParams
	{
		const std::shared_ptr<UpdateEmailSettingsRequest>& RequestBody;
	};


	/// <summary>
	/// Updates only the email allow-list fields on the current tenant.
	/// Restricted to AllowedEmailAddresses and AllowedEmailDomains.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenants/self/email-settings
	/// Authorization: admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenantsSelfEmail_settingsPut(const tenantsSelfEmail_settingsPutParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsNamesTenantNamePostParams
	{
		const utility::string_t& tenantName;
		const std::shared_ptr<TenantDto>& RequestBody;
	};


	/// <summary>
	/// Creates a tenant, and its administrator when credentials are supplied.
	///
	/// ⚠⚠ <b>Create only.</b> This replaced `PUT tenants/names/{tenantName}`, which served create
	/// and update through one handler and wrote all 24 Magnopus.Logic.Tenant.Dtos.TenantDto fields from the request
	/// body — so any field the client did not round-trip was written as null. That is how a routine
	/// support edit in MagGyver permanently stranded a customer's CloudFront alias and ACM certificate
	/// SAN (G71), and it was the fourth time the same defect class had been patched. Updating a tenant
	/// is now M:Magnopus.Service.User.Controllers.TenantController.UpdateTenant(System.String,Magnopus.Logic.Tenant.Dtos.TenantUpdateRequest) — a
	/// different route, a different request type, and scoped writes only. <b>Create may write a whole document; update never may.</b> Insert-only: a
	/// Name that already exists is a 409 rather than a silent update of somebody else's tenant. That is the same guard the marketplace provisioning
	/// path uses (PRV-01) and it is what makes the split enforceable rather than merely intended.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/tenants/names/{tenantName}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenantsNamesTenantNamePost(const tenantsNamesTenantNamePostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tenantsNamesTenantNameGetParams
	{
		const utility::string_t& tenantName;
	};


	/// <summary>
	/// Locates the tenant by its unique tenantName
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/names/{tenantName}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenantsNamesTenantNameGet(const tenantsNamesTenantNameGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsNamesTenantNameSettingsPutParams
	{
		const utility::string_t& tenantName;
		const std::shared_ptr<TenantUpdateRequest>& RequestBody;
	};


	/// <summary>
	/// Updates an existing tenant, changing <b>only</b> the fields the request names.
	///
	/// ⚠ Every member of Magnopus.Logic.Tenant.Dtos.TenantUpdateRequest is optional and an omitted member means
	/// "leave this field as stored" — the handler issues one `$set` per named field and never a
	/// whole-document write. Fields that are create-time facts (`isSeeded`, `createdVia`),
	/// provisioning-owned (`typedHostnames`, `mappedHostnames`), write-once (the URL
	/// fragments) or owned by a dedicated endpoint (the organization association, the hostname CRUD)
	/// are absent from the request type and unreachable from here.
	/// Never creates: an unknown tenant is a 404, not an implicit insert. Use
	/// M:Magnopus.Service.User.Controllers.TenantController.CreateTenant(System.String,Magnopus.Logic.Tenant.Dtos.TenantDto) for that.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenants/names/{tenantName}/settings
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenantsNamesTenantNameSettingsPut(const tenantsNamesTenantNameSettingsPutParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsMarketplace_provisionPostParams
	{
		const std::shared_ptr<MarketplaceTenantProvisionRequest>& RequestBody;
	};


	/// <summary>
	/// Provisions a tenant + admin for a marketplace onboarding. Called by the marketplace onboarding flow
	/// (in Aggregation) over interservice HTTP under an elevated principal, which carries the
	/// Magnopus.Backend.Security.Principal.RolesConstants.InternalService role — so that role is the authorizing gate here (the
	/// flow is automated, never a human caller). Magnopus super-users are also permitted for manual operation.
	/// The admin email is created pre-confirmed (Google SSO verified it). The email-confirmation bypass is
	/// reachable only here, not via the public tenant PUT.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/tenants/marketplace-provision
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void tenantsMarketplace_provisionPost(const tenantsMarketplace_provisionPostParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsOrganization_provisionPostParams
	{
		const std::shared_ptr<OrganizationTenantProvisionRequest>& RequestBody;
	};


	/// <summary>
	/// Provisions a tenant + admin for an <b>organization-initiated</b> spin-up — an org admin creating a
	/// further workspace under an organization that already holds a subscription. Called by the spin-up
	/// flow (in Aggregation) over interservice HTTP under an elevated principal, which carries the
	/// Magnopus.Backend.Security.Principal.RolesConstants.InternalService role — so that role is the authorizing gate here, the
	/// same as its marketplace sibling. Magnopus super-users are also permitted for manual operation.
	/// The real authorization for a spin-up — "does this caller administer the organization that will own
	/// this tenant?" — is upstream, in Aggregation, where the organization is in scope. This endpoint is
	/// the mechanical half and is not reachable by a customer directly.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/tenants/organization-provision
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void tenantsOrganization_provisionPost(const tenantsOrganization_provisionPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsPendingDeleteParams
	{
		const int32_t& tenantAgeInDays;
	};


	/// <summary>
	/// Deletes all tenants still pending after a certain age tenantAgeInDays
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/tenants/pending
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenantsPendingDelete(const tenantsPendingDeleteParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsNamesNameDeleteParams
	{
		const utility::string_t& name;
		const std::shared_ptr<TenantCleanupFilters>& RequestBody;
	};


	/// <summary>
	/// Deletes a tenant and all the tenant data that match the
	/// name
	/// Deletion happens asynchronously, so you will receive a response before the call is completed.
	/// Completing the call may take upwards of a few minutes depending on the size of the tenant and the data
	/// there within
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/tenants/names/{name}
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void tenantsNamesNameDelete(const tenantsNamesNameDeleteParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsResolve_by_urlGetParams
	{
		const utility::string_t& url;
	};


	/// <summary>
	/// Resolves a tenant name from a hostname.
	/// Used by the federated login page to auto-detect the tenant when not explicitly provided.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/resolve-by-url
	/// Authorization: Anonymous
	/// </remarks>
	virtual void tenantsResolve_by_urlGet(const tenantsResolve_by_urlGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsNamesTenantNameIdentity_providersGetParams
	{
		const utility::string_t& tenantName;
	};


	/// <summary>
	/// Returns the list of identity providers enabled for the specified tenant.
	/// Used by the federated login page to determine which login options to display.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/names/{tenantName}/identity-providers
	/// Authorization: Anonymous
	/// </remarks>
	virtual void tenantsNamesTenantNameIdentity_providersGet(const tenantsNamesTenantNameIdentity_providersGetParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ITenantApiBase() = default;
};

class ITenantAdminApiBase : public csp::services::ApiBase
{
public:
	ITenantAdminApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct tenant_adminTenantGetParams
	{
	};


	/// <summary>
	/// Gets the caller's own tenant details.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenant-admin/tenant
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenant_adminTenantGet(const tenant_adminTenantGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tenant_adminTenantPutParams
	{
		const std::shared_ptr<UpdateTenantLiteRequest>& RequestBody;
	};


	/// <summary>
	/// Updates the four tenant-admin-editable fields on the caller's own tenant:
	/// AllowedEmailAddresses, AllowedEmailDomains, CompanyName, DisplayName.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenant-admin/tenant
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenant_adminTenantPut(const tenant_adminTenantPutParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenant_adminUsersGetParams
	{
		const std::optional<int32_t>& skip;
		const std::optional<int32_t>& limit;
		const std::optional<utility::string_t>& search;
		const std::optional<utility::string_t>& sortBy;
		const std::optional<utility::string_t>& sortDirection;
		const std::optional<bool>& passwordLoginDisabled;
	};


	/// <summary>
	/// Lists users in the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenant-admin/users
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenant_adminUsersGet(const tenant_adminUsersGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenant_adminUsersUserIdLock_accountPutParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Locks a user account in the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenant-admin/users/{userId}/lock-account
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenant_adminUsersUserIdLock_accountPut(const tenant_adminUsersUserIdLock_accountPutParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenant_adminUsersUserIdUnlock_accountPutParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Unlocks a user account in the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenant-admin/users/{userId}/unlock-account
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenant_adminUsersUserIdUnlock_accountPut(const tenant_adminUsersUserIdUnlock_accountPutParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenant_adminUsersUserIdRolesPutParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<UpdateRolesRequest>& RequestBody;
	};


	/// <summary>
	/// Updates roles for a user in the caller's own tenant.
	/// Role escalation guard: cannot grant magnopus-admin or magnopus-support.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenant-admin/users/{userId}/roles
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenant_adminUsersUserIdRolesPut(const tenant_adminUsersUserIdRolesPutParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenant_adminEmail_settingsGetParams
	{
	};


	/// <summary>
	/// Gets email settings for the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenant-admin/email-settings
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenant_adminEmail_settingsGet(const tenant_adminEmail_settingsGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tenant_adminEmail_settingsPutParams
	{
		const std::shared_ptr<UpdateEmailSettingsRequest>& RequestBody;
	};


	/// <summary>
	/// Updates email settings for the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenant-admin/email-settings
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenant_adminEmail_settingsPut(const tenant_adminEmail_settingsPutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenant_adminSecretsKey_namesGetParams
	{
	};


	/// <summary>
	/// Gets all secret key names for the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenant-admin/secrets/key-names
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenant_adminSecretsKey_namesGet(const tenant_adminSecretsKey_namesGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenant_adminSecretsGetParams
	{
		const utility::string_t& keys;
	};


	/// <summary>
	/// Gets decrypted secret values for the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenant-admin/secrets
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenant_adminSecretsGet(const tenant_adminSecretsGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenant_adminSecretsKey_infoGetParams
	{
	};


	/// <summary>
	/// Returns key names and ownership info for the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenant-admin/secrets/key-info
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenant_adminSecretsKey_infoGet(const tenant_adminSecretsKey_infoGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenant_adminSecretsKeyNamePutParams
	{
		const utility::string_t& keyName;
		const std::shared_ptr<SetEncryptedValueRequest>& RequestBody;
	};


	/// <summary>
	/// Sets a secret value for the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenant-admin/secrets/{keyName}
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenant_adminSecretsKeyNamePut(const tenant_adminSecretsKeyNamePutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tenant_adminSecretsKeyNameDeleteParams
	{
		const utility::string_t& keyName;
	};


	/// <summary>
	/// Deletes a secret for the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/tenant-admin/secrets/{keyName}
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tenant_adminSecretsKeyNameDelete(const tenant_adminSecretsKeyNameDeleteParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ITenantAdminApiBase() = default;
};

class ITenantHostnameApiBase : public csp::services::ApiBase
{
public:
	ITenantHostnameApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct tenantsTenantNameHostnamesPostParams
	{
		const utility::string_t& tenantName;
		const std::shared_ptr<CreateMarketplaceHostnameRequest>& RequestBody;
	};


	/// <summary>
	/// Provisions (or, idempotently, returns the existing) app subdomain on a tenant, running the AWS
	/// DNS/cert/CloudFront flow for the requested type. Internal-service-callable so the async provisioning
	/// reconcile loop can drive it under an elevated internal-service principal; super-users may also call it.
	/// Re-posting an already-present hostname returns its current status without re-issuing a certificate.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/tenants/{tenantName}/hostnames
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void tenantsTenantNameHostnamesPost(const tenantsTenantNameHostnamesPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsTenantNameHostnamesHostnameDns_statusGetParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& hostname;
	};


	/// <summary>
	/// Polls the DNS-stage status of a previously-created subdomain. Each call advances the AWS state machine
	/// one step (queued → cert_pending → … → verified). Internal-service-callable.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/{tenantName}/hostnames/{hostname}/dns-status
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void tenantsTenantNameHostnamesHostnameDns_statusGet(const tenantsTenantNameHostnamesHostnameDns_statusGetParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsTenantNameHostnamesExternalPostParams
	{
		const utility::string_t& tenantName;
		const std::shared_ptr<RegisterExternalHostnameRequest>& RequestBody;
	};


	/// <summary>
	/// Records an externally-managed typed hostname (e.g. a Nodey subdomain, whose DNS is written by external-dns
	/// and whose TLS is a GKE ManagedCertificate) on a tenant, without running any AWS DNS work. Idempotent.
	/// Internal-service-callable.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/tenants/{tenantName}/hostnames/external
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void tenantsTenantNameHostnamesExternalPost(const tenantsTenantNameHostnamesExternalPostParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsTenantNameHostnamesGcp_lbPostParams
	{
		const utility::string_t& tenantName;
		const std::shared_ptr<CreateGcpLoadBalancerHostnameRequest>& RequestBody;
	};


	/// <summary>
	/// Points a tenant hostname at a GCP static-site load balancer: upserts a Route 53 A-record → the LB IP and
	/// records the typed hostname. Used by the nodey-next (`GcpStaticSiteLbPerHost`) provisioning path,
	/// where the TLS cert + LB edge are provisioned GCP-side and only the DNS record must be written here.
	/// Idempotent. Internal-service-callable.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/tenants/{tenantName}/hostnames/gcp-lb
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void tenantsTenantNameHostnamesGcp_lbPost(const tenantsTenantNameHostnamesGcp_lbPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsTenantNameEmail_redirect_patternsPostParams
	{
		const utility::string_t& tenantName;
		const std::shared_ptr<EmailRedirectDto>& RequestBody;
	};


	/// <summary>
	/// Idempotently ensures a regex pattern is present in the tenant's `EmailRedirectUrlAllowList`.
	/// Used by provisioning to allow email redirects to the customer's newly-provisioned domain
	/// (e.g. `^(.+\.)?acme\.oko\.live`). Internal-service-callable.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/tenants/{tenantName}/email-redirect-patterns
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void tenantsTenantNameEmail_redirect_patternsPost(const tenantsTenantNameEmail_redirect_patternsPostParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsTenantNameHostnamesHostnameDeleteParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& hostname;
	};


	/// <summary>
	/// De-provisions a tenant hostname: releases the serving-mechanism resources it consumes (CloudFront alias +
	/// ACM certificate SAN for `oko`; the Route 53 A-record for `nodey-next`) and removes the typed
	/// hostname from the tenant. Internal-service-callable so a teardown can release URLs <b>before</b> deleting
	/// the tenant — the sibling create routes had no delete counterpart, which is why nothing outside MagGyver
	/// could unwind a hostname.
	/// Idempotent: an already-absent hostname returns 200 with `found: false`, so a teardown can be re-run
	/// to convergence. A failure to release the cloud resources returns <b>502</b>, never a success — the
	/// certificate slot is still consumed and the caller must know.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/tenants/{tenantName}/hostnames/{hostname}
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void tenantsTenantNameHostnamesHostnameDelete(const tenantsTenantNameHostnamesHostnameDeleteParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminDns_settingsGetParams
	{
	};


	/// <summary>
	/// Returns DNS configuration (allowed domain suffixes) for the hostname management UI.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/dns-settings
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminDns_settingsGet(const super_adminDns_settingsGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameHostnamesPostParams
	{
		const utility::string_t& tenantName;
		const std::shared_ptr<CreateHostnameRequest>& RequestBody;
	};


	/// <summary>
	/// Creates a hostname record for a tenant (human-admin path).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/super-admin/tenants/{tenantName}/hostnames
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameHostnamesPost(const super_adminTenantsTenantNameHostnamesPostParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameHostnamesHostnameDeleteParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& hostname;
	};


	/// <summary>
	/// Deletes a hostname record for a tenant (human-admin path).
	/// Returns <b>502</b> when the cloud resources could not be released. This matters more than it looks:
	/// deleting a hostname here is how an operator reclaims a certificate slot, and a green toast over a failed
	/// teardown is indistinguishable from success while the slot stays consumed.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/super-admin/tenants/{tenantName}/hostnames/{hostname}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void super_adminTenantsTenantNameHostnamesHostnameDelete(const super_adminTenantsTenantNameHostnamesHostnameDeleteParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsTenantNameHostnamesHostnameDeprovision_statusGetParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& hostname;
	};


	/// <summary>
	/// Advances a de-provisioning that the delete reported as `pending`, and reports whether it has finished.
	/// One short step per call.
	/// This endpoint exists because an `oko` teardown has to wait for ACM to issue a replacement certificate
	/// one SAN smaller, which takes minutes. The interservice HTTP policy allows 15 seconds per attempt and then
	/// <b>retries</b>, so awaiting that inside the delete produced two or three concurrent teardowns racing on the
	/// same CloudFront distribution — the losers failing on a stale ETag, each attempt minting a throwaway
	/// certificate, and the caller reporting a failure for work that had in fact succeeded.
	/// Idempotent: a hostname the tenant no longer records returns 200 with `found: false`, because the
	/// teardown removes it as its final step — so a poller that raced the last step converges instead of erroring.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/{tenantName}/hostnames/{hostname}/deprovision-status
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void tenantsTenantNameHostnamesHostnameDeprovision_statusGet(const tenantsTenantNameHostnamesHostnameDeprovision_statusGetParams& Params,
																		 csp::services::ApiResponseHandlerBase* ResponseHandler,
																		 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameHostnamesHostnameDns_statusGetParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& hostname;
	};


	/// <summary>
	/// Checks DNS propagation and resolution status for a hostname (human-admin path).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants/{tenantName}/hostnames/{hostname}/dns-status
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void
		super_adminTenantsTenantNameHostnamesHostnameDns_statusGet(const super_adminTenantsTenantNameHostnamesHostnameDns_statusGetParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct super_adminTenantsTenantNameHostnamesHostnameRetryPostParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& hostname;
		const std::optional<utility::string_t>& resumeFrom;
	};


	/// <summary>
	/// Clears a hostname's recorded failure and puts it back into a re-drivable DNS state, so the provisioning
	/// poll picks it up again. Idempotent.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/super-admin/tenants/{tenantName}/hostnames/{hostname}/retry
	/// The recovery lever a stranded tenant had no way to reach: `"error"` has no case in the DNS state
	/// machine, so a hostname that reached it stayed there permanently — even when the cause had cleared, or
	/// was never real. In gcmp a duplicate CloudFront update failed and wrote `"error"` over its
	/// successful sibling's progress, leaving a hostname AWS had provisioned correctly one Route 53 record
	/// short of live, with nothing in the system able to finish it.
	/// </remarks>
	virtual void super_adminTenantsTenantNameHostnamesHostnameRetryPost(const super_adminTenantsTenantNameHostnamesHostnameRetryPostParams& Params,
																		csp::services::ApiResponseHandlerBase* ResponseHandler,
																		csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ITenantHostnameApiBase() = default;
};

class IUserRolesApiBase : public csp::services::ApiBase
{
public:
	IUserRolesApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct usersUserIdRolesGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Gets the user's authorization roles by the user's userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/roles
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdRolesGet(const usersUserIdRolesGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdRolesPutParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<UserRolesDto>& RequestBody;
	};


	/// <summary>
	/// Updates the user's authorization roles by the userId to the roles provided
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/roles
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,account-manager
	/// </remarks>
	virtual void usersUserIdRolesPut(const usersUserIdRolesPutParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IUserRolesApiBase() = default;
};

class IVersionsApiBase : public csp::services::ApiBase
{
public:
	IVersionsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
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

class IWazzupAgentOverridesApiBase : public csp::services::ApiBase
{
public:
	IWazzupAgentOverridesApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct wazzupAgent_overridesGetParams
	{
	};


	/// <summary>
	/// Every override the caller has stored.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/agent-overrides
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupAgent_overridesGet(const wazzupAgent_overridesGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct wazzupAgent_overridesDeleteParams
	{
		const std::optional<bool>& confirm;
	};


	/// <summary>
	/// Resets every agent to its defaults. `confirm=true` is required.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/wazzup/agent-overrides
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupAgent_overridesDelete(const wazzupAgent_overridesDeleteParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct wazzupAgent_overridesAgentIdPutParams
	{
		const utility::string_t& agentId;
		const std::shared_ptr<AgentOverrideRequest>& RequestBody;
	};


	/// <summary>
	/// Creates or replaces the caller's override for one agent.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/wazzup/agent-overrides/{agentId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupAgent_overridesAgentIdPut(const wazzupAgent_overridesAgentIdPutParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct wazzupAgent_overridesAgentIdDeleteParams
	{
		const utility::string_t& agentId;
	};


	/// <summary>
	/// Resets one agent to its defaults.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/wazzup/agent-overrides/{agentId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupAgent_overridesAgentIdDelete(const wazzupAgent_overridesAgentIdDeleteParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IWazzupAgentOverridesApiBase() = default;
};

class IWazzupCapabilitiesApiBase : public csp::services::ApiBase
{
public:
	IWazzupCapabilitiesApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct wazzupCapabilitiesGetParams
	{
	};


	/// <summary>
	/// The transit encodings the prompt-bearing request fields may use.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/capabilities
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupCapabilitiesGet(const wazzupCapabilitiesGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IWazzupCapabilitiesApiBase() = default;
};

class IWazzupLlmApiBase : public csp::services::ApiBase
{
public:
	IWazzupLlmApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct wazzupLlmProvidersGetParams
	{
	};


	/// <summary>
	/// The providers this environment offers.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/llm/providers
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupLlmProvidersGet(const wazzupLlmProvidersGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct wazzupLlmGeneratePostParams
	{
		const std::shared_ptr<LlmGenerateRequest>& RequestBody;
	};


	/// <summary>
	/// Runs one generation for one swarm agent.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/wazzup/llm/generate
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupLlmGeneratePost(const wazzupLlmGeneratePostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IWazzupLlmApiBase() = default;
};

class IWazzupSessionsApiBase : public csp::services::ApiBase
{
public:
	IWazzupSessionsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct wazzupSessionsGetParams
	{
		const std::optional<utility::string_t>& Search;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// One page of the caller's sessions, newest first.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/sessions
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupSessionsGet(const wazzupSessionsGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct wazzupSessionsPostParams
	{
		const std::shared_ptr<MiningSessionSaveRequest>& RequestBody;
	};


	/// <summary>
	/// Saves a new session.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/wazzup/sessions
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupSessionsPost(const wazzupSessionsPostParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct wazzupSessionsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// One session with its payload.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/sessions/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupSessionsIdGet(const wazzupSessionsIdGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct wazzupSessionsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<MiningSessionSaveRequest>& RequestBody;
	};


	/// <summary>
	/// Overwrites a session.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/wazzup/sessions/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupSessionsIdPut(const wazzupSessionsIdPutParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct wazzupSessionsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Deletes a session.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/wazzup/sessions/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupSessionsIdDelete(const wazzupSessionsIdDeleteParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IWazzupSessionsApiBase() = default;
};

class IWazzupStorageApiBase : public csp::services::ApiBase
{
public:
	IWazzupStorageApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct wazzupStorageCdn_fetchPostParams
	{
		const std::shared_ptr<CdnFetchRequest>& RequestBody;
	};


	/// <summary>
	/// Fetches one CDN asset with the mined tenant's token. POST rather than GET so neither the URI
	/// nor the token lands in an access log.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/wazzup/storage/cdn-fetch
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupStorageCdn_fetchPost(const wazzupStorageCdn_fetchPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct wazzupStorageLegacyTenantObjectsGetParams
	{
		const utility::string_t& tenant;
		const std::optional<utility::string_t>& prefix;
		const std::optional<utility::string_t>& pageToken;
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// One page of a tenant's legacy Nodey objects.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/storage/legacy/{tenant}/objects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupStorageLegacyTenantObjectsGet(const wazzupStorageLegacyTenantObjectsGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct wazzupStorageLegacyTenantObjectGetParams
	{
		const utility::string_t& tenant;
		const std::optional<utility::string_t>& key;
	};


	/// <summary>
	/// Reads one legacy Nodey object.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/storage/legacy/{tenant}/object
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupStorageLegacyTenantObjectGet(const wazzupStorageLegacyTenantObjectGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IWazzupStorageApiBase() = default;
};


} // namespace csp::services::generated::userservice