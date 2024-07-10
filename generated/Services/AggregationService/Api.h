

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Services/ApiBase/ApiBase.h"
#include "Web/HttpPayload.h"
#include "Dto.h"

#include <optional>


namespace csp::services::generated::aggregationservice
{


    class AloMovesApi final : public csp::services::ApiBase
    {
    public:
        AloMovesApi(csp::web::WebClient* InWebClient);
        virtual ~AloMovesApi();

        
            
                
                    /// <summary>
                    /// Harmonize with Meta
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/alo/harmonize
                /// Authorization: Anonymous
                /// </remarks>
                void apiV1AloHarmonizePost(
                    const std::shared_ptr<HarmonizeAloRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Class Completed
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/alo/{userId}/classes/{classDefinitionId}/completed
                /// !AUTHORIZATION REQUIREMENTS NOT SET!
                /// </remarks>
                void apiV1AloUserIdClassesClassDefinitionIdCompletedPost(
                    const utility::string_t& userId,const utility::string_t& classDefinitionId,const std::shared_ptr<AloClassCompletedRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
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
                /// Authorization: magnopus-admin
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
                /// Authorization: magnopus-admin
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
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
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
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
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
    
    class SequenceApi final : public csp::services::ApiBase
    {
    public:
        SequenceApi(csp::web::WebClient* InWebClient);
        virtual ~SequenceApi();

        
            
                
                    /// <summary>
                    /// Finds all matching sequences.
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/sequences
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SequencesGet(
                    const std::optional<std::vector<utility::string_t>>&
                Keys,const std::optional<utility::string_t>&
                KeyLikeRegex,const std::optional<utility::string_t>&
                ReferenceType,const std::optional<std::vector<utility::string_t>>&
                ReferenceIds,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Creates or updates a sequence.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/sequences
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SequencesPut(
                    const std::shared_ptr<SequenceDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets a sequence by key.
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/sequences/keys/{key}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SequencesKeysKeyGet(
                    const utility::string_t& key,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Deletes a sequence with the given key.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/sequences/keys/{key}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SequencesKeysKeyDelete(
                    const utility::string_t& key,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Moves a sequence from one key to another.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/sequences/keys/{oldKey}/key
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SequencesKeysOldKeyKeyPut(
                    const utility::string_t& oldKey,const utility::string_t& newKey,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Deletes all sequences with the given keys.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/sequences/keys
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SequencesKeysDelete(
                    const std::vector<utility::string_t>& keys,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Deletes all sequences with the given reference.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/sequences/reference-type/{referenceType}/reference-id/{referenceId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SequencesReferenceTypeReferenceTypeReferenceIdReferenceIdDelete(
                    const utility::string_t& referenceType,const utility::string_t& referenceId,csp::services::ApiResponseHandlerBase* ResponseHandler,
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
                /// GET /api/v1/spaces/{spaceId}/vendors/shopify/products/{productId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdVendorsShopifyProductsProductIdGet(
                    const utility::string_t& spaceId,const utility::string_t& productId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Find one or more products by variant ids and include the variant data too
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/spaces/{spaceId}/vendors/shopify/products/variants
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdVendorsShopifyProductsVariantsGet(
                    const utility::string_t& spaceId,const std::optional<std::vector<utility::string_t>>&
                ids,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Creates an record that contains the Shopify integration info
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/spaces/{spaceId}/vendors/shopify
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdVendorsShopifyPut(
                    const utility::string_t& spaceId,const std::shared_ptr<ShopifyStorefrontDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Tests the provided info against Shopify to verify it's validity
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/vendors/shopify/validate
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1VendorsShopifyValidatePut(
                    const std::shared_ptr<ShopifyStorefrontValidationRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Returns all storefronts for the provided user
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/vendors/shopify/users/{userId}/storefronts
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1VendorsShopifyUsersUserIdStorefrontsGet(
                    const utility::string_t& userId,const std::optional<bool>&
                active,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Creates a Cart at Shopify for the store associated to the provided SpaceId
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/spaces/{spaceId}/vendors/shopify/carts
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdVendorsShopifyCartsPost(
                    const utility::string_t& spaceId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Uses the CartId to reach out to Shopify and get Cart Data.
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
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
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
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
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
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
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdDelete(
                    const utility::string_t& spaceId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates the Spaces by their unique groupIds represented here as spaceIds and the associated objects that belong to it
                    /// and deletes it from the data store.
                    /// This Function will search for items related to a spaceId even if the spaceId itself has already been deleted.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/spaces
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesDelete(
                    const std::optional<std::vector<utility::string_t>>&
                spaceIds,const std::optional<bool>&
                asyncCall,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates the Space by its unique groupId represented here as spaceId and the associated objects that belong to it
                    /// and returns those objects as KML style XML for google earth
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/spaces/{spaceId}/multiplayer-objects/kml
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdMultiplayerObjectsKmlGet(
                    const utility::string_t& spaceId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Creates a duplicate of a space and assigns it to a specific group
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/spaces/{spaceId}/duplicate
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesSpaceIdDuplicatePost(
                    const utility::string_t& spaceId,const std::optional<bool>&
                asyncCall,const std::shared_ptr<DuplicateSpaceRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
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
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
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
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
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
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1SpacesEventsGet(
                    const std::optional<std::vector<utility::string_t>>&
                VendorEventIds,const std::optional<utility::string_t>&
                VendorName,const std::optional<std::vector<utility::string_t>>&
                SpaceIds,const std::optional<std::vector<utility::string_t>>&
                UserIds,const std::optional<bool>&
                IsTicketingActive,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Applies the ticket purchased from 3rd party event ticket vendor to enter a space event
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/spaces/{spaceId}/vendors/{vendorName}/events/{vendorEventId}/tickets/{vendorTicketId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
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
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
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
                tenant,const std::optional<utility::string_t>&
                error_code,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Returns info related to initiating oauth flow with a specific vendor
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/vendors/{vendorName}/users/{userId}/provider-info
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1VendorsVendorNameUsersUserIdProviderInfoGet(
                    const utility::string_t& vendorName,const utility::string_t& userId,const std::optional<utility::string_t>&
                tenant,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    

} // namespace csp::services::aggregationservice