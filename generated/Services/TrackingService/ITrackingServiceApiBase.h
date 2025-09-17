

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "Services/ApiBase/ApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::trackingservice
{


class IAnalyticsApiBase : public csp::services::ApiBase
{
public:
	IAnalyticsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
	{
	}



	struct analyticsBulkPostParams
	{
		analyticsBulkPostParams() = default;

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
		analyticsStreamPostParams() = default;
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
		analyticsStream_urlPostParams() = default;
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

class IConfigurationApiBase : public csp::services::ApiBase
{
public:
	IConfigurationApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
	{
	}



	struct appsettingsGetParams
	{
		appsettingsGetParams() = default;
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
		appsettingsReloadPostParams() = default;
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
		featureflagsGetParams() = default;
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

class INtpApiBase : public csp::services::ApiBase
{
public:
	INtpApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
	{
	}



	struct datetimeGetParams
	{
		datetimeGetParams() = default;
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
	IPingApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
	{
	}



	struct pingGetParams
	{
		pingGetParams() = default;
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

class IQuotaActivityApiBase : public csp::services::ApiBase
{
public:
	IQuotaActivityApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
	{
	}



	struct usersUserIdQuota_progressGetParams
	{
		usersUserIdQuota_progressGetParams() = default;

		const utility::string_t& userId;
		const std::optional<std::vector<utility::string_t>>& features;
	};


	/// <summary>
	/// Gets the user's progress toward quota limits per feature
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/quota-progress
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdQuota_progressGet(const usersUserIdQuota_progressGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdQuota_progressGetParams
	{
		groupsGroupIdQuota_progressGetParams() = default;

		const utility::string_t& groupId;
		const std::optional<std::vector<utility::string_t>>& features;
	};


	/// <summary>
	/// Gets the group's progress toward quota limits per feature (tier assignment is by the group owner)
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}/quota-progress
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdQuota_progressGet(const groupsGroupIdQuota_progressGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct userUserIdQuota_activityGetParams
	{
		userUserIdQuota_activityGetParams() = default;

		const utility::string_t& userId;
		const std::optional<std::vector<utility::string_t>>& Features;
		const std::optional<utility::string_t>& StartDateTime;
		const std::optional<utility::string_t>& EndDateTime;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Gets the individual activity toward a user's quota limits per feature
	/// </summary>
	/// <remarks>
	/// GET /api/v1/user/{userId}/quota-activity
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void userUserIdQuota_activityGet(const userUserIdQuota_activityGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupGroupIdQuota_activityGetParams
	{
		groupGroupIdQuota_activityGetParams() = default;

		const utility::string_t& groupId;
		const std::optional<std::vector<utility::string_t>>& Features;
		const std::optional<utility::string_t>& StartDateTime;
		const std::optional<utility::string_t>& EndDateTime;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Gets the individual activity toward a group's quota limits per feature (tier assignment is by the group owner)
	/// </summary>
	/// <remarks>
	/// GET /api/v1/group/{groupId}/quota-activity
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupGroupIdQuota_activityGet(const groupGroupIdQuota_activityGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IQuotaActivityApiBase() = default;
};

class IQuotaManagementApiBase : public csp::services::ApiBase
{
public:
	IQuotaManagementApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
	{
	}



	struct tiersTierNameQuotasGetParams
	{
		tiersTierNameQuotasGetParams() = default;

		const utility::string_t& tierName;
	};


	/// <summary>
	/// Gets all feature quota definition at the specified tier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tiers/{tierName}/quotas
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void tiersTierNameQuotasGet(const tiersTierNameQuotasGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tiersTierNameFeaturesFeatureNameQuotaGetParams
	{
		tiersTierNameFeaturesFeatureNameQuotaGetParams() = default;

		const utility::string_t& tierName;
		const utility::string_t& featureName;
	};


	/// <summary>
	/// Gets a quota definition for a feature at the specified tier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tiers/{tierName}/features/{featureName}/quota
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void tiersTierNameFeaturesFeatureNameQuotaGet(const tiersTierNameFeaturesFeatureNameQuotaGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tiersTierNameFeaturesFeatureNameQuotaPutParams
	{
		tiersTierNameFeaturesFeatureNameQuotaPutParams() = default;

		const utility::string_t& tierName;
		const utility::string_t& featureName;
		const std::shared_ptr<QuotaFeatureTierDto>& RequestBody;
	};


	/// <summary>
	/// Creates or updates a quota definition for a feature at the specified tier
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tiers/{tierName}/features/{featureName}/quota
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void tiersTierNameFeaturesFeatureNameQuotaPut(const tiersTierNameFeaturesFeatureNameQuotaPutParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tiersTierNameFeaturesFeatureNameQuotaDeleteParams
	{
		tiersTierNameFeaturesFeatureNameQuotaDeleteParams() = default;

		const utility::string_t& tierName;
		const utility::string_t& featureName;
	};


	/// <summary>
	/// Deletes a quota definition for a feature at the specified tier
	/// IMPORTANT NOTE: This does NOT make the feature amount unlimited at this tier.  Instead it reverts the quota to fall back to the default
	/// amount.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/tiers/{tierName}/features/{featureName}/quota
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void tiersTierNameFeaturesFeatureNameQuotaDelete(const tiersTierNameFeaturesFeatureNameQuotaDeleteParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IQuotaManagementApiBase() = default;
};

class IQuotaTierAssignmentApiBase : public csp::services::ApiBase
{
public:
	IQuotaTierAssignmentApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
	{
	}



	struct tier_assignmentsIdGetParams
	{
		tier_assignmentsIdGetParams() = default;

		const utility::string_t& id;
	};


	/// <summary>
	/// Gets the user's tier assignment
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tier-assignments/{id}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void tier_assignmentsIdGet(const tier_assignmentsIdGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdTier_assignmentGetParams
	{
		usersUserIdTier_assignmentGetParams() = default;

		const utility::string_t& userId;
	};


	/// <summary>
	/// Gets the user's tier assignment
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/tier-assignment
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdTier_assignmentGet(const usersUserIdTier_assignmentGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdTier_assignmentPutParams
	{
		usersUserIdTier_assignmentPutParams() = default;

		const utility::string_t& userId;
		const std::shared_ptr<QuotaTierAssignmentDto>& RequestBody;
	};


	/// <summary>
	/// Updates the user's tier assignment
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/tier-assignment
	/// Authorization: magnopus-admin,internal-service
	/// </remarks>
	virtual void usersUserIdTier_assignmentPut(const usersUserIdTier_assignmentPutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdTier_assignmentDeleteParams
	{
		usersUserIdTier_assignmentDeleteParams() = default;

		const utility::string_t& userId;
	};


	/// <summary>
	/// Deletes the user's tier assignment
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/tier-assignment
	/// IMPORTANT NOTE: This does NOT leave the user's tier as unassigned.  This reverts the user to the default tier.
	/// </remarks>
	virtual void usersUserIdTier_assignmentDelete(const usersUserIdTier_assignmentDeleteParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsTenantNameTier_assignmentGetParams
	{
		tenantsTenantNameTier_assignmentGetParams() = default;

		const utility::string_t& tenantName;
	};


	/// <summary>
	/// Gets the tenant's tier assignment
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/{tenantName}/tier-assignment
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void tenantsTenantNameTier_assignmentGet(const tenantsTenantNameTier_assignmentGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tenantsTenantNameTier_assignmentPutParams
	{
		tenantsTenantNameTier_assignmentPutParams() = default;

		const utility::string_t& tenantName;
		const std::shared_ptr<QuotaTierAssignmentDto>& RequestBody;
	};


	/// <summary>
	/// Updates the tenant's tier assignment
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenants/{tenantName}/tier-assignment
	/// Authorization: magnopus-admin,internal-service
	/// </remarks>
	virtual void tenantsTenantNameTier_assignmentPut(const tenantsTenantNameTier_assignmentPutParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tenantsTenantNameTier_assignmentDeleteParams
	{
		tenantsTenantNameTier_assignmentDeleteParams() = default;

		const utility::string_t& tenantName;
	};


	/// <summary>
	/// Deletes the tenant's tier assignment
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/tenants/{tenantName}/tier-assignment
	/// IMPORTANT NOTE: This does NOT leave the tenant's tier as unassigned.  This reverts the tenant to the default tier.
	/// </remarks>
	virtual void tenantsTenantNameTier_assignmentDelete(const tenantsTenantNameTier_assignmentDeleteParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsTier_assignmentsGetParams
	{
		groupsTier_assignmentsGetParams() = default;

		const std::optional<std::vector<utility::string_t>>& groupIds;
	};


	/// <summary>
	/// Gets the group(s) tier assignments (the tier assignment of each group owner)
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/tier-assignments
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsTier_assignmentsGet(const groupsTier_assignmentsGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IQuotaTierAssignmentApiBase() = default;
};

class IVersionsApiBase : public csp::services::ApiBase
{
public:
	IVersionsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
	{
	}



	struct rsionsGetParams
	{
		rsionsGetParams() = default;
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


} // namespace csp::services::generated::trackingservice