

#include "Common/Web/HttpPayload.h"
#include "Common/Web/HttpAuth.h"
#include "CSP/CSPFoundation.h"

#include "Api.h"

#include <string>
#include <fmt/format.h>


namespace csp::services::generated::aggregationservice {


    AloMovesApi::AloMovesApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
    {

    }

    AloMovesApi::~AloMovesApi()
    {

    }

    
        
            
            void AloMovesApi::aloHarmonizePost(
                const std::shared_ptr<HarmonizeAloRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/harmonize").c_str(),
                    {}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

                WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void AloMovesApi::aloVersionsMatrixPost(
                csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/versions-matrix").c_str(),
                    {}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

                WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void AloMovesApi::aloUserIdClassesClassDefinitionIdCompletedPost(
                const utility::string_t& userId,const utility::string_t& classDefinitionId,const std::shared_ptr<AloClassCompletedRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/{userId}/classes/{classDefinitionId}/completed").c_str(),
                    {userId,classDefinitionId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void AloMovesApi::aloQaUserIdBadgeExpressionsPost(
                const utility::string_t& userId,const std::optional<utility::string_t>&
                classDefinitionId,const std::optional<utility::string_t>&
                expression,const std::optional<bool>&
                createFinalClass,const std::optional<bool>&
                deletePreviousData,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/qa/{userId}/badge-expressions").c_str(),
                    {userId}
                );

                
                        if (classDefinitionId.has_value())
                        {
                            Uri.AddQueryParams("classDefinitionId", classDefinitionId.value());
                        }
                    
                
                        if (expression.has_value())
                        {
                            Uri.AddQueryParams("expression", expression.value());
                        }
                    
                
                        if (createFinalClass.has_value())
                        {
                            Uri.AddQueryParams("createFinalClass", createFinalClass.value());
                        }
                    
                
                        if (deletePreviousData.has_value())
                        {
                            Uri.AddQueryParams("deletePreviousData", deletePreviousData.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void AloMovesApi::aloUserIdClassesRecommendationsGet(
                const utility::string_t& userId,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,const std::optional<bool>&
                isSeries,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/{userId}/classes/recommendations").c_str(),
                    {userId}
                );

                
                        if (Skip.has_value())
                        {
                            Uri.AddQueryParams("Skip", Skip.value());
                        }
                    
                
                        if (Limit.has_value())
                        {
                            Uri.AddQueryParams("Limit", Limit.value());
                        }
                    
                
                        if (isSeries.has_value())
                        {
                            Uri.AddQueryParams("isSeries", isSeries.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void AloMovesApi::aloQaSyncClassDataPut(
                csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/qa/sync/class-data").c_str(),
                    {}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    CacheApi::CacheApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
    {

    }

    CacheApi::~CacheApi()
    {

    }

    
        
            
            void CacheApi::cacheKeysGet(
                const std::optional<utility::string_t>&
                pattern,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/cache-keys").c_str(),
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
        
            
            void CacheApi::cacheKeysDelete(
                const std::optional<utility::string_t>&
                pattern,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/cache-keys").c_str(),
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
        
    

    ConfigurationApi::ConfigurationApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
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
        
    

    ExternalServiceProxyApi::ExternalServiceProxyApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
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
                        fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/service-proxy").c_str(),
                    {}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    GroupRolesApi::GroupRolesApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
    {

    }

    GroupRolesApi::~GroupRolesApi()
    {

    }

    
        
            
            void GroupRolesApi::usersUserIdGroupsGroupIdRolesPut(
                const utility::string_t& userId,const utility::string_t& groupId,const std::shared_ptr<GroupRoleDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/groups/{groupId}/roles").c_str(),
                    {userId,groupId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    NtpApi::NtpApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
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
        
    

    PingApi::PingApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
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
        
    

    SequenceApi::SequenceApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
    {

    }

    SequenceApi::~SequenceApi()
    {

    }

    
        
            
            void SequenceApi::sequencesGet(
                const std::optional<std::vector<utility::string_t>>&
                Keys,const std::optional<utility::string_t>&
                KeyLikeRegex,const std::optional<utility::string_t>&
                ReferenceType,const std::optional<std::vector<utility::string_t>>&
                ReferenceIds,const std::optional<std::vector<utility::string_t>>&
                Items,const std::optional<std::map<utility::string_t, utility::string_t>>&
                Metadata,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences").c_str(),
                    {}
                );

                
                        if (Keys.has_value())
                        {
                            Uri.AddQueryParams("Keys", Keys.value());
                        }
                    
                
                        if (KeyLikeRegex.has_value())
                        {
                            Uri.AddQueryParams("KeyLikeRegex", KeyLikeRegex.value());
                        }
                    
                
                        if (ReferenceType.has_value())
                        {
                            Uri.AddQueryParams("ReferenceType", ReferenceType.value());
                        }
                    
                
                        if (ReferenceIds.has_value())
                        {
                            Uri.AddQueryParams("ReferenceIds", ReferenceIds.value());
                        }
                    
                
                        if (Items.has_value())
                        {
                            Uri.AddQueryParams("Items", Items.value());
                        }
                    
                
                        if (Metadata.has_value())
                        {
                            Uri.AddQueryParams("Metadata", Metadata.value());
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
        
            
            void SequenceApi::sequencesPut(
                const std::optional<utility::string_t>&
                newKey,const std::shared_ptr<SequenceDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences").c_str(),
                    {}
                );

                
                        if (newKey.has_value())
                        {
                            Uri.AddQueryParams("newKey", newKey.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void SequenceApi::sequencesKeysKeyGet(
                const utility::string_t& key,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences/keys/{key}").c_str(),
                    {key}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
            
            void SequenceApi::sequencesKeysKeyDelete(
                const utility::string_t& key,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences/keys/{key}").c_str(),
                    {key}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void SequenceApi::sequencesKeysOldKeyKeyPut(
                const utility::string_t& oldKey,const utility::string_t& newKey,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences/keys/{oldKey}/key").c_str(),
                    {oldKey}
                );

                
                        Uri.AddQueryParams("newKey", newKey);
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void SequenceApi::sequencesKeysDelete(
                const std::vector<utility::string_t>& keys,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences/keys").c_str(),
                    {}
                );

                
                        Uri.AddQueryParams("keys", keys);
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void SequenceApi::sequencesReferenceTypeReferenceTypeReferenceIdReferenceIdDelete(
                const utility::string_t& referenceType,const utility::string_t& referenceId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences/reference-type/{referenceType}/reference-id/{referenceId}").c_str(),
                    {referenceType,referenceId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    ShopifyApi::ShopifyApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
    {

    }

    ShopifyApi::~ShopifyApi()
    {

    }

    
        
            
            void ShopifyApi::spacesSpaceIdVendorsShopifyProductsProductIdGet(
                const utility::string_t& spaceId,const utility::string_t& productId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/vendors/shopify/products/{productId}").c_str(),
                    {spaceId,productId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void ShopifyApi::spacesSpaceIdVendorsShopifyProductsVariantsGet(
                const utility::string_t& spaceId,const std::optional<std::vector<utility::string_t>>&
                ids,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/vendors/shopify/products/variants").c_str(),
                    {spaceId}
                );

                
                        if (ids.has_value())
                        {
                            Uri.AddQueryParams("ids", ids.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void ShopifyApi::spacesSpaceIdVendorsShopifyPut(
                const utility::string_t& spaceId,const std::shared_ptr<ShopifyStorefrontDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/vendors/shopify").c_str(),
                    {spaceId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void ShopifyApi::vendorsShopifyValidatePut(
                const std::shared_ptr<ShopifyStorefrontValidationRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/vendors/shopify/validate").c_str(),
                    {}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void ShopifyApi::vendorsShopifyUsersUserIdStorefrontsGet(
                const utility::string_t& userId,const std::optional<bool>&
                active,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/vendors/shopify/users/{userId}/storefronts").c_str(),
                    {userId}
                );

                
                        if (active.has_value())
                        {
                            Uri.AddQueryParams("active", active.value());
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
        
    
        
            
            void ShopifyApi::spacesSpaceIdVendorsShopifyCartsPost(
                const utility::string_t& spaceId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/vendors/shopify/carts").c_str(),
                    {spaceId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void ShopifyApi::spacesSpaceIdVendorsShopifyCartsCartIdGet(
                const utility::string_t& spaceId,const utility::string_t& cartId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/vendors/shopify/carts/{cartId}").c_str(),
                    {spaceId,cartId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
            
            void ShopifyApi::spacesSpaceIdVendorsShopifyCartsCartIdPut(
                const utility::string_t& spaceId,const utility::string_t& cartId,const std::shared_ptr<ShopifyCartUpdateDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/vendors/shopify/carts/{cartId}").c_str(),
                    {spaceId,cartId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void ShopifyApi::spacesSpaceIdVendorsShopifyCartsCartIdCheckoutInfoGet(
                const utility::string_t& spaceId,const utility::string_t& cartId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/vendors/shopify/carts/{cartId}/checkout-info").c_str(),
                    {spaceId,cartId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    SpaceApi::SpaceApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
    {

    }

    SpaceApi::~SpaceApi()
    {

    }

    
        
            
            void SpaceApi::spacesSpaceIdDelete(
                const utility::string_t& spaceId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}").c_str(),
                    {spaceId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void SpaceApi::spacesDelete(
                const std::optional<std::vector<utility::string_t>>&
                spaceIds,const std::optional<bool>&
                asyncCall,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces").c_str(),
                    {}
                );

                
                        if (spaceIds.has_value())
                        {
                            Uri.AddQueryParams("spaceIds", spaceIds.value());
                        }
                    
                
                        if (asyncCall.has_value())
                        {
                            Uri.AddQueryParams("asyncCall", asyncCall.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void SpaceApi::spacesSpaceIdMultiplayerObjectsKmlGet(
                const utility::string_t& spaceId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/multiplayer-objects/kml").c_str(),
                    {spaceId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void SpaceApi::spacesSpaceIdDuplicatePost(
                const utility::string_t& spaceId,const std::optional<bool>&
                asyncCall,const std::shared_ptr<DuplicateSpaceRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/duplicate").c_str(),
                    {spaceId}
                );

                
                        if (asyncCall.has_value())
                        {
                            Uri.AddQueryParams("asyncCall", asyncCall.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void SpaceApi::spacesSpaceIdExportPost(
                const utility::string_t& spaceId,const std::optional<bool>&
                asyncCall,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/export").c_str(),
                    {spaceId}
                );

                
                        if (asyncCall.has_value())
                        {
                            Uri.AddQueryParams("asyncCall", asyncCall.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void SpaceApi::spacesExportsExportIdImportPost(
                const utility::string_t& exportId,const std::optional<bool>&
                asyncCall,const std::shared_ptr<ImportSpaceRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/exports/{exportId}/import").c_str(),
                    {exportId}
                );

                
                        if (asyncCall.has_value())
                        {
                            Uri.AddQueryParams("asyncCall", asyncCall.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    

    TicketedSpaceApi::TicketedSpaceApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
    {

    }

    TicketedSpaceApi::~TicketedSpaceApi()
    {

    }

    
        
            
            void TicketedSpaceApi::spacesSpaceIdEventsPost(
                const utility::string_t& spaceId,const std::shared_ptr<SpaceEventDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/events").c_str(),
                    {spaceId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void TicketedSpaceApi::spacesSpaceIdEventsEventIdPut(
                const utility::string_t& spaceId,const utility::string_t& eventId,const std::shared_ptr<SpaceEventDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/events/{eventId}").c_str(),
                    {spaceId,eventId}
                );

                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void TicketedSpaceApi::spacesEventsGet(
                const std::optional<std::vector<utility::string_t>>&
                VendorEventIds,const std::optional<utility::string_t>&
                VendorName,const std::optional<std::vector<utility::string_t>>&
                SpaceIds,const std::optional<std::vector<utility::string_t>>&
                UserIds,const std::optional<bool>&
                IsTicketingActive,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/events").c_str(),
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
                    
                
                        if (UserIds.has_value())
                        {
                            Uri.AddQueryParams("UserIds", UserIds.value());
                        }
                    
                
                        if (IsTicketingActive.has_value())
                        {
                            Uri.AddQueryParams("IsTicketingActive", IsTicketingActive.value());
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
        
    
        
            
            void TicketedSpaceApi::spacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPut(
                const utility::string_t& spaceId,const utility::string_t& vendorName,const utility::string_t& vendorEventId,const utility::string_t& vendorTicketId,const std::optional<utility::string_t>&
                onBehalfOfUserId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/vendors/{vendorName}/events/{vendorEventId}/tickets/{vendorTicketId}").c_str(),
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
        
    
        
            
            void TicketedSpaceApi::spacesTicketedGet(
                const std::optional<std::vector<utility::string_t>>&
                spaceIds,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/ticketed").c_str(),
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
        
    
        
            
            void TicketedSpaceApi::vendorsVendorNameOauthGet(
                const utility::string_t& vendorName,const std::optional<utility::string_t>&
                code,const std::optional<utility::string_t>&
                userId,const std::optional<utility::string_t>&
                tenant,const std::optional<utility::string_t>&
                error_code,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/vendors/{vendorName}/oauth").c_str(),
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
                    
                
                        if (error_code.has_value())
                        {
                            Uri.AddQueryParams("error_code", error_code.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    
        
            
            void TicketedSpaceApi::vendorsVendorNameUsersUserIdProviderInfoGet(
                const utility::string_t& vendorName,const utility::string_t& userId,const std::optional<utility::string_t>&
                tenant,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/vendors/{vendorName}/users/{userId}/provider-info").c_str(),
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
        
    

    UserSustainedActivityApi::UserSustainedActivityApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().AggregationService)
    {

    }

    UserSustainedActivityApi::~UserSustainedActivityApi()
    {

    }

    
        
            
            void UserSustainedActivityApi::usersSustainedActivityGet(
                const std::optional<std::vector<utility::string_t>>&
                tenants,const std::optional<utility::string_t>&
                start,const std::optional<utility::string_t>&
                end,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken
            ) const
            {
                csp::web::Uri Uri;
                Uri.SetWithParams(
                        fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/sustained-activity").c_str(),
                    {}
                );

                
                        if (tenants.has_value())
                        {
                            Uri.AddQueryParams("tenants", tenants.value());
                        }
                    
                
                        if (start.has_value())
                        {
                            Uri.AddQueryParams("start", start.value());
                        }
                    
                
                        if (end.has_value())
                        {
                            Uri.AddQueryParams("end", end.value());
                        }
                    
                csp::web::HttpPayload Payload;
                Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
                    Payload.SetBearerToken();

                WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
            }
        
    


} // namespace csp::services::generated::