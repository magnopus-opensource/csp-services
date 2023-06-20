

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
    

} // namespace csp::services::aggregationservice