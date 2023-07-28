

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
        
    

    ShopifyApi::ShopifyApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().AggregationServiceURI)
    {

    }

    ShopifyApi::~ShopifyApi()
    {

    }

    
        
            void ShopifyApi::apiV1SpacesSpaceIdVendorsShopifyProductsGet(
                const utility::string_t& spaceId,const std::optional<utility::string_t>&
                productId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/spaces/{spaceId}/vendors/shopify/products",
                    {spaceId}
                );

                
                        if (productId.has_value())
                        {
                            Uri.AddQueryParams("productId", productId.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            void ShopifyApi::apiV1SpacesSpaceIdVendorsShopifyPut(
                const utility::string_t& spaceId,const std::shared_ptr<ShopifyStorefrontDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/spaces/{spaceId}/vendors/shopify",
                    {spaceId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            void ShopifyApi::apiV1SpacesSpaceIdVendorsShopifyCartsPost(
                const utility::string_t& spaceId,const std::shared_ptr<ShopifyCartDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/spaces/{spaceId}/vendors/shopify/carts",
                    {spaceId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            void ShopifyApi::apiV1SpacesSpaceIdVendorsShopifyCartsCartIdGet(
                const utility::string_t& spaceId,const utility::string_t& cartId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}",
                    {spaceId,cartId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
            void ShopifyApi::apiV1SpacesSpaceIdVendorsShopifyCartsCartIdPut(
                const utility::string_t& spaceId,const utility::string_t& cartId,const std::shared_ptr<ShopifyCartUpdateDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}",
                    {spaceId,cartId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            void ShopifyApi::apiV1SpacesSpaceIdVendorsShopifyCartsCartIdCheckoutInfoGet(
                const utility::string_t& spaceId,const utility::string_t& cartId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}/checkout-info",
                    {spaceId,cartId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

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
        
    

    TicketedSpaceApi::TicketedSpaceApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().AggregationServiceURI)
    {

    }

    TicketedSpaceApi::~TicketedSpaceApi()
    {

    }

    
        
            void TicketedSpaceApi::apiV1SpacesSpaceIdEventsPost(
                const utility::string_t& spaceId,const std::shared_ptr<SpaceEventDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/spaces/{spaceId}/events",
                    {spaceId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            void TicketedSpaceApi::apiV1SpacesSpaceIdEventsEventIdPut(
                const utility::string_t& spaceId,const utility::string_t& eventId,const std::shared_ptr<SpaceEventDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/spaces/{spaceId}/events/{eventId}",
                    {spaceId,eventId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            void TicketedSpaceApi::apiV1SpacesEventsGet(
                const std::optional<std::vector<utility::string_t>>&
                VendorEventIds,const std::optional<utility::string_t>&
                VendorName,const std::optional<std::vector<utility::string_t>>&
                SpaceIds,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/spaces/events",
                    {}
                );

                
                        if (VendorEventIds.has_value())
                        {
                            Uri.AddQueryParams("VendorEventIds", VendorEventIds.value());
                        }
                    
                
                        if (VendorName.has_value())
                        {
                            Uri.AddQueryParams("VendorName", VendorName.value());
                        }
                    
                
                        if (SpaceIds.has_value())
                        {
                            Uri.AddQueryParams("SpaceIds", SpaceIds.value());
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
        
    
        
            void TicketedSpaceApi::apiV1SpacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPut(
                const utility::string_t& spaceId,const utility::string_t& vendorName,const utility::string_t& vendorEventId,const utility::string_t& vendorTicketId,const std::optional<utility::string_t>&
                onBehalfOfUserId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/spaces/{spaceId}/vendors/{vendorName}/events/{vendorEventId}/tickets/{vendorTicketId}",
                    {spaceId,vendorName,vendorEventId,vendorTicketId}
                );

                
                        if (onBehalfOfUserId.has_value())
                        {
                            Uri.AddQueryParams("onBehalfOfUserId", onBehalfOfUserId.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            void TicketedSpaceApi::apiV1SpacesTicketedGet(
                const std::optional<std::vector<utility::string_t>>&
                spaceIds,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/spaces/ticketed",
                    {}
                );

                
                        if (spaceIds.has_value())
                        {
                            Uri.AddQueryParams("spaceIds", spaceIds.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            void TicketedSpaceApi::apiV1VendorsVendorNameOauthGet(
                const utility::string_t& vendorName,const std::optional<utility::string_t>&
                code,const std::optional<utility::string_t>&
                userId,const std::optional<utility::string_t>&
                tenant,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/vendors/{vendorName}/oauth",
                    {vendorName}
                );

                
                        if (code.has_value())
                        {
                            Uri.AddQueryParams("code", code.value());
                        }
                    
                
                        if (userId.has_value())
                        {
                            Uri.AddQueryParams("userId", userId.value());
                        }
                    
                
                        if (tenant.has_value())
                        {
                            Uri.AddQueryParams("tenant", tenant.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            void TicketedSpaceApi::apiV1VendorsVendorNameUsersUserIdProviderInfoGet(
                const utility::string_t& vendorName,const utility::string_t& userId,const std::optional<utility::string_t>&
                tenant,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                    *RootUri + "/api/v1/vendors/{vendorName}/users/{userId}/provider-info",
                    {vendorName,userId}
                );

                
                        if (tenant.has_value())
                        {
                            Uri.AddQueryParams("tenant", tenant.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    


} // namespace csp::services::generated::