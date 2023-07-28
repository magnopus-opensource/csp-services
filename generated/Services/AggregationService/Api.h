

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Services/ApiBase/ApiBase.h"
#include "Web/HttpPayload.h"
#include "Dto.h"

#include <optional>


namespace csp::services::generated::aggregationservice
{


    class CacheApi final : public csp::services::ApiBase
    {
    public:
        CacheApi(csp::web::WebClient* InWebClient);
        virtual ~CacheApi();

        
            
                
                    /// <summary>
                    /// Gets the distributed cache keys that match the pattern (use * for wildcard)
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/cache-keys
                /// Authorization: admin,support,internal-service
                /// </remarks>
                void apiV1CacheKeysGet(
                    const std::optional<utility::string_t>&
                pattern,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Deletes the distributed cache keys that match the pattern (use * for wildcard)
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/cache-keys
                /// Authorization: admin,support,internal-service
                /// </remarks>
                void apiV1CacheKeysDelete(
                    const std::optional<utility::string_t>&
                pattern,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class ConfigurationApi final : public csp::services::ApiBase
    {
    public:
        ConfigurationApi(csp::web::WebClient* InWebClient);
        virtual ~ConfigurationApi();

        
            
                /// <remarks>
                /// GET /appsettings
                /// Authorization: admin
                /// </remarks>
                void appsettingsGet(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                /// <remarks>
                /// POST /appsettings/reload
                /// Authorization: admin
                /// </remarks>
                void appsettingsReloadPost(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                /// <remarks>
                /// GET /featureflags
                /// Authorization: admin
                /// </remarks>
                void featureflagsGet(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class ExternalServiceProxyApi final : public csp::services::ApiBase
    {
    public:
        ExternalServiceProxyApi(csp::web::WebClient* InWebClient);
        virtual ~ExternalServiceProxyApi();

        
            
                
                    /// <summary>
                    /// Used to make a call to an external API
                    /// </summary>
                /// <remarks>
                /// POST /service-proxy
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void serviceProxyPost(
                    const std::shared_ptr<ServiceRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class GroupRolesApi final : public csp::services::ApiBase
    {
    public:
        GroupRolesApi(csp::web::WebClient* InWebClient);
        virtual ~GroupRolesApi();

        
            
                
                    /// <summary>
                    /// Set a user's group role in a group they're already a member of.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/users/{userId}/groups/{groupId}/roles
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdGroupsGroupIdRolesPut(
                    const utility::string_t& userId,const utility::string_t& groupId,const std::shared_ptr<GroupRoleDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
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
    
    class ShopifyApi final : public csp::services::ApiBase
    {
    public:
        ShopifyApi(csp::web::WebClient* InWebClient);
        virtual ~ShopifyApi();

        
            
                
                    /// <summary>
                    /// Find one product and return it and all its variants
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/spaces/{spaceId}/vendors/shopify/products
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdVendorsShopifyProductsGet(
                    const utility::string_t& spaceId,const std::optional<utility::string_t>&
                productId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Creates an record that contains the Shopify integration info
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/spaces/{spaceId}/vendors/shopify
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdVendorsShopifyPut(
                    const utility::string_t& spaceId,const std::shared_ptr<ShopifyStorefrontDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Creates a Cart at Shopify for the store associated to the provided SpaceId
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/spaces/{spaceId}/vendors/shopify/carts
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdVendorsShopifyCartsPost(
                    const utility::string_t& spaceId,const std::shared_ptr<ShopifyCartDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Uses the CartId to reach out to Shopify and get Cart Data.
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdVendorsShopifyCartsCartIdGet(
                    const utility::string_t& spaceId,const utility::string_t& cartId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Updates the Cart
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdVendorsShopifyCartsCartIdPut(
                    const utility::string_t& spaceId,const utility::string_t& cartId,const std::shared_ptr<ShopifyCartUpdateDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Get shopify cart checkout info
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}/checkout-info
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdVendorsShopifyCartsCartIdCheckoutInfoGet(
                    const utility::string_t& spaceId,const utility::string_t& cartId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class SpaceApi final : public csp::services::ApiBase
    {
    public:
        SpaceApi(csp::web::WebClient* InWebClient);
        virtual ~SpaceApi();

        
            
                
                    /// <summary>
                    /// Locates the Space by its unique groupId represented here as spaceId and the associated objects that belong to it
                    /// and deletes it from the data store.
                    /// This Function will search for items related to a spaceId even if the spaceId itself has already been deleted.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/spaces/{spaceId}
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdDelete(
                    const utility::string_t& spaceId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates the Space by its unique groupId represented here as spaceId and the associated objects that belong to it
                    /// and returns those objects as KML style XML for google earth
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/spaces/{spaceId}/multiplayer-objects/kml
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdMultiplayerObjectsKmlGet(
                    const utility::string_t& spaceId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class TicketedSpaceApi final : public csp::services::ApiBase
    {
    public:
        TicketedSpaceApi(csp::web::WebClient* InWebClient);
        virtual ~TicketedSpaceApi();

        
            
                
                    /// <summary>
                    /// Creates an event associated with a space
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/spaces/{spaceId}/events
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdEventsPost(
                    const utility::string_t& spaceId,const std::shared_ptr<SpaceEventDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Updates an event associated with a space
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/spaces/{spaceId}/events/{eventId}
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdEventsEventIdPut(
                    const utility::string_t& spaceId,const utility::string_t& eventId,const std::shared_ptr<SpaceEventDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Search space events that matches the search criteria
                    /// or an empty list if none found
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/spaces/events
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesEventsGet(
                    const std::optional<std::vector<utility::string_t>>&
                VendorEventIds,const std::optional<utility::string_t>&
                VendorName,const std::optional<std::vector<utility::string_t>>&
                SpaceIds,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Applies the ticket purchased from 3rd party event ticket vendor to enter a space event
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/spaces/{spaceId}/vendors/{vendorName}/events/{vendorEventId}/tickets/{vendorTicketId}
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPut(
                    const utility::string_t& spaceId,const utility::string_t& vendorName,const utility::string_t& vendorEventId,const utility::string_t& vendorTicketId,const std::optional<utility::string_t>&
                onBehalfOfUserId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Returns which spaces have active ticketing and which do not
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/spaces/ticketed
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesTicketedGet(
                    const std::optional<std::vector<utility::string_t>>&
                spaceIds,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// OAuth endpoint for exchanging vendor provider auth code for an API bearer token.
                    /// returns a redirect to a client-provided server-approved redirect URL
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/vendors/{vendorName}/oauth
                /// Authorization: Anonymous
                /// </remarks>
                void apiV1VendorsVendorNameOauthGet(
                    const utility::string_t& vendorName,const std::optional<utility::string_t>&
                code,const std::optional<utility::string_t>&
                userId,const std::optional<utility::string_t>&
                tenant,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Returns info related to initiating oauth flow with a specific vendor
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/vendors/{vendorName}/users/{userId}/provider-info
                /// Authorization: admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1VendorsVendorNameUsersUserIdProviderInfoGet(
                    const utility::string_t& vendorName,const utility::string_t& userId,const std::optional<utility::string_t>&
                tenant,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    

} // namespace csp::services::aggregationservice