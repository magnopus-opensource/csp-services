

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Services/ApiBase/ApiBase.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"

#include <string>
#include <optional>


namespace csp::services::generated::trackingservice
{


    class ConfigurationApi final : public csp::services::ApiBase
    {
    public:
        ConfigurationApi(csp::web::WebClient* InWebClient);
        virtual ~ConfigurationApi();

        
            
                /// <remarks>
                /// GET /appsettings
                /// Authorization: magnopus-admin
                /// </remarks>
                void appsettingsGet(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                /// <remarks>
                /// POST /appsettings/reload
                /// Authorization: magnopus-admin
                /// </remarks>
                void appsettingsReloadPost(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                /// <remarks>
                /// GET /featureflags
                /// Authorization: magnopus-admin
                /// </remarks>
                void featureflagsGet(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class NtpApi final : public csp::services::ApiBase
    {
    public:
        NtpApi(csp::web::WebClient* InWebClient);
        virtual ~NtpApi();

        
            
                /// <remarks>
                /// GET /datetime
                /// Authorization: Anonymous
                /// </remarks>
                void datetimeGet(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class PingApi final : public csp::services::ApiBase
    {
    public:
        PingApi(csp::web::WebClient* InWebClient);
        virtual ~PingApi();

        
            
                /// <remarks>
                /// GET /ping
                /// Authorization: Anonymous
                /// </remarks>
                void pingGet(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class QuotaActivityApi final : public csp::services::ApiBase
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
                void usersUserIdQuotaProgressGet(
                    const utility::string_t& userId,const std::optional<std::vector<utility::string_t>>&
                features,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets the group's progress toward quota limits per feature (tier assignment is by the group owner)
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/groups/{groupId}/quota-progress
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void groupsGroupIdQuotaProgressGet(
                    const utility::string_t& groupId,const std::optional<std::vector<utility::string_t>>&
                features,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets the individual activity toward a user's quota limits per feature
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/user/{userId}/quota-activity
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void userUserIdQuotaActivityGet(
                    const utility::string_t& userId,const std::optional<std::vector<utility::string_t>>&
                Features,const std::optional<utility::string_t>&
                StartDateTime,const std::optional<utility::string_t>&
                EndDateTime,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets the individual activity toward a group's quota limits per feature (tier assignment is by the group owner)
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/group/{groupId}/quota-activity
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void groupGroupIdQuotaActivityGet(
                    const utility::string_t& groupId,const std::optional<std::vector<utility::string_t>>&
                Features,const std::optional<utility::string_t>&
                StartDateTime,const std::optional<utility::string_t>&
                EndDateTime,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class QuotaManagementApi final : public csp::services::ApiBase
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
                void tiersTierNameQuotasGet(
                    const utility::string_t& tierName,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets a quota definition for a feature at the specified tier
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/tiers/{tierName}/features/{featureName}/quota
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void tiersTierNameFeaturesFeatureNameQuotaGet(
                    const utility::string_t& tierName,const utility::string_t& featureName,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Creates or updates a quota definition for a feature at the specified tier
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/tiers/{tierName}/features/{featureName}/quota
                /// Authorization: magnopus-admin
                /// </remarks>
                void tiersTierNameFeaturesFeatureNameQuotaPut(
                    const utility::string_t& tierName,const utility::string_t& featureName,const std::shared_ptr<QuotaFeatureTierDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Deletes a quota definition for a feature at the specified tier <br />
                    /// IMPORTANT NOTE: This does NOT make the feature amount unlimited at this tier.  Instead it reverts the quota to fall back to the default amount.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/tiers/{tierName}/features/{featureName}/quota
                /// Authorization: magnopus-admin
                /// </remarks>
                void tiersTierNameFeaturesFeatureNameQuotaDelete(
                    const utility::string_t& tierName,const utility::string_t& featureName,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class QuotaTierAssignmentApi final : public csp::services::ApiBase
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
                void tierAssignmentsIdGet(
                    const utility::string_t& id,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets the user's tier assignment
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/tier-assignment
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void usersUserIdTierAssignmentGet(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Updates the user's tier assignment
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/users/{userId}/tier-assignment
                /// Authorization: magnopus-admin,internal-service
                /// </remarks>
                void usersUserIdTierAssignmentPut(
                    const utility::string_t& userId,const std::shared_ptr<QuotaTierAssignmentDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Deletes the user's tier assignment
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/users/{userId}/tier-assignment
                /// IMPORTANT NOTE: This does NOT leave the user's tier as unassigned.  This reverts the user to the default tier.
                /// </remarks>
                void usersUserIdTierAssignmentDelete(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets the tenant's tier assignment
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/tenants/{tenantName}/tier-assignment
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void tenantsTenantNameTierAssignmentGet(
                    const utility::string_t& tenantName,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Updates the tenant's tier assignment
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/tenants/{tenantName}/tier-assignment
                /// Authorization: magnopus-admin,internal-service
                /// </remarks>
                void tenantsTenantNameTierAssignmentPut(
                    const utility::string_t& tenantName,const std::shared_ptr<QuotaTierAssignmentDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Deletes the tenant's tier assignment
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/tenants/{tenantName}/tier-assignment
                /// IMPORTANT NOTE: This does NOT leave the tenant's tier as unassigned.  This reverts the tenant to the default tier.
                /// </remarks>
                void tenantsTenantNameTierAssignmentDelete(
                    const utility::string_t& tenantName,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets the group(s) tier assignments (the tier assignment of each group owner)
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/groups/tier-assignments
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void groupsTierAssignmentsGet(
                    const std::optional<std::vector<utility::string_t>>&
                groupIds,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    

} // namespace csp::services::trackingservice