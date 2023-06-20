

#include "Web/Json.h"
#include "Web/Json_HttpPayload.h"
#include "Debug/Logging.h"

#include "Dto.h"

#include <optional>


using namespace csp::web;


namespace csp::services::generated::userservice
{


    ApplicationSettingsDto::ApplicationSettingsDto() { }
    ApplicationSettingsDto::~ApplicationSettingsDto() { }

    utility::string_t ApplicationSettingsDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_ApplicationName.has_value())
                {
                    rapidjson::Value ApplicationNameValue(
                        TypeToJsonValue(m_ApplicationName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "applicationName",
                        ApplicationNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Context.has_value())
                {
                    rapidjson::Value ContextValue(
                        TypeToJsonValue(m_Context, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "context",
                        ContextValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Settings.has_value())
                {
                    rapidjson::Value SettingsValue(
                        TypeToJsonValue(m_Settings, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "settings",
                        SettingsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void ApplicationSettingsDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("applicationName"))
                {
                    const rapidjson::Value& ApplicationNameValue = JsonDoc["applicationName"];

                    if (ApplicationNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ApplicationNameValue, m_ApplicationName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member applicationName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("context"))
                {
                    const rapidjson::Value& ContextValue = JsonDoc["context"];

                    if (ContextValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ContextValue, m_Context);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member context is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("settings"))
                {
                    const rapidjson::Value& SettingsValue = JsonDoc["settings"];

                    if (SettingsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(SettingsValue, m_Settings);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member settings is null!");
                    }
                    
                }
            
        }

        
            utility::string_t ApplicationSettingsDto::GetApplicationName() const
            {
                    return m_ApplicationName.value();
                }

            bool ApplicationSettingsDto::HasApplicationName() const
            {
                return m_ApplicationName.has_value();
            }

            void ApplicationSettingsDto::SetApplicationName(
                    const utility::string_t& Value
                )
            {
                    m_ApplicationName = Value;
                }
                
        
            utility::string_t ApplicationSettingsDto::GetContext() const
            {
                    return m_Context.value();
                }

            bool ApplicationSettingsDto::HasContext() const
            {
                return m_Context.has_value();
            }

            void ApplicationSettingsDto::SetContext(
                    const utility::string_t& Value
                )
            {
                    m_Context = Value;
                }
                
        
            const std::map<utility::string_t, utility::string_t>&
                    ApplicationSettingsDto::GetSettings() const
            {
                    return m_Settings.value();
                }

            bool ApplicationSettingsDto::HasSettings() const
            {
                return m_Settings.has_value();
            }

            void ApplicationSettingsDto::SetSettings(
                    const std::map<utility::string_t, utility::string_t>& Value
                )
            {
                    m_Settings = Value;
                }
                
        

    AuthDto::AuthDto() { }
    AuthDto::~AuthDto() { }

    utility::string_t AuthDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_UserId.has_value())
                {
                    rapidjson::Value UserIdValue(
                        TypeToJsonValue(m_UserId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userId",
                        UserIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AccessToken.has_value())
                {
                    rapidjson::Value AccessTokenValue(
                        TypeToJsonValue(m_AccessToken, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "accessToken",
                        AccessTokenValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AccessTokenExpiresAt.has_value())
                {
                    rapidjson::Value AccessTokenExpiresAtValue(
                        TypeToJsonValue(m_AccessTokenExpiresAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "accessTokenExpiresAt",
                        AccessTokenExpiresAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_RefreshToken.has_value())
                {
                    rapidjson::Value RefreshTokenValue(
                        TypeToJsonValue(m_RefreshToken, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "refreshToken",
                        RefreshTokenValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_RefreshTokenExpiresAt.has_value())
                {
                    rapidjson::Value RefreshTokenExpiresAtValue(
                        TypeToJsonValue(m_RefreshTokenExpiresAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "refreshTokenExpiresAt",
                        RefreshTokenExpiresAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_DeviceId.has_value())
                {
                    rapidjson::Value DeviceIdValue(
                        TypeToJsonValue(m_DeviceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "deviceId",
                        DeviceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void AuthDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("userId"))
                {
                    const rapidjson::Value& UserIdValue = JsonDoc["userId"];

                    if (UserIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserIdValue, m_UserId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("accessToken"))
                {
                    const rapidjson::Value& AccessTokenValue = JsonDoc["accessToken"];

                    if (AccessTokenValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AccessTokenValue, m_AccessToken);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member accessToken is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("accessTokenExpiresAt"))
                {
                    const rapidjson::Value& AccessTokenExpiresAtValue = JsonDoc["accessTokenExpiresAt"];

                    if (AccessTokenExpiresAtValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AccessTokenExpiresAtValue, m_AccessTokenExpiresAt);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member accessTokenExpiresAt is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("refreshToken"))
                {
                    const rapidjson::Value& RefreshTokenValue = JsonDoc["refreshToken"];

                    if (RefreshTokenValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(RefreshTokenValue, m_RefreshToken);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member refreshToken is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("refreshTokenExpiresAt"))
                {
                    const rapidjson::Value& RefreshTokenExpiresAtValue = JsonDoc["refreshTokenExpiresAt"];

                    if (RefreshTokenExpiresAtValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(RefreshTokenExpiresAtValue, m_RefreshTokenExpiresAt);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member refreshTokenExpiresAt is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("deviceId"))
                {
                    const rapidjson::Value& DeviceIdValue = JsonDoc["deviceId"];

                    if (DeviceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DeviceIdValue, m_DeviceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member deviceId is null!");
                    }
                    
                }
            
        }

        
            utility::string_t AuthDto::GetUserId() const
            {
                    return m_UserId.value();
                }

            bool AuthDto::HasUserId() const
            {
                return m_UserId.has_value();
            }

            void AuthDto::SetUserId(
                    const utility::string_t& Value
                )
            {
                    m_UserId = Value;
                }
                
        
            utility::string_t AuthDto::GetAccessToken() const
            {
                    return m_AccessToken.value();
                }

            bool AuthDto::HasAccessToken() const
            {
                return m_AccessToken.has_value();
            }

            void AuthDto::SetAccessToken(
                    const utility::string_t& Value
                )
            {
                    m_AccessToken = Value;
                }
                
        
            utility::string_t AuthDto::GetAccessTokenExpiresAt() const
            {
                    return m_AccessTokenExpiresAt.value();
                }

            bool AuthDto::HasAccessTokenExpiresAt() const
            {
                return m_AccessTokenExpiresAt.has_value();
            }

            void AuthDto::SetAccessTokenExpiresAt(
                    const utility::string_t& Value
                )
            {
                    m_AccessTokenExpiresAt = Value;
                }
                
        
            utility::string_t AuthDto::GetRefreshToken() const
            {
                    return m_RefreshToken.value();
                }

            bool AuthDto::HasRefreshToken() const
            {
                return m_RefreshToken.has_value();
            }

            void AuthDto::SetRefreshToken(
                    const utility::string_t& Value
                )
            {
                    m_RefreshToken = Value;
                }
                
        
            utility::string_t AuthDto::GetRefreshTokenExpiresAt() const
            {
                    return m_RefreshTokenExpiresAt.value();
                }

            bool AuthDto::HasRefreshTokenExpiresAt() const
            {
                return m_RefreshTokenExpiresAt.has_value();
            }

            void AuthDto::SetRefreshTokenExpiresAt(
                    const utility::string_t& Value
                )
            {
                    m_RefreshTokenExpiresAt = Value;
                }
                
        
            utility::string_t AuthDto::GetDeviceId() const
            {
                    return m_DeviceId.value();
                }

            bool AuthDto::HasDeviceId() const
            {
                return m_DeviceId.has_value();
            }

            void AuthDto::SetDeviceId(
                    const utility::string_t& Value
                )
            {
                    m_DeviceId = Value;
                }
                
        

    AvatarManifestDto::AvatarManifestDto() { }
    AvatarManifestDto::~AvatarManifestDto() { }

    utility::string_t AvatarManifestDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Id.has_value())
                {
                    rapidjson::Value IdValue(
                        TypeToJsonValue(m_Id, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "id",
                        IdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UserId.has_value())
                {
                    rapidjson::Value UserIdValue(
                        TypeToJsonValue(m_UserId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userId",
                        UserIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Gender.has_value())
                {
                    rapidjson::Value GenderValue(
                        TypeToJsonValue(m_Gender, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "gender",
                        GenderValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ExternalUri.has_value())
                {
                    rapidjson::Value ExternalUriValue(
                        TypeToJsonValue(m_ExternalUri, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "externalUri",
                        ExternalUriValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void AvatarManifestDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("id"))
                {
                    const rapidjson::Value& IdValue = JsonDoc["id"];

                    if (IdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IdValue, m_Id);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("userId"))
                {
                    const rapidjson::Value& UserIdValue = JsonDoc["userId"];

                    if (UserIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserIdValue, m_UserId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("gender"))
                {
                    const rapidjson::Value& GenderValue = JsonDoc["gender"];

                    if (GenderValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GenderValue, m_Gender);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member gender is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("externalUri"))
                {
                    const rapidjson::Value& ExternalUriValue = JsonDoc["externalUri"];

                    if (ExternalUriValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ExternalUriValue, m_ExternalUri);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member externalUri is null!");
                    }
                    
                }
            
        }

        
            utility::string_t AvatarManifestDto::GetId() const
            {
                    return m_Id.value();
                }

            bool AvatarManifestDto::HasId() const
            {
                return m_Id.has_value();
            }

            void AvatarManifestDto::SetId(
                    const utility::string_t& Value
                )
            {
                    m_Id = Value;
                }
                
        
            utility::string_t AvatarManifestDto::GetUserId() const
            {
                    return m_UserId.value();
                }

            bool AvatarManifestDto::HasUserId() const
            {
                return m_UserId.has_value();
            }

            void AvatarManifestDto::SetUserId(
                    const utility::string_t& Value
                )
            {
                    m_UserId = Value;
                }
                
        
            std::shared_ptr<Gender> AvatarManifestDto::GetGender() const
            {
                    return m_Gender.value();
                }

            bool AvatarManifestDto::HasGender() const
            {
                return m_Gender.has_value();
            }

            void AvatarManifestDto::SetGender(
                    const std::shared_ptr<Gender>& Value
                )
            {
                    m_Gender = Value;
                }
                
        
            utility::string_t AvatarManifestDto::GetExternalUri() const
            {
                    return m_ExternalUri.value();
                }

            bool AvatarManifestDto::HasExternalUri() const
            {
                return m_ExternalUri.has_value();
            }

            void AvatarManifestDto::SetExternalUri(
                    const utility::string_t& Value
                )
            {
                    m_ExternalUri = Value;
                }
                
        

    CreateUserRequest::CreateUserRequest() { }
    CreateUserRequest::~CreateUserRequest() { }

    utility::string_t CreateUserRequest::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Tenant.has_value())
                {
                    rapidjson::Value TenantValue(
                        TypeToJsonValue(m_Tenant, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "tenant",
                        TenantValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Email.has_value())
                {
                    rapidjson::Value EmailValue(
                        TypeToJsonValue(m_Email, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "email",
                        EmailValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Password.has_value())
                {
                    rapidjson::Value PasswordValue(
                        TypeToJsonValue(m_Password, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "password",
                        PasswordValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UserName.has_value())
                {
                    rapidjson::Value UserNameValue(
                        TypeToJsonValue(m_UserName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userName",
                        UserNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_DisplayName.has_value())
                {
                    rapidjson::Value DisplayNameValue(
                        TypeToJsonValue(m_DisplayName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "displayName",
                        DisplayNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_GuestDeviceId.has_value())
                {
                    rapidjson::Value GuestDeviceIdValue(
                        TypeToJsonValue(m_GuestDeviceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "guestDeviceId",
                        GuestDeviceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AvatarId.has_value())
                {
                    rapidjson::Value AvatarIdValue(
                        TypeToJsonValue(m_AvatarId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "avatarId",
                        AvatarIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_InviteToken.has_value())
                {
                    rapidjson::Value InviteTokenValue(
                        TypeToJsonValue(m_InviteToken, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "inviteToken",
                        InviteTokenValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_RedirectUrl.has_value())
                {
                    rapidjson::Value RedirectUrlValue(
                        TypeToJsonValue(m_RedirectUrl, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "redirectUrl",
                        RedirectUrlValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_InitialSettings.has_value())
                {
                    rapidjson::Value InitialSettingsValue(
                        TypeToJsonValue(m_InitialSettings, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "initialSettings",
                        InitialSettingsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void CreateUserRequest::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("tenant"))
                {
                    const rapidjson::Value& TenantValue = JsonDoc["tenant"];

                    if (TenantValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(TenantValue, m_Tenant);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member tenant is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("email"))
                {
                    const rapidjson::Value& EmailValue = JsonDoc["email"];

                    if (EmailValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(EmailValue, m_Email);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member email is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("password"))
                {
                    const rapidjson::Value& PasswordValue = JsonDoc["password"];

                    if (PasswordValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PasswordValue, m_Password);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member password is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("userName"))
                {
                    const rapidjson::Value& UserNameValue = JsonDoc["userName"];

                    if (UserNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserNameValue, m_UserName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("displayName"))
                {
                    const rapidjson::Value& DisplayNameValue = JsonDoc["displayName"];

                    if (DisplayNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DisplayNameValue, m_DisplayName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member displayName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("guestDeviceId"))
                {
                    const rapidjson::Value& GuestDeviceIdValue = JsonDoc["guestDeviceId"];

                    if (GuestDeviceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GuestDeviceIdValue, m_GuestDeviceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member guestDeviceId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("avatarId"))
                {
                    const rapidjson::Value& AvatarIdValue = JsonDoc["avatarId"];

                    if (AvatarIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AvatarIdValue, m_AvatarId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member avatarId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("inviteToken"))
                {
                    const rapidjson::Value& InviteTokenValue = JsonDoc["inviteToken"];

                    if (InviteTokenValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(InviteTokenValue, m_InviteToken);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member inviteToken is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("redirectUrl"))
                {
                    const rapidjson::Value& RedirectUrlValue = JsonDoc["redirectUrl"];

                    if (RedirectUrlValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(RedirectUrlValue, m_RedirectUrl);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member redirectUrl is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("initialSettings"))
                {
                    const rapidjson::Value& InitialSettingsValue = JsonDoc["initialSettings"];

                    if (InitialSettingsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(InitialSettingsValue, m_InitialSettings);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member initialSettings is null!");
                    }
                    
                }
            
        }

        
            utility::string_t CreateUserRequest::GetTenant() const
            {
                    return m_Tenant.value();
                }

            bool CreateUserRequest::HasTenant() const
            {
                return m_Tenant.has_value();
            }

            void CreateUserRequest::SetTenant(
                    const utility::string_t& Value
                )
            {
                    m_Tenant = Value;
                }
                
        
            utility::string_t CreateUserRequest::GetEmail() const
            {
                    return m_Email.value();
                }

            bool CreateUserRequest::HasEmail() const
            {
                return m_Email.has_value();
            }

            void CreateUserRequest::SetEmail(
                    const utility::string_t& Value
                )
            {
                    m_Email = Value;
                }
                
        
            utility::string_t CreateUserRequest::GetPassword() const
            {
                    return m_Password.value();
                }

            bool CreateUserRequest::HasPassword() const
            {
                return m_Password.has_value();
            }

            void CreateUserRequest::SetPassword(
                    const utility::string_t& Value
                )
            {
                    m_Password = Value;
                }
                
        
            utility::string_t CreateUserRequest::GetUserName() const
            {
                    return m_UserName.value();
                }

            bool CreateUserRequest::HasUserName() const
            {
                return m_UserName.has_value();
            }

            void CreateUserRequest::SetUserName(
                    const utility::string_t& Value
                )
            {
                    m_UserName = Value;
                }
                
        
            utility::string_t CreateUserRequest::GetDisplayName() const
            {
                    return m_DisplayName.value();
                }

            bool CreateUserRequest::HasDisplayName() const
            {
                return m_DisplayName.has_value();
            }

            void CreateUserRequest::SetDisplayName(
                    const utility::string_t& Value
                )
            {
                    m_DisplayName = Value;
                }
                
        
            utility::string_t CreateUserRequest::GetGuestDeviceId() const
            {
                    return m_GuestDeviceId.value();
                }

            bool CreateUserRequest::HasGuestDeviceId() const
            {
                return m_GuestDeviceId.has_value();
            }

            void CreateUserRequest::SetGuestDeviceId(
                    const utility::string_t& Value
                )
            {
                    m_GuestDeviceId = Value;
                }
                
        
            utility::string_t CreateUserRequest::GetAvatarId() const
            {
                    return m_AvatarId.value();
                }

            bool CreateUserRequest::HasAvatarId() const
            {
                return m_AvatarId.has_value();
            }

            void CreateUserRequest::SetAvatarId(
                    const utility::string_t& Value
                )
            {
                    m_AvatarId = Value;
                }
                
        
            utility::string_t CreateUserRequest::GetInviteToken() const
            {
                    return m_InviteToken.value();
                }

            bool CreateUserRequest::HasInviteToken() const
            {
                return m_InviteToken.has_value();
            }

            void CreateUserRequest::SetInviteToken(
                    const utility::string_t& Value
                )
            {
                    m_InviteToken = Value;
                }
                
        
            utility::string_t CreateUserRequest::GetRedirectUrl() const
            {
                    return m_RedirectUrl.value();
                }

            bool CreateUserRequest::HasRedirectUrl() const
            {
                return m_RedirectUrl.has_value();
            }

            void CreateUserRequest::SetRedirectUrl(
                    const utility::string_t& Value
                )
            {
                    m_RedirectUrl = Value;
                }
                
        
            const std::vector<std::shared_ptr<InitialSettingsDto>>&
                    CreateUserRequest::GetInitialSettings() const
            {
                    return m_InitialSettings.value();
                }

            bool CreateUserRequest::HasInitialSettings() const
            {
                return m_InitialSettings.has_value();
            }

            void CreateUserRequest::SetInitialSettings(
                    const std::vector<std::shared_ptr<InitialSettingsDto>>& Value
                )
            {
                    m_InitialSettings = Value;
                }
                
        

    CreateUserSocialRequest::CreateUserSocialRequest() { }
    CreateUserSocialRequest::~CreateUserSocialRequest() { }

    utility::string_t CreateUserSocialRequest::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Tenant.has_value())
                {
                    rapidjson::Value TenantValue(
                        TypeToJsonValue(m_Tenant, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "tenant",
                        TenantValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Provider.has_value())
                {
                    rapidjson::Value ProviderValue(
                        TypeToJsonValue(m_Provider, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "provider",
                        ProviderValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Token.has_value())
                {
                    rapidjson::Value TokenValue(
                        TypeToJsonValue(m_Token, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "token",
                        TokenValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Password.has_value())
                {
                    rapidjson::Value PasswordValue(
                        TypeToJsonValue(m_Password, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "password",
                        PasswordValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UserName.has_value())
                {
                    rapidjson::Value UserNameValue(
                        TypeToJsonValue(m_UserName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userName",
                        UserNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_DisplayName.has_value())
                {
                    rapidjson::Value DisplayNameValue(
                        TypeToJsonValue(m_DisplayName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "displayName",
                        DisplayNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AvatarId.has_value())
                {
                    rapidjson::Value AvatarIdValue(
                        TypeToJsonValue(m_AvatarId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "avatarId",
                        AvatarIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_InviteToken.has_value())
                {
                    rapidjson::Value InviteTokenValue(
                        TypeToJsonValue(m_InviteToken, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "inviteToken",
                        InviteTokenValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_RedirectUrl.has_value())
                {
                    rapidjson::Value RedirectUrlValue(
                        TypeToJsonValue(m_RedirectUrl, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "redirectUrl",
                        RedirectUrlValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_OAuthRedirectUri.has_value())
                {
                    rapidjson::Value OAuthRedirectUriValue(
                        TypeToJsonValue(m_OAuthRedirectUri, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "oAuthRedirectUri",
                        OAuthRedirectUriValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_InitialSettings.has_value())
                {
                    rapidjson::Value InitialSettingsValue(
                        TypeToJsonValue(m_InitialSettings, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "initialSettings",
                        InitialSettingsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void CreateUserSocialRequest::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("tenant"))
                {
                    const rapidjson::Value& TenantValue = JsonDoc["tenant"];

                    if (TenantValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(TenantValue, m_Tenant);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member tenant is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("provider"))
                {
                    const rapidjson::Value& ProviderValue = JsonDoc["provider"];

                    if (ProviderValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ProviderValue, m_Provider);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member provider is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("token"))
                {
                    const rapidjson::Value& TokenValue = JsonDoc["token"];

                    if (TokenValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(TokenValue, m_Token);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member token is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("password"))
                {
                    const rapidjson::Value& PasswordValue = JsonDoc["password"];

                    if (PasswordValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PasswordValue, m_Password);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member password is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("userName"))
                {
                    const rapidjson::Value& UserNameValue = JsonDoc["userName"];

                    if (UserNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserNameValue, m_UserName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("displayName"))
                {
                    const rapidjson::Value& DisplayNameValue = JsonDoc["displayName"];

                    if (DisplayNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DisplayNameValue, m_DisplayName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member displayName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("avatarId"))
                {
                    const rapidjson::Value& AvatarIdValue = JsonDoc["avatarId"];

                    if (AvatarIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AvatarIdValue, m_AvatarId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member avatarId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("inviteToken"))
                {
                    const rapidjson::Value& InviteTokenValue = JsonDoc["inviteToken"];

                    if (InviteTokenValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(InviteTokenValue, m_InviteToken);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member inviteToken is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("redirectUrl"))
                {
                    const rapidjson::Value& RedirectUrlValue = JsonDoc["redirectUrl"];

                    if (RedirectUrlValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(RedirectUrlValue, m_RedirectUrl);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member redirectUrl is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("oAuthRedirectUri"))
                {
                    const rapidjson::Value& OAuthRedirectUriValue = JsonDoc["oAuthRedirectUri"];

                    if (OAuthRedirectUriValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(OAuthRedirectUriValue, m_OAuthRedirectUri);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member oAuthRedirectUri is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("initialSettings"))
                {
                    const rapidjson::Value& InitialSettingsValue = JsonDoc["initialSettings"];

                    if (InitialSettingsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(InitialSettingsValue, m_InitialSettings);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member initialSettings is null!");
                    }
                    
                }
            
        }

        
            utility::string_t CreateUserSocialRequest::GetTenant() const
            {
                    return m_Tenant.value();
                }

            bool CreateUserSocialRequest::HasTenant() const
            {
                return m_Tenant.has_value();
            }

            void CreateUserSocialRequest::SetTenant(
                    const utility::string_t& Value
                )
            {
                    m_Tenant = Value;
                }
                
        
            utility::string_t CreateUserSocialRequest::GetProvider() const
            {
                    return m_Provider.value();
                }

            bool CreateUserSocialRequest::HasProvider() const
            {
                return m_Provider.has_value();
            }

            void CreateUserSocialRequest::SetProvider(
                    const utility::string_t& Value
                )
            {
                    m_Provider = Value;
                }
                
        
            utility::string_t CreateUserSocialRequest::GetToken() const
            {
                    return m_Token.value();
                }

            bool CreateUserSocialRequest::HasToken() const
            {
                return m_Token.has_value();
            }

            void CreateUserSocialRequest::SetToken(
                    const utility::string_t& Value
                )
            {
                    m_Token = Value;
                }
                
        
            utility::string_t CreateUserSocialRequest::GetPassword() const
            {
                    return m_Password.value();
                }

            bool CreateUserSocialRequest::HasPassword() const
            {
                return m_Password.has_value();
            }

            void CreateUserSocialRequest::SetPassword(
                    const utility::string_t& Value
                )
            {
                    m_Password = Value;
                }
                
        
            utility::string_t CreateUserSocialRequest::GetUserName() const
            {
                    return m_UserName.value();
                }

            bool CreateUserSocialRequest::HasUserName() const
            {
                return m_UserName.has_value();
            }

            void CreateUserSocialRequest::SetUserName(
                    const utility::string_t& Value
                )
            {
                    m_UserName = Value;
                }
                
        
            utility::string_t CreateUserSocialRequest::GetDisplayName() const
            {
                    return m_DisplayName.value();
                }

            bool CreateUserSocialRequest::HasDisplayName() const
            {
                return m_DisplayName.has_value();
            }

            void CreateUserSocialRequest::SetDisplayName(
                    const utility::string_t& Value
                )
            {
                    m_DisplayName = Value;
                }
                
        
            utility::string_t CreateUserSocialRequest::GetAvatarId() const
            {
                    return m_AvatarId.value();
                }

            bool CreateUserSocialRequest::HasAvatarId() const
            {
                return m_AvatarId.has_value();
            }

            void CreateUserSocialRequest::SetAvatarId(
                    const utility::string_t& Value
                )
            {
                    m_AvatarId = Value;
                }
                
        
            utility::string_t CreateUserSocialRequest::GetInviteToken() const
            {
                    return m_InviteToken.value();
                }

            bool CreateUserSocialRequest::HasInviteToken() const
            {
                return m_InviteToken.has_value();
            }

            void CreateUserSocialRequest::SetInviteToken(
                    const utility::string_t& Value
                )
            {
                    m_InviteToken = Value;
                }
                
        
            utility::string_t CreateUserSocialRequest::GetRedirectUrl() const
            {
                    return m_RedirectUrl.value();
                }

            bool CreateUserSocialRequest::HasRedirectUrl() const
            {
                return m_RedirectUrl.has_value();
            }

            void CreateUserSocialRequest::SetRedirectUrl(
                    const utility::string_t& Value
                )
            {
                    m_RedirectUrl = Value;
                }
                
        
            utility::string_t CreateUserSocialRequest::GetOAuthRedirectUri() const
            {
                    return m_OAuthRedirectUri.value();
                }

            bool CreateUserSocialRequest::HasOAuthRedirectUri() const
            {
                return m_OAuthRedirectUri.has_value();
            }

            void CreateUserSocialRequest::SetOAuthRedirectUri(
                    const utility::string_t& Value
                )
            {
                    m_OAuthRedirectUri = Value;
                }
                
        
            const std::vector<std::shared_ptr<InitialSettingsDto>>&
                    CreateUserSocialRequest::GetInitialSettings() const
            {
                    return m_InitialSettings.value();
                }

            bool CreateUserSocialRequest::HasInitialSettings() const
            {
                return m_InitialSettings.has_value();
            }

            void CreateUserSocialRequest::SetInitialSettings(
                    const std::vector<std::shared_ptr<InitialSettingsDto>>& Value
                )
            {
                    m_InitialSettings = Value;
                }
                
        

    EquipItemDto::EquipItemDto() { }
    EquipItemDto::~EquipItemDto() { }

    utility::string_t EquipItemDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_IsEquipped.has_value())
                {
                    rapidjson::Value IsEquippedValue(
                        TypeToJsonValue(m_IsEquipped, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "isEquipped",
                        IsEquippedValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void EquipItemDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("isEquipped"))
                {
                    const rapidjson::Value& IsEquippedValue = JsonDoc["isEquipped"];

                    if (IsEquippedValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IsEquippedValue, m_IsEquipped);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member isEquipped is null!");
                    }
                    
                }
            
        }

        
            bool EquipItemDto::GetIsEquipped() const
            {
                    return m_IsEquipped.value();
                }

            bool EquipItemDto::HasIsEquipped() const
            {
                return m_IsEquipped.has_value();
            }

            void EquipItemDto::SetIsEquipped(
                    const bool& Value
                )
            {
                    m_IsEquipped = Value;
                }
                
        

    ExchangeKeyRequest::ExchangeKeyRequest() { }
    ExchangeKeyRequest::~ExchangeKeyRequest() { }

    utility::string_t ExchangeKeyRequest::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_UserId.has_value())
                {
                    rapidjson::Value UserIdValue(
                        TypeToJsonValue(m_UserId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userId",
                        UserIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Key.has_value())
                {
                    rapidjson::Value KeyValue(
                        TypeToJsonValue(m_Key, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "key",
                        KeyValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_DeviceId.has_value())
                {
                    rapidjson::Value DeviceIdValue(
                        TypeToJsonValue(m_DeviceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "deviceId",
                        DeviceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void ExchangeKeyRequest::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("userId"))
                {
                    const rapidjson::Value& UserIdValue = JsonDoc["userId"];

                    if (UserIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserIdValue, m_UserId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("key"))
                {
                    const rapidjson::Value& KeyValue = JsonDoc["key"];

                    if (KeyValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(KeyValue, m_Key);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member key is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("deviceId"))
                {
                    const rapidjson::Value& DeviceIdValue = JsonDoc["deviceId"];

                    if (DeviceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DeviceIdValue, m_DeviceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member deviceId is null!");
                    }
                    
                }
            
        }

        
            utility::string_t ExchangeKeyRequest::GetUserId() const
            {
                    return m_UserId.value();
                }

            bool ExchangeKeyRequest::HasUserId() const
            {
                return m_UserId.has_value();
            }

            void ExchangeKeyRequest::SetUserId(
                    const utility::string_t& Value
                )
            {
                    m_UserId = Value;
                }
                
        
            utility::string_t ExchangeKeyRequest::GetKey() const
            {
                    return m_Key.value();
                }

            bool ExchangeKeyRequest::HasKey() const
            {
                return m_Key.has_value();
            }

            void ExchangeKeyRequest::SetKey(
                    const utility::string_t& Value
                )
            {
                    m_Key = Value;
                }
                
        
            utility::string_t ExchangeKeyRequest::GetDeviceId() const
            {
                    return m_DeviceId.value();
                }

            bool ExchangeKeyRequest::HasDeviceId() const
            {
                return m_DeviceId.has_value();
            }

            void ExchangeKeyRequest::SetDeviceId(
                    const utility::string_t& Value
                )
            {
                    m_DeviceId = Value;
                }
                
        

    ForgotPasswordRequest::ForgotPasswordRequest() { }
    ForgotPasswordRequest::~ForgotPasswordRequest() { }

    utility::string_t ForgotPasswordRequest::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Tenant.has_value())
                {
                    rapidjson::Value TenantValue(
                        TypeToJsonValue(m_Tenant, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "tenant",
                        TenantValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Email.has_value())
                {
                    rapidjson::Value EmailValue(
                        TypeToJsonValue(m_Email, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "email",
                        EmailValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void ForgotPasswordRequest::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("tenant"))
                {
                    const rapidjson::Value& TenantValue = JsonDoc["tenant"];

                    if (TenantValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(TenantValue, m_Tenant);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member tenant is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("email"))
                {
                    const rapidjson::Value& EmailValue = JsonDoc["email"];

                    if (EmailValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(EmailValue, m_Email);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member email is null!");
                    }
                    
                }
            
        }

        
            utility::string_t ForgotPasswordRequest::GetTenant() const
            {
                    return m_Tenant.value();
                }

            bool ForgotPasswordRequest::HasTenant() const
            {
                return m_Tenant.has_value();
            }

            void ForgotPasswordRequest::SetTenant(
                    const utility::string_t& Value
                )
            {
                    m_Tenant = Value;
                }
                
        
            utility::string_t ForgotPasswordRequest::GetEmail() const
            {
                    return m_Email.value();
                }

            bool ForgotPasswordRequest::HasEmail() const
            {
                return m_Email.has_value();
            }

            void ForgotPasswordRequest::SetEmail(
                    const utility::string_t& Value
                )
            {
                    m_Email = Value;
                }
                
        

    Gender::Gender() { }
    Gender::~Gender() { }

    utility::string_t Gender::ToJson() const
        {
            switch (Value)
            {
                case eGender::MALE:
                    return "Male";
                case eGender::FEMALE:
                    return "Female";
                case eGender::NONBINARY:
                    return "NonBinary";
                
                default:
                    throw std::runtime_error("Unknown enum value!");
            }
        }

        void Gender::FromJson(const utility::string_t& Val)
        {
             if (Val == "Male")
                {
                    Value = eGender::MALE;
                }
            else if (Val == "Female")
                {
                    Value = eGender::FEMALE;
                }
            else if (Val == "NonBinary")
                {
                    Value = eGender::NONBINARY;
                }
            
        }

        Gender::eGender Gender::GetValue() const
        {
            return Value;
        }

        void Gender::SetValue(Gender::eGender const InValue)
        {
            Value = InValue;
        }

    GroupDto::GroupDto() { }
    GroupDto::~GroupDto() { }

    utility::string_t GroupDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Id.has_value())
                {
                    rapidjson::Value IdValue(
                        TypeToJsonValue(m_Id, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "id",
                        IdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_CreatedBy.has_value())
                {
                    rapidjson::Value CreatedByValue(
                        TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "createdBy",
                        CreatedByValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_CreatedAt.has_value())
                {
                    rapidjson::Value CreatedAtValue(
                        TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "createdAt",
                        CreatedAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_GroupOwnerId.has_value())
                {
                    rapidjson::Value GroupOwnerIdValue(
                        TypeToJsonValue(m_GroupOwnerId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "groupOwnerId",
                        GroupOwnerIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_GroupCode.has_value())
                {
                    rapidjson::Value GroupCodeValue(
                        TypeToJsonValue(m_GroupCode, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "groupCode",
                        GroupCodeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_GroupType.has_value())
                {
                    rapidjson::Value GroupTypeValue(
                        TypeToJsonValue(m_GroupType, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "groupType",
                        GroupTypeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Name.has_value())
                {
                    rapidjson::Value NameValue(
                        TypeToJsonValue(m_Name, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "name",
                        NameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Description.has_value())
                {
                    rapidjson::Value DescriptionValue(
                        TypeToJsonValue(m_Description, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "description",
                        DescriptionValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Users.has_value())
                {
                    rapidjson::Value UsersValue(
                        TypeToJsonValue(m_Users, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "users",
                        UsersValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_BannedUsers.has_value())
                {
                    rapidjson::Value BannedUsersValue(
                        TypeToJsonValue(m_BannedUsers, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "bannedUsers",
                        BannedUsersValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Moderators.has_value())
                {
                    rapidjson::Value ModeratorsValue(
                        TypeToJsonValue(m_Moderators, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "moderators",
                        ModeratorsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Discoverable.has_value())
                {
                    rapidjson::Value DiscoverableValue(
                        TypeToJsonValue(m_Discoverable, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "discoverable",
                        DiscoverableValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AutoModerator.has_value())
                {
                    rapidjson::Value AutoModeratorValue(
                        TypeToJsonValue(m_AutoModerator, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "autoModerator",
                        AutoModeratorValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_RequiresInvite.has_value())
                {
                    rapidjson::Value RequiresInviteValue(
                        TypeToJsonValue(m_RequiresInvite, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "requiresInvite",
                        RequiresInviteValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_IsCurrentUserOwner.has_value())
                {
                    rapidjson::Value IsCurrentUserOwnerValue(
                        TypeToJsonValue(m_IsCurrentUserOwner, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "isCurrentUserOwner",
                        IsCurrentUserOwnerValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_IsCurrentUserMember.has_value())
                {
                    rapidjson::Value IsCurrentUserMemberValue(
                        TypeToJsonValue(m_IsCurrentUserMember, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "isCurrentUserMember",
                        IsCurrentUserMemberValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_IsCurrentUserModerator.has_value())
                {
                    rapidjson::Value IsCurrentUserModeratorValue(
                        TypeToJsonValue(m_IsCurrentUserModerator, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "isCurrentUserModerator",
                        IsCurrentUserModeratorValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_IsCurrentUserBanned.has_value())
                {
                    rapidjson::Value IsCurrentUserBannedValue(
                        TypeToJsonValue(m_IsCurrentUserBanned, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "isCurrentUserBanned",
                        IsCurrentUserBannedValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void GroupDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("id"))
                {
                    const rapidjson::Value& IdValue = JsonDoc["id"];

                    if (IdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IdValue, m_Id);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("createdBy"))
                {
                    const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

                    if (CreatedByValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(CreatedByValue, m_CreatedBy);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member createdBy is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("createdAt"))
                {
                    const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

                    if (CreatedAtValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(CreatedAtValue, m_CreatedAt);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("groupOwnerId"))
                {
                    const rapidjson::Value& GroupOwnerIdValue = JsonDoc["groupOwnerId"];

                    if (GroupOwnerIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GroupOwnerIdValue, m_GroupOwnerId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member groupOwnerId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("groupCode"))
                {
                    const rapidjson::Value& GroupCodeValue = JsonDoc["groupCode"];

                    if (GroupCodeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GroupCodeValue, m_GroupCode);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member groupCode is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("groupType"))
                {
                    const rapidjson::Value& GroupTypeValue = JsonDoc["groupType"];

                    if (GroupTypeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GroupTypeValue, m_GroupType);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member groupType is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("name"))
                {
                    const rapidjson::Value& NameValue = JsonDoc["name"];

                    if (NameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(NameValue, m_Name);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("description"))
                {
                    const rapidjson::Value& DescriptionValue = JsonDoc["description"];

                    if (DescriptionValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DescriptionValue, m_Description);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member description is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("users"))
                {
                    const rapidjson::Value& UsersValue = JsonDoc["users"];

                    if (UsersValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UsersValue, m_Users);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member users is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("bannedUsers"))
                {
                    const rapidjson::Value& BannedUsersValue = JsonDoc["bannedUsers"];

                    if (BannedUsersValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(BannedUsersValue, m_BannedUsers);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member bannedUsers is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("moderators"))
                {
                    const rapidjson::Value& ModeratorsValue = JsonDoc["moderators"];

                    if (ModeratorsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ModeratorsValue, m_Moderators);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member moderators is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("discoverable"))
                {
                    const rapidjson::Value& DiscoverableValue = JsonDoc["discoverable"];

                    if (DiscoverableValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DiscoverableValue, m_Discoverable);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member discoverable is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("autoModerator"))
                {
                    const rapidjson::Value& AutoModeratorValue = JsonDoc["autoModerator"];

                    if (AutoModeratorValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AutoModeratorValue, m_AutoModerator);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member autoModerator is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("requiresInvite"))
                {
                    const rapidjson::Value& RequiresInviteValue = JsonDoc["requiresInvite"];

                    if (RequiresInviteValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(RequiresInviteValue, m_RequiresInvite);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member requiresInvite is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("isCurrentUserOwner"))
                {
                    const rapidjson::Value& IsCurrentUserOwnerValue = JsonDoc["isCurrentUserOwner"];

                    if (IsCurrentUserOwnerValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IsCurrentUserOwnerValue, m_IsCurrentUserOwner);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member isCurrentUserOwner is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("isCurrentUserMember"))
                {
                    const rapidjson::Value& IsCurrentUserMemberValue = JsonDoc["isCurrentUserMember"];

                    if (IsCurrentUserMemberValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IsCurrentUserMemberValue, m_IsCurrentUserMember);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member isCurrentUserMember is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("isCurrentUserModerator"))
                {
                    const rapidjson::Value& IsCurrentUserModeratorValue = JsonDoc["isCurrentUserModerator"];

                    if (IsCurrentUserModeratorValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IsCurrentUserModeratorValue, m_IsCurrentUserModerator);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member isCurrentUserModerator is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("isCurrentUserBanned"))
                {
                    const rapidjson::Value& IsCurrentUserBannedValue = JsonDoc["isCurrentUserBanned"];

                    if (IsCurrentUserBannedValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IsCurrentUserBannedValue, m_IsCurrentUserBanned);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member isCurrentUserBanned is null!");
                    }
                    
                }
            
        }

        
            utility::string_t GroupDto::GetId() const
            {
                    return m_Id.value();
                }

            bool GroupDto::HasId() const
            {
                return m_Id.has_value();
            }

            void GroupDto::SetId(
                    const utility::string_t& Value
                )
            {
                    m_Id = Value;
                }
                
        
            utility::string_t GroupDto::GetCreatedBy() const
            {
                    return m_CreatedBy.value();
                }

            bool GroupDto::HasCreatedBy() const
            {
                return m_CreatedBy.has_value();
            }

            void GroupDto::SetCreatedBy(
                    const utility::string_t& Value
                )
            {
                    m_CreatedBy = Value;
                }
                
        
            utility::string_t GroupDto::GetCreatedAt() const
            {
                    return m_CreatedAt.value();
                }

            bool GroupDto::HasCreatedAt() const
            {
                return m_CreatedAt.has_value();
            }

            void GroupDto::SetCreatedAt(
                    const utility::string_t& Value
                )
            {
                    m_CreatedAt = Value;
                }
                
        
            utility::string_t GroupDto::GetGroupOwnerId() const
            {
                    return m_GroupOwnerId.value();
                }

            bool GroupDto::HasGroupOwnerId() const
            {
                return m_GroupOwnerId.has_value();
            }

            void GroupDto::SetGroupOwnerId(
                    const utility::string_t& Value
                )
            {
                    m_GroupOwnerId = Value;
                }
                
        
            utility::string_t GroupDto::GetGroupCode() const
            {
                    return m_GroupCode.value();
                }

            bool GroupDto::HasGroupCode() const
            {
                return m_GroupCode.has_value();
            }

            void GroupDto::SetGroupCode(
                    const utility::string_t& Value
                )
            {
                    m_GroupCode = Value;
                }
                
        
            utility::string_t GroupDto::GetGroupType() const
            {
                    return m_GroupType.value();
                }

            bool GroupDto::HasGroupType() const
            {
                return m_GroupType.has_value();
            }

            void GroupDto::SetGroupType(
                    const utility::string_t& Value
                )
            {
                    m_GroupType = Value;
                }
                
        
            utility::string_t GroupDto::GetName() const
            {
                    return m_Name.value();
                }

            bool GroupDto::HasName() const
            {
                return m_Name.has_value();
            }

            void GroupDto::SetName(
                    const utility::string_t& Value
                )
            {
                    m_Name = Value;
                }
                
        
            utility::string_t GroupDto::GetDescription() const
            {
                    return m_Description.value();
                }

            bool GroupDto::HasDescription() const
            {
                return m_Description.has_value();
            }

            void GroupDto::SetDescription(
                    const utility::string_t& Value
                )
            {
                    m_Description = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    GroupDto::GetUsers() const
            {
                    return m_Users.value();
                }

            bool GroupDto::HasUsers() const
            {
                return m_Users.has_value();
            }

            void GroupDto::SetUsers(
                    const std::vector<utility::string_t>& Value
                )
            {
                    m_Users = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    GroupDto::GetBannedUsers() const
            {
                    return m_BannedUsers.value();
                }

            bool GroupDto::HasBannedUsers() const
            {
                return m_BannedUsers.has_value();
            }

            void GroupDto::SetBannedUsers(
                    const std::vector<utility::string_t>& Value
                )
            {
                    m_BannedUsers = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    GroupDto::GetModerators() const
            {
                    return m_Moderators.value();
                }

            bool GroupDto::HasModerators() const
            {
                return m_Moderators.has_value();
            }

            void GroupDto::SetModerators(
                    const std::vector<utility::string_t>& Value
                )
            {
                    m_Moderators = Value;
                }
                
        
            bool GroupDto::GetDiscoverable() const
            {
                    return m_Discoverable.value();
                }

            bool GroupDto::HasDiscoverable() const
            {
                return m_Discoverable.has_value();
            }

            void GroupDto::SetDiscoverable(
                    const bool& Value
                )
            {
                    m_Discoverable = Value;
                }
                
        
            bool GroupDto::GetAutoModerator() const
            {
                    return m_AutoModerator.value();
                }

            bool GroupDto::HasAutoModerator() const
            {
                return m_AutoModerator.has_value();
            }

            void GroupDto::SetAutoModerator(
                    const bool& Value
                )
            {
                    m_AutoModerator = Value;
                }
                
        
            bool GroupDto::GetRequiresInvite() const
            {
                    return m_RequiresInvite.value();
                }

            bool GroupDto::HasRequiresInvite() const
            {
                return m_RequiresInvite.has_value();
            }

            void GroupDto::SetRequiresInvite(
                    const bool& Value
                )
            {
                    m_RequiresInvite = Value;
                }
                
        
            bool GroupDto::GetIsCurrentUserOwner() const
            {
                    return m_IsCurrentUserOwner.value();
                }

            bool GroupDto::HasIsCurrentUserOwner() const
            {
                return m_IsCurrentUserOwner.has_value();
            }

            void GroupDto::SetIsCurrentUserOwner(
                    const bool& Value
                )
            {
                    m_IsCurrentUserOwner = Value;
                }
                
        
            bool GroupDto::GetIsCurrentUserMember() const
            {
                    return m_IsCurrentUserMember.value();
                }

            bool GroupDto::HasIsCurrentUserMember() const
            {
                return m_IsCurrentUserMember.has_value();
            }

            void GroupDto::SetIsCurrentUserMember(
                    const bool& Value
                )
            {
                    m_IsCurrentUserMember = Value;
                }
                
        
            bool GroupDto::GetIsCurrentUserModerator() const
            {
                    return m_IsCurrentUserModerator.value();
                }

            bool GroupDto::HasIsCurrentUserModerator() const
            {
                return m_IsCurrentUserModerator.has_value();
            }

            void GroupDto::SetIsCurrentUserModerator(
                    const bool& Value
                )
            {
                    m_IsCurrentUserModerator = Value;
                }
                
        
            bool GroupDto::GetIsCurrentUserBanned() const
            {
                    return m_IsCurrentUserBanned.value();
                }

            bool GroupDto::HasIsCurrentUserBanned() const
            {
                return m_IsCurrentUserBanned.has_value();
            }

            void GroupDto::SetIsCurrentUserBanned(
                    const bool& Value
                )
            {
                    m_IsCurrentUserBanned = Value;
                }
                
        

    GroupInviteDto::GroupInviteDto() { }
    GroupInviteDto::~GroupInviteDto() { }

    utility::string_t GroupInviteDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Id.has_value())
                {
                    rapidjson::Value IdValue(
                        TypeToJsonValue(m_Id, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "id",
                        IdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_CreatedBy.has_value())
                {
                    rapidjson::Value CreatedByValue(
                        TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "createdBy",
                        CreatedByValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Email.has_value())
                {
                    rapidjson::Value EmailValue(
                        TypeToJsonValue(m_Email, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "email",
                        EmailValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_GroupId.has_value())
                {
                    rapidjson::Value GroupIdValue(
                        TypeToJsonValue(m_GroupId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "groupId",
                        GroupIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AsModerator.has_value())
                {
                    rapidjson::Value AsModeratorValue(
                        TypeToJsonValue(m_AsModerator, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "asModerator",
                        AsModeratorValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ExpiresAt.has_value())
                {
                    rapidjson::Value ExpiresAtValue(
                        TypeToJsonValue(m_ExpiresAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "expiresAt",
                        ExpiresAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_CreatedAt.has_value())
                {
                    rapidjson::Value CreatedAtValue(
                        TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "createdAt",
                        CreatedAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UpdatedBy.has_value())
                {
                    rapidjson::Value UpdatedByValue(
                        TypeToJsonValue(m_UpdatedBy, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "updatedBy",
                        UpdatedByValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UpdatedAt.has_value())
                {
                    rapidjson::Value UpdatedAtValue(
                        TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "updatedAt",
                        UpdatedAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void GroupInviteDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("id"))
                {
                    const rapidjson::Value& IdValue = JsonDoc["id"];

                    if (IdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IdValue, m_Id);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("createdBy"))
                {
                    const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

                    if (CreatedByValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(CreatedByValue, m_CreatedBy);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member createdBy is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("email"))
                {
                    const rapidjson::Value& EmailValue = JsonDoc["email"];

                    if (EmailValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(EmailValue, m_Email);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member email is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("groupId"))
                {
                    const rapidjson::Value& GroupIdValue = JsonDoc["groupId"];

                    if (GroupIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GroupIdValue, m_GroupId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member groupId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("asModerator"))
                {
                    const rapidjson::Value& AsModeratorValue = JsonDoc["asModerator"];

                    if (AsModeratorValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AsModeratorValue, m_AsModerator);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member asModerator is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("expiresAt"))
                {
                    const rapidjson::Value& ExpiresAtValue = JsonDoc["expiresAt"];

                    if (ExpiresAtValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ExpiresAtValue, m_ExpiresAt);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member expiresAt is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("createdAt"))
                {
                    const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

                    if (CreatedAtValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(CreatedAtValue, m_CreatedAt);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("updatedBy"))
                {
                    const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

                    if (UpdatedByValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UpdatedByValue, m_UpdatedBy);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member updatedBy is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("updatedAt"))
                {
                    const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

                    if (UpdatedAtValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UpdatedAtValue, m_UpdatedAt);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member updatedAt is null!");
                    }
                    
                }
            
        }

        
            utility::string_t GroupInviteDto::GetId() const
            {
                    return m_Id.value();
                }

            bool GroupInviteDto::HasId() const
            {
                return m_Id.has_value();
            }

            void GroupInviteDto::SetId(
                    const utility::string_t& Value
                )
            {
                    m_Id = Value;
                }
                
        
            utility::string_t GroupInviteDto::GetCreatedBy() const
            {
                    return m_CreatedBy.value();
                }

            bool GroupInviteDto::HasCreatedBy() const
            {
                return m_CreatedBy.has_value();
            }

            void GroupInviteDto::SetCreatedBy(
                    const utility::string_t& Value
                )
            {
                    m_CreatedBy = Value;
                }
                
        
            utility::string_t GroupInviteDto::GetEmail() const
            {
                    return m_Email.value();
                }

            bool GroupInviteDto::HasEmail() const
            {
                return m_Email.has_value();
            }

            void GroupInviteDto::SetEmail(
                    const utility::string_t& Value
                )
            {
                    m_Email = Value;
                }
                
        
            utility::string_t GroupInviteDto::GetGroupId() const
            {
                    return m_GroupId.value();
                }

            bool GroupInviteDto::HasGroupId() const
            {
                return m_GroupId.has_value();
            }

            void GroupInviteDto::SetGroupId(
                    const utility::string_t& Value
                )
            {
                    m_GroupId = Value;
                }
                
        
            bool GroupInviteDto::GetAsModerator() const
            {
                    return m_AsModerator.value();
                }

            bool GroupInviteDto::HasAsModerator() const
            {
                return m_AsModerator.has_value();
            }

            void GroupInviteDto::SetAsModerator(
                    const bool& Value
                )
            {
                    m_AsModerator = Value;
                }
                
        
            utility::string_t GroupInviteDto::GetExpiresAt() const
            {
                    return m_ExpiresAt.value();
                }

            bool GroupInviteDto::HasExpiresAt() const
            {
                return m_ExpiresAt.has_value();
            }

            void GroupInviteDto::SetExpiresAt(
                    const utility::string_t& Value
                )
            {
                    m_ExpiresAt = Value;
                }
                
        
            utility::string_t GroupInviteDto::GetCreatedAt() const
            {
                    return m_CreatedAt.value();
                }

            bool GroupInviteDto::HasCreatedAt() const
            {
                return m_CreatedAt.has_value();
            }

            void GroupInviteDto::SetCreatedAt(
                    const utility::string_t& Value
                )
            {
                    m_CreatedAt = Value;
                }
                
        
            utility::string_t GroupInviteDto::GetUpdatedBy() const
            {
                    return m_UpdatedBy.value();
                }

            bool GroupInviteDto::HasUpdatedBy() const
            {
                return m_UpdatedBy.has_value();
            }

            void GroupInviteDto::SetUpdatedBy(
                    const utility::string_t& Value
                )
            {
                    m_UpdatedBy = Value;
                }
                
        
            utility::string_t GroupInviteDto::GetUpdatedAt() const
            {
                    return m_UpdatedAt.value();
                }

            bool GroupInviteDto::HasUpdatedAt() const
            {
                return m_UpdatedAt.has_value();
            }

            void GroupInviteDto::SetUpdatedAt(
                    const utility::string_t& Value
                )
            {
                    m_UpdatedAt = Value;
                }
                
        

    GroupLiteDto::GroupLiteDto() { }
    GroupLiteDto::~GroupLiteDto() { }

    utility::string_t GroupLiteDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Id.has_value())
                {
                    rapidjson::Value IdValue(
                        TypeToJsonValue(m_Id, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "id",
                        IdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Name.has_value())
                {
                    rapidjson::Value NameValue(
                        TypeToJsonValue(m_Name, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "name",
                        NameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Description.has_value())
                {
                    rapidjson::Value DescriptionValue(
                        TypeToJsonValue(m_Description, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "description",
                        DescriptionValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_GroupType.has_value())
                {
                    rapidjson::Value GroupTypeValue(
                        TypeToJsonValue(m_GroupType, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "groupType",
                        GroupTypeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_GroupOwnerId.has_value())
                {
                    rapidjson::Value GroupOwnerIdValue(
                        TypeToJsonValue(m_GroupOwnerId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "groupOwnerId",
                        GroupOwnerIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_CreatedAt.has_value())
                {
                    rapidjson::Value CreatedAtValue(
                        TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "createdAt",
                        CreatedAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Discoverable.has_value())
                {
                    rapidjson::Value DiscoverableValue(
                        TypeToJsonValue(m_Discoverable, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "discoverable",
                        DiscoverableValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AutoModerator.has_value())
                {
                    rapidjson::Value AutoModeratorValue(
                        TypeToJsonValue(m_AutoModerator, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "autoModerator",
                        AutoModeratorValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_RequiresInvite.has_value())
                {
                    rapidjson::Value RequiresInviteValue(
                        TypeToJsonValue(m_RequiresInvite, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "requiresInvite",
                        RequiresInviteValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_IsCurrentUserOwner.has_value())
                {
                    rapidjson::Value IsCurrentUserOwnerValue(
                        TypeToJsonValue(m_IsCurrentUserOwner, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "isCurrentUserOwner",
                        IsCurrentUserOwnerValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_IsCurrentUserMember.has_value())
                {
                    rapidjson::Value IsCurrentUserMemberValue(
                        TypeToJsonValue(m_IsCurrentUserMember, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "isCurrentUserMember",
                        IsCurrentUserMemberValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_IsCurrentUserModerator.has_value())
                {
                    rapidjson::Value IsCurrentUserModeratorValue(
                        TypeToJsonValue(m_IsCurrentUserModerator, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "isCurrentUserModerator",
                        IsCurrentUserModeratorValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_IsCurrentUserBanned.has_value())
                {
                    rapidjson::Value IsCurrentUserBannedValue(
                        TypeToJsonValue(m_IsCurrentUserBanned, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "isCurrentUserBanned",
                        IsCurrentUserBannedValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void GroupLiteDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("id"))
                {
                    const rapidjson::Value& IdValue = JsonDoc["id"];

                    if (IdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IdValue, m_Id);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("name"))
                {
                    const rapidjson::Value& NameValue = JsonDoc["name"];

                    if (NameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(NameValue, m_Name);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("description"))
                {
                    const rapidjson::Value& DescriptionValue = JsonDoc["description"];

                    if (DescriptionValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DescriptionValue, m_Description);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member description is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("groupType"))
                {
                    const rapidjson::Value& GroupTypeValue = JsonDoc["groupType"];

                    if (GroupTypeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GroupTypeValue, m_GroupType);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member groupType is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("groupOwnerId"))
                {
                    const rapidjson::Value& GroupOwnerIdValue = JsonDoc["groupOwnerId"];

                    if (GroupOwnerIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GroupOwnerIdValue, m_GroupOwnerId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member groupOwnerId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("createdAt"))
                {
                    const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

                    if (CreatedAtValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(CreatedAtValue, m_CreatedAt);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("discoverable"))
                {
                    const rapidjson::Value& DiscoverableValue = JsonDoc["discoverable"];

                    if (DiscoverableValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DiscoverableValue, m_Discoverable);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member discoverable is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("autoModerator"))
                {
                    const rapidjson::Value& AutoModeratorValue = JsonDoc["autoModerator"];

                    if (AutoModeratorValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AutoModeratorValue, m_AutoModerator);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member autoModerator is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("requiresInvite"))
                {
                    const rapidjson::Value& RequiresInviteValue = JsonDoc["requiresInvite"];

                    if (RequiresInviteValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(RequiresInviteValue, m_RequiresInvite);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member requiresInvite is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("isCurrentUserOwner"))
                {
                    const rapidjson::Value& IsCurrentUserOwnerValue = JsonDoc["isCurrentUserOwner"];

                    if (IsCurrentUserOwnerValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IsCurrentUserOwnerValue, m_IsCurrentUserOwner);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member isCurrentUserOwner is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("isCurrentUserMember"))
                {
                    const rapidjson::Value& IsCurrentUserMemberValue = JsonDoc["isCurrentUserMember"];

                    if (IsCurrentUserMemberValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IsCurrentUserMemberValue, m_IsCurrentUserMember);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member isCurrentUserMember is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("isCurrentUserModerator"))
                {
                    const rapidjson::Value& IsCurrentUserModeratorValue = JsonDoc["isCurrentUserModerator"];

                    if (IsCurrentUserModeratorValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IsCurrentUserModeratorValue, m_IsCurrentUserModerator);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member isCurrentUserModerator is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("isCurrentUserBanned"))
                {
                    const rapidjson::Value& IsCurrentUserBannedValue = JsonDoc["isCurrentUserBanned"];

                    if (IsCurrentUserBannedValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IsCurrentUserBannedValue, m_IsCurrentUserBanned);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member isCurrentUserBanned is null!");
                    }
                    
                }
            
        }

        
            utility::string_t GroupLiteDto::GetId() const
            {
                    return m_Id.value();
                }

            bool GroupLiteDto::HasId() const
            {
                return m_Id.has_value();
            }

            void GroupLiteDto::SetId(
                    const utility::string_t& Value
                )
            {
                    m_Id = Value;
                }
                
        
            utility::string_t GroupLiteDto::GetName() const
            {
                    return m_Name.value();
                }

            bool GroupLiteDto::HasName() const
            {
                return m_Name.has_value();
            }

            void GroupLiteDto::SetName(
                    const utility::string_t& Value
                )
            {
                    m_Name = Value;
                }
                
        
            utility::string_t GroupLiteDto::GetDescription() const
            {
                    return m_Description.value();
                }

            bool GroupLiteDto::HasDescription() const
            {
                return m_Description.has_value();
            }

            void GroupLiteDto::SetDescription(
                    const utility::string_t& Value
                )
            {
                    m_Description = Value;
                }
                
        
            utility::string_t GroupLiteDto::GetGroupType() const
            {
                    return m_GroupType.value();
                }

            bool GroupLiteDto::HasGroupType() const
            {
                return m_GroupType.has_value();
            }

            void GroupLiteDto::SetGroupType(
                    const utility::string_t& Value
                )
            {
                    m_GroupType = Value;
                }
                
        
            utility::string_t GroupLiteDto::GetGroupOwnerId() const
            {
                    return m_GroupOwnerId.value();
                }

            bool GroupLiteDto::HasGroupOwnerId() const
            {
                return m_GroupOwnerId.has_value();
            }

            void GroupLiteDto::SetGroupOwnerId(
                    const utility::string_t& Value
                )
            {
                    m_GroupOwnerId = Value;
                }
                
        
            utility::string_t GroupLiteDto::GetCreatedAt() const
            {
                    return m_CreatedAt.value();
                }

            bool GroupLiteDto::HasCreatedAt() const
            {
                return m_CreatedAt.has_value();
            }

            void GroupLiteDto::SetCreatedAt(
                    const utility::string_t& Value
                )
            {
                    m_CreatedAt = Value;
                }
                
        
            bool GroupLiteDto::GetDiscoverable() const
            {
                    return m_Discoverable.value();
                }

            bool GroupLiteDto::HasDiscoverable() const
            {
                return m_Discoverable.has_value();
            }

            void GroupLiteDto::SetDiscoverable(
                    const bool& Value
                )
            {
                    m_Discoverable = Value;
                }
                
        
            bool GroupLiteDto::GetAutoModerator() const
            {
                    return m_AutoModerator.value();
                }

            bool GroupLiteDto::HasAutoModerator() const
            {
                return m_AutoModerator.has_value();
            }

            void GroupLiteDto::SetAutoModerator(
                    const bool& Value
                )
            {
                    m_AutoModerator = Value;
                }
                
        
            bool GroupLiteDto::GetRequiresInvite() const
            {
                    return m_RequiresInvite.value();
                }

            bool GroupLiteDto::HasRequiresInvite() const
            {
                return m_RequiresInvite.has_value();
            }

            void GroupLiteDto::SetRequiresInvite(
                    const bool& Value
                )
            {
                    m_RequiresInvite = Value;
                }
                
        
            bool GroupLiteDto::GetIsCurrentUserOwner() const
            {
                    return m_IsCurrentUserOwner.value();
                }

            bool GroupLiteDto::HasIsCurrentUserOwner() const
            {
                return m_IsCurrentUserOwner.has_value();
            }

            void GroupLiteDto::SetIsCurrentUserOwner(
                    const bool& Value
                )
            {
                    m_IsCurrentUserOwner = Value;
                }
                
        
            bool GroupLiteDto::GetIsCurrentUserMember() const
            {
                    return m_IsCurrentUserMember.value();
                }

            bool GroupLiteDto::HasIsCurrentUserMember() const
            {
                return m_IsCurrentUserMember.has_value();
            }

            void GroupLiteDto::SetIsCurrentUserMember(
                    const bool& Value
                )
            {
                    m_IsCurrentUserMember = Value;
                }
                
        
            bool GroupLiteDto::GetIsCurrentUserModerator() const
            {
                    return m_IsCurrentUserModerator.value();
                }

            bool GroupLiteDto::HasIsCurrentUserModerator() const
            {
                return m_IsCurrentUserModerator.has_value();
            }

            void GroupLiteDto::SetIsCurrentUserModerator(
                    const bool& Value
                )
            {
                    m_IsCurrentUserModerator = Value;
                }
                
        
            bool GroupLiteDto::GetIsCurrentUserBanned() const
            {
                    return m_IsCurrentUserBanned.value();
                }

            bool GroupLiteDto::HasIsCurrentUserBanned() const
            {
                return m_IsCurrentUserBanned.has_value();
            }

            void GroupLiteDto::SetIsCurrentUserBanned(
                    const bool& Value
                )
            {
                    m_IsCurrentUserBanned = Value;
                }
                
        

    GroupLiteDtoDataPage::GroupLiteDtoDataPage() { }
    GroupLiteDtoDataPage::~GroupLiteDtoDataPage() { }

    utility::string_t GroupLiteDtoDataPage::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Items.has_value())
                {
                    rapidjson::Value ItemsValue(
                        TypeToJsonValue(m_Items, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "items",
                        ItemsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Skip.has_value())
                {
                    rapidjson::Value SkipValue(
                        TypeToJsonValue(m_Skip, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "skip",
                        SkipValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Limit.has_value())
                {
                    rapidjson::Value LimitValue(
                        TypeToJsonValue(m_Limit, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "limit",
                        LimitValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ItemCount.has_value())
                {
                    rapidjson::Value ItemCountValue(
                        TypeToJsonValue(m_ItemCount, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "itemCount",
                        ItemCountValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ItemTotalCount.has_value())
                {
                    rapidjson::Value ItemTotalCountValue(
                        TypeToJsonValue(m_ItemTotalCount, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "itemTotalCount",
                        ItemTotalCountValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void GroupLiteDtoDataPage::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("items"))
                {
                    const rapidjson::Value& ItemsValue = JsonDoc["items"];

                    if (ItemsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ItemsValue, m_Items);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member items is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("skip"))
                {
                    const rapidjson::Value& SkipValue = JsonDoc["skip"];

                    if (SkipValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(SkipValue, m_Skip);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member skip is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("limit"))
                {
                    const rapidjson::Value& LimitValue = JsonDoc["limit"];

                    if (LimitValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(LimitValue, m_Limit);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member limit is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("itemCount"))
                {
                    const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

                    if (ItemCountValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ItemCountValue, m_ItemCount);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member itemCount is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("itemTotalCount"))
                {
                    const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

                    if (ItemTotalCountValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ItemTotalCountValue, m_ItemTotalCount);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member itemTotalCount is null!");
                    }
                    
                }
            
        }

        
            const std::vector<std::shared_ptr<GroupLiteDto>>&
                    GroupLiteDtoDataPage::GetItems() const
            {
                    return m_Items.value();
                }

            bool GroupLiteDtoDataPage::HasItems() const
            {
                return m_Items.has_value();
            }

            void GroupLiteDtoDataPage::SetItems(
                    const std::vector<std::shared_ptr<GroupLiteDto>>& Value
                )
            {
                    m_Items = Value;
                }
                
        
            int32_t GroupLiteDtoDataPage::GetSkip() const
            {
                    return m_Skip.value();
                }

            bool GroupLiteDtoDataPage::HasSkip() const
            {
                return m_Skip.has_value();
            }

            void GroupLiteDtoDataPage::SetSkip(int32_t Value)
            {
                    m_Skip = Value;
                }
                
        
            int32_t GroupLiteDtoDataPage::GetLimit() const
            {
                    return m_Limit.value();
                }

            bool GroupLiteDtoDataPage::HasLimit() const
            {
                return m_Limit.has_value();
            }

            void GroupLiteDtoDataPage::SetLimit(int32_t Value)
            {
                    m_Limit = Value;
                }
                
        
            int32_t GroupLiteDtoDataPage::GetItemCount() const
            {
                    return m_ItemCount.value();
                }

            bool GroupLiteDtoDataPage::HasItemCount() const
            {
                return m_ItemCount.has_value();
            }

            void GroupLiteDtoDataPage::SetItemCount(int32_t Value)
            {
                    m_ItemCount = Value;
                }
                
        
            int64_t GroupLiteDtoDataPage::GetItemTotalCount() const
            {
                    return m_ItemTotalCount.value();
                }

            bool GroupLiteDtoDataPage::HasItemTotalCount() const
            {
                return m_ItemTotalCount.has_value();
            }

            void GroupLiteDtoDataPage::SetItemTotalCount(int64_t Value)
            {
                    m_ItemTotalCount = Value;
                }
                
        

    GroupSummaryDto::GroupSummaryDto() { }
    GroupSummaryDto::~GroupSummaryDto() { }

    utility::string_t GroupSummaryDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_GroupId.has_value())
                {
                    rapidjson::Value GroupIdValue(
                        TypeToJsonValue(m_GroupId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "groupId",
                        GroupIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_GroupCode.has_value())
                {
                    rapidjson::Value GroupCodeValue(
                        TypeToJsonValue(m_GroupCode, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "groupCode",
                        GroupCodeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Name.has_value())
                {
                    rapidjson::Value NameValue(
                        TypeToJsonValue(m_Name, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "name",
                        NameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void GroupSummaryDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("groupId"))
                {
                    const rapidjson::Value& GroupIdValue = JsonDoc["groupId"];

                    if (GroupIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GroupIdValue, m_GroupId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member groupId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("groupCode"))
                {
                    const rapidjson::Value& GroupCodeValue = JsonDoc["groupCode"];

                    if (GroupCodeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GroupCodeValue, m_GroupCode);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member groupCode is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("name"))
                {
                    const rapidjson::Value& NameValue = JsonDoc["name"];

                    if (NameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(NameValue, m_Name);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
                    }
                    
                }
            
        }

        
            utility::string_t GroupSummaryDto::GetGroupId() const
            {
                    return m_GroupId.value();
                }

            bool GroupSummaryDto::HasGroupId() const
            {
                return m_GroupId.has_value();
            }

            void GroupSummaryDto::SetGroupId(
                    const utility::string_t& Value
                )
            {
                    m_GroupId = Value;
                }
                
        
            utility::string_t GroupSummaryDto::GetGroupCode() const
            {
                    return m_GroupCode.value();
                }

            bool GroupSummaryDto::HasGroupCode() const
            {
                return m_GroupCode.has_value();
            }

            void GroupSummaryDto::SetGroupCode(
                    const utility::string_t& Value
                )
            {
                    m_GroupCode = Value;
                }
                
        
            utility::string_t GroupSummaryDto::GetName() const
            {
                    return m_Name.value();
                }

            bool GroupSummaryDto::HasName() const
            {
                return m_Name.has_value();
            }

            void GroupSummaryDto::SetName(
                    const utility::string_t& Value
                )
            {
                    m_Name = Value;
                }
                
        

    InitialSettingsDto::InitialSettingsDto() { }
    InitialSettingsDto::~InitialSettingsDto() { }

    utility::string_t InitialSettingsDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Context.has_value())
                {
                    rapidjson::Value ContextValue(
                        TypeToJsonValue(m_Context, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "context",
                        ContextValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UserId.has_value())
                {
                    rapidjson::Value UserIdValue(
                        TypeToJsonValue(m_UserId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userId",
                        UserIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Settings.has_value())
                {
                    rapidjson::Value SettingsValue(
                        TypeToJsonValue(m_Settings, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "settings",
                        SettingsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void InitialSettingsDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("context"))
                {
                    const rapidjson::Value& ContextValue = JsonDoc["context"];

                    if (ContextValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ContextValue, m_Context);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member context is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("userId"))
                {
                    const rapidjson::Value& UserIdValue = JsonDoc["userId"];

                    if (UserIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserIdValue, m_UserId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("settings"))
                {
                    const rapidjson::Value& SettingsValue = JsonDoc["settings"];

                    if (SettingsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(SettingsValue, m_Settings);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member settings is null!");
                    }
                    
                }
            
        }

        
            utility::string_t InitialSettingsDto::GetContext() const
            {
                    return m_Context.value();
                }

            bool InitialSettingsDto::HasContext() const
            {
                return m_Context.has_value();
            }

            void InitialSettingsDto::SetContext(
                    const utility::string_t& Value
                )
            {
                    m_Context = Value;
                }
                
        
            utility::string_t InitialSettingsDto::GetUserId() const
            {
                    return m_UserId.value();
                }

            bool InitialSettingsDto::HasUserId() const
            {
                return m_UserId.has_value();
            }

            void InitialSettingsDto::SetUserId(
                    const utility::string_t& Value
                )
            {
                    m_UserId = Value;
                }
                
        
            const std::map<utility::string_t, utility::string_t>&
                    InitialSettingsDto::GetSettings() const
            {
                    return m_Settings.value();
                }

            bool InitialSettingsDto::HasSettings() const
            {
                return m_Settings.has_value();
            }

            void InitialSettingsDto::SetSettings(
                    const std::map<utility::string_t, utility::string_t>& Value
                )
            {
                    m_Settings = Value;
                }
                
        

    InventoryItemDto::InventoryItemDto() { }
    InventoryItemDto::~InventoryItemDto() { }

    utility::string_t InventoryItemDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Id.has_value())
                {
                    rapidjson::Value IdValue(
                        TypeToJsonValue(m_Id, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "id",
                        IdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_PrototypeId.has_value())
                {
                    rapidjson::Value PrototypeIdValue(
                        TypeToJsonValue(m_PrototypeId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "prototypeId",
                        PrototypeIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UserId.has_value())
                {
                    rapidjson::Value UserIdValue(
                        TypeToJsonValue(m_UserId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userId",
                        UserIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Exchangeable.has_value())
                {
                    rapidjson::Value ExchangeableValue(
                        TypeToJsonValue(m_Exchangeable, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "exchangeable",
                        ExchangeableValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_IsGift.has_value())
                {
                    rapidjson::Value IsGiftValue(
                        TypeToJsonValue(m_IsGift, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "isGift",
                        IsGiftValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Tags.has_value())
                {
                    rapidjson::Value TagsValue(
                        TypeToJsonValue(m_Tags, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "tags",
                        TagsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_State.has_value())
                {
                    rapidjson::Value StateValue(
                        TypeToJsonValue(m_State, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "state",
                        StateValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Equippable.has_value())
                {
                    rapidjson::Value EquippableValue(
                        TypeToJsonValue(m_Equippable, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "equippable",
                        EquippableValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Equipped.has_value())
                {
                    rapidjson::Value EquippedValue(
                        TypeToJsonValue(m_Equipped, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "equipped",
                        EquippedValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ItemType.has_value())
                {
                    rapidjson::Value ItemTypeValue(
                        TypeToJsonValue(m_ItemType, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "itemType",
                        ItemTypeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_CreatedAt.has_value())
                {
                    rapidjson::Value CreatedAtValue(
                        TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "createdAt",
                        CreatedAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_CreatedBy.has_value())
                {
                    rapidjson::Value CreatedByValue(
                        TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "createdBy",
                        CreatedByValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UpdatedBy.has_value())
                {
                    rapidjson::Value UpdatedByValue(
                        TypeToJsonValue(m_UpdatedBy, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "updatedBy",
                        UpdatedByValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UpdatedAt.has_value())
                {
                    rapidjson::Value UpdatedAtValue(
                        TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "updatedAt",
                        UpdatedAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void InventoryItemDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("id"))
                {
                    const rapidjson::Value& IdValue = JsonDoc["id"];

                    if (IdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IdValue, m_Id);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("prototypeId"))
                {
                    const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

                    if (PrototypeIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PrototypeIdValue, m_PrototypeId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member prototypeId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("userId"))
                {
                    const rapidjson::Value& UserIdValue = JsonDoc["userId"];

                    if (UserIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserIdValue, m_UserId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("exchangeable"))
                {
                    const rapidjson::Value& ExchangeableValue = JsonDoc["exchangeable"];

                    if (ExchangeableValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ExchangeableValue, m_Exchangeable);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member exchangeable is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("isGift"))
                {
                    const rapidjson::Value& IsGiftValue = JsonDoc["isGift"];

                    if (IsGiftValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IsGiftValue, m_IsGift);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member isGift is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("tags"))
                {
                    const rapidjson::Value& TagsValue = JsonDoc["tags"];

                    if (TagsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(TagsValue, m_Tags);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member tags is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("state"))
                {
                    const rapidjson::Value& StateValue = JsonDoc["state"];

                    if (StateValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(StateValue, m_State);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member state is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("equippable"))
                {
                    const rapidjson::Value& EquippableValue = JsonDoc["equippable"];

                    if (EquippableValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(EquippableValue, m_Equippable);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member equippable is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("equipped"))
                {
                    const rapidjson::Value& EquippedValue = JsonDoc["equipped"];

                    if (EquippedValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(EquippedValue, m_Equipped);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member equipped is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("itemType"))
                {
                    const rapidjson::Value& ItemTypeValue = JsonDoc["itemType"];

                    if (ItemTypeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ItemTypeValue, m_ItemType);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member itemType is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("createdAt"))
                {
                    const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

                    if (CreatedAtValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(CreatedAtValue, m_CreatedAt);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("createdBy"))
                {
                    const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

                    if (CreatedByValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(CreatedByValue, m_CreatedBy);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member createdBy is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("updatedBy"))
                {
                    const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

                    if (UpdatedByValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UpdatedByValue, m_UpdatedBy);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member updatedBy is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("updatedAt"))
                {
                    const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

                    if (UpdatedAtValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UpdatedAtValue, m_UpdatedAt);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member updatedAt is null!");
                    }
                    
                }
            
        }

        
            utility::string_t InventoryItemDto::GetId() const
            {
                    return m_Id.value();
                }

            bool InventoryItemDto::HasId() const
            {
                return m_Id.has_value();
            }

            void InventoryItemDto::SetId(
                    const utility::string_t& Value
                )
            {
                    m_Id = Value;
                }
                
        
            utility::string_t InventoryItemDto::GetPrototypeId() const
            {
                    return m_PrototypeId.value();
                }

            bool InventoryItemDto::HasPrototypeId() const
            {
                return m_PrototypeId.has_value();
            }

            void InventoryItemDto::SetPrototypeId(
                    const utility::string_t& Value
                )
            {
                    m_PrototypeId = Value;
                }
                
        
            utility::string_t InventoryItemDto::GetUserId() const
            {
                    return m_UserId.value();
                }

            bool InventoryItemDto::HasUserId() const
            {
                return m_UserId.has_value();
            }

            void InventoryItemDto::SetUserId(
                    const utility::string_t& Value
                )
            {
                    m_UserId = Value;
                }
                
        
            bool InventoryItemDto::GetExchangeable() const
            {
                    return m_Exchangeable.value();
                }

            bool InventoryItemDto::HasExchangeable() const
            {
                return m_Exchangeable.has_value();
            }

            void InventoryItemDto::SetExchangeable(
                    const bool& Value
                )
            {
                    m_Exchangeable = Value;
                }
                
        
            bool InventoryItemDto::GetIsGift() const
            {
                    return m_IsGift.value();
                }

            bool InventoryItemDto::HasIsGift() const
            {
                return m_IsGift.has_value();
            }

            void InventoryItemDto::SetIsGift(
                    const bool& Value
                )
            {
                    m_IsGift = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    InventoryItemDto::GetTags() const
            {
                    return m_Tags.value();
                }

            bool InventoryItemDto::HasTags() const
            {
                return m_Tags.has_value();
            }

            void InventoryItemDto::SetTags(
                    const std::vector<utility::string_t>& Value
                )
            {
                    m_Tags = Value;
                }
                
        
            const std::map<utility::string_t, utility::string_t>&
                    InventoryItemDto::GetState() const
            {
                    return m_State.value();
                }

            bool InventoryItemDto::HasState() const
            {
                return m_State.has_value();
            }

            void InventoryItemDto::SetState(
                    const std::map<utility::string_t, utility::string_t>& Value
                )
            {
                    m_State = Value;
                }
                
        
            bool InventoryItemDto::GetEquippable() const
            {
                    return m_Equippable.value();
                }

            bool InventoryItemDto::HasEquippable() const
            {
                return m_Equippable.has_value();
            }

            void InventoryItemDto::SetEquippable(
                    const bool& Value
                )
            {
                    m_Equippable = Value;
                }
                
        
            bool InventoryItemDto::GetEquipped() const
            {
                    return m_Equipped.value();
                }

            bool InventoryItemDto::HasEquipped() const
            {
                return m_Equipped.has_value();
            }

            void InventoryItemDto::SetEquipped(
                    const bool& Value
                )
            {
                    m_Equipped = Value;
                }
                
        
            utility::string_t InventoryItemDto::GetItemType() const
            {
                    return m_ItemType.value();
                }

            bool InventoryItemDto::HasItemType() const
            {
                return m_ItemType.has_value();
            }

            void InventoryItemDto::SetItemType(
                    const utility::string_t& Value
                )
            {
                    m_ItemType = Value;
                }
                
        
            utility::string_t InventoryItemDto::GetCreatedAt() const
            {
                    return m_CreatedAt.value();
                }

            bool InventoryItemDto::HasCreatedAt() const
            {
                return m_CreatedAt.has_value();
            }

            void InventoryItemDto::SetCreatedAt(
                    const utility::string_t& Value
                )
            {
                    m_CreatedAt = Value;
                }
                
        
            utility::string_t InventoryItemDto::GetCreatedBy() const
            {
                    return m_CreatedBy.value();
                }

            bool InventoryItemDto::HasCreatedBy() const
            {
                return m_CreatedBy.has_value();
            }

            void InventoryItemDto::SetCreatedBy(
                    const utility::string_t& Value
                )
            {
                    m_CreatedBy = Value;
                }
                
        
            utility::string_t InventoryItemDto::GetUpdatedBy() const
            {
                    return m_UpdatedBy.value();
                }

            bool InventoryItemDto::HasUpdatedBy() const
            {
                return m_UpdatedBy.has_value();
            }

            void InventoryItemDto::SetUpdatedBy(
                    const utility::string_t& Value
                )
            {
                    m_UpdatedBy = Value;
                }
                
        
            utility::string_t InventoryItemDto::GetUpdatedAt() const
            {
                    return m_UpdatedAt.value();
                }

            bool InventoryItemDto::HasUpdatedAt() const
            {
                return m_UpdatedAt.has_value();
            }

            void InventoryItemDto::SetUpdatedAt(
                    const utility::string_t& Value
                )
            {
                    m_UpdatedAt = Value;
                }
                
        

    InventoryItemDtoDataPage::InventoryItemDtoDataPage() { }
    InventoryItemDtoDataPage::~InventoryItemDtoDataPage() { }

    utility::string_t InventoryItemDtoDataPage::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Items.has_value())
                {
                    rapidjson::Value ItemsValue(
                        TypeToJsonValue(m_Items, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "items",
                        ItemsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Skip.has_value())
                {
                    rapidjson::Value SkipValue(
                        TypeToJsonValue(m_Skip, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "skip",
                        SkipValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Limit.has_value())
                {
                    rapidjson::Value LimitValue(
                        TypeToJsonValue(m_Limit, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "limit",
                        LimitValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ItemCount.has_value())
                {
                    rapidjson::Value ItemCountValue(
                        TypeToJsonValue(m_ItemCount, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "itemCount",
                        ItemCountValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ItemTotalCount.has_value())
                {
                    rapidjson::Value ItemTotalCountValue(
                        TypeToJsonValue(m_ItemTotalCount, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "itemTotalCount",
                        ItemTotalCountValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void InventoryItemDtoDataPage::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("items"))
                {
                    const rapidjson::Value& ItemsValue = JsonDoc["items"];

                    if (ItemsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ItemsValue, m_Items);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member items is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("skip"))
                {
                    const rapidjson::Value& SkipValue = JsonDoc["skip"];

                    if (SkipValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(SkipValue, m_Skip);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member skip is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("limit"))
                {
                    const rapidjson::Value& LimitValue = JsonDoc["limit"];

                    if (LimitValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(LimitValue, m_Limit);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member limit is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("itemCount"))
                {
                    const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

                    if (ItemCountValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ItemCountValue, m_ItemCount);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member itemCount is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("itemTotalCount"))
                {
                    const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

                    if (ItemTotalCountValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ItemTotalCountValue, m_ItemTotalCount);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member itemTotalCount is null!");
                    }
                    
                }
            
        }

        
            const std::vector<std::shared_ptr<InventoryItemDto>>&
                    InventoryItemDtoDataPage::GetItems() const
            {
                    return m_Items.value();
                }

            bool InventoryItemDtoDataPage::HasItems() const
            {
                return m_Items.has_value();
            }

            void InventoryItemDtoDataPage::SetItems(
                    const std::vector<std::shared_ptr<InventoryItemDto>>& Value
                )
            {
                    m_Items = Value;
                }
                
        
            int32_t InventoryItemDtoDataPage::GetSkip() const
            {
                    return m_Skip.value();
                }

            bool InventoryItemDtoDataPage::HasSkip() const
            {
                return m_Skip.has_value();
            }

            void InventoryItemDtoDataPage::SetSkip(int32_t Value)
            {
                    m_Skip = Value;
                }
                
        
            int32_t InventoryItemDtoDataPage::GetLimit() const
            {
                    return m_Limit.value();
                }

            bool InventoryItemDtoDataPage::HasLimit() const
            {
                return m_Limit.has_value();
            }

            void InventoryItemDtoDataPage::SetLimit(int32_t Value)
            {
                    m_Limit = Value;
                }
                
        
            int32_t InventoryItemDtoDataPage::GetItemCount() const
            {
                    return m_ItemCount.value();
                }

            bool InventoryItemDtoDataPage::HasItemCount() const
            {
                return m_ItemCount.has_value();
            }

            void InventoryItemDtoDataPage::SetItemCount(int32_t Value)
            {
                    m_ItemCount = Value;
                }
                
        
            int64_t InventoryItemDtoDataPage::GetItemTotalCount() const
            {
                    return m_ItemTotalCount.value();
                }

            bool InventoryItemDtoDataPage::HasItemTotalCount() const
            {
                return m_ItemTotalCount.has_value();
            }

            void InventoryItemDtoDataPage::SetItemTotalCount(int64_t Value)
            {
                    m_ItemTotalCount = Value;
                }
                
        

    LoginRequest::LoginRequest() { }
    LoginRequest::~LoginRequest() { }

    utility::string_t LoginRequest::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Tenant.has_value())
                {
                    rapidjson::Value TenantValue(
                        TypeToJsonValue(m_Tenant, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "tenant",
                        TenantValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Email.has_value())
                {
                    rapidjson::Value EmailValue(
                        TypeToJsonValue(m_Email, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "email",
                        EmailValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UserName.has_value())
                {
                    rapidjson::Value UserNameValue(
                        TypeToJsonValue(m_UserName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userName",
                        UserNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Password.has_value())
                {
                    rapidjson::Value PasswordValue(
                        TypeToJsonValue(m_Password, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "password",
                        PasswordValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_DeviceId.has_value())
                {
                    rapidjson::Value DeviceIdValue(
                        TypeToJsonValue(m_DeviceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "deviceId",
                        DeviceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void LoginRequest::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("tenant"))
                {
                    const rapidjson::Value& TenantValue = JsonDoc["tenant"];

                    if (TenantValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(TenantValue, m_Tenant);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member tenant is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("email"))
                {
                    const rapidjson::Value& EmailValue = JsonDoc["email"];

                    if (EmailValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(EmailValue, m_Email);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member email is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("userName"))
                {
                    const rapidjson::Value& UserNameValue = JsonDoc["userName"];

                    if (UserNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserNameValue, m_UserName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("password"))
                {
                    const rapidjson::Value& PasswordValue = JsonDoc["password"];

                    if (PasswordValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PasswordValue, m_Password);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member password is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("deviceId"))
                {
                    const rapidjson::Value& DeviceIdValue = JsonDoc["deviceId"];

                    if (DeviceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DeviceIdValue, m_DeviceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member deviceId is null!");
                    }
                    
                }
            
        }

        
            utility::string_t LoginRequest::GetTenant() const
            {
                    return m_Tenant.value();
                }

            bool LoginRequest::HasTenant() const
            {
                return m_Tenant.has_value();
            }

            void LoginRequest::SetTenant(
                    const utility::string_t& Value
                )
            {
                    m_Tenant = Value;
                }
                
        
            utility::string_t LoginRequest::GetEmail() const
            {
                    return m_Email.value();
                }

            bool LoginRequest::HasEmail() const
            {
                return m_Email.has_value();
            }

            void LoginRequest::SetEmail(
                    const utility::string_t& Value
                )
            {
                    m_Email = Value;
                }
                
        
            utility::string_t LoginRequest::GetUserName() const
            {
                    return m_UserName.value();
                }

            bool LoginRequest::HasUserName() const
            {
                return m_UserName.has_value();
            }

            void LoginRequest::SetUserName(
                    const utility::string_t& Value
                )
            {
                    m_UserName = Value;
                }
                
        
            utility::string_t LoginRequest::GetPassword() const
            {
                    return m_Password.value();
                }

            bool LoginRequest::HasPassword() const
            {
                return m_Password.has_value();
            }

            void LoginRequest::SetPassword(
                    const utility::string_t& Value
                )
            {
                    m_Password = Value;
                }
                
        
            utility::string_t LoginRequest::GetDeviceId() const
            {
                    return m_DeviceId.value();
                }

            bool LoginRequest::HasDeviceId() const
            {
                return m_DeviceId.has_value();
            }

            void LoginRequest::SetDeviceId(
                    const utility::string_t& Value
                )
            {
                    m_DeviceId = Value;
                }
                
        

    LoginSocialRequest::LoginSocialRequest() { }
    LoginSocialRequest::~LoginSocialRequest() { }

    utility::string_t LoginSocialRequest::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Tenant.has_value())
                {
                    rapidjson::Value TenantValue(
                        TypeToJsonValue(m_Tenant, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "tenant",
                        TenantValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Provider.has_value())
                {
                    rapidjson::Value ProviderValue(
                        TypeToJsonValue(m_Provider, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "provider",
                        ProviderValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Token.has_value())
                {
                    rapidjson::Value TokenValue(
                        TypeToJsonValue(m_Token, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "token",
                        TokenValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_DeviceId.has_value())
                {
                    rapidjson::Value DeviceIdValue(
                        TypeToJsonValue(m_DeviceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "deviceId",
                        DeviceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_OAuthRedirectUri.has_value())
                {
                    rapidjson::Value OAuthRedirectUriValue(
                        TypeToJsonValue(m_OAuthRedirectUri, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "oAuthRedirectUri",
                        OAuthRedirectUriValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void LoginSocialRequest::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("tenant"))
                {
                    const rapidjson::Value& TenantValue = JsonDoc["tenant"];

                    if (TenantValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(TenantValue, m_Tenant);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member tenant is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("provider"))
                {
                    const rapidjson::Value& ProviderValue = JsonDoc["provider"];

                    if (ProviderValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ProviderValue, m_Provider);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member provider is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("token"))
                {
                    const rapidjson::Value& TokenValue = JsonDoc["token"];

                    if (TokenValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(TokenValue, m_Token);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member token is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("deviceId"))
                {
                    const rapidjson::Value& DeviceIdValue = JsonDoc["deviceId"];

                    if (DeviceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DeviceIdValue, m_DeviceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member deviceId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("oAuthRedirectUri"))
                {
                    const rapidjson::Value& OAuthRedirectUriValue = JsonDoc["oAuthRedirectUri"];

                    if (OAuthRedirectUriValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(OAuthRedirectUriValue, m_OAuthRedirectUri);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member oAuthRedirectUri is null!");
                    }
                    
                }
            
        }

        
            utility::string_t LoginSocialRequest::GetTenant() const
            {
                    return m_Tenant.value();
                }

            bool LoginSocialRequest::HasTenant() const
            {
                return m_Tenant.has_value();
            }

            void LoginSocialRequest::SetTenant(
                    const utility::string_t& Value
                )
            {
                    m_Tenant = Value;
                }
                
        
            utility::string_t LoginSocialRequest::GetProvider() const
            {
                    return m_Provider.value();
                }

            bool LoginSocialRequest::HasProvider() const
            {
                return m_Provider.has_value();
            }

            void LoginSocialRequest::SetProvider(
                    const utility::string_t& Value
                )
            {
                    m_Provider = Value;
                }
                
        
            utility::string_t LoginSocialRequest::GetToken() const
            {
                    return m_Token.value();
                }

            bool LoginSocialRequest::HasToken() const
            {
                return m_Token.has_value();
            }

            void LoginSocialRequest::SetToken(
                    const utility::string_t& Value
                )
            {
                    m_Token = Value;
                }
                
        
            utility::string_t LoginSocialRequest::GetDeviceId() const
            {
                    return m_DeviceId.value();
                }

            bool LoginSocialRequest::HasDeviceId() const
            {
                return m_DeviceId.has_value();
            }

            void LoginSocialRequest::SetDeviceId(
                    const utility::string_t& Value
                )
            {
                    m_DeviceId = Value;
                }
                
        
            utility::string_t LoginSocialRequest::GetOAuthRedirectUri() const
            {
                    return m_OAuthRedirectUri.value();
                }

            bool LoginSocialRequest::HasOAuthRedirectUri() const
            {
                return m_OAuthRedirectUri.has_value();
            }

            void LoginSocialRequest::SetOAuthRedirectUri(
                    const utility::string_t& Value
                )
            {
                    m_OAuthRedirectUri = Value;
                }
                
        

    LogoutRequest::LogoutRequest() { }
    LogoutRequest::~LogoutRequest() { }

    utility::string_t LogoutRequest::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_UserId.has_value())
                {
                    rapidjson::Value UserIdValue(
                        TypeToJsonValue(m_UserId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userId",
                        UserIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_DeviceId.has_value())
                {
                    rapidjson::Value DeviceIdValue(
                        TypeToJsonValue(m_DeviceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "deviceId",
                        DeviceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void LogoutRequest::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("userId"))
                {
                    const rapidjson::Value& UserIdValue = JsonDoc["userId"];

                    if (UserIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserIdValue, m_UserId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("deviceId"))
                {
                    const rapidjson::Value& DeviceIdValue = JsonDoc["deviceId"];

                    if (DeviceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DeviceIdValue, m_DeviceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member deviceId is null!");
                    }
                    
                }
            
        }

        
            utility::string_t LogoutRequest::GetUserId() const
            {
                    return m_UserId.value();
                }

            bool LogoutRequest::HasUserId() const
            {
                return m_UserId.has_value();
            }

            void LogoutRequest::SetUserId(
                    const utility::string_t& Value
                )
            {
                    m_UserId = Value;
                }
                
        
            utility::string_t LogoutRequest::GetDeviceId() const
            {
                    return m_DeviceId.value();
                }

            bool LogoutRequest::HasDeviceId() const
            {
                return m_DeviceId.has_value();
            }

            void LogoutRequest::SetDeviceId(
                    const utility::string_t& Value
                )
            {
                    m_DeviceId = Value;
                }
                
        

    MetagameProgressDto::MetagameProgressDto() { }
    MetagameProgressDto::~MetagameProgressDto() { }

    utility::string_t MetagameProgressDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_UserId.has_value())
                {
                    rapidjson::Value UserIdValue(
                        TypeToJsonValue(m_UserId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userId",
                        UserIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_PercentTowardsNextSeed.has_value())
                {
                    rapidjson::Value PercentTowardsNextSeedValue(
                        TypeToJsonValue(m_PercentTowardsNextSeed, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "percentTowardsNextSeed",
                        PercentTowardsNextSeedValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_MetagameLevel.has_value())
                {
                    rapidjson::Value MetagameLevelValue(
                        TypeToJsonValue(m_MetagameLevel, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "metagameLevel",
                        MetagameLevelValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void MetagameProgressDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("userId"))
                {
                    const rapidjson::Value& UserIdValue = JsonDoc["userId"];

                    if (UserIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserIdValue, m_UserId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("percentTowardsNextSeed"))
                {
                    const rapidjson::Value& PercentTowardsNextSeedValue = JsonDoc["percentTowardsNextSeed"];

                    if (PercentTowardsNextSeedValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PercentTowardsNextSeedValue, m_PercentTowardsNextSeed);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member percentTowardsNextSeed is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("metagameLevel"))
                {
                    const rapidjson::Value& MetagameLevelValue = JsonDoc["metagameLevel"];

                    if (MetagameLevelValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(MetagameLevelValue, m_MetagameLevel);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member metagameLevel is null!");
                    }
                    
                }
            
        }

        
            utility::string_t MetagameProgressDto::GetUserId() const
            {
                    return m_UserId.value();
                }

            bool MetagameProgressDto::HasUserId() const
            {
                return m_UserId.has_value();
            }

            void MetagameProgressDto::SetUserId(
                    const utility::string_t& Value
                )
            {
                    m_UserId = Value;
                }
                
        
            float MetagameProgressDto::GetPercentTowardsNextSeed() const
            {
                    return m_PercentTowardsNextSeed.value();
                }

            bool MetagameProgressDto::HasPercentTowardsNextSeed() const
            {
                return m_PercentTowardsNextSeed.has_value();
            }

            void MetagameProgressDto::SetPercentTowardsNextSeed(float Value)
            {
                    m_PercentTowardsNextSeed = Value;
                }
                
        
            int32_t MetagameProgressDto::GetMetagameLevel() const
            {
                    return m_MetagameLevel.value();
                }

            bool MetagameProgressDto::HasMetagameLevel() const
            {
                return m_MetagameLevel.has_value();
            }

            void MetagameProgressDto::SetMetagameLevel(int32_t Value)
            {
                    m_MetagameLevel = Value;
                }
                
        

    MetagameUpdate::MetagameUpdate() { }
    MetagameUpdate::~MetagameUpdate() { }

    utility::string_t MetagameUpdate::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_PercentDeltaAsTotal.has_value())
                {
                    rapidjson::Value PercentDeltaAsTotalValue(
                        TypeToJsonValue(m_PercentDeltaAsTotal, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "percentDeltaAsTotal",
                        PercentDeltaAsTotalValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_PercentDelta.has_value())
                {
                    rapidjson::Value PercentDeltaValue(
                        TypeToJsonValue(m_PercentDelta, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "percentDelta",
                        PercentDeltaValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void MetagameUpdate::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("percentDeltaAsTotal"))
                {
                    const rapidjson::Value& PercentDeltaAsTotalValue = JsonDoc["percentDeltaAsTotal"];

                    if (PercentDeltaAsTotalValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PercentDeltaAsTotalValue, m_PercentDeltaAsTotal);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member percentDeltaAsTotal is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("percentDelta"))
                {
                    const rapidjson::Value& PercentDeltaValue = JsonDoc["percentDelta"];

                    if (PercentDeltaValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PercentDeltaValue, m_PercentDelta);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member percentDelta is null!");
                    }
                    
                }
            
        }

        
            bool MetagameUpdate::GetPercentDeltaAsTotal() const
            {
                    return m_PercentDeltaAsTotal.value();
                }

            bool MetagameUpdate::HasPercentDeltaAsTotal() const
            {
                return m_PercentDeltaAsTotal.has_value();
            }

            void MetagameUpdate::SetPercentDeltaAsTotal(
                    const bool& Value
                )
            {
                    m_PercentDeltaAsTotal = Value;
                }
                
        
            double MetagameUpdate::GetPercentDelta() const
            {
                    return m_PercentDelta.value();
                }

            bool MetagameUpdate::HasPercentDelta() const
            {
                return m_PercentDelta.has_value();
            }

            void MetagameUpdate::SetPercentDelta(double Value)
            {
                    m_PercentDelta = Value;
                }
                
        

    OneTimeKeyDto::OneTimeKeyDto() { }
    OneTimeKeyDto::~OneTimeKeyDto() { }

    utility::string_t OneTimeKeyDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_OneTimeKey.has_value())
                {
                    rapidjson::Value OneTimeKeyValue(
                        TypeToJsonValue(m_OneTimeKey, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "oneTimeKey",
                        OneTimeKeyValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ExpiresAt.has_value())
                {
                    rapidjson::Value ExpiresAtValue(
                        TypeToJsonValue(m_ExpiresAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "expiresAt",
                        ExpiresAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void OneTimeKeyDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("oneTimeKey"))
                {
                    const rapidjson::Value& OneTimeKeyValue = JsonDoc["oneTimeKey"];

                    if (OneTimeKeyValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(OneTimeKeyValue, m_OneTimeKey);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member oneTimeKey is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("expiresAt"))
                {
                    const rapidjson::Value& ExpiresAtValue = JsonDoc["expiresAt"];

                    if (ExpiresAtValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ExpiresAtValue, m_ExpiresAt);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member expiresAt is null!");
                    }
                    
                }
            
        }

        
            utility::string_t OneTimeKeyDto::GetOneTimeKey() const
            {
                    return m_OneTimeKey.value();
                }

            bool OneTimeKeyDto::HasOneTimeKey() const
            {
                return m_OneTimeKey.has_value();
            }

            void OneTimeKeyDto::SetOneTimeKey(
                    const utility::string_t& Value
                )
            {
                    m_OneTimeKey = Value;
                }
                
        
            utility::string_t OneTimeKeyDto::GetExpiresAt() const
            {
                    return m_ExpiresAt.value();
                }

            bool OneTimeKeyDto::HasExpiresAt() const
            {
                return m_ExpiresAt.has_value();
            }

            void OneTimeKeyDto::SetExpiresAt(
                    const utility::string_t& Value
                )
            {
                    m_ExpiresAt = Value;
                }
                
        

    OneTimeKeyRequest::OneTimeKeyRequest() { }
    OneTimeKeyRequest::~OneTimeKeyRequest() { }

    utility::string_t OneTimeKeyRequest::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_UserId.has_value())
                {
                    rapidjson::Value UserIdValue(
                        TypeToJsonValue(m_UserId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userId",
                        UserIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_DeviceId.has_value())
                {
                    rapidjson::Value DeviceIdValue(
                        TypeToJsonValue(m_DeviceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "deviceId",
                        DeviceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void OneTimeKeyRequest::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("userId"))
                {
                    const rapidjson::Value& UserIdValue = JsonDoc["userId"];

                    if (UserIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserIdValue, m_UserId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("deviceId"))
                {
                    const rapidjson::Value& DeviceIdValue = JsonDoc["deviceId"];

                    if (DeviceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DeviceIdValue, m_DeviceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member deviceId is null!");
                    }
                    
                }
            
        }

        
            utility::string_t OneTimeKeyRequest::GetUserId() const
            {
                    return m_UserId.value();
                }

            bool OneTimeKeyRequest::HasUserId() const
            {
                return m_UserId.has_value();
            }

            void OneTimeKeyRequest::SetUserId(
                    const utility::string_t& Value
                )
            {
                    m_UserId = Value;
                }
                
        
            utility::string_t OneTimeKeyRequest::GetDeviceId() const
            {
                    return m_DeviceId.value();
                }

            bool OneTimeKeyRequest::HasDeviceId() const
            {
                return m_DeviceId.has_value();
            }

            void OneTimeKeyRequest::SetDeviceId(
                    const utility::string_t& Value
                )
            {
                    m_DeviceId = Value;
                }
                
        

    ProfileDto::ProfileDto() { }
    ProfileDto::~ProfileDto() { }

    utility::string_t ProfileDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Id.has_value())
                {
                    rapidjson::Value IdValue(
                        TypeToJsonValue(m_Id, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "id",
                        IdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Email.has_value())
                {
                    rapidjson::Value EmailValue(
                        TypeToJsonValue(m_Email, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "email",
                        EmailValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_GuestDeviceId.has_value())
                {
                    rapidjson::Value GuestDeviceIdValue(
                        TypeToJsonValue(m_GuestDeviceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "guestDeviceId",
                        GuestDeviceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_GuestFirstLoginIdentified.has_value())
                {
                    rapidjson::Value GuestFirstLoginIdentifiedValue(
                        TypeToJsonValue(m_GuestFirstLoginIdentified, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "guestFirstLoginIdentified",
                        GuestFirstLoginIdentifiedValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_LastLoginAt.has_value())
                {
                    rapidjson::Value LastLoginAtValue(
                        TypeToJsonValue(m_LastLoginAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "lastLoginAt",
                        LastLoginAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_LastLoginNonce.has_value())
                {
                    rapidjson::Value LastLoginNonceValue(
                        TypeToJsonValue(m_LastLoginNonce, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "lastLoginNonce",
                        LastLoginNonceValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_LastDeviceId.has_value())
                {
                    rapidjson::Value LastDeviceIdValue(
                        TypeToJsonValue(m_LastDeviceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "lastDeviceId",
                        LastDeviceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_LastPlatform.has_value())
                {
                    rapidjson::Value LastPlatformValue(
                        TypeToJsonValue(m_LastPlatform, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "lastPlatform",
                        LastPlatformValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AvatarId.has_value())
                {
                    rapidjson::Value AvatarIdValue(
                        TypeToJsonValue(m_AvatarId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "avatarId",
                        AvatarIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UserName.has_value())
                {
                    rapidjson::Value UserNameValue(
                        TypeToJsonValue(m_UserName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userName",
                        UserNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_FirstName.has_value())
                {
                    rapidjson::Value FirstNameValue(
                        TypeToJsonValue(m_FirstName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "firstName",
                        FirstNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_DisplayName.has_value())
                {
                    rapidjson::Value DisplayNameValue(
                        TypeToJsonValue(m_DisplayName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "displayName",
                        DisplayNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_IsEmailConfirmed.has_value())
                {
                    rapidjson::Value IsEmailConfirmedValue(
                        TypeToJsonValue(m_IsEmailConfirmed, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "isEmailConfirmed",
                        IsEmailConfirmedValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Roles.has_value())
                {
                    rapidjson::Value RolesValue(
                        TypeToJsonValue(m_Roles, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "roles",
                        RolesValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_CreatedBy.has_value())
                {
                    rapidjson::Value CreatedByValue(
                        TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "createdBy",
                        CreatedByValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_CreatedAt.has_value())
                {
                    rapidjson::Value CreatedAtValue(
                        TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "createdAt",
                        CreatedAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UpdatedBy.has_value())
                {
                    rapidjson::Value UpdatedByValue(
                        TypeToJsonValue(m_UpdatedBy, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "updatedBy",
                        UpdatedByValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UpdatedAt.has_value())
                {
                    rapidjson::Value UpdatedAtValue(
                        TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "updatedAt",
                        UpdatedAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Locked.has_value())
                {
                    rapidjson::Value LockedValue(
                        TypeToJsonValue(m_Locked, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "locked",
                        LockedValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void ProfileDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("id"))
                {
                    const rapidjson::Value& IdValue = JsonDoc["id"];

                    if (IdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IdValue, m_Id);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("email"))
                {
                    const rapidjson::Value& EmailValue = JsonDoc["email"];

                    if (EmailValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(EmailValue, m_Email);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member email is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("guestDeviceId"))
                {
                    const rapidjson::Value& GuestDeviceIdValue = JsonDoc["guestDeviceId"];

                    if (GuestDeviceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GuestDeviceIdValue, m_GuestDeviceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member guestDeviceId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("guestFirstLoginIdentified"))
                {
                    const rapidjson::Value& GuestFirstLoginIdentifiedValue = JsonDoc["guestFirstLoginIdentified"];

                    if (GuestFirstLoginIdentifiedValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GuestFirstLoginIdentifiedValue, m_GuestFirstLoginIdentified);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member guestFirstLoginIdentified is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("lastLoginAt"))
                {
                    const rapidjson::Value& LastLoginAtValue = JsonDoc["lastLoginAt"];

                    if (LastLoginAtValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(LastLoginAtValue, m_LastLoginAt);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member lastLoginAt is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("lastLoginNonce"))
                {
                    const rapidjson::Value& LastLoginNonceValue = JsonDoc["lastLoginNonce"];

                    if (LastLoginNonceValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(LastLoginNonceValue, m_LastLoginNonce);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member lastLoginNonce is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("lastDeviceId"))
                {
                    const rapidjson::Value& LastDeviceIdValue = JsonDoc["lastDeviceId"];

                    if (LastDeviceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(LastDeviceIdValue, m_LastDeviceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member lastDeviceId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("lastPlatform"))
                {
                    const rapidjson::Value& LastPlatformValue = JsonDoc["lastPlatform"];

                    if (LastPlatformValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(LastPlatformValue, m_LastPlatform);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member lastPlatform is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("avatarId"))
                {
                    const rapidjson::Value& AvatarIdValue = JsonDoc["avatarId"];

                    if (AvatarIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AvatarIdValue, m_AvatarId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member avatarId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("userName"))
                {
                    const rapidjson::Value& UserNameValue = JsonDoc["userName"];

                    if (UserNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserNameValue, m_UserName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("firstName"))
                {
                    const rapidjson::Value& FirstNameValue = JsonDoc["firstName"];

                    if (FirstNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(FirstNameValue, m_FirstName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member firstName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("displayName"))
                {
                    const rapidjson::Value& DisplayNameValue = JsonDoc["displayName"];

                    if (DisplayNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DisplayNameValue, m_DisplayName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member displayName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("isEmailConfirmed"))
                {
                    const rapidjson::Value& IsEmailConfirmedValue = JsonDoc["isEmailConfirmed"];

                    if (IsEmailConfirmedValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IsEmailConfirmedValue, m_IsEmailConfirmed);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member isEmailConfirmed is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("roles"))
                {
                    const rapidjson::Value& RolesValue = JsonDoc["roles"];

                    if (RolesValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(RolesValue, m_Roles);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member roles is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("createdBy"))
                {
                    const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

                    if (CreatedByValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(CreatedByValue, m_CreatedBy);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member createdBy is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("createdAt"))
                {
                    const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

                    if (CreatedAtValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(CreatedAtValue, m_CreatedAt);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("updatedBy"))
                {
                    const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

                    if (UpdatedByValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UpdatedByValue, m_UpdatedBy);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member updatedBy is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("updatedAt"))
                {
                    const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

                    if (UpdatedAtValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UpdatedAtValue, m_UpdatedAt);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member updatedAt is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("locked"))
                {
                    const rapidjson::Value& LockedValue = JsonDoc["locked"];

                    if (LockedValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(LockedValue, m_Locked);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member locked is null!");
                    }
                    
                }
            
        }

        
            utility::string_t ProfileDto::GetId() const
            {
                    return m_Id.value();
                }

            bool ProfileDto::HasId() const
            {
                return m_Id.has_value();
            }

            void ProfileDto::SetId(
                    const utility::string_t& Value
                )
            {
                    m_Id = Value;
                }
                
        
            utility::string_t ProfileDto::GetEmail() const
            {
                    return m_Email.value();
                }

            bool ProfileDto::HasEmail() const
            {
                return m_Email.has_value();
            }

            void ProfileDto::SetEmail(
                    const utility::string_t& Value
                )
            {
                    m_Email = Value;
                }
                
        
            utility::string_t ProfileDto::GetGuestDeviceId() const
            {
                    return m_GuestDeviceId.value();
                }

            bool ProfileDto::HasGuestDeviceId() const
            {
                return m_GuestDeviceId.has_value();
            }

            void ProfileDto::SetGuestDeviceId(
                    const utility::string_t& Value
                )
            {
                    m_GuestDeviceId = Value;
                }
                
        
            bool ProfileDto::GetGuestFirstLoginIdentified() const
            {
                    return m_GuestFirstLoginIdentified.value();
                }

            bool ProfileDto::HasGuestFirstLoginIdentified() const
            {
                return m_GuestFirstLoginIdentified.has_value();
            }

            void ProfileDto::SetGuestFirstLoginIdentified(
                    const bool& Value
                )
            {
                    m_GuestFirstLoginIdentified = Value;
                }
                
        
            utility::string_t ProfileDto::GetLastLoginAt() const
            {
                    return m_LastLoginAt.value();
                }

            bool ProfileDto::HasLastLoginAt() const
            {
                return m_LastLoginAt.has_value();
            }

            void ProfileDto::SetLastLoginAt(
                    const utility::string_t& Value
                )
            {
                    m_LastLoginAt = Value;
                }
                
        
            utility::string_t ProfileDto::GetLastLoginNonce() const
            {
                    return m_LastLoginNonce.value();
                }

            bool ProfileDto::HasLastLoginNonce() const
            {
                return m_LastLoginNonce.has_value();
            }

            void ProfileDto::SetLastLoginNonce(
                    const utility::string_t& Value
                )
            {
                    m_LastLoginNonce = Value;
                }
                
        
            utility::string_t ProfileDto::GetLastDeviceId() const
            {
                    return m_LastDeviceId.value();
                }

            bool ProfileDto::HasLastDeviceId() const
            {
                return m_LastDeviceId.has_value();
            }

            void ProfileDto::SetLastDeviceId(
                    const utility::string_t& Value
                )
            {
                    m_LastDeviceId = Value;
                }
                
        
            utility::string_t ProfileDto::GetLastPlatform() const
            {
                    return m_LastPlatform.value();
                }

            bool ProfileDto::HasLastPlatform() const
            {
                return m_LastPlatform.has_value();
            }

            void ProfileDto::SetLastPlatform(
                    const utility::string_t& Value
                )
            {
                    m_LastPlatform = Value;
                }
                
        
            utility::string_t ProfileDto::GetAvatarId() const
            {
                    return m_AvatarId.value();
                }

            bool ProfileDto::HasAvatarId() const
            {
                return m_AvatarId.has_value();
            }

            void ProfileDto::SetAvatarId(
                    const utility::string_t& Value
                )
            {
                    m_AvatarId = Value;
                }
                
        
            utility::string_t ProfileDto::GetUserName() const
            {
                    return m_UserName.value();
                }

            bool ProfileDto::HasUserName() const
            {
                return m_UserName.has_value();
            }

            void ProfileDto::SetUserName(
                    const utility::string_t& Value
                )
            {
                    m_UserName = Value;
                }
                
        
            utility::string_t ProfileDto::GetFirstName() const
            {
                    return m_FirstName.value();
                }

            bool ProfileDto::HasFirstName() const
            {
                return m_FirstName.has_value();
            }

            void ProfileDto::SetFirstName(
                    const utility::string_t& Value
                )
            {
                    m_FirstName = Value;
                }
                
        
            utility::string_t ProfileDto::GetDisplayName() const
            {
                    return m_DisplayName.value();
                }

            bool ProfileDto::HasDisplayName() const
            {
                return m_DisplayName.has_value();
            }

            void ProfileDto::SetDisplayName(
                    const utility::string_t& Value
                )
            {
                    m_DisplayName = Value;
                }
                
        
            bool ProfileDto::GetIsEmailConfirmed() const
            {
                    return m_IsEmailConfirmed.value();
                }

            bool ProfileDto::HasIsEmailConfirmed() const
            {
                return m_IsEmailConfirmed.has_value();
            }

            void ProfileDto::SetIsEmailConfirmed(
                    const bool& Value
                )
            {
                    m_IsEmailConfirmed = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    ProfileDto::GetRoles() const
            {
                    return m_Roles.value();
                }

            bool ProfileDto::HasRoles() const
            {
                return m_Roles.has_value();
            }

            void ProfileDto::SetRoles(
                    const std::vector<utility::string_t>& Value
                )
            {
                    m_Roles = Value;
                }
                
        
            utility::string_t ProfileDto::GetCreatedBy() const
            {
                    return m_CreatedBy.value();
                }

            bool ProfileDto::HasCreatedBy() const
            {
                return m_CreatedBy.has_value();
            }

            void ProfileDto::SetCreatedBy(
                    const utility::string_t& Value
                )
            {
                    m_CreatedBy = Value;
                }
                
        
            utility::string_t ProfileDto::GetCreatedAt() const
            {
                    return m_CreatedAt.value();
                }

            bool ProfileDto::HasCreatedAt() const
            {
                return m_CreatedAt.has_value();
            }

            void ProfileDto::SetCreatedAt(
                    const utility::string_t& Value
                )
            {
                    m_CreatedAt = Value;
                }
                
        
            utility::string_t ProfileDto::GetUpdatedBy() const
            {
                    return m_UpdatedBy.value();
                }

            bool ProfileDto::HasUpdatedBy() const
            {
                return m_UpdatedBy.has_value();
            }

            void ProfileDto::SetUpdatedBy(
                    const utility::string_t& Value
                )
            {
                    m_UpdatedBy = Value;
                }
                
        
            utility::string_t ProfileDto::GetUpdatedAt() const
            {
                    return m_UpdatedAt.value();
                }

            bool ProfileDto::HasUpdatedAt() const
            {
                return m_UpdatedAt.has_value();
            }

            void ProfileDto::SetUpdatedAt(
                    const utility::string_t& Value
                )
            {
                    m_UpdatedAt = Value;
                }
                
        
            bool ProfileDto::GetLocked() const
            {
                    return m_Locked.value();
                }

            bool ProfileDto::HasLocked() const
            {
                return m_Locked.has_value();
            }

            void ProfileDto::SetLocked(
                    const bool& Value
                )
            {
                    m_Locked = Value;
                }
                
        

    ProfileDtoDataPage::ProfileDtoDataPage() { }
    ProfileDtoDataPage::~ProfileDtoDataPage() { }

    utility::string_t ProfileDtoDataPage::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Items.has_value())
                {
                    rapidjson::Value ItemsValue(
                        TypeToJsonValue(m_Items, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "items",
                        ItemsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Skip.has_value())
                {
                    rapidjson::Value SkipValue(
                        TypeToJsonValue(m_Skip, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "skip",
                        SkipValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Limit.has_value())
                {
                    rapidjson::Value LimitValue(
                        TypeToJsonValue(m_Limit, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "limit",
                        LimitValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ItemCount.has_value())
                {
                    rapidjson::Value ItemCountValue(
                        TypeToJsonValue(m_ItemCount, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "itemCount",
                        ItemCountValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ItemTotalCount.has_value())
                {
                    rapidjson::Value ItemTotalCountValue(
                        TypeToJsonValue(m_ItemTotalCount, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "itemTotalCount",
                        ItemTotalCountValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void ProfileDtoDataPage::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("items"))
                {
                    const rapidjson::Value& ItemsValue = JsonDoc["items"];

                    if (ItemsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ItemsValue, m_Items);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member items is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("skip"))
                {
                    const rapidjson::Value& SkipValue = JsonDoc["skip"];

                    if (SkipValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(SkipValue, m_Skip);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member skip is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("limit"))
                {
                    const rapidjson::Value& LimitValue = JsonDoc["limit"];

                    if (LimitValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(LimitValue, m_Limit);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member limit is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("itemCount"))
                {
                    const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

                    if (ItemCountValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ItemCountValue, m_ItemCount);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member itemCount is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("itemTotalCount"))
                {
                    const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

                    if (ItemTotalCountValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ItemTotalCountValue, m_ItemTotalCount);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member itemTotalCount is null!");
                    }
                    
                }
            
        }

        
            const std::vector<std::shared_ptr<ProfileDto>>&
                    ProfileDtoDataPage::GetItems() const
            {
                    return m_Items.value();
                }

            bool ProfileDtoDataPage::HasItems() const
            {
                return m_Items.has_value();
            }

            void ProfileDtoDataPage::SetItems(
                    const std::vector<std::shared_ptr<ProfileDto>>& Value
                )
            {
                    m_Items = Value;
                }
                
        
            int32_t ProfileDtoDataPage::GetSkip() const
            {
                    return m_Skip.value();
                }

            bool ProfileDtoDataPage::HasSkip() const
            {
                return m_Skip.has_value();
            }

            void ProfileDtoDataPage::SetSkip(int32_t Value)
            {
                    m_Skip = Value;
                }
                
        
            int32_t ProfileDtoDataPage::GetLimit() const
            {
                    return m_Limit.value();
                }

            bool ProfileDtoDataPage::HasLimit() const
            {
                return m_Limit.has_value();
            }

            void ProfileDtoDataPage::SetLimit(int32_t Value)
            {
                    m_Limit = Value;
                }
                
        
            int32_t ProfileDtoDataPage::GetItemCount() const
            {
                    return m_ItemCount.value();
                }

            bool ProfileDtoDataPage::HasItemCount() const
            {
                return m_ItemCount.has_value();
            }

            void ProfileDtoDataPage::SetItemCount(int32_t Value)
            {
                    m_ItemCount = Value;
                }
                
        
            int64_t ProfileDtoDataPage::GetItemTotalCount() const
            {
                    return m_ItemTotalCount.value();
                }

            bool ProfileDtoDataPage::HasItemTotalCount() const
            {
                return m_ItemTotalCount.has_value();
            }

            void ProfileDtoDataPage::SetItemTotalCount(int64_t Value)
            {
                    m_ItemTotalCount = Value;
                }
                
        

    ProfileLiteDto::ProfileLiteDto() { }
    ProfileLiteDto::~ProfileLiteDto() { }

    utility::string_t ProfileLiteDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Id.has_value())
                {
                    rapidjson::Value IdValue(
                        TypeToJsonValue(m_Id, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "id",
                        IdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AvatarId.has_value())
                {
                    rapidjson::Value AvatarIdValue(
                        TypeToJsonValue(m_AvatarId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "avatarId",
                        AvatarIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UserName.has_value())
                {
                    rapidjson::Value UserNameValue(
                        TypeToJsonValue(m_UserName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userName",
                        UserNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_DisplayName.has_value())
                {
                    rapidjson::Value DisplayNameValue(
                        TypeToJsonValue(m_DisplayName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "displayName",
                        DisplayNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Platform.has_value())
                {
                    rapidjson::Value PlatformValue(
                        TypeToJsonValue(m_Platform, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "platform",
                        PlatformValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void ProfileLiteDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("id"))
                {
                    const rapidjson::Value& IdValue = JsonDoc["id"];

                    if (IdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(IdValue, m_Id);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("avatarId"))
                {
                    const rapidjson::Value& AvatarIdValue = JsonDoc["avatarId"];

                    if (AvatarIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AvatarIdValue, m_AvatarId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member avatarId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("userName"))
                {
                    const rapidjson::Value& UserNameValue = JsonDoc["userName"];

                    if (UserNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserNameValue, m_UserName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("displayName"))
                {
                    const rapidjson::Value& DisplayNameValue = JsonDoc["displayName"];

                    if (DisplayNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DisplayNameValue, m_DisplayName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member displayName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("platform"))
                {
                    const rapidjson::Value& PlatformValue = JsonDoc["platform"];

                    if (PlatformValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PlatformValue, m_Platform);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member platform is null!");
                    }
                    
                }
            
        }

        
            utility::string_t ProfileLiteDto::GetId() const
            {
                    return m_Id.value();
                }

            bool ProfileLiteDto::HasId() const
            {
                return m_Id.has_value();
            }

            void ProfileLiteDto::SetId(
                    const utility::string_t& Value
                )
            {
                    m_Id = Value;
                }
                
        
            utility::string_t ProfileLiteDto::GetAvatarId() const
            {
                    return m_AvatarId.value();
                }

            bool ProfileLiteDto::HasAvatarId() const
            {
                return m_AvatarId.has_value();
            }

            void ProfileLiteDto::SetAvatarId(
                    const utility::string_t& Value
                )
            {
                    m_AvatarId = Value;
                }
                
        
            utility::string_t ProfileLiteDto::GetUserName() const
            {
                    return m_UserName.value();
                }

            bool ProfileLiteDto::HasUserName() const
            {
                return m_UserName.has_value();
            }

            void ProfileLiteDto::SetUserName(
                    const utility::string_t& Value
                )
            {
                    m_UserName = Value;
                }
                
        
            utility::string_t ProfileLiteDto::GetDisplayName() const
            {
                    return m_DisplayName.value();
                }

            bool ProfileLiteDto::HasDisplayName() const
            {
                return m_DisplayName.has_value();
            }

            void ProfileLiteDto::SetDisplayName(
                    const utility::string_t& Value
                )
            {
                    m_DisplayName = Value;
                }
                
        
            utility::string_t ProfileLiteDto::GetPlatform() const
            {
                    return m_Platform.value();
                }

            bool ProfileLiteDto::HasPlatform() const
            {
                return m_Platform.has_value();
            }

            void ProfileLiteDto::SetPlatform(
                    const utility::string_t& Value
                )
            {
                    m_Platform = Value;
                }
                
        

    RefreshRequest::RefreshRequest() { }
    RefreshRequest::~RefreshRequest() { }

    utility::string_t RefreshRequest::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_UserId.has_value())
                {
                    rapidjson::Value UserIdValue(
                        TypeToJsonValue(m_UserId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userId",
                        UserIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_RefreshToken.has_value())
                {
                    rapidjson::Value RefreshTokenValue(
                        TypeToJsonValue(m_RefreshToken, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "refreshToken",
                        RefreshTokenValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_DeviceId.has_value())
                {
                    rapidjson::Value DeviceIdValue(
                        TypeToJsonValue(m_DeviceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "deviceId",
                        DeviceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void RefreshRequest::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("userId"))
                {
                    const rapidjson::Value& UserIdValue = JsonDoc["userId"];

                    if (UserIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserIdValue, m_UserId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("refreshToken"))
                {
                    const rapidjson::Value& RefreshTokenValue = JsonDoc["refreshToken"];

                    if (RefreshTokenValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(RefreshTokenValue, m_RefreshToken);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member refreshToken is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("deviceId"))
                {
                    const rapidjson::Value& DeviceIdValue = JsonDoc["deviceId"];

                    if (DeviceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DeviceIdValue, m_DeviceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member deviceId is null!");
                    }
                    
                }
            
        }

        
            utility::string_t RefreshRequest::GetUserId() const
            {
                    return m_UserId.value();
                }

            bool RefreshRequest::HasUserId() const
            {
                return m_UserId.has_value();
            }

            void RefreshRequest::SetUserId(
                    const utility::string_t& Value
                )
            {
                    m_UserId = Value;
                }
                
        
            utility::string_t RefreshRequest::GetRefreshToken() const
            {
                    return m_RefreshToken.value();
                }

            bool RefreshRequest::HasRefreshToken() const
            {
                return m_RefreshToken.has_value();
            }

            void RefreshRequest::SetRefreshToken(
                    const utility::string_t& Value
                )
            {
                    m_RefreshToken = Value;
                }
                
        
            utility::string_t RefreshRequest::GetDeviceId() const
            {
                    return m_DeviceId.value();
                }

            bool RefreshRequest::HasDeviceId() const
            {
                return m_DeviceId.has_value();
            }

            void RefreshRequest::SetDeviceId(
                    const utility::string_t& Value
                )
            {
                    m_DeviceId = Value;
                }
                
        

    SettingsDto::SettingsDto() { }
    SettingsDto::~SettingsDto() { }

    utility::string_t SettingsDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_UserId.has_value())
                {
                    rapidjson::Value UserIdValue(
                        TypeToJsonValue(m_UserId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userId",
                        UserIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Context.has_value())
                {
                    rapidjson::Value ContextValue(
                        TypeToJsonValue(m_Context, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "context",
                        ContextValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Settings.has_value())
                {
                    rapidjson::Value SettingsValue(
                        TypeToJsonValue(m_Settings, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "settings",
                        SettingsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void SettingsDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("userId"))
                {
                    const rapidjson::Value& UserIdValue = JsonDoc["userId"];

                    if (UserIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserIdValue, m_UserId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("context"))
                {
                    const rapidjson::Value& ContextValue = JsonDoc["context"];

                    if (ContextValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ContextValue, m_Context);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member context is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("settings"))
                {
                    const rapidjson::Value& SettingsValue = JsonDoc["settings"];

                    if (SettingsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(SettingsValue, m_Settings);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member settings is null!");
                    }
                    
                }
            
        }

        
            utility::string_t SettingsDto::GetUserId() const
            {
                    return m_UserId.value();
                }

            bool SettingsDto::HasUserId() const
            {
                return m_UserId.has_value();
            }

            void SettingsDto::SetUserId(
                    const utility::string_t& Value
                )
            {
                    m_UserId = Value;
                }
                
        
            utility::string_t SettingsDto::GetContext() const
            {
                    return m_Context.value();
                }

            bool SettingsDto::HasContext() const
            {
                return m_Context.has_value();
            }

            void SettingsDto::SetContext(
                    const utility::string_t& Value
                )
            {
                    m_Context = Value;
                }
                
        
            const std::map<utility::string_t, utility::string_t>&
                    SettingsDto::GetSettings() const
            {
                    return m_Settings.value();
                }

            bool SettingsDto::HasSettings() const
            {
                return m_Settings.has_value();
            }

            void SettingsDto::SetSettings(
                    const std::map<utility::string_t, utility::string_t>& Value
                )
            {
                    m_Settings = Value;
                }
                
        

    SocialProviderInfo::SocialProviderInfo() { }
    SocialProviderInfo::~SocialProviderInfo() { }

    utility::string_t SocialProviderInfo::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_ProviderName.has_value())
                {
                    rapidjson::Value ProviderNameValue(
                        TypeToJsonValue(m_ProviderName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "providerName",
                        ProviderNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ClientId.has_value())
                {
                    rapidjson::Value ClientIdValue(
                        TypeToJsonValue(m_ClientId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "clientId",
                        ClientIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Scopes.has_value())
                {
                    rapidjson::Value ScopesValue(
                        TypeToJsonValue(m_Scopes, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "scopes",
                        ScopesValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AuthorizeEndpoint.has_value())
                {
                    rapidjson::Value AuthorizeEndpointValue(
                        TypeToJsonValue(m_AuthorizeEndpoint, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "authorizeEndpoint",
                        AuthorizeEndpointValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void SocialProviderInfo::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("providerName"))
                {
                    const rapidjson::Value& ProviderNameValue = JsonDoc["providerName"];

                    if (ProviderNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ProviderNameValue, m_ProviderName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member providerName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("clientId"))
                {
                    const rapidjson::Value& ClientIdValue = JsonDoc["clientId"];

                    if (ClientIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ClientIdValue, m_ClientId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member clientId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("scopes"))
                {
                    const rapidjson::Value& ScopesValue = JsonDoc["scopes"];

                    if (ScopesValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ScopesValue, m_Scopes);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member scopes is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("authorizeEndpoint"))
                {
                    const rapidjson::Value& AuthorizeEndpointValue = JsonDoc["authorizeEndpoint"];

                    if (AuthorizeEndpointValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AuthorizeEndpointValue, m_AuthorizeEndpoint);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member authorizeEndpoint is null!");
                    }
                    
                }
            
        }

        
            utility::string_t SocialProviderInfo::GetProviderName() const
            {
                    return m_ProviderName.value();
                }

            bool SocialProviderInfo::HasProviderName() const
            {
                return m_ProviderName.has_value();
            }

            void SocialProviderInfo::SetProviderName(
                    const utility::string_t& Value
                )
            {
                    m_ProviderName = Value;
                }
                
        
            utility::string_t SocialProviderInfo::GetClientId() const
            {
                    return m_ClientId.value();
                }

            bool SocialProviderInfo::HasClientId() const
            {
                return m_ClientId.has_value();
            }

            void SocialProviderInfo::SetClientId(
                    const utility::string_t& Value
                )
            {
                    m_ClientId = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    SocialProviderInfo::GetScopes() const
            {
                    return m_Scopes.value();
                }

            bool SocialProviderInfo::HasScopes() const
            {
                return m_Scopes.has_value();
            }

            void SocialProviderInfo::SetScopes(
                    const std::vector<utility::string_t>& Value
                )
            {
                    m_Scopes = Value;
                }
                
        
            utility::string_t SocialProviderInfo::GetAuthorizeEndpoint() const
            {
                    return m_AuthorizeEndpoint.value();
                }

            bool SocialProviderInfo::HasAuthorizeEndpoint() const
            {
                return m_AuthorizeEndpoint.has_value();
            }

            void SocialProviderInfo::SetAuthorizeEndpoint(
                    const utility::string_t& Value
                )
            {
                    m_AuthorizeEndpoint = Value;
                }
                
        

    UpgradeGuestRequest::UpgradeGuestRequest() { }
    UpgradeGuestRequest::~UpgradeGuestRequest() { }

    utility::string_t UpgradeGuestRequest::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Email.has_value())
                {
                    rapidjson::Value EmailValue(
                        TypeToJsonValue(m_Email, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "email",
                        EmailValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UserName.has_value())
                {
                    rapidjson::Value UserNameValue(
                        TypeToJsonValue(m_UserName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userName",
                        UserNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_DisplayName.has_value())
                {
                    rapidjson::Value DisplayNameValue(
                        TypeToJsonValue(m_DisplayName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "displayName",
                        DisplayNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Password.has_value())
                {
                    rapidjson::Value PasswordValue(
                        TypeToJsonValue(m_Password, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "password",
                        PasswordValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_GuestDeviceId.has_value())
                {
                    rapidjson::Value GuestDeviceIdValue(
                        TypeToJsonValue(m_GuestDeviceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "guestDeviceId",
                        GuestDeviceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_SuppressConfirmationEmail.has_value())
                {
                    rapidjson::Value SuppressConfirmationEmailValue(
                        TypeToJsonValue(m_SuppressConfirmationEmail, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "suppressConfirmationEmail",
                        SuppressConfirmationEmailValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AutoConfirm.has_value())
                {
                    rapidjson::Value AutoConfirmValue(
                        TypeToJsonValue(m_AutoConfirm, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "autoConfirm",
                        AutoConfirmValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_InviteToken.has_value())
                {
                    rapidjson::Value InviteTokenValue(
                        TypeToJsonValue(m_InviteToken, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "inviteToken",
                        InviteTokenValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_RedirectUrl.has_value())
                {
                    rapidjson::Value RedirectUrlValue(
                        TypeToJsonValue(m_RedirectUrl, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "redirectUrl",
                        RedirectUrlValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void UpgradeGuestRequest::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("email"))
                {
                    const rapidjson::Value& EmailValue = JsonDoc["email"];

                    if (EmailValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(EmailValue, m_Email);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member email is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("userName"))
                {
                    const rapidjson::Value& UserNameValue = JsonDoc["userName"];

                    if (UserNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserNameValue, m_UserName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("displayName"))
                {
                    const rapidjson::Value& DisplayNameValue = JsonDoc["displayName"];

                    if (DisplayNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DisplayNameValue, m_DisplayName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member displayName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("password"))
                {
                    const rapidjson::Value& PasswordValue = JsonDoc["password"];

                    if (PasswordValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PasswordValue, m_Password);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member password is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("guestDeviceId"))
                {
                    const rapidjson::Value& GuestDeviceIdValue = JsonDoc["guestDeviceId"];

                    if (GuestDeviceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GuestDeviceIdValue, m_GuestDeviceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member guestDeviceId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("suppressConfirmationEmail"))
                {
                    const rapidjson::Value& SuppressConfirmationEmailValue = JsonDoc["suppressConfirmationEmail"];

                    if (SuppressConfirmationEmailValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(SuppressConfirmationEmailValue, m_SuppressConfirmationEmail);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member suppressConfirmationEmail is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("autoConfirm"))
                {
                    const rapidjson::Value& AutoConfirmValue = JsonDoc["autoConfirm"];

                    if (AutoConfirmValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AutoConfirmValue, m_AutoConfirm);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member autoConfirm is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("inviteToken"))
                {
                    const rapidjson::Value& InviteTokenValue = JsonDoc["inviteToken"];

                    if (InviteTokenValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(InviteTokenValue, m_InviteToken);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member inviteToken is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("redirectUrl"))
                {
                    const rapidjson::Value& RedirectUrlValue = JsonDoc["redirectUrl"];

                    if (RedirectUrlValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(RedirectUrlValue, m_RedirectUrl);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member redirectUrl is null!");
                    }
                    
                }
            
        }

        
            utility::string_t UpgradeGuestRequest::GetEmail() const
            {
                    return m_Email.value();
                }

            bool UpgradeGuestRequest::HasEmail() const
            {
                return m_Email.has_value();
            }

            void UpgradeGuestRequest::SetEmail(
                    const utility::string_t& Value
                )
            {
                    m_Email = Value;
                }
                
        
            utility::string_t UpgradeGuestRequest::GetUserName() const
            {
                    return m_UserName.value();
                }

            bool UpgradeGuestRequest::HasUserName() const
            {
                return m_UserName.has_value();
            }

            void UpgradeGuestRequest::SetUserName(
                    const utility::string_t& Value
                )
            {
                    m_UserName = Value;
                }
                
        
            utility::string_t UpgradeGuestRequest::GetDisplayName() const
            {
                    return m_DisplayName.value();
                }

            bool UpgradeGuestRequest::HasDisplayName() const
            {
                return m_DisplayName.has_value();
            }

            void UpgradeGuestRequest::SetDisplayName(
                    const utility::string_t& Value
                )
            {
                    m_DisplayName = Value;
                }
                
        
            utility::string_t UpgradeGuestRequest::GetPassword() const
            {
                    return m_Password.value();
                }

            bool UpgradeGuestRequest::HasPassword() const
            {
                return m_Password.has_value();
            }

            void UpgradeGuestRequest::SetPassword(
                    const utility::string_t& Value
                )
            {
                    m_Password = Value;
                }
                
        
            utility::string_t UpgradeGuestRequest::GetGuestDeviceId() const
            {
                    return m_GuestDeviceId.value();
                }

            bool UpgradeGuestRequest::HasGuestDeviceId() const
            {
                return m_GuestDeviceId.has_value();
            }

            void UpgradeGuestRequest::SetGuestDeviceId(
                    const utility::string_t& Value
                )
            {
                    m_GuestDeviceId = Value;
                }
                
        
            bool UpgradeGuestRequest::GetSuppressConfirmationEmail() const
            {
                    return m_SuppressConfirmationEmail.value();
                }

            bool UpgradeGuestRequest::HasSuppressConfirmationEmail() const
            {
                return m_SuppressConfirmationEmail.has_value();
            }

            void UpgradeGuestRequest::SetSuppressConfirmationEmail(
                    const bool& Value
                )
            {
                    m_SuppressConfirmationEmail = Value;
                }
                
        
            bool UpgradeGuestRequest::GetAutoConfirm() const
            {
                    return m_AutoConfirm.value();
                }

            bool UpgradeGuestRequest::HasAutoConfirm() const
            {
                return m_AutoConfirm.has_value();
            }

            void UpgradeGuestRequest::SetAutoConfirm(
                    const bool& Value
                )
            {
                    m_AutoConfirm = Value;
                }
                
        
            utility::string_t UpgradeGuestRequest::GetInviteToken() const
            {
                    return m_InviteToken.value();
                }

            bool UpgradeGuestRequest::HasInviteToken() const
            {
                return m_InviteToken.has_value();
            }

            void UpgradeGuestRequest::SetInviteToken(
                    const utility::string_t& Value
                )
            {
                    m_InviteToken = Value;
                }
                
        
            utility::string_t UpgradeGuestRequest::GetRedirectUrl() const
            {
                    return m_RedirectUrl.value();
                }

            bool UpgradeGuestRequest::HasRedirectUrl() const
            {
                return m_RedirectUrl.has_value();
            }

            void UpgradeGuestRequest::SetRedirectUrl(
                    const utility::string_t& Value
                )
            {
                    m_RedirectUrl = Value;
                }
                
        

    UpgradeGuestSocialRequest::UpgradeGuestSocialRequest() { }
    UpgradeGuestSocialRequest::~UpgradeGuestSocialRequest() { }

    utility::string_t UpgradeGuestSocialRequest::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Provider.has_value())
                {
                    rapidjson::Value ProviderValue(
                        TypeToJsonValue(m_Provider, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "provider",
                        ProviderValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Token.has_value())
                {
                    rapidjson::Value TokenValue(
                        TypeToJsonValue(m_Token, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "token",
                        TokenValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UserName.has_value())
                {
                    rapidjson::Value UserNameValue(
                        TypeToJsonValue(m_UserName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userName",
                        UserNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_DisplayName.has_value())
                {
                    rapidjson::Value DisplayNameValue(
                        TypeToJsonValue(m_DisplayName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "displayName",
                        DisplayNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Password.has_value())
                {
                    rapidjson::Value PasswordValue(
                        TypeToJsonValue(m_Password, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "password",
                        PasswordValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_GuestDeviceId.has_value())
                {
                    rapidjson::Value GuestDeviceIdValue(
                        TypeToJsonValue(m_GuestDeviceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "guestDeviceId",
                        GuestDeviceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_RedirectUrl.has_value())
                {
                    rapidjson::Value RedirectUrlValue(
                        TypeToJsonValue(m_RedirectUrl, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "redirectUrl",
                        RedirectUrlValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_OAuthRedirectUri.has_value())
                {
                    rapidjson::Value OAuthRedirectUriValue(
                        TypeToJsonValue(m_OAuthRedirectUri, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "oAuthRedirectUri",
                        OAuthRedirectUriValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void UpgradeGuestSocialRequest::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("provider"))
                {
                    const rapidjson::Value& ProviderValue = JsonDoc["provider"];

                    if (ProviderValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ProviderValue, m_Provider);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member provider is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("token"))
                {
                    const rapidjson::Value& TokenValue = JsonDoc["token"];

                    if (TokenValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(TokenValue, m_Token);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member token is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("userName"))
                {
                    const rapidjson::Value& UserNameValue = JsonDoc["userName"];

                    if (UserNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserNameValue, m_UserName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("displayName"))
                {
                    const rapidjson::Value& DisplayNameValue = JsonDoc["displayName"];

                    if (DisplayNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(DisplayNameValue, m_DisplayName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member displayName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("password"))
                {
                    const rapidjson::Value& PasswordValue = JsonDoc["password"];

                    if (PasswordValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PasswordValue, m_Password);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member password is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("guestDeviceId"))
                {
                    const rapidjson::Value& GuestDeviceIdValue = JsonDoc["guestDeviceId"];

                    if (GuestDeviceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GuestDeviceIdValue, m_GuestDeviceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member guestDeviceId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("redirectUrl"))
                {
                    const rapidjson::Value& RedirectUrlValue = JsonDoc["redirectUrl"];

                    if (RedirectUrlValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(RedirectUrlValue, m_RedirectUrl);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member redirectUrl is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("oAuthRedirectUri"))
                {
                    const rapidjson::Value& OAuthRedirectUriValue = JsonDoc["oAuthRedirectUri"];

                    if (OAuthRedirectUriValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(OAuthRedirectUriValue, m_OAuthRedirectUri);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member oAuthRedirectUri is null!");
                    }
                    
                }
            
        }

        
            utility::string_t UpgradeGuestSocialRequest::GetProvider() const
            {
                    return m_Provider.value();
                }

            bool UpgradeGuestSocialRequest::HasProvider() const
            {
                return m_Provider.has_value();
            }

            void UpgradeGuestSocialRequest::SetProvider(
                    const utility::string_t& Value
                )
            {
                    m_Provider = Value;
                }
                
        
            utility::string_t UpgradeGuestSocialRequest::GetToken() const
            {
                    return m_Token.value();
                }

            bool UpgradeGuestSocialRequest::HasToken() const
            {
                return m_Token.has_value();
            }

            void UpgradeGuestSocialRequest::SetToken(
                    const utility::string_t& Value
                )
            {
                    m_Token = Value;
                }
                
        
            utility::string_t UpgradeGuestSocialRequest::GetUserName() const
            {
                    return m_UserName.value();
                }

            bool UpgradeGuestSocialRequest::HasUserName() const
            {
                return m_UserName.has_value();
            }

            void UpgradeGuestSocialRequest::SetUserName(
                    const utility::string_t& Value
                )
            {
                    m_UserName = Value;
                }
                
        
            utility::string_t UpgradeGuestSocialRequest::GetDisplayName() const
            {
                    return m_DisplayName.value();
                }

            bool UpgradeGuestSocialRequest::HasDisplayName() const
            {
                return m_DisplayName.has_value();
            }

            void UpgradeGuestSocialRequest::SetDisplayName(
                    const utility::string_t& Value
                )
            {
                    m_DisplayName = Value;
                }
                
        
            utility::string_t UpgradeGuestSocialRequest::GetPassword() const
            {
                    return m_Password.value();
                }

            bool UpgradeGuestSocialRequest::HasPassword() const
            {
                return m_Password.has_value();
            }

            void UpgradeGuestSocialRequest::SetPassword(
                    const utility::string_t& Value
                )
            {
                    m_Password = Value;
                }
                
        
            utility::string_t UpgradeGuestSocialRequest::GetGuestDeviceId() const
            {
                    return m_GuestDeviceId.value();
                }

            bool UpgradeGuestSocialRequest::HasGuestDeviceId() const
            {
                return m_GuestDeviceId.has_value();
            }

            void UpgradeGuestSocialRequest::SetGuestDeviceId(
                    const utility::string_t& Value
                )
            {
                    m_GuestDeviceId = Value;
                }
                
        
            utility::string_t UpgradeGuestSocialRequest::GetRedirectUrl() const
            {
                    return m_RedirectUrl.value();
                }

            bool UpgradeGuestSocialRequest::HasRedirectUrl() const
            {
                return m_RedirectUrl.has_value();
            }

            void UpgradeGuestSocialRequest::SetRedirectUrl(
                    const utility::string_t& Value
                )
            {
                    m_RedirectUrl = Value;
                }
                
        
            utility::string_t UpgradeGuestSocialRequest::GetOAuthRedirectUri() const
            {
                    return m_OAuthRedirectUri.value();
                }

            bool UpgradeGuestSocialRequest::HasOAuthRedirectUri() const
            {
                return m_OAuthRedirectUri.has_value();
            }

            void UpgradeGuestSocialRequest::SetOAuthRedirectUri(
                    const utility::string_t& Value
                )
            {
                    m_OAuthRedirectUri = Value;
                }
                
        

    UserRolesDto::UserRolesDto() { }
    UserRolesDto::~UserRolesDto() { }

    utility::string_t UserRolesDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_UserId.has_value())
                {
                    rapidjson::Value UserIdValue(
                        TypeToJsonValue(m_UserId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "userId",
                        UserIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Roles.has_value())
                {
                    rapidjson::Value RolesValue(
                        TypeToJsonValue(m_Roles, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "roles",
                        RolesValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void UserRolesDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("userId"))
                {
                    const rapidjson::Value& UserIdValue = JsonDoc["userId"];

                    if (UserIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UserIdValue, m_UserId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("roles"))
                {
                    const rapidjson::Value& RolesValue = JsonDoc["roles"];

                    if (RolesValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(RolesValue, m_Roles);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member roles is null!");
                    }
                    
                }
            
        }

        
            utility::string_t UserRolesDto::GetUserId() const
            {
                    return m_UserId.value();
                }

            bool UserRolesDto::HasUserId() const
            {
                return m_UserId.has_value();
            }

            void UserRolesDto::SetUserId(
                    const utility::string_t& Value
                )
            {
                    m_UserId = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    UserRolesDto::GetRoles() const
            {
                    return m_Roles.value();
                }

            bool UserRolesDto::HasRoles() const
            {
                return m_Roles.has_value();
            }

            void UserRolesDto::SetRoles(
                    const std::vector<utility::string_t>& Value
                )
            {
                    m_Roles = Value;
                }
                
        


} // namespace csp::services::userservice