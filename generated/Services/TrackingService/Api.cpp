

#include "Common/Web/HttpPayload.h"
#include "Common/Web/HttpAuth.h"
#include "CSP/CSPFoundation.h"

#include "Api.h"

#include <string>
#include <fmt/format.h>


namespace csp::services::generated::trackingservice {


    ConfigurationApi::ConfigurationApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
    {

    }

    ConfigurationApi::~ConfigurationApi()
    {

    }

    
        
            
            void ConfigurationApi::appsettingsGet(
                csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/appsettings").c_str(),
                    {}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void ConfigurationApi::appsettingsReloadPost(
                csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/appsettings/reload").c_str(),
                    {}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void ConfigurationApi::featureflagsGet(
                csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/featureflags").c_str(),
                    {}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    NtpApi::NtpApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
    {

    }

    NtpApi::~NtpApi()
    {

    }

    
        
            
            void NtpApi::datetimeGet(
                csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/datetime").c_str(),
                    {}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    PingApi::PingApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
    {

    }

    PingApi::~PingApi()
    {

    }

    
        
            
            void PingApi::pingGet(
                csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/ping").c_str(),
                    {}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    QuotaActivityApi::QuotaActivityApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
    {

    }

    QuotaActivityApi::~QuotaActivityApi()
    {

    }

    
        
            
            void QuotaActivityApi::usersUserIdQuotaProgressGet(
                const utility::string_t& userId,const std::optional<std::vector<utility::string_t>>&
                features,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/quota-progress").c_str(),
                    {userId}
                );

                
                        if (features.has_value())
                        {
                            Uri.AddQueryParams("features", features.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void QuotaActivityApi::groupsGroupIdQuotaProgressGet(
                const utility::string_t& groupId,const std::optional<std::vector<utility::string_t>>&
                features,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/quota-progress").c_str(),
                    {groupId}
                );

                
                        if (features.has_value())
                        {
                            Uri.AddQueryParams("features", features.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void QuotaActivityApi::userUserIdQuotaActivityGet(
                const utility::string_t& userId,const std::optional<std::vector<utility::string_t>>&
                Features,const std::optional<utility::string_t>&
                StartDateTime,const std::optional<utility::string_t>&
                EndDateTime,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/user/{userId}/quota-activity").c_str(),
                    {userId}
                );

                
                        if (Features.has_value())
                        {
                            Uri.AddQueryParams("Features", Features.value());
                        }
                    
                
                        if (StartDateTime.has_value())
                        {
                            Uri.AddQueryParams("StartDateTime", StartDateTime.value());
                        }
                    
                
                        if (EndDateTime.has_value())
                        {
                            Uri.AddQueryParams("EndDateTime", EndDateTime.value());
                        }
                    
                
                        if (Skip.has_value())
                        {
                            Uri.AddQueryParams("Skip", Skip.value());
                        }
                    
                
                        if (Limit.has_value())
                        {
                            Uri.AddQueryParams("Limit", Limit.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void QuotaActivityApi::groupGroupIdQuotaActivityGet(
                const utility::string_t& groupId,const std::optional<std::vector<utility::string_t>>&
                Features,const std::optional<utility::string_t>&
                StartDateTime,const std::optional<utility::string_t>&
                EndDateTime,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/group/{groupId}/quota-activity").c_str(),
                    {groupId}
                );

                
                        if (Features.has_value())
                        {
                            Uri.AddQueryParams("Features", Features.value());
                        }
                    
                
                        if (StartDateTime.has_value())
                        {
                            Uri.AddQueryParams("StartDateTime", StartDateTime.value());
                        }
                    
                
                        if (EndDateTime.has_value())
                        {
                            Uri.AddQueryParams("EndDateTime", EndDateTime.value());
                        }
                    
                
                        if (Skip.has_value())
                        {
                            Uri.AddQueryParams("Skip", Skip.value());
                        }
                    
                
                        if (Limit.has_value())
                        {
                            Uri.AddQueryParams("Limit", Limit.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    QuotaManagementApi::QuotaManagementApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
    {

    }

    QuotaManagementApi::~QuotaManagementApi()
    {

    }

    
        
            
            void QuotaManagementApi::tiersTierNameQuotasGet(
                const utility::string_t& tierName,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tiers/{tierName}/quotas").c_str(),
                    {tierName}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void QuotaManagementApi::tiersTierNameFeaturesFeatureNameQuotaGet(
                const utility::string_t& tierName,const utility::string_t& featureName,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tiers/{tierName}/features/{featureName}/quota").c_str(),
                    {tierName,featureName}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
            
            void QuotaManagementApi::tiersTierNameFeaturesFeatureNameQuotaPut(
                const utility::string_t& tierName,const utility::string_t& featureName,const std::shared_ptr<QuotaFeatureTierDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tiers/{tierName}/features/{featureName}/quota").c_str(),
                    {tierName,featureName}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
            
            void QuotaManagementApi::tiersTierNameFeaturesFeatureNameQuotaDelete(
                const utility::string_t& tierName,const utility::string_t& featureName,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tiers/{tierName}/features/{featureName}/quota").c_str(),
                    {tierName,featureName}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    QuotaTierAssignmentApi::QuotaTierAssignmentApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
    {

    }

    QuotaTierAssignmentApi::~QuotaTierAssignmentApi()
    {

    }

    
        
            
            void QuotaTierAssignmentApi::tierAssignmentsIdGet(
                const utility::string_t& id,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tier-assignments/{id}").c_str(),
                    {id}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void QuotaTierAssignmentApi::usersUserIdTierAssignmentGet(
                const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/tier-assignment").c_str(),
                    {userId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
            
            void QuotaTierAssignmentApi::usersUserIdTierAssignmentPut(
                const utility::string_t& userId,const std::shared_ptr<QuotaTierAssignmentDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/tier-assignment").c_str(),
                    {userId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
            
            void QuotaTierAssignmentApi::usersUserIdTierAssignmentDelete(
                const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/tier-assignment").c_str(),
                    {userId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void QuotaTierAssignmentApi::tenantsTenantNameTierAssignmentGet(
                const utility::string_t& tenantName,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tenants/{tenantName}/tier-assignment").c_str(),
                    {tenantName}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
            
            void QuotaTierAssignmentApi::tenantsTenantNameTierAssignmentPut(
                const utility::string_t& tenantName,const std::shared_ptr<QuotaTierAssignmentDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tenants/{tenantName}/tier-assignment").c_str(),
                    {tenantName}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
            
            void QuotaTierAssignmentApi::tenantsTenantNameTierAssignmentDelete(
                const utility::string_t& tenantName,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tenants/{tenantName}/tier-assignment").c_str(),
                    {tenantName}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void QuotaTierAssignmentApi::groupsTierAssignmentsGet(
                const std::optional<std::vector<utility::string_t>>&
                groupIds,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/tier-assignments").c_str(),
                    {}
                );

                
                        if (groupIds.has_value())
                        {
                            Uri.AddQueryParams("groupIds", groupIds.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    


} // namespace csp::services::generated::