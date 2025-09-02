

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "ITrackingServiceApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::trackingservice
{


class AnalyticsApi final : public IAnalyticsApiBase
{
public:
	AnalyticsApi(csp::web::WebClient* InWebClient);
	virtual ~AnalyticsApi();



	/// <summary>
	/// Create new analytics records using a list of Magnopus.Service.Common.Contracts.Analytics.AnalyticsRecord objects.
	/// Ideally, the requester would pass in a list of analytics records to be created in bulk.
	/// </summary>
	/// <remarks>
	/// POST /analytics/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void analyticsBulkPost(const analyticsBulkPostParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Uploads a stream of gzipped analytics data. Creates many records in a bulk operation.
	/// </summary>
	/// <remarks>
	/// POST /analytics/stream
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void analyticsStreamPost(const analyticsStreamPostParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Returns a URL to the caller to use for analytics purposes.
	/// Randomizes the services so that not a single service is overloaded with requests.
	/// </summary>
	/// <remarks>
	/// POST /analytics/stream-url
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void analyticsStreamUrlPost(const analyticsStreamUrlPostParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class ConfigurationApi final : public IConfigurationApiBase
{
public:
	ConfigurationApi(csp::web::WebClient* InWebClient);
	virtual ~ConfigurationApi();



	/// <remarks>
	/// GET /appsettings
	/// Authorization: magnopus-admin
	/// </remarks>
	void appsettingsGet(const appsettingsGetParams& Params,
						csp::services::ApiResponseHandlerBase* ResponseHandler,
						csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <remarks>
	/// POST /appsettings/reload
	/// Authorization: magnopus-admin
	/// </remarks>
	void appsettingsReloadPost(const appsettingsReloadPostParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <remarks>
	/// GET /featureflags
	/// Authorization: magnopus-admin
	/// </remarks>
	void featureflagsGet(const featureflagsGetParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class NtpApi final : public INtpApiBase
{
public:
	NtpApi(csp::web::WebClient* InWebClient);
	virtual ~NtpApi();



	/// <remarks>
	/// GET /datetime
	/// Authorization: Anonymous
	/// </remarks>
	void datetimeGet(const datetimeGetParams& Params,
					 csp::services::ApiResponseHandlerBase* ResponseHandler,
					 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class PingApi final : public IPingApiBase
{
public:
	PingApi(csp::web::WebClient* InWebClient);
	virtual ~PingApi();



	/// <remarks>
	/// GET /ping
	/// Authorization: Anonymous
	/// </remarks>
	void pingGet(const pingGetParams& Params,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class QuotaActivityApi final : public IQuotaActivityApiBase
{
public:
	QuotaActivityApi(csp::web::WebClient* InWebClient);
	virtual ~QuotaActivityApi();



	/// <summary>
	/// Gets the user's progress toward quota limits per feature
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/quota-progress
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdQuotaProgressGet(const usersUserIdQuotaProgressGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets the group's progress toward quota limits per feature (tier assignment is by the group owner)
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}/quota-progress
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdQuotaProgressGet(const groupsGroupIdQuotaProgressGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets the individual activity toward a user's quota limits per feature
	/// </summary>
	/// <remarks>
	/// GET /api/v1/user/{userId}/quota-activity
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void userUserIdQuotaActivityGet(const userUserIdQuotaActivityGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets the individual activity toward a group's quota limits per feature (tier assignment is by the group owner)
	/// </summary>
	/// <remarks>
	/// GET /api/v1/group/{groupId}/quota-activity
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupGroupIdQuotaActivityGet(const groupGroupIdQuotaActivityGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class QuotaManagementApi final : public IQuotaManagementApiBase
{
public:
	QuotaManagementApi(csp::web::WebClient* InWebClient);
	virtual ~QuotaManagementApi();



	/// <summary>
	/// Gets all feature quota definition at the specified tier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tiers/{tierName}/quotas
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void tiersTierNameQuotasGet(const tiersTierNameQuotasGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets a quota definition for a feature at the specified tier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tiers/{tierName}/features/{featureName}/quota
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void tiersTierNameFeaturesFeatureNameQuotaGet(const tiersTierNameFeaturesFeatureNameQuotaGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken
												  = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Creates or updates a quota definition for a feature at the specified tier
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tiers/{tierName}/features/{featureName}/quota
	/// Authorization: magnopus-admin
	/// </remarks>
	void tiersTierNameFeaturesFeatureNameQuotaPut(const tiersTierNameFeaturesFeatureNameQuotaPutParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken
												  = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes a quota definition for a feature at the specified tier
	/// IMPORTANT NOTE: This does NOT make the feature amount unlimited at this tier.  Instead it reverts the quota to fall back to the default
	/// amount.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/tiers/{tierName}/features/{featureName}/quota
	/// Authorization: magnopus-admin
	/// </remarks>
	void tiersTierNameFeaturesFeatureNameQuotaDelete(const tiersTierNameFeaturesFeatureNameQuotaDeleteParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken
													 = csp::common::CancellationToken::Dummy()) const override;
};

class QuotaTierAssignmentApi final : public IQuotaTierAssignmentApiBase
{
public:
	QuotaTierAssignmentApi(csp::web::WebClient* InWebClient);
	virtual ~QuotaTierAssignmentApi();



	/// <summary>
	/// Gets the user's tier assignment
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tier-assignments/{id}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void tierAssignmentsIdGet(const tierAssignmentsIdGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets the user's tier assignment
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/tier-assignment
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdTierAssignmentGet(const usersUserIdTierAssignmentGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Updates the user's tier assignment
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/tier-assignment
	/// Authorization: magnopus-admin,internal-service
	/// </remarks>
	void usersUserIdTierAssignmentPut(const usersUserIdTierAssignmentPutParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes the user's tier assignment
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/tier-assignment
	/// IMPORTANT NOTE: This does NOT leave the user's tier as unassigned.  This reverts the user to the default tier.
	/// </remarks>
	void usersUserIdTierAssignmentDelete(const usersUserIdTierAssignmentDeleteParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets the tenant's tier assignment
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/{tenantName}/tier-assignment
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void tenantsTenantNameTierAssignmentGet(const tenantsTenantNameTierAssignmentGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Updates the tenant's tier assignment
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenants/{tenantName}/tier-assignment
	/// Authorization: magnopus-admin,internal-service
	/// </remarks>
	void tenantsTenantNameTierAssignmentPut(const tenantsTenantNameTierAssignmentPutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes the tenant's tier assignment
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/tenants/{tenantName}/tier-assignment
	/// IMPORTANT NOTE: This does NOT leave the tenant's tier as unassigned.  This reverts the tenant to the default tier.
	/// </remarks>
	void tenantsTenantNameTierAssignmentDelete(const tenantsTenantNameTierAssignmentDeleteParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken
											   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets the group(s) tier assignments (the tier assignment of each group owner)
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/tier-assignments
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsTierAssignmentsGet(const groupsTierAssignmentsGetParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class VersionsApi final : public IVersionsApiBase
{
public:
	VersionsApi(csp::web::WebClient* InWebClient);
	virtual ~VersionsApi();



	/// <summary>
	/// Get Versions of available Controllers and versioned types
	/// </summary>
	/// <remarks>
	/// GET /api/versions
	/// Authorization: Anonymous
	/// </remarks>
	void rsionsGet(const rsionsGetParams& Params,
				   csp::services::ApiResponseHandlerBase* ResponseHandler,
				   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};


} // namespace csp::services::generated::trackingservice