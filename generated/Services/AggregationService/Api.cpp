

#include "Web/HttpPayload.h"
#include "Web/HttpAuth.h"
#include "CSP/CSPFoundation.h"

#include "Api.h"


namespace csp::services::generated::aggregationservice {


    CacheApi::CacheApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().AggregationServiceURI)
    {

    }

    CacheApi::~CacheApi()
    {

    }

    
        
            void CacheApi::apiV1CacheKeysGet(
                const std::optional<utility::string_t>&
                pattern,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/cache-keys",
                    {}
                );

                
                        if (pattern.has_value())
                        {
                            Uri.AddQueryParams("pattern", pattern.value());
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
        
            void CacheApi::apiV1CacheKeysDelete(
                const std::optional<utility::string_t>&
                pattern,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/cache-keys",
                    {}
                );

                
                        if (pattern.has_value())
                        {
                            Uri.AddQueryParams("pattern", pattern.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    ConfigurationApi::ConfigurationApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().AggregationServiceURI)
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
                    *RootUri + "/appsettings",
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
                    *RootUri + "/appsettings/reload",
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
                    *RootUri + "/featureflags",
                    {}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    ExternalServiceProxyApi::ExternalServiceProxyApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().AggregationServiceURI)
    {

    }

    ExternalServiceProxyApi::~ExternalServiceProxyApi()
    {

    }

    
        
            void ExternalServiceProxyApi::serviceProxyPost(
                const std::shared_ptr<ServiceRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/service-proxy",
                    {}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    GroupRolesApi::GroupRolesApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().AggregationServiceURI)
    {

    }

    GroupRolesApi::~GroupRolesApi()
    {

    }

    
        
            void GroupRolesApi::apiV1UsersUserIdGroupsGroupIdRolesPut(
                const utility::string_t& userId,const utility::string_t& groupId,const std::shared_ptr<GroupRoleDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/users/{userId}/groups/{groupId}/roles",
                    {userId,groupId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    NtpApi::NtpApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().AggregationServiceURI)
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
                    *RootUri + "/datetime",
                    {}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    PingApi::PingApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().AggregationServiceURI)
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
                    *RootUri + "/ping",
                    {}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    SpaceApi::SpaceApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().AggregationServiceURI)
    {

    }

    SpaceApi::~SpaceApi()
    {

    }

    
        
            void SpaceApi::apiV1SpacesSpaceIdDelete(
                const utility::string_t& spaceId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/spaces/{spaceId}",
                    {spaceId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            void SpaceApi::apiV1SpacesSpaceIdMultiplayerObjectsKmlGet(
                const utility::string_t& spaceId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/spaces/{spaceId}/multiplayer-objects/kml",
                    {spaceId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    


} // namespace csp::services::generated::