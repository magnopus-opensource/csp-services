

#include "Dto.h"

#include "Debug/Logging.h"
#include "Web/Json.h"
#include "Web/Json_HttpPayload.h"

#include <optional>


using namespace csp::web;


namespace csp::services::generated::userservice
{


ApplicationSettingsDto::ApplicationSettingsDto()
{
}
ApplicationSettingsDto::~ApplicationSettingsDto()
{
}

utility::string_t ApplicationSettingsDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ApplicationName.has_value())
	{
		rapidjson::Value ApplicationNameValue(TypeToJsonValue(m_ApplicationName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("applicationName", ApplicationNameValue, JsonDoc.GetAllocator());
	}

	if (m_Context.has_value())
	{
		rapidjson::Value ContextValue(TypeToJsonValue(m_Context, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("context", ContextValue, JsonDoc.GetAllocator());
	}

	if (m_Settings.has_value())
	{
		rapidjson::Value SettingsValue(TypeToJsonValue(m_Settings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("settings", SettingsValue, JsonDoc.GetAllocator());
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
	}

	if (JsonDoc.HasMember("context"))
	{
		const rapidjson::Value& ContextValue = JsonDoc["context"];

		if (ContextValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ContextValue, m_Context);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member settings is null!");
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
utility::string_t ApplicationSettingsDto::GetContext() const
{
	return m_Context.value();
}

bool ApplicationSettingsDto::HasContext() const
{
	return m_Context.has_value();
}
const std::map<utility::string_t, utility::string_t>& ApplicationSettingsDto::GetSettings() const
{
	return m_Settings.value();
}

bool ApplicationSettingsDto::HasSettings() const
{
	return m_Settings.has_value();
}
void ApplicationSettingsDto::SetSettings(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Settings = Value;
}

AuthDto::AuthDto()
{
}
AuthDto::~AuthDto()
{
}

utility::string_t AuthDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_AccessToken.has_value())
	{
		rapidjson::Value AccessTokenValue(TypeToJsonValue(m_AccessToken, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("accessToken", AccessTokenValue, JsonDoc.GetAllocator());
	}

	if (m_AccessTokenExpiresAt.has_value())
	{
		rapidjson::Value AccessTokenExpiresAtValue(TypeToJsonValue(m_AccessTokenExpiresAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("accessTokenExpiresAt", AccessTokenExpiresAtValue, JsonDoc.GetAllocator());
	}

	if (m_RefreshToken.has_value())
	{
		rapidjson::Value RefreshTokenValue(TypeToJsonValue(m_RefreshToken, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("refreshToken", RefreshTokenValue, JsonDoc.GetAllocator());
	}

	if (m_RefreshTokenExpiresAt.has_value())
	{
		rapidjson::Value RefreshTokenExpiresAtValue(TypeToJsonValue(m_RefreshTokenExpiresAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("refreshTokenExpiresAt", RefreshTokenExpiresAtValue, JsonDoc.GetAllocator());
	}

	if (m_OrganizationIds.has_value())
	{
		rapidjson::Value OrganizationIdsValue(TypeToJsonValue(m_OrganizationIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("organizationIds", OrganizationIdsValue, JsonDoc.GetAllocator());
	}

	if (m_DeviceId.has_value())
	{
		rapidjson::Value DeviceIdValue(TypeToJsonValue(m_DeviceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deviceId", DeviceIdValue, JsonDoc.GetAllocator());
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
	}

	if (JsonDoc.HasMember("accessToken"))
	{
		const rapidjson::Value& AccessTokenValue = JsonDoc["accessToken"];

		if (AccessTokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AccessTokenValue, m_AccessToken);
		}
	}

	if (JsonDoc.HasMember("accessTokenExpiresAt"))
	{
		const rapidjson::Value& AccessTokenExpiresAtValue = JsonDoc["accessTokenExpiresAt"];

		if (AccessTokenExpiresAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AccessTokenExpiresAtValue, m_AccessTokenExpiresAt);
		}
	}

	if (JsonDoc.HasMember("refreshToken"))
	{
		const rapidjson::Value& RefreshTokenValue = JsonDoc["refreshToken"];

		if (RefreshTokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RefreshTokenValue, m_RefreshToken);
		}
	}

	if (JsonDoc.HasMember("refreshTokenExpiresAt"))
	{
		const rapidjson::Value& RefreshTokenExpiresAtValue = JsonDoc["refreshTokenExpiresAt"];

		if (RefreshTokenExpiresAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RefreshTokenExpiresAtValue, m_RefreshTokenExpiresAt);
		}
	}

	if (JsonDoc.HasMember("organizationIds"))
	{
		const rapidjson::Value& OrganizationIdsValue = JsonDoc["organizationIds"];

		if (OrganizationIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OrganizationIdsValue, m_OrganizationIds);
		}
	}

	if (JsonDoc.HasMember("deviceId"))
	{
		const rapidjson::Value& DeviceIdValue = JsonDoc["deviceId"];

		if (DeviceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeviceIdValue, m_DeviceId);
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
void AuthDto::SetUserId(const utility::string_t& Value)
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
void AuthDto::SetAccessToken(const utility::string_t& Value)
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
void AuthDto::SetAccessTokenExpiresAt(const utility::string_t& Value)
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
void AuthDto::SetRefreshToken(const utility::string_t& Value)
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
void AuthDto::SetRefreshTokenExpiresAt(const utility::string_t& Value)
{
	m_RefreshTokenExpiresAt = Value;
}
const std::vector<utility::string_t>& AuthDto::GetOrganizationIds() const
{
	return m_OrganizationIds.value();
}

bool AuthDto::HasOrganizationIds() const
{
	return m_OrganizationIds.has_value();
}
void AuthDto::SetOrganizationIds(const std::vector<utility::string_t>& Value)
{
	m_OrganizationIds = Value;
}
utility::string_t AuthDto::GetDeviceId() const
{
	return m_DeviceId.value();
}

bool AuthDto::HasDeviceId() const
{
	return m_DeviceId.has_value();
}
void AuthDto::SetDeviceId(const utility::string_t& Value)
{
	m_DeviceId = Value;
}

AvatarManifestDto::AvatarManifestDto()
{
}
AvatarManifestDto::~AvatarManifestDto()
{
}

utility::string_t AvatarManifestDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_Gender.has_value())
	{
		rapidjson::Value GenderValue(TypeToJsonValue(m_Gender, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gender", GenderValue, JsonDoc.GetAllocator());
	}

	if (m_ExternalUri.has_value())
	{
		rapidjson::Value ExternalUriValue(TypeToJsonValue(m_ExternalUri, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("externalUri", ExternalUriValue, JsonDoc.GetAllocator());
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
	}

	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member gender is null!");
		}
	}

	if (JsonDoc.HasMember("externalUri"))
	{
		const rapidjson::Value& ExternalUriValue = JsonDoc["externalUri"];

		if (ExternalUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExternalUriValue, m_ExternalUri);
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
utility::string_t AvatarManifestDto::GetUserId() const
{
	return m_UserId.value();
}

bool AvatarManifestDto::HasUserId() const
{
	return m_UserId.has_value();
}
std::shared_ptr<Gender> AvatarManifestDto::GetGender() const
{
	return m_Gender.value();
}

bool AvatarManifestDto::HasGender() const
{
	return m_Gender.has_value();
}
void AvatarManifestDto::SetGender(const std::shared_ptr<Gender>& Value)
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
void AvatarManifestDto::SetExternalUri(const utility::string_t& Value)
{
	m_ExternalUri = Value;
}

CreateUserRequest::CreateUserRequest()
{
}
CreateUserRequest::~CreateUserRequest()
{
}

utility::string_t CreateUserRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Tenant.has_value())
	{
		rapidjson::Value TenantValue(TypeToJsonValue(m_Tenant, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenant", TenantValue, JsonDoc.GetAllocator());
	}

	if (m_Email.has_value())
	{
		rapidjson::Value EmailValue(TypeToJsonValue(m_Email, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("email", EmailValue, JsonDoc.GetAllocator());
	}

	if (m_Password.has_value())
	{
		rapidjson::Value PasswordValue(TypeToJsonValue(m_Password, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("password", PasswordValue, JsonDoc.GetAllocator());
	}

	if (m_UserName.has_value())
	{
		rapidjson::Value UserNameValue(TypeToJsonValue(m_UserName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userName", UserNameValue, JsonDoc.GetAllocator());
	}

	if (m_DisplayName.has_value())
	{
		rapidjson::Value DisplayNameValue(TypeToJsonValue(m_DisplayName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("displayName", DisplayNameValue, JsonDoc.GetAllocator());
	}

	if (m_GuestDeviceId.has_value())
	{
		rapidjson::Value GuestDeviceIdValue(TypeToJsonValue(m_GuestDeviceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("guestDeviceId", GuestDeviceIdValue, JsonDoc.GetAllocator());
	}

	if (m_AvatarId.has_value())
	{
		rapidjson::Value AvatarIdValue(TypeToJsonValue(m_AvatarId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("avatarId", AvatarIdValue, JsonDoc.GetAllocator());
	}

	if (m_InviteToken.has_value())
	{
		rapidjson::Value InviteTokenValue(TypeToJsonValue(m_InviteToken, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("inviteToken", InviteTokenValue, JsonDoc.GetAllocator());
	}

	if (m_RedirectUrl.has_value())
	{
		rapidjson::Value RedirectUrlValue(TypeToJsonValue(m_RedirectUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("redirectUrl", RedirectUrlValue, JsonDoc.GetAllocator());
	}

	if (m_VerifiedAgeEighteen.has_value())
	{
		rapidjson::Value VerifiedAgeEighteenValue(TypeToJsonValue(m_VerifiedAgeEighteen, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("verifiedAgeEighteen", VerifiedAgeEighteenValue, JsonDoc.GetAllocator());
	}

	if (m_InitialSettings.has_value())
	{
		rapidjson::Value InitialSettingsValue(TypeToJsonValue(m_InitialSettings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("initialSettings", InitialSettingsValue, JsonDoc.GetAllocator());
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
	}

	if (JsonDoc.HasMember("email"))
	{
		const rapidjson::Value& EmailValue = JsonDoc["email"];

		if (EmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EmailValue, m_Email);
		}
	}

	if (JsonDoc.HasMember("password"))
	{
		const rapidjson::Value& PasswordValue = JsonDoc["password"];

		if (PasswordValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PasswordValue, m_Password);
		}
	}

	if (JsonDoc.HasMember("userName"))
	{
		const rapidjson::Value& UserNameValue = JsonDoc["userName"];

		if (UserNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserNameValue, m_UserName);
		}
	}

	if (JsonDoc.HasMember("displayName"))
	{
		const rapidjson::Value& DisplayNameValue = JsonDoc["displayName"];

		if (DisplayNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DisplayNameValue, m_DisplayName);
		}
	}

	if (JsonDoc.HasMember("guestDeviceId"))
	{
		const rapidjson::Value& GuestDeviceIdValue = JsonDoc["guestDeviceId"];

		if (GuestDeviceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GuestDeviceIdValue, m_GuestDeviceId);
		}
	}

	if (JsonDoc.HasMember("avatarId"))
	{
		const rapidjson::Value& AvatarIdValue = JsonDoc["avatarId"];

		if (AvatarIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AvatarIdValue, m_AvatarId);
		}
	}

	if (JsonDoc.HasMember("inviteToken"))
	{
		const rapidjson::Value& InviteTokenValue = JsonDoc["inviteToken"];

		if (InviteTokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(InviteTokenValue, m_InviteToken);
		}
	}

	if (JsonDoc.HasMember("redirectUrl"))
	{
		const rapidjson::Value& RedirectUrlValue = JsonDoc["redirectUrl"];

		if (RedirectUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RedirectUrlValue, m_RedirectUrl);
		}
	}

	if (JsonDoc.HasMember("verifiedAgeEighteen"))
	{
		const rapidjson::Value& VerifiedAgeEighteenValue = JsonDoc["verifiedAgeEighteen"];

		if (VerifiedAgeEighteenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VerifiedAgeEighteenValue, m_VerifiedAgeEighteen);
		}
	}

	if (JsonDoc.HasMember("initialSettings"))
	{
		const rapidjson::Value& InitialSettingsValue = JsonDoc["initialSettings"];

		if (InitialSettingsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(InitialSettingsValue, m_InitialSettings);
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
void CreateUserRequest::SetTenant(const utility::string_t& Value)
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
void CreateUserRequest::SetEmail(const utility::string_t& Value)
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
void CreateUserRequest::SetPassword(const utility::string_t& Value)
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
void CreateUserRequest::SetUserName(const utility::string_t& Value)
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
void CreateUserRequest::SetDisplayName(const utility::string_t& Value)
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
void CreateUserRequest::SetGuestDeviceId(const utility::string_t& Value)
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
void CreateUserRequest::SetAvatarId(const utility::string_t& Value)
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
void CreateUserRequest::SetInviteToken(const utility::string_t& Value)
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
void CreateUserRequest::SetRedirectUrl(const utility::string_t& Value)
{
	m_RedirectUrl = Value;
}
bool CreateUserRequest::GetVerifiedAgeEighteen() const
{
	return m_VerifiedAgeEighteen.value();
}

bool CreateUserRequest::HasVerifiedAgeEighteen() const
{
	return m_VerifiedAgeEighteen.has_value();
}
void CreateUserRequest::SetVerifiedAgeEighteen(const bool& Value)
{
	m_VerifiedAgeEighteen = Value;
}
const std::vector<std::shared_ptr<InitialSettingsDto>>& CreateUserRequest::GetInitialSettings() const
{
	return m_InitialSettings.value();
}

bool CreateUserRequest::HasInitialSettings() const
{
	return m_InitialSettings.has_value();
}
void CreateUserRequest::SetInitialSettings(const std::vector<std::shared_ptr<InitialSettingsDto>>& Value)
{
	m_InitialSettings = Value;
}

CreateUserSocialRequest::CreateUserSocialRequest()
{
}
CreateUserSocialRequest::~CreateUserSocialRequest()
{
}

utility::string_t CreateUserSocialRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Tenant.has_value())
	{
		rapidjson::Value TenantValue(TypeToJsonValue(m_Tenant, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenant", TenantValue, JsonDoc.GetAllocator());
	}

	if (m_Provider.has_value())
	{
		rapidjson::Value ProviderValue(TypeToJsonValue(m_Provider, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("provider", ProviderValue, JsonDoc.GetAllocator());
	}

	if (m_Token.has_value())
	{
		rapidjson::Value TokenValue(TypeToJsonValue(m_Token, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("token", TokenValue, JsonDoc.GetAllocator());
	}

	if (m_Password.has_value())
	{
		rapidjson::Value PasswordValue(TypeToJsonValue(m_Password, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("password", PasswordValue, JsonDoc.GetAllocator());
	}

	if (m_UserName.has_value())
	{
		rapidjson::Value UserNameValue(TypeToJsonValue(m_UserName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userName", UserNameValue, JsonDoc.GetAllocator());
	}

	if (m_DisplayName.has_value())
	{
		rapidjson::Value DisplayNameValue(TypeToJsonValue(m_DisplayName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("displayName", DisplayNameValue, JsonDoc.GetAllocator());
	}

	if (m_AvatarId.has_value())
	{
		rapidjson::Value AvatarIdValue(TypeToJsonValue(m_AvatarId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("avatarId", AvatarIdValue, JsonDoc.GetAllocator());
	}

	if (m_InviteToken.has_value())
	{
		rapidjson::Value InviteTokenValue(TypeToJsonValue(m_InviteToken, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("inviteToken", InviteTokenValue, JsonDoc.GetAllocator());
	}

	if (m_RedirectUrl.has_value())
	{
		rapidjson::Value RedirectUrlValue(TypeToJsonValue(m_RedirectUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("redirectUrl", RedirectUrlValue, JsonDoc.GetAllocator());
	}

	if (m_VerifiedAgeEighteen.has_value())
	{
		rapidjson::Value VerifiedAgeEighteenValue(TypeToJsonValue(m_VerifiedAgeEighteen, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("verifiedAgeEighteen", VerifiedAgeEighteenValue, JsonDoc.GetAllocator());
	}

	if (m_OAuthRedirectUri.has_value())
	{
		rapidjson::Value OAuthRedirectUriValue(TypeToJsonValue(m_OAuthRedirectUri, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("oAuthRedirectUri", OAuthRedirectUriValue, JsonDoc.GetAllocator());
	}

	if (m_OptionalProviderUserId.has_value())
	{
		rapidjson::Value OptionalProviderUserIdValue(TypeToJsonValue(m_OptionalProviderUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("optionalProviderUserId", OptionalProviderUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_InitialSettings.has_value())
	{
		rapidjson::Value InitialSettingsValue(TypeToJsonValue(m_InitialSettings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("initialSettings", InitialSettingsValue, JsonDoc.GetAllocator());
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member provider is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member token is null!");
		}
	}

	if (JsonDoc.HasMember("password"))
	{
		const rapidjson::Value& PasswordValue = JsonDoc["password"];

		if (PasswordValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PasswordValue, m_Password);
		}
	}

	if (JsonDoc.HasMember("userName"))
	{
		const rapidjson::Value& UserNameValue = JsonDoc["userName"];

		if (UserNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserNameValue, m_UserName);
		}
	}

	if (JsonDoc.HasMember("displayName"))
	{
		const rapidjson::Value& DisplayNameValue = JsonDoc["displayName"];

		if (DisplayNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DisplayNameValue, m_DisplayName);
		}
	}

	if (JsonDoc.HasMember("avatarId"))
	{
		const rapidjson::Value& AvatarIdValue = JsonDoc["avatarId"];

		if (AvatarIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AvatarIdValue, m_AvatarId);
		}
	}

	if (JsonDoc.HasMember("inviteToken"))
	{
		const rapidjson::Value& InviteTokenValue = JsonDoc["inviteToken"];

		if (InviteTokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(InviteTokenValue, m_InviteToken);
		}
	}

	if (JsonDoc.HasMember("redirectUrl"))
	{
		const rapidjson::Value& RedirectUrlValue = JsonDoc["redirectUrl"];

		if (RedirectUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RedirectUrlValue, m_RedirectUrl);
		}
	}

	if (JsonDoc.HasMember("verifiedAgeEighteen"))
	{
		const rapidjson::Value& VerifiedAgeEighteenValue = JsonDoc["verifiedAgeEighteen"];

		if (VerifiedAgeEighteenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VerifiedAgeEighteenValue, m_VerifiedAgeEighteen);
		}
	}

	if (JsonDoc.HasMember("oAuthRedirectUri"))
	{
		const rapidjson::Value& OAuthRedirectUriValue = JsonDoc["oAuthRedirectUri"];

		if (OAuthRedirectUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OAuthRedirectUriValue, m_OAuthRedirectUri);
		}
	}

	if (JsonDoc.HasMember("optionalProviderUserId"))
	{
		const rapidjson::Value& OptionalProviderUserIdValue = JsonDoc["optionalProviderUserId"];

		if (OptionalProviderUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OptionalProviderUserIdValue, m_OptionalProviderUserId);
		}
	}

	if (JsonDoc.HasMember("initialSettings"))
	{
		const rapidjson::Value& InitialSettingsValue = JsonDoc["initialSettings"];

		if (InitialSettingsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(InitialSettingsValue, m_InitialSettings);
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
void CreateUserSocialRequest::SetTenant(const utility::string_t& Value)
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
void CreateUserSocialRequest::SetProvider(const utility::string_t& Value)
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
void CreateUserSocialRequest::SetToken(const utility::string_t& Value)
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
void CreateUserSocialRequest::SetPassword(const utility::string_t& Value)
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
void CreateUserSocialRequest::SetUserName(const utility::string_t& Value)
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
void CreateUserSocialRequest::SetDisplayName(const utility::string_t& Value)
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
void CreateUserSocialRequest::SetAvatarId(const utility::string_t& Value)
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
void CreateUserSocialRequest::SetInviteToken(const utility::string_t& Value)
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
void CreateUserSocialRequest::SetRedirectUrl(const utility::string_t& Value)
{
	m_RedirectUrl = Value;
}
bool CreateUserSocialRequest::GetVerifiedAgeEighteen() const
{
	return m_VerifiedAgeEighteen.value();
}

bool CreateUserSocialRequest::HasVerifiedAgeEighteen() const
{
	return m_VerifiedAgeEighteen.has_value();
}
void CreateUserSocialRequest::SetVerifiedAgeEighteen(const bool& Value)
{
	m_VerifiedAgeEighteen = Value;
}
utility::string_t CreateUserSocialRequest::GetOAuthRedirectUri() const
{
	return m_OAuthRedirectUri.value();
}

bool CreateUserSocialRequest::HasOAuthRedirectUri() const
{
	return m_OAuthRedirectUri.has_value();
}
void CreateUserSocialRequest::SetOAuthRedirectUri(const utility::string_t& Value)
{
	m_OAuthRedirectUri = Value;
}
utility::string_t CreateUserSocialRequest::GetOptionalProviderUserId() const
{
	return m_OptionalProviderUserId.value();
}

bool CreateUserSocialRequest::HasOptionalProviderUserId() const
{
	return m_OptionalProviderUserId.has_value();
}
void CreateUserSocialRequest::SetOptionalProviderUserId(const utility::string_t& Value)
{
	m_OptionalProviderUserId = Value;
}
const std::vector<std::shared_ptr<InitialSettingsDto>>& CreateUserSocialRequest::GetInitialSettings() const
{
	return m_InitialSettings.value();
}

bool CreateUserSocialRequest::HasInitialSettings() const
{
	return m_InitialSettings.has_value();
}
void CreateUserSocialRequest::SetInitialSettings(const std::vector<std::shared_ptr<InitialSettingsDto>>& Value)
{
	m_InitialSettings = Value;
}

EquipItemDto::EquipItemDto()
{
}
EquipItemDto::~EquipItemDto()
{
}

utility::string_t EquipItemDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_IsEquipped.has_value())
	{
		rapidjson::Value IsEquippedValue(TypeToJsonValue(m_IsEquipped, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isEquipped", IsEquippedValue, JsonDoc.GetAllocator());
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isEquipped is null!");
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
void EquipItemDto::SetIsEquipped(const bool& Value)
{
	m_IsEquipped = Value;
}

ForgotPasswordRequest::ForgotPasswordRequest()
{
}
ForgotPasswordRequest::~ForgotPasswordRequest()
{
}

utility::string_t ForgotPasswordRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Tenant.has_value())
	{
		rapidjson::Value TenantValue(TypeToJsonValue(m_Tenant, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenant", TenantValue, JsonDoc.GetAllocator());
	}

	if (m_Email.has_value())
	{
		rapidjson::Value EmailValue(TypeToJsonValue(m_Email, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("email", EmailValue, JsonDoc.GetAllocator());
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member email is null!");
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
void ForgotPasswordRequest::SetTenant(const utility::string_t& Value)
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
void ForgotPasswordRequest::SetEmail(const utility::string_t& Value)
{
	m_Email = Value;
}

Gender::Gender()
{
}
Gender::~Gender()
{
}

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

GroupDto::GroupDto()
{
}
GroupDto::~GroupDto()
{
}

utility::string_t GroupDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedBy.has_value())
	{
		rapidjson::Value CreatedByValue(TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdBy", CreatedByValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_GroupOwnerId.has_value())
	{
		rapidjson::Value GroupOwnerIdValue(TypeToJsonValue(m_GroupOwnerId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupOwnerId", GroupOwnerIdValue, JsonDoc.GetAllocator());
	}

	if (m_GroupCode.has_value())
	{
		rapidjson::Value GroupCodeValue(TypeToJsonValue(m_GroupCode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupCode", GroupCodeValue, JsonDoc.GetAllocator());
	}

	if (m_GroupType.has_value())
	{
		rapidjson::Value GroupTypeValue(TypeToJsonValue(m_GroupType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupType", GroupTypeValue, JsonDoc.GetAllocator());
	}

	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_Description.has_value())
	{
		rapidjson::Value DescriptionValue(TypeToJsonValue(m_Description, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("description", DescriptionValue, JsonDoc.GetAllocator());
	}

	if (m_Users.has_value())
	{
		rapidjson::Value UsersValue(TypeToJsonValue(m_Users, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("users", UsersValue, JsonDoc.GetAllocator());
	}

	if (m_BannedUsers.has_value())
	{
		rapidjson::Value BannedUsersValue(TypeToJsonValue(m_BannedUsers, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("bannedUsers", BannedUsersValue, JsonDoc.GetAllocator());
	}

	if (m_Moderators.has_value())
	{
		rapidjson::Value ModeratorsValue(TypeToJsonValue(m_Moderators, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("moderators", ModeratorsValue, JsonDoc.GetAllocator());
	}

	if (m_Discoverable.has_value())
	{
		rapidjson::Value DiscoverableValue(TypeToJsonValue(m_Discoverable, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("discoverable", DiscoverableValue, JsonDoc.GetAllocator());
	}

	if (m_AutoModerator.has_value())
	{
		rapidjson::Value AutoModeratorValue(TypeToJsonValue(m_AutoModerator, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("autoModerator", AutoModeratorValue, JsonDoc.GetAllocator());
	}

	if (m_RequiresInvite.has_value())
	{
		rapidjson::Value RequiresInviteValue(TypeToJsonValue(m_RequiresInvite, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requiresInvite", RequiresInviteValue, JsonDoc.GetAllocator());
	}

	if (m_Archived.has_value())
	{
		rapidjson::Value ArchivedValue(TypeToJsonValue(m_Archived, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("archived", ArchivedValue, JsonDoc.GetAllocator());
	}

	if (m_OrganizationId.has_value())
	{
		rapidjson::Value OrganizationIdValue(TypeToJsonValue(m_OrganizationId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("organizationId", OrganizationIdValue, JsonDoc.GetAllocator());
	}

	if (m_IsCurrentUserOwner.has_value())
	{
		rapidjson::Value IsCurrentUserOwnerValue(TypeToJsonValue(m_IsCurrentUserOwner, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isCurrentUserOwner", IsCurrentUserOwnerValue, JsonDoc.GetAllocator());
	}

	if (m_IsCurrentUserMember.has_value())
	{
		rapidjson::Value IsCurrentUserMemberValue(TypeToJsonValue(m_IsCurrentUserMember, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isCurrentUserMember", IsCurrentUserMemberValue, JsonDoc.GetAllocator());
	}

	if (m_IsCurrentUserModerator.has_value())
	{
		rapidjson::Value IsCurrentUserModeratorValue(TypeToJsonValue(m_IsCurrentUserModerator, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isCurrentUserModerator", IsCurrentUserModeratorValue, JsonDoc.GetAllocator());
	}

	if (m_IsCurrentUserBanned.has_value())
	{
		rapidjson::Value IsCurrentUserBannedValue(TypeToJsonValue(m_IsCurrentUserBanned, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isCurrentUserBanned", IsCurrentUserBannedValue, JsonDoc.GetAllocator());
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
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member groupOwnerId is null!");
		}
	}

	if (JsonDoc.HasMember("groupCode"))
	{
		const rapidjson::Value& GroupCodeValue = JsonDoc["groupCode"];

		if (GroupCodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupCodeValue, m_GroupCode);
		}
	}

	if (JsonDoc.HasMember("groupType"))
	{
		const rapidjson::Value& GroupTypeValue = JsonDoc["groupType"];

		if (GroupTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupTypeValue, m_GroupType);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
		}
	}

	if (JsonDoc.HasMember("description"))
	{
		const rapidjson::Value& DescriptionValue = JsonDoc["description"];

		if (DescriptionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DescriptionValue, m_Description);
		}
	}

	if (JsonDoc.HasMember("users"))
	{
		const rapidjson::Value& UsersValue = JsonDoc["users"];

		if (UsersValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UsersValue, m_Users);
		}
	}

	if (JsonDoc.HasMember("bannedUsers"))
	{
		const rapidjson::Value& BannedUsersValue = JsonDoc["bannedUsers"];

		if (BannedUsersValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(BannedUsersValue, m_BannedUsers);
		}
	}

	if (JsonDoc.HasMember("moderators"))
	{
		const rapidjson::Value& ModeratorsValue = JsonDoc["moderators"];

		if (ModeratorsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModeratorsValue, m_Moderators);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member discoverable is null!");
		}
	}

	if (JsonDoc.HasMember("autoModerator"))
	{
		const rapidjson::Value& AutoModeratorValue = JsonDoc["autoModerator"];

		if (AutoModeratorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AutoModeratorValue, m_AutoModerator);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member requiresInvite is null!");
		}
	}

	if (JsonDoc.HasMember("archived"))
	{
		const rapidjson::Value& ArchivedValue = JsonDoc["archived"];

		if (ArchivedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ArchivedValue, m_Archived);
		}
	}

	if (JsonDoc.HasMember("organizationId"))
	{
		const rapidjson::Value& OrganizationIdValue = JsonDoc["organizationId"];

		if (OrganizationIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OrganizationIdValue, m_OrganizationId);
		}
	}

	if (JsonDoc.HasMember("isCurrentUserOwner"))
	{
		const rapidjson::Value& IsCurrentUserOwnerValue = JsonDoc["isCurrentUserOwner"];

		if (IsCurrentUserOwnerValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsCurrentUserOwnerValue, m_IsCurrentUserOwner);
		}
	}

	if (JsonDoc.HasMember("isCurrentUserMember"))
	{
		const rapidjson::Value& IsCurrentUserMemberValue = JsonDoc["isCurrentUserMember"];

		if (IsCurrentUserMemberValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsCurrentUserMemberValue, m_IsCurrentUserMember);
		}
	}

	if (JsonDoc.HasMember("isCurrentUserModerator"))
	{
		const rapidjson::Value& IsCurrentUserModeratorValue = JsonDoc["isCurrentUserModerator"];

		if (IsCurrentUserModeratorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsCurrentUserModeratorValue, m_IsCurrentUserModerator);
		}
	}

	if (JsonDoc.HasMember("isCurrentUserBanned"))
	{
		const rapidjson::Value& IsCurrentUserBannedValue = JsonDoc["isCurrentUserBanned"];

		if (IsCurrentUserBannedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsCurrentUserBannedValue, m_IsCurrentUserBanned);
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
utility::string_t GroupDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool GroupDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t GroupDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool GroupDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t GroupDto::GetGroupOwnerId() const
{
	return m_GroupOwnerId.value();
}

bool GroupDto::HasGroupOwnerId() const
{
	return m_GroupOwnerId.has_value();
}
void GroupDto::SetGroupOwnerId(const utility::string_t& Value)
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
utility::string_t GroupDto::GetGroupType() const
{
	return m_GroupType.value();
}

bool GroupDto::HasGroupType() const
{
	return m_GroupType.has_value();
}
void GroupDto::SetGroupType(const utility::string_t& Value)
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
void GroupDto::SetName(const utility::string_t& Value)
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
void GroupDto::SetDescription(const utility::string_t& Value)
{
	m_Description = Value;
}
const std::vector<utility::string_t>& GroupDto::GetUsers() const
{
	return m_Users.value();
}

bool GroupDto::HasUsers() const
{
	return m_Users.has_value();
}
void GroupDto::SetUsers(const std::vector<utility::string_t>& Value)
{
	m_Users = Value;
}
const std::vector<utility::string_t>& GroupDto::GetBannedUsers() const
{
	return m_BannedUsers.value();
}

bool GroupDto::HasBannedUsers() const
{
	return m_BannedUsers.has_value();
}
void GroupDto::SetBannedUsers(const std::vector<utility::string_t>& Value)
{
	m_BannedUsers = Value;
}
const std::vector<utility::string_t>& GroupDto::GetModerators() const
{
	return m_Moderators.value();
}

bool GroupDto::HasModerators() const
{
	return m_Moderators.has_value();
}
void GroupDto::SetModerators(const std::vector<utility::string_t>& Value)
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
void GroupDto::SetDiscoverable(const bool& Value)
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
void GroupDto::SetAutoModerator(const bool& Value)
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
void GroupDto::SetRequiresInvite(const bool& Value)
{
	m_RequiresInvite = Value;
}
bool GroupDto::GetArchived() const
{
	return m_Archived.value();
}

bool GroupDto::HasArchived() const
{
	return m_Archived.has_value();
}
utility::string_t GroupDto::GetOrganizationId() const
{
	return m_OrganizationId.value();
}

bool GroupDto::HasOrganizationId() const
{
	return m_OrganizationId.has_value();
}
bool GroupDto::GetIsCurrentUserOwner() const
{
	return m_IsCurrentUserOwner.value();
}

bool GroupDto::HasIsCurrentUserOwner() const
{
	return m_IsCurrentUserOwner.has_value();
}
bool GroupDto::GetIsCurrentUserMember() const
{
	return m_IsCurrentUserMember.value();
}

bool GroupDto::HasIsCurrentUserMember() const
{
	return m_IsCurrentUserMember.has_value();
}
bool GroupDto::GetIsCurrentUserModerator() const
{
	return m_IsCurrentUserModerator.value();
}

bool GroupDto::HasIsCurrentUserModerator() const
{
	return m_IsCurrentUserModerator.has_value();
}
bool GroupDto::GetIsCurrentUserBanned() const
{
	return m_IsCurrentUserBanned.value();
}

bool GroupDto::HasIsCurrentUserBanned() const
{
	return m_IsCurrentUserBanned.has_value();
}

GroupFilters::GroupFilters()
{
}
GroupFilters::~GroupFilters()
{
}

utility::string_t GroupFilters::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Ids.has_value())
	{
		rapidjson::Value IdsValue(TypeToJsonValue(m_Ids, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ids", IdsValue, JsonDoc.GetAllocator());
	}

	if (m_GroupTypes.has_value())
	{
		rapidjson::Value GroupTypesValue(TypeToJsonValue(m_GroupTypes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupTypes", GroupTypesValue, JsonDoc.GetAllocator());
	}

	if (m_Names.has_value())
	{
		rapidjson::Value NamesValue(TypeToJsonValue(m_Names, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("names", NamesValue, JsonDoc.GetAllocator());
	}

	if (m_PartialName.has_value())
	{
		rapidjson::Value PartialNameValue(TypeToJsonValue(m_PartialName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("partialName", PartialNameValue, JsonDoc.GetAllocator());
	}

	if (m_GroupOwnerIds.has_value())
	{
		rapidjson::Value GroupOwnerIdsValue(TypeToJsonValue(m_GroupOwnerIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupOwnerIds", GroupOwnerIdsValue, JsonDoc.GetAllocator());
	}

	if (m_ExcludeGroupOwnerIds.has_value())
	{
		rapidjson::Value ExcludeGroupOwnerIdsValue(TypeToJsonValue(m_ExcludeGroupOwnerIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("excludeGroupOwnerIds", ExcludeGroupOwnerIdsValue, JsonDoc.GetAllocator());
	}

	if (m_Users.has_value())
	{
		rapidjson::Value UsersValue(TypeToJsonValue(m_Users, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("users", UsersValue, JsonDoc.GetAllocator());
	}

	if (m_Discoverable.has_value())
	{
		rapidjson::Value DiscoverableValue(TypeToJsonValue(m_Discoverable, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("discoverable", DiscoverableValue, JsonDoc.GetAllocator());
	}

	if (m_AutoModerator.has_value())
	{
		rapidjson::Value AutoModeratorValue(TypeToJsonValue(m_AutoModerator, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("autoModerator", AutoModeratorValue, JsonDoc.GetAllocator());
	}

	if (m_RequiresInvite.has_value())
	{
		rapidjson::Value RequiresInviteValue(TypeToJsonValue(m_RequiresInvite, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requiresInvite", RequiresInviteValue, JsonDoc.GetAllocator());
	}

	if (m_Archived.has_value())
	{
		rapidjson::Value ArchivedValue(TypeToJsonValue(m_Archived, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("archived", ArchivedValue, JsonDoc.GetAllocator());
	}

	if (m_OrganizationIds.has_value())
	{
		rapidjson::Value OrganizationIdsValue(TypeToJsonValue(m_OrganizationIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("organizationIds", OrganizationIdsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void GroupFilters::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("ids"))
	{
		const rapidjson::Value& IdsValue = JsonDoc["ids"];

		if (IdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdsValue, m_Ids);
		}
	}

	if (JsonDoc.HasMember("groupTypes"))
	{
		const rapidjson::Value& GroupTypesValue = JsonDoc["groupTypes"];

		if (GroupTypesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupTypesValue, m_GroupTypes);
		}
	}

	if (JsonDoc.HasMember("names"))
	{
		const rapidjson::Value& NamesValue = JsonDoc["names"];

		if (NamesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NamesValue, m_Names);
		}
	}

	if (JsonDoc.HasMember("partialName"))
	{
		const rapidjson::Value& PartialNameValue = JsonDoc["partialName"];

		if (PartialNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PartialNameValue, m_PartialName);
		}
	}

	if (JsonDoc.HasMember("groupOwnerIds"))
	{
		const rapidjson::Value& GroupOwnerIdsValue = JsonDoc["groupOwnerIds"];

		if (GroupOwnerIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupOwnerIdsValue, m_GroupOwnerIds);
		}
	}

	if (JsonDoc.HasMember("excludeGroupOwnerIds"))
	{
		const rapidjson::Value& ExcludeGroupOwnerIdsValue = JsonDoc["excludeGroupOwnerIds"];

		if (ExcludeGroupOwnerIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExcludeGroupOwnerIdsValue, m_ExcludeGroupOwnerIds);
		}
	}

	if (JsonDoc.HasMember("users"))
	{
		const rapidjson::Value& UsersValue = JsonDoc["users"];

		if (UsersValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UsersValue, m_Users);
		}
	}

	if (JsonDoc.HasMember("discoverable"))
	{
		const rapidjson::Value& DiscoverableValue = JsonDoc["discoverable"];

		if (DiscoverableValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DiscoverableValue, m_Discoverable);
		}
	}

	if (JsonDoc.HasMember("autoModerator"))
	{
		const rapidjson::Value& AutoModeratorValue = JsonDoc["autoModerator"];

		if (AutoModeratorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AutoModeratorValue, m_AutoModerator);
		}
	}

	if (JsonDoc.HasMember("requiresInvite"))
	{
		const rapidjson::Value& RequiresInviteValue = JsonDoc["requiresInvite"];

		if (RequiresInviteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequiresInviteValue, m_RequiresInvite);
		}
	}

	if (JsonDoc.HasMember("archived"))
	{
		const rapidjson::Value& ArchivedValue = JsonDoc["archived"];

		if (ArchivedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ArchivedValue, m_Archived);
		}
	}

	if (JsonDoc.HasMember("organizationIds"))
	{
		const rapidjson::Value& OrganizationIdsValue = JsonDoc["organizationIds"];

		if (OrganizationIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OrganizationIdsValue, m_OrganizationIds);
		}
	}
}


const std::vector<utility::string_t>& GroupFilters::GetIds() const
{
	return m_Ids.value();
}

bool GroupFilters::HasIds() const
{
	return m_Ids.has_value();
}
void GroupFilters::SetIds(const std::vector<utility::string_t>& Value)
{
	m_Ids = Value;
}
const std::vector<utility::string_t>& GroupFilters::GetGroupTypes() const
{
	return m_GroupTypes.value();
}

bool GroupFilters::HasGroupTypes() const
{
	return m_GroupTypes.has_value();
}
void GroupFilters::SetGroupTypes(const std::vector<utility::string_t>& Value)
{
	m_GroupTypes = Value;
}
const std::vector<utility::string_t>& GroupFilters::GetNames() const
{
	return m_Names.value();
}

bool GroupFilters::HasNames() const
{
	return m_Names.has_value();
}
void GroupFilters::SetNames(const std::vector<utility::string_t>& Value)
{
	m_Names = Value;
}
utility::string_t GroupFilters::GetPartialName() const
{
	return m_PartialName.value();
}

bool GroupFilters::HasPartialName() const
{
	return m_PartialName.has_value();
}
void GroupFilters::SetPartialName(const utility::string_t& Value)
{
	m_PartialName = Value;
}
const std::vector<utility::string_t>& GroupFilters::GetGroupOwnerIds() const
{
	return m_GroupOwnerIds.value();
}

bool GroupFilters::HasGroupOwnerIds() const
{
	return m_GroupOwnerIds.has_value();
}
void GroupFilters::SetGroupOwnerIds(const std::vector<utility::string_t>& Value)
{
	m_GroupOwnerIds = Value;
}
const std::vector<utility::string_t>& GroupFilters::GetExcludeGroupOwnerIds() const
{
	return m_ExcludeGroupOwnerIds.value();
}

bool GroupFilters::HasExcludeGroupOwnerIds() const
{
	return m_ExcludeGroupOwnerIds.has_value();
}
void GroupFilters::SetExcludeGroupOwnerIds(const std::vector<utility::string_t>& Value)
{
	m_ExcludeGroupOwnerIds = Value;
}
const std::vector<utility::string_t>& GroupFilters::GetUsers() const
{
	return m_Users.value();
}

bool GroupFilters::HasUsers() const
{
	return m_Users.has_value();
}
void GroupFilters::SetUsers(const std::vector<utility::string_t>& Value)
{
	m_Users = Value;
}
bool GroupFilters::GetDiscoverable() const
{
	return m_Discoverable.value();
}

bool GroupFilters::HasDiscoverable() const
{
	return m_Discoverable.has_value();
}
void GroupFilters::SetDiscoverable(const bool& Value)
{
	m_Discoverable = Value;
}
bool GroupFilters::GetAutoModerator() const
{
	return m_AutoModerator.value();
}

bool GroupFilters::HasAutoModerator() const
{
	return m_AutoModerator.has_value();
}
void GroupFilters::SetAutoModerator(const bool& Value)
{
	m_AutoModerator = Value;
}
bool GroupFilters::GetRequiresInvite() const
{
	return m_RequiresInvite.value();
}

bool GroupFilters::HasRequiresInvite() const
{
	return m_RequiresInvite.has_value();
}
void GroupFilters::SetRequiresInvite(const bool& Value)
{
	m_RequiresInvite = Value;
}
bool GroupFilters::GetArchived() const
{
	return m_Archived.value();
}

bool GroupFilters::HasArchived() const
{
	return m_Archived.has_value();
}
void GroupFilters::SetArchived(const bool& Value)
{
	m_Archived = Value;
}
const std::vector<utility::string_t>& GroupFilters::GetOrganizationIds() const
{
	return m_OrganizationIds.value();
}

bool GroupFilters::HasOrganizationIds() const
{
	return m_OrganizationIds.has_value();
}
void GroupFilters::SetOrganizationIds(const std::vector<utility::string_t>& Value)
{
	m_OrganizationIds = Value;
}

GroupInviteDto::GroupInviteDto()
{
}
GroupInviteDto::~GroupInviteDto()
{
}

utility::string_t GroupInviteDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedBy.has_value())
	{
		rapidjson::Value CreatedByValue(TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdBy", CreatedByValue, JsonDoc.GetAllocator());
	}

	if (m_Email.has_value())
	{
		rapidjson::Value EmailValue(TypeToJsonValue(m_Email, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("email", EmailValue, JsonDoc.GetAllocator());
	}

	if (m_GroupId.has_value())
	{
		rapidjson::Value GroupIdValue(TypeToJsonValue(m_GroupId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupId", GroupIdValue, JsonDoc.GetAllocator());
	}

	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_AsModerator.has_value())
	{
		rapidjson::Value AsModeratorValue(TypeToJsonValue(m_AsModerator, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("asModerator", AsModeratorValue, JsonDoc.GetAllocator());
	}

	if (m_ExpiresAt.has_value())
	{
		rapidjson::Value ExpiresAtValue(TypeToJsonValue(m_ExpiresAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("expiresAt", ExpiresAtValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedBy.has_value())
	{
		rapidjson::Value UpdatedByValue(TypeToJsonValue(m_UpdatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedBy", UpdatedByValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedAt.has_value())
	{
		rapidjson::Value UpdatedAtValue(TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedAt", UpdatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_SendSpaceLink.has_value())
	{
		rapidjson::Value SendSpaceLinkValue(TypeToJsonValue(m_SendSpaceLink, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sendSpaceLink", SendSpaceLinkValue, JsonDoc.GetAllocator());
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
	}

	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId);
		}
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member email is null!");
		}
	}

	if (JsonDoc.HasMember("groupId"))
	{
		const rapidjson::Value& GroupIdValue = JsonDoc["groupId"];

		if (GroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupIdValue, m_GroupId);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member asModerator is null!");
		}
	}

	if (JsonDoc.HasMember("expiresAt"))
	{
		const rapidjson::Value& ExpiresAtValue = JsonDoc["expiresAt"];

		if (ExpiresAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExpiresAtValue, m_ExpiresAt);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
		}
	}

	if (JsonDoc.HasMember("updatedBy"))
	{
		const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

		if (UpdatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedByValue, m_UpdatedBy);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt);
		}
	}

	if (JsonDoc.HasMember("sendSpaceLink"))
	{
		const rapidjson::Value& SendSpaceLinkValue = JsonDoc["sendSpaceLink"];

		if (SendSpaceLinkValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SendSpaceLinkValue, m_SendSpaceLink);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member sendSpaceLink is null!");
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
utility::string_t GroupInviteDto::GetUserId() const
{
	return m_UserId.value();
}

bool GroupInviteDto::HasUserId() const
{
	return m_UserId.has_value();
}
utility::string_t GroupInviteDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool GroupInviteDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t GroupInviteDto::GetEmail() const
{
	return m_Email.value();
}

bool GroupInviteDto::HasEmail() const
{
	return m_Email.has_value();
}
void GroupInviteDto::SetEmail(const utility::string_t& Value)
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
utility::string_t GroupInviteDto::GetName() const
{
	return m_Name.value();
}

bool GroupInviteDto::HasName() const
{
	return m_Name.has_value();
}
bool GroupInviteDto::GetAsModerator() const
{
	return m_AsModerator.value();
}

bool GroupInviteDto::HasAsModerator() const
{
	return m_AsModerator.has_value();
}
void GroupInviteDto::SetAsModerator(const bool& Value)
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
utility::string_t GroupInviteDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool GroupInviteDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t GroupInviteDto::GetUpdatedBy() const
{
	return m_UpdatedBy.value();
}

bool GroupInviteDto::HasUpdatedBy() const
{
	return m_UpdatedBy.has_value();
}
utility::string_t GroupInviteDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool GroupInviteDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
bool GroupInviteDto::GetSendSpaceLink() const
{
	return m_SendSpaceLink.value();
}

bool GroupInviteDto::HasSendSpaceLink() const
{
	return m_SendSpaceLink.has_value();
}
void GroupInviteDto::SetSendSpaceLink(const bool& Value)
{
	m_SendSpaceLink = Value;
}

GroupLiteDto::GroupLiteDto()
{
}
GroupLiteDto::~GroupLiteDto()
{
}

utility::string_t GroupLiteDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_Description.has_value())
	{
		rapidjson::Value DescriptionValue(TypeToJsonValue(m_Description, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("description", DescriptionValue, JsonDoc.GetAllocator());
	}

	if (m_GroupType.has_value())
	{
		rapidjson::Value GroupTypeValue(TypeToJsonValue(m_GroupType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupType", GroupTypeValue, JsonDoc.GetAllocator());
	}

	if (m_GroupOwnerId.has_value())
	{
		rapidjson::Value GroupOwnerIdValue(TypeToJsonValue(m_GroupOwnerId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupOwnerId", GroupOwnerIdValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_Discoverable.has_value())
	{
		rapidjson::Value DiscoverableValue(TypeToJsonValue(m_Discoverable, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("discoverable", DiscoverableValue, JsonDoc.GetAllocator());
	}

	if (m_AutoModerator.has_value())
	{
		rapidjson::Value AutoModeratorValue(TypeToJsonValue(m_AutoModerator, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("autoModerator", AutoModeratorValue, JsonDoc.GetAllocator());
	}

	if (m_RequiresInvite.has_value())
	{
		rapidjson::Value RequiresInviteValue(TypeToJsonValue(m_RequiresInvite, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requiresInvite", RequiresInviteValue, JsonDoc.GetAllocator());
	}

	if (m_Archived.has_value())
	{
		rapidjson::Value ArchivedValue(TypeToJsonValue(m_Archived, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("archived", ArchivedValue, JsonDoc.GetAllocator());
	}

	if (m_OrganizationId.has_value())
	{
		rapidjson::Value OrganizationIdValue(TypeToJsonValue(m_OrganizationId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("organizationId", OrganizationIdValue, JsonDoc.GetAllocator());
	}

	if (m_IsCurrentUserOwner.has_value())
	{
		rapidjson::Value IsCurrentUserOwnerValue(TypeToJsonValue(m_IsCurrentUserOwner, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isCurrentUserOwner", IsCurrentUserOwnerValue, JsonDoc.GetAllocator());
	}

	if (m_IsCurrentUserMember.has_value())
	{
		rapidjson::Value IsCurrentUserMemberValue(TypeToJsonValue(m_IsCurrentUserMember, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isCurrentUserMember", IsCurrentUserMemberValue, JsonDoc.GetAllocator());
	}

	if (m_IsCurrentUserModerator.has_value())
	{
		rapidjson::Value IsCurrentUserModeratorValue(TypeToJsonValue(m_IsCurrentUserModerator, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isCurrentUserModerator", IsCurrentUserModeratorValue, JsonDoc.GetAllocator());
	}

	if (m_IsCurrentUserBanned.has_value())
	{
		rapidjson::Value IsCurrentUserBannedValue(TypeToJsonValue(m_IsCurrentUserBanned, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isCurrentUserBanned", IsCurrentUserBannedValue, JsonDoc.GetAllocator());
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
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name);
		}
	}

	if (JsonDoc.HasMember("description"))
	{
		const rapidjson::Value& DescriptionValue = JsonDoc["description"];

		if (DescriptionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DescriptionValue, m_Description);
		}
	}

	if (JsonDoc.HasMember("groupType"))
	{
		const rapidjson::Value& GroupTypeValue = JsonDoc["groupType"];

		if (GroupTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupTypeValue, m_GroupType);
		}
	}

	if (JsonDoc.HasMember("groupOwnerId"))
	{
		const rapidjson::Value& GroupOwnerIdValue = JsonDoc["groupOwnerId"];

		if (GroupOwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupOwnerIdValue, m_GroupOwnerId);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member discoverable is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member autoModerator is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member requiresInvite is null!");
		}
	}

	if (JsonDoc.HasMember("archived"))
	{
		const rapidjson::Value& ArchivedValue = JsonDoc["archived"];

		if (ArchivedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ArchivedValue, m_Archived);
		}
	}

	if (JsonDoc.HasMember("organizationId"))
	{
		const rapidjson::Value& OrganizationIdValue = JsonDoc["organizationId"];

		if (OrganizationIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OrganizationIdValue, m_OrganizationId);
		}
	}

	if (JsonDoc.HasMember("isCurrentUserOwner"))
	{
		const rapidjson::Value& IsCurrentUserOwnerValue = JsonDoc["isCurrentUserOwner"];

		if (IsCurrentUserOwnerValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsCurrentUserOwnerValue, m_IsCurrentUserOwner);
		}
	}

	if (JsonDoc.HasMember("isCurrentUserMember"))
	{
		const rapidjson::Value& IsCurrentUserMemberValue = JsonDoc["isCurrentUserMember"];

		if (IsCurrentUserMemberValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsCurrentUserMemberValue, m_IsCurrentUserMember);
		}
	}

	if (JsonDoc.HasMember("isCurrentUserModerator"))
	{
		const rapidjson::Value& IsCurrentUserModeratorValue = JsonDoc["isCurrentUserModerator"];

		if (IsCurrentUserModeratorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsCurrentUserModeratorValue, m_IsCurrentUserModerator);
		}
	}

	if (JsonDoc.HasMember("isCurrentUserBanned"))
	{
		const rapidjson::Value& IsCurrentUserBannedValue = JsonDoc["isCurrentUserBanned"];

		if (IsCurrentUserBannedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsCurrentUserBannedValue, m_IsCurrentUserBanned);
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
utility::string_t GroupLiteDto::GetName() const
{
	return m_Name.value();
}

bool GroupLiteDto::HasName() const
{
	return m_Name.has_value();
}
void GroupLiteDto::SetName(const utility::string_t& Value)
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
void GroupLiteDto::SetDescription(const utility::string_t& Value)
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
utility::string_t GroupLiteDto::GetGroupOwnerId() const
{
	return m_GroupOwnerId.value();
}

bool GroupLiteDto::HasGroupOwnerId() const
{
	return m_GroupOwnerId.has_value();
}
utility::string_t GroupLiteDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool GroupLiteDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
bool GroupLiteDto::GetDiscoverable() const
{
	return m_Discoverable.value();
}

bool GroupLiteDto::HasDiscoverable() const
{
	return m_Discoverable.has_value();
}
void GroupLiteDto::SetDiscoverable(const bool& Value)
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
void GroupLiteDto::SetAutoModerator(const bool& Value)
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
void GroupLiteDto::SetRequiresInvite(const bool& Value)
{
	m_RequiresInvite = Value;
}
bool GroupLiteDto::GetArchived() const
{
	return m_Archived.value();
}

bool GroupLiteDto::HasArchived() const
{
	return m_Archived.has_value();
}
void GroupLiteDto::SetArchived(const bool& Value)
{
	m_Archived = Value;
}
utility::string_t GroupLiteDto::GetOrganizationId() const
{
	return m_OrganizationId.value();
}

bool GroupLiteDto::HasOrganizationId() const
{
	return m_OrganizationId.has_value();
}
bool GroupLiteDto::GetIsCurrentUserOwner() const
{
	return m_IsCurrentUserOwner.value();
}

bool GroupLiteDto::HasIsCurrentUserOwner() const
{
	return m_IsCurrentUserOwner.has_value();
}
bool GroupLiteDto::GetIsCurrentUserMember() const
{
	return m_IsCurrentUserMember.value();
}

bool GroupLiteDto::HasIsCurrentUserMember() const
{
	return m_IsCurrentUserMember.has_value();
}
bool GroupLiteDto::GetIsCurrentUserModerator() const
{
	return m_IsCurrentUserModerator.value();
}

bool GroupLiteDto::HasIsCurrentUserModerator() const
{
	return m_IsCurrentUserModerator.has_value();
}
bool GroupLiteDto::GetIsCurrentUserBanned() const
{
	return m_IsCurrentUserBanned.value();
}

bool GroupLiteDto::HasIsCurrentUserBanned() const
{
	return m_IsCurrentUserBanned.has_value();
}

GroupLiteDtoDataPage::GroupLiteDtoDataPage()
{
}
GroupLiteDtoDataPage::~GroupLiteDtoDataPage()
{
}

utility::string_t GroupLiteDtoDataPage::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_Skip.has_value())
	{
		rapidjson::Value SkipValue(TypeToJsonValue(m_Skip, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("skip", SkipValue, JsonDoc.GetAllocator());
	}

	if (m_Limit.has_value())
	{
		rapidjson::Value LimitValue(TypeToJsonValue(m_Limit, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("limit", LimitValue, JsonDoc.GetAllocator());
	}

	if (m_ItemCount.has_value())
	{
		rapidjson::Value ItemCountValue(TypeToJsonValue(m_ItemCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemCount", ItemCountValue, JsonDoc.GetAllocator());
	}

	if (m_ItemTotalCount.has_value())
	{
		rapidjson::Value ItemTotalCountValue(TypeToJsonValue(m_ItemTotalCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemTotalCount", ItemTotalCountValue, JsonDoc.GetAllocator());
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemCount is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemTotalCount is null!");
		}
	}
}


const std::vector<std::shared_ptr<GroupLiteDto>>& GroupLiteDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool GroupLiteDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void GroupLiteDtoDataPage::SetItems(const std::vector<std::shared_ptr<GroupLiteDto>>& Value)
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

GroupSummaryDto::GroupSummaryDto()
{
}
GroupSummaryDto::~GroupSummaryDto()
{
}

utility::string_t GroupSummaryDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_GroupId.has_value())
	{
		rapidjson::Value GroupIdValue(TypeToJsonValue(m_GroupId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupId", GroupIdValue, JsonDoc.GetAllocator());
	}

	if (m_GroupCode.has_value())
	{
		rapidjson::Value GroupCodeValue(TypeToJsonValue(m_GroupCode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupCode", GroupCodeValue, JsonDoc.GetAllocator());
	}

	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
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
	}

	if (JsonDoc.HasMember("groupCode"))
	{
		const rapidjson::Value& GroupCodeValue = JsonDoc["groupCode"];

		if (GroupCodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupCodeValue, m_GroupCode);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name);
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
void GroupSummaryDto::SetGroupId(const utility::string_t& Value)
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
void GroupSummaryDto::SetGroupCode(const utility::string_t& Value)
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
void GroupSummaryDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}

InitialSettingsDto::InitialSettingsDto()
{
}
InitialSettingsDto::~InitialSettingsDto()
{
}

utility::string_t InitialSettingsDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Context.has_value())
	{
		rapidjson::Value ContextValue(TypeToJsonValue(m_Context, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("context", ContextValue, JsonDoc.GetAllocator());
	}

	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_Settings.has_value())
	{
		rapidjson::Value SettingsValue(TypeToJsonValue(m_Settings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("settings", SettingsValue, JsonDoc.GetAllocator());
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member context is null!");
		}
	}

	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member settings is null!");
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
void InitialSettingsDto::SetContext(const utility::string_t& Value)
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
const std::map<utility::string_t, utility::string_t>& InitialSettingsDto::GetSettings() const
{
	return m_Settings.value();
}

bool InitialSettingsDto::HasSettings() const
{
	return m_Settings.has_value();
}
void InitialSettingsDto::SetSettings(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Settings = Value;
}

InventoryItemDto::InventoryItemDto()
{
}
InventoryItemDto::~InventoryItemDto()
{
}

utility::string_t InventoryItemDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_PrototypeId.has_value())
	{
		rapidjson::Value PrototypeIdValue(TypeToJsonValue(m_PrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeId", PrototypeIdValue, JsonDoc.GetAllocator());
	}

	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_Exchangeable.has_value())
	{
		rapidjson::Value ExchangeableValue(TypeToJsonValue(m_Exchangeable, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("exchangeable", ExchangeableValue, JsonDoc.GetAllocator());
	}

	if (m_IsGift.has_value())
	{
		rapidjson::Value IsGiftValue(TypeToJsonValue(m_IsGift, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isGift", IsGiftValue, JsonDoc.GetAllocator());
	}

	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}

	if (m_State.has_value())
	{
		rapidjson::Value StateValue(TypeToJsonValue(m_State, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("state", StateValue, JsonDoc.GetAllocator());
	}

	if (m_Equippable.has_value())
	{
		rapidjson::Value EquippableValue(TypeToJsonValue(m_Equippable, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("equippable", EquippableValue, JsonDoc.GetAllocator());
	}

	if (m_Equipped.has_value())
	{
		rapidjson::Value EquippedValue(TypeToJsonValue(m_Equipped, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("equipped", EquippedValue, JsonDoc.GetAllocator());
	}

	if (m_ItemType.has_value())
	{
		rapidjson::Value ItemTypeValue(TypeToJsonValue(m_ItemType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemType", ItemTypeValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedBy.has_value())
	{
		rapidjson::Value CreatedByValue(TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdBy", CreatedByValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedBy.has_value())
	{
		rapidjson::Value UpdatedByValue(TypeToJsonValue(m_UpdatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedBy", UpdatedByValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedAt.has_value())
	{
		rapidjson::Value UpdatedAtValue(TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedAt", UpdatedAtValue, JsonDoc.GetAllocator());
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member prototypeId is null!");
		}
	}

	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member exchangeable is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isGift is null!");
		}
	}

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags);
		}
	}

	if (JsonDoc.HasMember("state"))
	{
		const rapidjson::Value& StateValue = JsonDoc["state"];

		if (StateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StateValue, m_State);
		}
	}

	if (JsonDoc.HasMember("equippable"))
	{
		const rapidjson::Value& EquippableValue = JsonDoc["equippable"];

		if (EquippableValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EquippableValue, m_Equippable);
		}
	}

	if (JsonDoc.HasMember("equipped"))
	{
		const rapidjson::Value& EquippedValue = JsonDoc["equipped"];

		if (EquippedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EquippedValue, m_Equipped);
		}
	}

	if (JsonDoc.HasMember("itemType"))
	{
		const rapidjson::Value& ItemTypeValue = JsonDoc["itemType"];

		if (ItemTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemTypeValue, m_ItemType);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
		}
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy);
		}
	}

	if (JsonDoc.HasMember("updatedBy"))
	{
		const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

		if (UpdatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedByValue, m_UpdatedBy);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt);
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
utility::string_t InventoryItemDto::GetPrototypeId() const
{
	return m_PrototypeId.value();
}

bool InventoryItemDto::HasPrototypeId() const
{
	return m_PrototypeId.has_value();
}
void InventoryItemDto::SetPrototypeId(const utility::string_t& Value)
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
bool InventoryItemDto::GetExchangeable() const
{
	return m_Exchangeable.value();
}

bool InventoryItemDto::HasExchangeable() const
{
	return m_Exchangeable.has_value();
}
void InventoryItemDto::SetExchangeable(const bool& Value)
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
void InventoryItemDto::SetIsGift(const bool& Value)
{
	m_IsGift = Value;
}
const std::vector<utility::string_t>& InventoryItemDto::GetTags() const
{
	return m_Tags.value();
}

bool InventoryItemDto::HasTags() const
{
	return m_Tags.has_value();
}
void InventoryItemDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
const std::map<utility::string_t, utility::string_t>& InventoryItemDto::GetState() const
{
	return m_State.value();
}

bool InventoryItemDto::HasState() const
{
	return m_State.has_value();
}
void InventoryItemDto::SetState(const std::map<utility::string_t, utility::string_t>& Value)
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
void InventoryItemDto::SetEquippable(const bool& Value)
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
void InventoryItemDto::SetEquipped(const bool& Value)
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
void InventoryItemDto::SetItemType(const utility::string_t& Value)
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
utility::string_t InventoryItemDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool InventoryItemDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t InventoryItemDto::GetUpdatedBy() const
{
	return m_UpdatedBy.value();
}

bool InventoryItemDto::HasUpdatedBy() const
{
	return m_UpdatedBy.has_value();
}
utility::string_t InventoryItemDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool InventoryItemDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}

InventoryItemDtoDataPage::InventoryItemDtoDataPage()
{
}
InventoryItemDtoDataPage::~InventoryItemDtoDataPage()
{
}

utility::string_t InventoryItemDtoDataPage::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_Skip.has_value())
	{
		rapidjson::Value SkipValue(TypeToJsonValue(m_Skip, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("skip", SkipValue, JsonDoc.GetAllocator());
	}

	if (m_Limit.has_value())
	{
		rapidjson::Value LimitValue(TypeToJsonValue(m_Limit, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("limit", LimitValue, JsonDoc.GetAllocator());
	}

	if (m_ItemCount.has_value())
	{
		rapidjson::Value ItemCountValue(TypeToJsonValue(m_ItemCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemCount", ItemCountValue, JsonDoc.GetAllocator());
	}

	if (m_ItemTotalCount.has_value())
	{
		rapidjson::Value ItemTotalCountValue(TypeToJsonValue(m_ItemTotalCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemTotalCount", ItemTotalCountValue, JsonDoc.GetAllocator());
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemCount is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemTotalCount is null!");
		}
	}
}


const std::vector<std::shared_ptr<InventoryItemDto>>& InventoryItemDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool InventoryItemDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void InventoryItemDtoDataPage::SetItems(const std::vector<std::shared_ptr<InventoryItemDto>>& Value)
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

LoginRequest::LoginRequest()
{
}
LoginRequest::~LoginRequest()
{
}

utility::string_t LoginRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Tenant.has_value())
	{
		rapidjson::Value TenantValue(TypeToJsonValue(m_Tenant, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenant", TenantValue, JsonDoc.GetAllocator());
	}

	if (m_Email.has_value())
	{
		rapidjson::Value EmailValue(TypeToJsonValue(m_Email, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("email", EmailValue, JsonDoc.GetAllocator());
	}

	if (m_UserName.has_value())
	{
		rapidjson::Value UserNameValue(TypeToJsonValue(m_UserName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userName", UserNameValue, JsonDoc.GetAllocator());
	}

	if (m_Password.has_value())
	{
		rapidjson::Value PasswordValue(TypeToJsonValue(m_Password, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("password", PasswordValue, JsonDoc.GetAllocator());
	}

	if (m_DeviceId.has_value())
	{
		rapidjson::Value DeviceIdValue(TypeToJsonValue(m_DeviceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deviceId", DeviceIdValue, JsonDoc.GetAllocator());
	}

	if (m_VerifiedAgeEighteen.has_value())
	{
		rapidjson::Value VerifiedAgeEighteenValue(TypeToJsonValue(m_VerifiedAgeEighteen, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("verifiedAgeEighteen", VerifiedAgeEighteenValue, JsonDoc.GetAllocator());
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
	}

	if (JsonDoc.HasMember("email"))
	{
		const rapidjson::Value& EmailValue = JsonDoc["email"];

		if (EmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EmailValue, m_Email);
		}
	}

	if (JsonDoc.HasMember("userName"))
	{
		const rapidjson::Value& UserNameValue = JsonDoc["userName"];

		if (UserNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserNameValue, m_UserName);
		}
	}

	if (JsonDoc.HasMember("password"))
	{
		const rapidjson::Value& PasswordValue = JsonDoc["password"];

		if (PasswordValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PasswordValue, m_Password);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member deviceId is null!");
		}
	}

	if (JsonDoc.HasMember("verifiedAgeEighteen"))
	{
		const rapidjson::Value& VerifiedAgeEighteenValue = JsonDoc["verifiedAgeEighteen"];

		if (VerifiedAgeEighteenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VerifiedAgeEighteenValue, m_VerifiedAgeEighteen);
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
void LoginRequest::SetTenant(const utility::string_t& Value)
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
void LoginRequest::SetEmail(const utility::string_t& Value)
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
void LoginRequest::SetUserName(const utility::string_t& Value)
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
void LoginRequest::SetPassword(const utility::string_t& Value)
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
void LoginRequest::SetDeviceId(const utility::string_t& Value)
{
	m_DeviceId = Value;
}
bool LoginRequest::GetVerifiedAgeEighteen() const
{
	return m_VerifiedAgeEighteen.value();
}

bool LoginRequest::HasVerifiedAgeEighteen() const
{
	return m_VerifiedAgeEighteen.has_value();
}
void LoginRequest::SetVerifiedAgeEighteen(const bool& Value)
{
	m_VerifiedAgeEighteen = Value;
}

LoginSocialRequest::LoginSocialRequest()
{
}
LoginSocialRequest::~LoginSocialRequest()
{
}

utility::string_t LoginSocialRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Tenant.has_value())
	{
		rapidjson::Value TenantValue(TypeToJsonValue(m_Tenant, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenant", TenantValue, JsonDoc.GetAllocator());
	}

	if (m_Provider.has_value())
	{
		rapidjson::Value ProviderValue(TypeToJsonValue(m_Provider, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("provider", ProviderValue, JsonDoc.GetAllocator());
	}

	if (m_Token.has_value())
	{
		rapidjson::Value TokenValue(TypeToJsonValue(m_Token, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("token", TokenValue, JsonDoc.GetAllocator());
	}

	if (m_DeviceId.has_value())
	{
		rapidjson::Value DeviceIdValue(TypeToJsonValue(m_DeviceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deviceId", DeviceIdValue, JsonDoc.GetAllocator());
	}

	if (m_OAuthRedirectUri.has_value())
	{
		rapidjson::Value OAuthRedirectUriValue(TypeToJsonValue(m_OAuthRedirectUri, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("oAuthRedirectUri", OAuthRedirectUriValue, JsonDoc.GetAllocator());
	}

	if (m_VerifiedAgeEighteen.has_value())
	{
		rapidjson::Value VerifiedAgeEighteenValue(TypeToJsonValue(m_VerifiedAgeEighteen, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("verifiedAgeEighteen", VerifiedAgeEighteenValue, JsonDoc.GetAllocator());
	}

	if (m_OptionalProviderUserId.has_value())
	{
		rapidjson::Value OptionalProviderUserIdValue(TypeToJsonValue(m_OptionalProviderUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("optionalProviderUserId", OptionalProviderUserIdValue, JsonDoc.GetAllocator());
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member provider is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member token is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member deviceId is null!");
		}
	}

	if (JsonDoc.HasMember("oAuthRedirectUri"))
	{
		const rapidjson::Value& OAuthRedirectUriValue = JsonDoc["oAuthRedirectUri"];

		if (OAuthRedirectUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OAuthRedirectUriValue, m_OAuthRedirectUri);
		}
	}

	if (JsonDoc.HasMember("verifiedAgeEighteen"))
	{
		const rapidjson::Value& VerifiedAgeEighteenValue = JsonDoc["verifiedAgeEighteen"];

		if (VerifiedAgeEighteenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VerifiedAgeEighteenValue, m_VerifiedAgeEighteen);
		}
	}

	if (JsonDoc.HasMember("optionalProviderUserId"))
	{
		const rapidjson::Value& OptionalProviderUserIdValue = JsonDoc["optionalProviderUserId"];

		if (OptionalProviderUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OptionalProviderUserIdValue, m_OptionalProviderUserId);
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
void LoginSocialRequest::SetTenant(const utility::string_t& Value)
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
void LoginSocialRequest::SetProvider(const utility::string_t& Value)
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
void LoginSocialRequest::SetToken(const utility::string_t& Value)
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
void LoginSocialRequest::SetDeviceId(const utility::string_t& Value)
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
void LoginSocialRequest::SetOAuthRedirectUri(const utility::string_t& Value)
{
	m_OAuthRedirectUri = Value;
}
bool LoginSocialRequest::GetVerifiedAgeEighteen() const
{
	return m_VerifiedAgeEighteen.value();
}

bool LoginSocialRequest::HasVerifiedAgeEighteen() const
{
	return m_VerifiedAgeEighteen.has_value();
}
void LoginSocialRequest::SetVerifiedAgeEighteen(const bool& Value)
{
	m_VerifiedAgeEighteen = Value;
}
utility::string_t LoginSocialRequest::GetOptionalProviderUserId() const
{
	return m_OptionalProviderUserId.value();
}

bool LoginSocialRequest::HasOptionalProviderUserId() const
{
	return m_OptionalProviderUserId.has_value();
}
void LoginSocialRequest::SetOptionalProviderUserId(const utility::string_t& Value)
{
	m_OptionalProviderUserId = Value;
}

LogoutRequest::LogoutRequest()
{
}
LogoutRequest::~LogoutRequest()
{
}

utility::string_t LogoutRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_DeviceId.has_value())
	{
		rapidjson::Value DeviceIdValue(TypeToJsonValue(m_DeviceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deviceId", DeviceIdValue, JsonDoc.GetAllocator());
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
		}
	}

	if (JsonDoc.HasMember("deviceId"))
	{
		const rapidjson::Value& DeviceIdValue = JsonDoc["deviceId"];

		if (DeviceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeviceIdValue, m_DeviceId);
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
void LogoutRequest::SetUserId(const utility::string_t& Value)
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
void LogoutRequest::SetDeviceId(const utility::string_t& Value)
{
	m_DeviceId = Value;
}

MetagameProgressDto::MetagameProgressDto()
{
}
MetagameProgressDto::~MetagameProgressDto()
{
}

utility::string_t MetagameProgressDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_PercentTowardsNextSeed.has_value())
	{
		rapidjson::Value PercentTowardsNextSeedValue(TypeToJsonValue(m_PercentTowardsNextSeed, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("percentTowardsNextSeed", PercentTowardsNextSeedValue, JsonDoc.GetAllocator());
	}

	if (m_MetagameLevel.has_value())
	{
		rapidjson::Value MetagameLevelValue(TypeToJsonValue(m_MetagameLevel, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("metagameLevel", MetagameLevelValue, JsonDoc.GetAllocator());
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
		}
	}

	if (JsonDoc.HasMember("percentTowardsNextSeed"))
	{
		const rapidjson::Value& PercentTowardsNextSeedValue = JsonDoc["percentTowardsNextSeed"];

		if (PercentTowardsNextSeedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PercentTowardsNextSeedValue, m_PercentTowardsNextSeed);
		}
	}

	if (JsonDoc.HasMember("metagameLevel"))
	{
		const rapidjson::Value& MetagameLevelValue = JsonDoc["metagameLevel"];

		if (MetagameLevelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MetagameLevelValue, m_MetagameLevel);
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
void MetagameProgressDto::SetUserId(const utility::string_t& Value)
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

MetagameUpdate::MetagameUpdate()
{
}
MetagameUpdate::~MetagameUpdate()
{
}

utility::string_t MetagameUpdate::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_PercentDeltaAsTotal.has_value())
	{
		rapidjson::Value PercentDeltaAsTotalValue(TypeToJsonValue(m_PercentDeltaAsTotal, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("percentDeltaAsTotal", PercentDeltaAsTotalValue, JsonDoc.GetAllocator());
	}

	if (m_PercentDelta.has_value())
	{
		rapidjson::Value PercentDeltaValue(TypeToJsonValue(m_PercentDelta, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("percentDelta", PercentDeltaValue, JsonDoc.GetAllocator());
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member percentDeltaAsTotal is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member percentDelta is null!");
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
void MetagameUpdate::SetPercentDeltaAsTotal(const bool& Value)
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

OrganizationDto::OrganizationDto()
{
}
OrganizationDto::~OrganizationDto()
{
}

utility::string_t OrganizationDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_OrganizationOwnerId.has_value())
	{
		rapidjson::Value OrganizationOwnerIdValue(TypeToJsonValue(m_OrganizationOwnerId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("organizationOwnerId", OrganizationOwnerIdValue, JsonDoc.GetAllocator());
	}

	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_Members.has_value())
	{
		rapidjson::Value MembersValue(TypeToJsonValue(m_Members, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("members", MembersValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void OrganizationDto::FromJson(const utility::string_t& Val)
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
		}
	}

	if (JsonDoc.HasMember("organizationOwnerId"))
	{
		const rapidjson::Value& OrganizationOwnerIdValue = JsonDoc["organizationOwnerId"];

		if (OrganizationOwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OrganizationOwnerIdValue, m_OrganizationOwnerId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member organizationOwnerId is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
		}
	}

	if (JsonDoc.HasMember("members"))
	{
		const rapidjson::Value& MembersValue = JsonDoc["members"];

		if (MembersValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MembersValue, m_Members);
		}
	}
}


utility::string_t OrganizationDto::GetId() const
{
	return m_Id.value();
}

bool OrganizationDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t OrganizationDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool OrganizationDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t OrganizationDto::GetOrganizationOwnerId() const
{
	return m_OrganizationOwnerId.value();
}

bool OrganizationDto::HasOrganizationOwnerId() const
{
	return m_OrganizationOwnerId.has_value();
}
void OrganizationDto::SetOrganizationOwnerId(const utility::string_t& Value)
{
	m_OrganizationOwnerId = Value;
}
utility::string_t OrganizationDto::GetName() const
{
	return m_Name.value();
}

bool OrganizationDto::HasName() const
{
	return m_Name.has_value();
}
void OrganizationDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
const std::vector<std::shared_ptr<OrganizationMember>>& OrganizationDto::GetMembers() const
{
	return m_Members.value();
}

bool OrganizationDto::HasMembers() const
{
	return m_Members.has_value();
}

OrganizationInviteDto::OrganizationInviteDto()
{
}
OrganizationInviteDto::~OrganizationInviteDto()
{
}

utility::string_t OrganizationInviteDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedBy.has_value())
	{
		rapidjson::Value CreatedByValue(TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdBy", CreatedByValue, JsonDoc.GetAllocator());
	}

	if (m_Email.has_value())
	{
		rapidjson::Value EmailValue(TypeToJsonValue(m_Email, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("email", EmailValue, JsonDoc.GetAllocator());
	}

	if (m_OrganizationId.has_value())
	{
		rapidjson::Value OrganizationIdValue(TypeToJsonValue(m_OrganizationId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("organizationId", OrganizationIdValue, JsonDoc.GetAllocator());
	}

	if (m_Roles.has_value())
	{
		rapidjson::Value RolesValue(TypeToJsonValue(m_Roles, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("roles", RolesValue, JsonDoc.GetAllocator());
	}

	if (m_ExpiresAt.has_value())
	{
		rapidjson::Value ExpiresAtValue(TypeToJsonValue(m_ExpiresAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("expiresAt", ExpiresAtValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void OrganizationInviteDto::FromJson(const utility::string_t& Val)
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
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member email is null!");
		}
	}

	if (JsonDoc.HasMember("organizationId"))
	{
		const rapidjson::Value& OrganizationIdValue = JsonDoc["organizationId"];

		if (OrganizationIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OrganizationIdValue, m_OrganizationId);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member roles is null!");
		}
	}

	if (JsonDoc.HasMember("expiresAt"))
	{
		const rapidjson::Value& ExpiresAtValue = JsonDoc["expiresAt"];

		if (ExpiresAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExpiresAtValue, m_ExpiresAt);
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt);
		}
	}
}


utility::string_t OrganizationInviteDto::GetId() const
{
	return m_Id.value();
}

bool OrganizationInviteDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t OrganizationInviteDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool OrganizationInviteDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t OrganizationInviteDto::GetEmail() const
{
	return m_Email.value();
}

bool OrganizationInviteDto::HasEmail() const
{
	return m_Email.has_value();
}
void OrganizationInviteDto::SetEmail(const utility::string_t& Value)
{
	m_Email = Value;
}
utility::string_t OrganizationInviteDto::GetOrganizationId() const
{
	return m_OrganizationId.value();
}

bool OrganizationInviteDto::HasOrganizationId() const
{
	return m_OrganizationId.has_value();
}
const std::vector<utility::string_t>& OrganizationInviteDto::GetRoles() const
{
	return m_Roles.value();
}

bool OrganizationInviteDto::HasRoles() const
{
	return m_Roles.has_value();
}
void OrganizationInviteDto::SetRoles(const std::vector<utility::string_t>& Value)
{
	m_Roles = Value;
}
utility::string_t OrganizationInviteDto::GetExpiresAt() const
{
	return m_ExpiresAt.value();
}

bool OrganizationInviteDto::HasExpiresAt() const
{
	return m_ExpiresAt.has_value();
}
utility::string_t OrganizationInviteDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool OrganizationInviteDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}

OrganizationMember::OrganizationMember()
{
}
OrganizationMember::~OrganizationMember()
{
}

utility::string_t OrganizationMember::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_Roles.has_value())
	{
		rapidjson::Value RolesValue(TypeToJsonValue(m_Roles, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("roles", RolesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void OrganizationMember::FromJson(const utility::string_t& Val)
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
	}

	if (JsonDoc.HasMember("roles"))
	{
		const rapidjson::Value& RolesValue = JsonDoc["roles"];

		if (RolesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RolesValue, m_Roles);
		}
	}
}


utility::string_t OrganizationMember::GetUserId() const
{
	return m_UserId.value();
}

bool OrganizationMember::HasUserId() const
{
	return m_UserId.has_value();
}
void OrganizationMember::SetUserId(const utility::string_t& Value)
{
	m_UserId = Value;
}
const std::vector<utility::string_t>& OrganizationMember::GetRoles() const
{
	return m_Roles.value();
}

bool OrganizationMember::HasRoles() const
{
	return m_Roles.has_value();
}
void OrganizationMember::SetRoles(const std::vector<utility::string_t>& Value)
{
	m_Roles = Value;
}

ProfileDto::ProfileDto()
{
}
ProfileDto::~ProfileDto()
{
}

utility::string_t ProfileDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Email.has_value())
	{
		rapidjson::Value EmailValue(TypeToJsonValue(m_Email, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("email", EmailValue, JsonDoc.GetAllocator());
	}

	if (m_GuestDeviceId.has_value())
	{
		rapidjson::Value GuestDeviceIdValue(TypeToJsonValue(m_GuestDeviceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("guestDeviceId", GuestDeviceIdValue, JsonDoc.GetAllocator());
	}

	if (m_GuestFirstLoginIdentified.has_value())
	{
		rapidjson::Value GuestFirstLoginIdentifiedValue(TypeToJsonValue(m_GuestFirstLoginIdentified, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("guestFirstLoginIdentified", GuestFirstLoginIdentifiedValue, JsonDoc.GetAllocator());
	}

	if (m_LastLoginAt.has_value())
	{
		rapidjson::Value LastLoginAtValue(TypeToJsonValue(m_LastLoginAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastLoginAt", LastLoginAtValue, JsonDoc.GetAllocator());
	}

	if (m_LastLoginNonce.has_value())
	{
		rapidjson::Value LastLoginNonceValue(TypeToJsonValue(m_LastLoginNonce, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastLoginNonce", LastLoginNonceValue, JsonDoc.GetAllocator());
	}

	if (m_LastDeviceId.has_value())
	{
		rapidjson::Value LastDeviceIdValue(TypeToJsonValue(m_LastDeviceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastDeviceId", LastDeviceIdValue, JsonDoc.GetAllocator());
	}

	if (m_LastPlatform.has_value())
	{
		rapidjson::Value LastPlatformValue(TypeToJsonValue(m_LastPlatform, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastPlatform", LastPlatformValue, JsonDoc.GetAllocator());
	}

	if (m_AvatarId.has_value())
	{
		rapidjson::Value AvatarIdValue(TypeToJsonValue(m_AvatarId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("avatarId", AvatarIdValue, JsonDoc.GetAllocator());
	}

	if (m_UserName.has_value())
	{
		rapidjson::Value UserNameValue(TypeToJsonValue(m_UserName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userName", UserNameValue, JsonDoc.GetAllocator());
	}

	if (m_FirstName.has_value())
	{
		rapidjson::Value FirstNameValue(TypeToJsonValue(m_FirstName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("firstName", FirstNameValue, JsonDoc.GetAllocator());
	}

	if (m_DisplayName.has_value())
	{
		rapidjson::Value DisplayNameValue(TypeToJsonValue(m_DisplayName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("displayName", DisplayNameValue, JsonDoc.GetAllocator());
	}

	if (m_IsEmailConfirmed.has_value())
	{
		rapidjson::Value IsEmailConfirmedValue(TypeToJsonValue(m_IsEmailConfirmed, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isEmailConfirmed", IsEmailConfirmedValue, JsonDoc.GetAllocator());
	}

	if (m_Roles.has_value())
	{
		rapidjson::Value RolesValue(TypeToJsonValue(m_Roles, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("roles", RolesValue, JsonDoc.GetAllocator());
	}

	if (m_VerifiedAgeEighteen.has_value())
	{
		rapidjson::Value VerifiedAgeEighteenValue(TypeToJsonValue(m_VerifiedAgeEighteen, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("verifiedAgeEighteen", VerifiedAgeEighteenValue, JsonDoc.GetAllocator());
	}

	if (m_OrganizationIds.has_value())
	{
		rapidjson::Value OrganizationIdsValue(TypeToJsonValue(m_OrganizationIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("organizationIds", OrganizationIdsValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedBy.has_value())
	{
		rapidjson::Value CreatedByValue(TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdBy", CreatedByValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedBy.has_value())
	{
		rapidjson::Value UpdatedByValue(TypeToJsonValue(m_UpdatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedBy", UpdatedByValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedAt.has_value())
	{
		rapidjson::Value UpdatedAtValue(TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedAt", UpdatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_Locked.has_value())
	{
		rapidjson::Value LockedValue(TypeToJsonValue(m_Locked, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("locked", LockedValue, JsonDoc.GetAllocator());
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
	}

	if (JsonDoc.HasMember("email"))
	{
		const rapidjson::Value& EmailValue = JsonDoc["email"];

		if (EmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EmailValue, m_Email);
		}
	}

	if (JsonDoc.HasMember("guestDeviceId"))
	{
		const rapidjson::Value& GuestDeviceIdValue = JsonDoc["guestDeviceId"];

		if (GuestDeviceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GuestDeviceIdValue, m_GuestDeviceId);
		}
	}

	if (JsonDoc.HasMember("guestFirstLoginIdentified"))
	{
		const rapidjson::Value& GuestFirstLoginIdentifiedValue = JsonDoc["guestFirstLoginIdentified"];

		if (GuestFirstLoginIdentifiedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GuestFirstLoginIdentifiedValue, m_GuestFirstLoginIdentified);
		}
	}

	if (JsonDoc.HasMember("lastLoginAt"))
	{
		const rapidjson::Value& LastLoginAtValue = JsonDoc["lastLoginAt"];

		if (LastLoginAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastLoginAtValue, m_LastLoginAt);
		}
	}

	if (JsonDoc.HasMember("lastLoginNonce"))
	{
		const rapidjson::Value& LastLoginNonceValue = JsonDoc["lastLoginNonce"];

		if (LastLoginNonceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastLoginNonceValue, m_LastLoginNonce);
		}
	}

	if (JsonDoc.HasMember("lastDeviceId"))
	{
		const rapidjson::Value& LastDeviceIdValue = JsonDoc["lastDeviceId"];

		if (LastDeviceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastDeviceIdValue, m_LastDeviceId);
		}
	}

	if (JsonDoc.HasMember("lastPlatform"))
	{
		const rapidjson::Value& LastPlatformValue = JsonDoc["lastPlatform"];

		if (LastPlatformValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastPlatformValue, m_LastPlatform);
		}
	}

	if (JsonDoc.HasMember("avatarId"))
	{
		const rapidjson::Value& AvatarIdValue = JsonDoc["avatarId"];

		if (AvatarIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AvatarIdValue, m_AvatarId);
		}
	}

	if (JsonDoc.HasMember("userName"))
	{
		const rapidjson::Value& UserNameValue = JsonDoc["userName"];

		if (UserNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserNameValue, m_UserName);
		}
	}

	if (JsonDoc.HasMember("firstName"))
	{
		const rapidjson::Value& FirstNameValue = JsonDoc["firstName"];

		if (FirstNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FirstNameValue, m_FirstName);
		}
	}

	if (JsonDoc.HasMember("displayName"))
	{
		const rapidjson::Value& DisplayNameValue = JsonDoc["displayName"];

		if (DisplayNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DisplayNameValue, m_DisplayName);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isEmailConfirmed is null!");
		}
	}

	if (JsonDoc.HasMember("roles"))
	{
		const rapidjson::Value& RolesValue = JsonDoc["roles"];

		if (RolesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RolesValue, m_Roles);
		}
	}

	if (JsonDoc.HasMember("verifiedAgeEighteen"))
	{
		const rapidjson::Value& VerifiedAgeEighteenValue = JsonDoc["verifiedAgeEighteen"];

		if (VerifiedAgeEighteenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VerifiedAgeEighteenValue, m_VerifiedAgeEighteen);
		}
	}

	if (JsonDoc.HasMember("organizationIds"))
	{
		const rapidjson::Value& OrganizationIdsValue = JsonDoc["organizationIds"];

		if (OrganizationIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OrganizationIdsValue, m_OrganizationIds);
		}
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy);
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt);
		}
	}

	if (JsonDoc.HasMember("updatedBy"))
	{
		const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

		if (UpdatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedByValue, m_UpdatedBy);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member locked is null!");
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
utility::string_t ProfileDto::GetEmail() const
{
	return m_Email.value();
}

bool ProfileDto::HasEmail() const
{
	return m_Email.has_value();
}
utility::string_t ProfileDto::GetGuestDeviceId() const
{
	return m_GuestDeviceId.value();
}

bool ProfileDto::HasGuestDeviceId() const
{
	return m_GuestDeviceId.has_value();
}
bool ProfileDto::GetGuestFirstLoginIdentified() const
{
	return m_GuestFirstLoginIdentified.value();
}

bool ProfileDto::HasGuestFirstLoginIdentified() const
{
	return m_GuestFirstLoginIdentified.has_value();
}
utility::string_t ProfileDto::GetLastLoginAt() const
{
	return m_LastLoginAt.value();
}

bool ProfileDto::HasLastLoginAt() const
{
	return m_LastLoginAt.has_value();
}
utility::string_t ProfileDto::GetLastLoginNonce() const
{
	return m_LastLoginNonce.value();
}

bool ProfileDto::HasLastLoginNonce() const
{
	return m_LastLoginNonce.has_value();
}
utility::string_t ProfileDto::GetLastDeviceId() const
{
	return m_LastDeviceId.value();
}

bool ProfileDto::HasLastDeviceId() const
{
	return m_LastDeviceId.has_value();
}
utility::string_t ProfileDto::GetLastPlatform() const
{
	return m_LastPlatform.value();
}

bool ProfileDto::HasLastPlatform() const
{
	return m_LastPlatform.has_value();
}
utility::string_t ProfileDto::GetAvatarId() const
{
	return m_AvatarId.value();
}

bool ProfileDto::HasAvatarId() const
{
	return m_AvatarId.has_value();
}
utility::string_t ProfileDto::GetUserName() const
{
	return m_UserName.value();
}

bool ProfileDto::HasUserName() const
{
	return m_UserName.has_value();
}
utility::string_t ProfileDto::GetFirstName() const
{
	return m_FirstName.value();
}

bool ProfileDto::HasFirstName() const
{
	return m_FirstName.has_value();
}
utility::string_t ProfileDto::GetDisplayName() const
{
	return m_DisplayName.value();
}

bool ProfileDto::HasDisplayName() const
{
	return m_DisplayName.has_value();
}
void ProfileDto::SetDisplayName(const utility::string_t& Value)
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
const std::vector<utility::string_t>& ProfileDto::GetRoles() const
{
	return m_Roles.value();
}

bool ProfileDto::HasRoles() const
{
	return m_Roles.has_value();
}
bool ProfileDto::GetVerifiedAgeEighteen() const
{
	return m_VerifiedAgeEighteen.value();
}

bool ProfileDto::HasVerifiedAgeEighteen() const
{
	return m_VerifiedAgeEighteen.has_value();
}
void ProfileDto::SetVerifiedAgeEighteen(const bool& Value)
{
	m_VerifiedAgeEighteen = Value;
}
const std::vector<utility::string_t>& ProfileDto::GetOrganizationIds() const
{
	return m_OrganizationIds.value();
}

bool ProfileDto::HasOrganizationIds() const
{
	return m_OrganizationIds.has_value();
}
utility::string_t ProfileDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool ProfileDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t ProfileDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool ProfileDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t ProfileDto::GetUpdatedBy() const
{
	return m_UpdatedBy.value();
}

bool ProfileDto::HasUpdatedBy() const
{
	return m_UpdatedBy.has_value();
}
utility::string_t ProfileDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool ProfileDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
bool ProfileDto::GetLocked() const
{
	return m_Locked.value();
}

bool ProfileDto::HasLocked() const
{
	return m_Locked.has_value();
}

ProfileDtoDataPage::ProfileDtoDataPage()
{
}
ProfileDtoDataPage::~ProfileDtoDataPage()
{
}

utility::string_t ProfileDtoDataPage::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_Skip.has_value())
	{
		rapidjson::Value SkipValue(TypeToJsonValue(m_Skip, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("skip", SkipValue, JsonDoc.GetAllocator());
	}

	if (m_Limit.has_value())
	{
		rapidjson::Value LimitValue(TypeToJsonValue(m_Limit, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("limit", LimitValue, JsonDoc.GetAllocator());
	}

	if (m_ItemCount.has_value())
	{
		rapidjson::Value ItemCountValue(TypeToJsonValue(m_ItemCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemCount", ItemCountValue, JsonDoc.GetAllocator());
	}

	if (m_ItemTotalCount.has_value())
	{
		rapidjson::Value ItemTotalCountValue(TypeToJsonValue(m_ItemTotalCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemTotalCount", ItemTotalCountValue, JsonDoc.GetAllocator());
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemCount is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemTotalCount is null!");
		}
	}
}


const std::vector<std::shared_ptr<ProfileDto>>& ProfileDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool ProfileDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void ProfileDtoDataPage::SetItems(const std::vector<std::shared_ptr<ProfileDto>>& Value)
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

ProfileLiteDto::ProfileLiteDto()
{
}
ProfileLiteDto::~ProfileLiteDto()
{
}

utility::string_t ProfileLiteDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_AvatarId.has_value())
	{
		rapidjson::Value AvatarIdValue(TypeToJsonValue(m_AvatarId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("avatarId", AvatarIdValue, JsonDoc.GetAllocator());
	}

	if (m_UserName.has_value())
	{
		rapidjson::Value UserNameValue(TypeToJsonValue(m_UserName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userName", UserNameValue, JsonDoc.GetAllocator());
	}

	if (m_DisplayName.has_value())
	{
		rapidjson::Value DisplayNameValue(TypeToJsonValue(m_DisplayName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("displayName", DisplayNameValue, JsonDoc.GetAllocator());
	}

	if (m_Platform.has_value())
	{
		rapidjson::Value PlatformValue(TypeToJsonValue(m_Platform, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("platform", PlatformValue, JsonDoc.GetAllocator());
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
	}

	if (JsonDoc.HasMember("avatarId"))
	{
		const rapidjson::Value& AvatarIdValue = JsonDoc["avatarId"];

		if (AvatarIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AvatarIdValue, m_AvatarId);
		}
	}

	if (JsonDoc.HasMember("userName"))
	{
		const rapidjson::Value& UserNameValue = JsonDoc["userName"];

		if (UserNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserNameValue, m_UserName);
		}
	}

	if (JsonDoc.HasMember("displayName"))
	{
		const rapidjson::Value& DisplayNameValue = JsonDoc["displayName"];

		if (DisplayNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DisplayNameValue, m_DisplayName);
		}
	}

	if (JsonDoc.HasMember("platform"))
	{
		const rapidjson::Value& PlatformValue = JsonDoc["platform"];

		if (PlatformValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PlatformValue, m_Platform);
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
utility::string_t ProfileLiteDto::GetAvatarId() const
{
	return m_AvatarId.value();
}

bool ProfileLiteDto::HasAvatarId() const
{
	return m_AvatarId.has_value();
}
utility::string_t ProfileLiteDto::GetUserName() const
{
	return m_UserName.value();
}

bool ProfileLiteDto::HasUserName() const
{
	return m_UserName.has_value();
}
utility::string_t ProfileLiteDto::GetDisplayName() const
{
	return m_DisplayName.value();
}

bool ProfileLiteDto::HasDisplayName() const
{
	return m_DisplayName.has_value();
}
utility::string_t ProfileLiteDto::GetPlatform() const
{
	return m_Platform.value();
}

bool ProfileLiteDto::HasPlatform() const
{
	return m_Platform.has_value();
}

RefreshRequest::RefreshRequest()
{
}
RefreshRequest::~RefreshRequest()
{
}

utility::string_t RefreshRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_RefreshToken.has_value())
	{
		rapidjson::Value RefreshTokenValue(TypeToJsonValue(m_RefreshToken, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("refreshToken", RefreshTokenValue, JsonDoc.GetAllocator());
	}

	if (m_DeviceId.has_value())
	{
		rapidjson::Value DeviceIdValue(TypeToJsonValue(m_DeviceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deviceId", DeviceIdValue, JsonDoc.GetAllocator());
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member refreshToken is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member deviceId is null!");
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
void RefreshRequest::SetUserId(const utility::string_t& Value)
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
void RefreshRequest::SetRefreshToken(const utility::string_t& Value)
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
void RefreshRequest::SetDeviceId(const utility::string_t& Value)
{
	m_DeviceId = Value;
}

SettingsDto::SettingsDto()
{
}
SettingsDto::~SettingsDto()
{
}

utility::string_t SettingsDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_Context.has_value())
	{
		rapidjson::Value ContextValue(TypeToJsonValue(m_Context, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("context", ContextValue, JsonDoc.GetAllocator());
	}

	if (m_Settings.has_value())
	{
		rapidjson::Value SettingsValue(TypeToJsonValue(m_Settings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("settings", SettingsValue, JsonDoc.GetAllocator());
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
	}

	if (JsonDoc.HasMember("context"))
	{
		const rapidjson::Value& ContextValue = JsonDoc["context"];

		if (ContextValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ContextValue, m_Context);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member settings is null!");
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
utility::string_t SettingsDto::GetContext() const
{
	return m_Context.value();
}

bool SettingsDto::HasContext() const
{
	return m_Context.has_value();
}
const std::map<utility::string_t, utility::string_t>& SettingsDto::GetSettings() const
{
	return m_Settings.value();
}

bool SettingsDto::HasSettings() const
{
	return m_Settings.has_value();
}
void SettingsDto::SetSettings(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Settings = Value;
}

SocialProviderInfo::SocialProviderInfo()
{
}
SocialProviderInfo::~SocialProviderInfo()
{
}

utility::string_t SocialProviderInfo::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ProviderName.has_value())
	{
		rapidjson::Value ProviderNameValue(TypeToJsonValue(m_ProviderName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("providerName", ProviderNameValue, JsonDoc.GetAllocator());
	}

	if (m_ClientId.has_value())
	{
		rapidjson::Value ClientIdValue(TypeToJsonValue(m_ClientId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("clientId", ClientIdValue, JsonDoc.GetAllocator());
	}

	if (m_Scopes.has_value())
	{
		rapidjson::Value ScopesValue(TypeToJsonValue(m_Scopes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopes", ScopesValue, JsonDoc.GetAllocator());
	}

	if (m_AuthorizeEndpoint.has_value())
	{
		rapidjson::Value AuthorizeEndpointValue(TypeToJsonValue(m_AuthorizeEndpoint, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("authorizeEndpoint", AuthorizeEndpointValue, JsonDoc.GetAllocator());
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
	}

	if (JsonDoc.HasMember("clientId"))
	{
		const rapidjson::Value& ClientIdValue = JsonDoc["clientId"];

		if (ClientIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ClientIdValue, m_ClientId);
		}
	}

	if (JsonDoc.HasMember("scopes"))
	{
		const rapidjson::Value& ScopesValue = JsonDoc["scopes"];

		if (ScopesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopesValue, m_Scopes);
		}
	}

	if (JsonDoc.HasMember("authorizeEndpoint"))
	{
		const rapidjson::Value& AuthorizeEndpointValue = JsonDoc["authorizeEndpoint"];

		if (AuthorizeEndpointValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AuthorizeEndpointValue, m_AuthorizeEndpoint);
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
void SocialProviderInfo::SetProviderName(const utility::string_t& Value)
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
void SocialProviderInfo::SetClientId(const utility::string_t& Value)
{
	m_ClientId = Value;
}
const std::vector<utility::string_t>& SocialProviderInfo::GetScopes() const
{
	return m_Scopes.value();
}

bool SocialProviderInfo::HasScopes() const
{
	return m_Scopes.has_value();
}
void SocialProviderInfo::SetScopes(const std::vector<utility::string_t>& Value)
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
void SocialProviderInfo::SetAuthorizeEndpoint(const utility::string_t& Value)
{
	m_AuthorizeEndpoint = Value;
}

StringDataPage::StringDataPage()
{
}
StringDataPage::~StringDataPage()
{
}

utility::string_t StringDataPage::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_Skip.has_value())
	{
		rapidjson::Value SkipValue(TypeToJsonValue(m_Skip, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("skip", SkipValue, JsonDoc.GetAllocator());
	}

	if (m_Limit.has_value())
	{
		rapidjson::Value LimitValue(TypeToJsonValue(m_Limit, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("limit", LimitValue, JsonDoc.GetAllocator());
	}

	if (m_ItemCount.has_value())
	{
		rapidjson::Value ItemCountValue(TypeToJsonValue(m_ItemCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemCount", ItemCountValue, JsonDoc.GetAllocator());
	}

	if (m_ItemTotalCount.has_value())
	{
		rapidjson::Value ItemTotalCountValue(TypeToJsonValue(m_ItemTotalCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemTotalCount", ItemTotalCountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void StringDataPage::FromJson(const utility::string_t& Val)
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemCount is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemTotalCount is null!");
		}
	}
}


const std::vector<utility::string_t>& StringDataPage::GetItems() const
{
	return m_Items.value();
}

bool StringDataPage::HasItems() const
{
	return m_Items.has_value();
}
void StringDataPage::SetItems(const std::vector<utility::string_t>& Value)
{
	m_Items = Value;
}
int32_t StringDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool StringDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void StringDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t StringDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool StringDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void StringDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t StringDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool StringDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void StringDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t StringDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool StringDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void StringDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

StripeCheckoutRequest::StripeCheckoutRequest()
{
}
StripeCheckoutRequest::~StripeCheckoutRequest()
{
}

utility::string_t StripeCheckoutRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_LookupKey.has_value())
	{
		rapidjson::Value LookupKeyValue(TypeToJsonValue(m_LookupKey, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lookupKey", LookupKeyValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void StripeCheckoutRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("lookupKey"))
	{
		const rapidjson::Value& LookupKeyValue = JsonDoc["lookupKey"];

		if (LookupKeyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LookupKeyValue, m_LookupKey);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member lookupKey is null!");
		}
	}
}


utility::string_t StripeCheckoutRequest::GetLookupKey() const
{
	return m_LookupKey.value();
}

bool StripeCheckoutRequest::HasLookupKey() const
{
	return m_LookupKey.has_value();
}
void StripeCheckoutRequest::SetLookupKey(const utility::string_t& Value)
{
	m_LookupKey = Value;
}

StripeCheckoutSessionDto::StripeCheckoutSessionDto()
{
}
StripeCheckoutSessionDto::~StripeCheckoutSessionDto()
{
}

utility::string_t StripeCheckoutSessionDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_CheckoutUrl.has_value())
	{
		rapidjson::Value CheckoutUrlValue(TypeToJsonValue(m_CheckoutUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("checkoutUrl", CheckoutUrlValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void StripeCheckoutSessionDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("checkoutUrl"))
	{
		const rapidjson::Value& CheckoutUrlValue = JsonDoc["checkoutUrl"];

		if (CheckoutUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CheckoutUrlValue, m_CheckoutUrl);
		}
	}
}


utility::string_t StripeCheckoutSessionDto::GetCheckoutUrl() const
{
	return m_CheckoutUrl.value();
}

bool StripeCheckoutSessionDto::HasCheckoutUrl() const
{
	return m_CheckoutUrl.has_value();
}

StripeCustomerDto::StripeCustomerDto()
{
}
StripeCustomerDto::~StripeCustomerDto()
{
}

utility::string_t StripeCustomerDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_StripeCustomerId.has_value())
	{
		rapidjson::Value StripeCustomerIdValue(TypeToJsonValue(m_StripeCustomerId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("stripeCustomerId", StripeCustomerIdValue, JsonDoc.GetAllocator());
	}

	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_CustomerName.has_value())
	{
		rapidjson::Value CustomerNameValue(TypeToJsonValue(m_CustomerName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("customerName", CustomerNameValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void StripeCustomerDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("stripeCustomerId"))
	{
		const rapidjson::Value& StripeCustomerIdValue = JsonDoc["stripeCustomerId"];

		if (StripeCustomerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StripeCustomerIdValue, m_StripeCustomerId);
		}
	}

	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId);
		}
	}

	if (JsonDoc.HasMember("customerName"))
	{
		const rapidjson::Value& CustomerNameValue = JsonDoc["customerName"];

		if (CustomerNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CustomerNameValue, m_CustomerName);
		}
	}
}


utility::string_t StripeCustomerDto::GetStripeCustomerId() const
{
	return m_StripeCustomerId.value();
}

bool StripeCustomerDto::HasStripeCustomerId() const
{
	return m_StripeCustomerId.has_value();
}
utility::string_t StripeCustomerDto::GetUserId() const
{
	return m_UserId.value();
}

bool StripeCustomerDto::HasUserId() const
{
	return m_UserId.has_value();
}
utility::string_t StripeCustomerDto::GetCustomerName() const
{
	return m_CustomerName.value();
}

bool StripeCustomerDto::HasCustomerName() const
{
	return m_CustomerName.has_value();
}

StripeCustomerPortalDto::StripeCustomerPortalDto()
{
}
StripeCustomerPortalDto::~StripeCustomerPortalDto()
{
}

utility::string_t StripeCustomerPortalDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_CustomerPortalUrl.has_value())
	{
		rapidjson::Value CustomerPortalUrlValue(TypeToJsonValue(m_CustomerPortalUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("customerPortalUrl", CustomerPortalUrlValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void StripeCustomerPortalDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("customerPortalUrl"))
	{
		const rapidjson::Value& CustomerPortalUrlValue = JsonDoc["customerPortalUrl"];

		if (CustomerPortalUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CustomerPortalUrlValue, m_CustomerPortalUrl);
		}
	}
}


utility::string_t StripeCustomerPortalDto::GetCustomerPortalUrl() const
{
	return m_CustomerPortalUrl.value();
}

bool StripeCustomerPortalDto::HasCustomerPortalUrl() const
{
	return m_CustomerPortalUrl.has_value();
}

TenantAdminAccount::TenantAdminAccount()
{
}
TenantAdminAccount::~TenantAdminAccount()
{
}

utility::string_t TenantAdminAccount::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_EmailAddress.has_value())
	{
		rapidjson::Value EmailAddressValue(TypeToJsonValue(m_EmailAddress, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("emailAddress", EmailAddressValue, JsonDoc.GetAllocator());
	}

	if (m_Password.has_value())
	{
		rapidjson::Value PasswordValue(TypeToJsonValue(m_Password, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("password", PasswordValue, JsonDoc.GetAllocator());
	}

	if (m_Roles.has_value())
	{
		rapidjson::Value RolesValue(TypeToJsonValue(m_Roles, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("roles", RolesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void TenantAdminAccount::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("emailAddress"))
	{
		const rapidjson::Value& EmailAddressValue = JsonDoc["emailAddress"];

		if (EmailAddressValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EmailAddressValue, m_EmailAddress);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member emailAddress is null!");
		}
	}

	if (JsonDoc.HasMember("password"))
	{
		const rapidjson::Value& PasswordValue = JsonDoc["password"];

		if (PasswordValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PasswordValue, m_Password);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member roles is null!");
		}
	}
}


utility::string_t TenantAdminAccount::GetEmailAddress() const
{
	return m_EmailAddress.value();
}

bool TenantAdminAccount::HasEmailAddress() const
{
	return m_EmailAddress.has_value();
}
void TenantAdminAccount::SetEmailAddress(const utility::string_t& Value)
{
	m_EmailAddress = Value;
}
utility::string_t TenantAdminAccount::GetPassword() const
{
	return m_Password.value();
}

bool TenantAdminAccount::HasPassword() const
{
	return m_Password.has_value();
}
const std::vector<utility::string_t>& TenantAdminAccount::GetRoles() const
{
	return m_Roles.value();
}

bool TenantAdminAccount::HasRoles() const
{
	return m_Roles.has_value();
}
void TenantAdminAccount::SetRoles(const std::vector<utility::string_t>& Value)
{
	m_Roles = Value;
}

TenantCleanupFilters::TenantCleanupFilters()
{
}
TenantCleanupFilters::~TenantCleanupFilters()
{
}

utility::string_t TenantCleanupFilters::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_DeleteTenant.has_value())
	{
		rapidjson::Value DeleteTenantValue(TypeToJsonValue(m_DeleteTenant, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deleteTenant", DeleteTenantValue, JsonDoc.GetAllocator());
	}

	if (m_DeleteAllSpaces.has_value())
	{
		rapidjson::Value DeleteAllSpacesValue(TypeToJsonValue(m_DeleteAllSpaces, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deleteAllSpaces", DeleteAllSpacesValue, JsonDoc.GetAllocator());
	}

	if (m_DeleteAllUsers.has_value())
	{
		rapidjson::Value DeleteAllUsersValue(TypeToJsonValue(m_DeleteAllUsers, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deleteAllUsers", DeleteAllUsersValue, JsonDoc.GetAllocator());
	}

	if (m_DeleteAllPois.has_value())
	{
		rapidjson::Value DeleteAllPoisValue(TypeToJsonValue(m_DeleteAllPois, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deleteAllPois", DeleteAllPoisValue, JsonDoc.GetAllocator());
	}

	if (m_DeleteAllSequences.has_value())
	{
		rapidjson::Value DeleteAllSequencesValue(TypeToJsonValue(m_DeleteAllSequences, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deleteAllSequences", DeleteAllSequencesValue, JsonDoc.GetAllocator());
	}

	if (m_DeleteAllEncryptedDocuments.has_value())
	{
		rapidjson::Value DeleteAllEncryptedDocumentsValue(TypeToJsonValue(m_DeleteAllEncryptedDocuments, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deleteAllEncryptedDocuments", DeleteAllEncryptedDocumentsValue, JsonDoc.GetAllocator());
	}

	if (m_DeleteAllPrototypes.has_value())
	{
		rapidjson::Value DeleteAllPrototypesValue(TypeToJsonValue(m_DeleteAllPrototypes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deleteAllPrototypes", DeleteAllPrototypesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void TenantCleanupFilters::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("deleteTenant"))
	{
		const rapidjson::Value& DeleteTenantValue = JsonDoc["deleteTenant"];

		if (DeleteTenantValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeleteTenantValue, m_DeleteTenant);
		}
	}

	if (JsonDoc.HasMember("deleteAllSpaces"))
	{
		const rapidjson::Value& DeleteAllSpacesValue = JsonDoc["deleteAllSpaces"];

		if (DeleteAllSpacesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeleteAllSpacesValue, m_DeleteAllSpaces);
		}
	}

	if (JsonDoc.HasMember("deleteAllUsers"))
	{
		const rapidjson::Value& DeleteAllUsersValue = JsonDoc["deleteAllUsers"];

		if (DeleteAllUsersValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeleteAllUsersValue, m_DeleteAllUsers);
		}
	}

	if (JsonDoc.HasMember("deleteAllPois"))
	{
		const rapidjson::Value& DeleteAllPoisValue = JsonDoc["deleteAllPois"];

		if (DeleteAllPoisValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeleteAllPoisValue, m_DeleteAllPois);
		}
	}

	if (JsonDoc.HasMember("deleteAllSequences"))
	{
		const rapidjson::Value& DeleteAllSequencesValue = JsonDoc["deleteAllSequences"];

		if (DeleteAllSequencesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeleteAllSequencesValue, m_DeleteAllSequences);
		}
	}

	if (JsonDoc.HasMember("deleteAllEncryptedDocuments"))
	{
		const rapidjson::Value& DeleteAllEncryptedDocumentsValue = JsonDoc["deleteAllEncryptedDocuments"];

		if (DeleteAllEncryptedDocumentsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeleteAllEncryptedDocumentsValue, m_DeleteAllEncryptedDocuments);
		}
	}

	if (JsonDoc.HasMember("deleteAllPrototypes"))
	{
		const rapidjson::Value& DeleteAllPrototypesValue = JsonDoc["deleteAllPrototypes"];

		if (DeleteAllPrototypesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeleteAllPrototypesValue, m_DeleteAllPrototypes);
		}
	}
}


bool TenantCleanupFilters::GetDeleteTenant() const
{
	return m_DeleteTenant.value();
}

bool TenantCleanupFilters::HasDeleteTenant() const
{
	return m_DeleteTenant.has_value();
}
void TenantCleanupFilters::SetDeleteTenant(const bool& Value)
{
	m_DeleteTenant = Value;
}
bool TenantCleanupFilters::GetDeleteAllSpaces() const
{
	return m_DeleteAllSpaces.value();
}

bool TenantCleanupFilters::HasDeleteAllSpaces() const
{
	return m_DeleteAllSpaces.has_value();
}
void TenantCleanupFilters::SetDeleteAllSpaces(const bool& Value)
{
	m_DeleteAllSpaces = Value;
}
bool TenantCleanupFilters::GetDeleteAllUsers() const
{
	return m_DeleteAllUsers.value();
}

bool TenantCleanupFilters::HasDeleteAllUsers() const
{
	return m_DeleteAllUsers.has_value();
}
void TenantCleanupFilters::SetDeleteAllUsers(const bool& Value)
{
	m_DeleteAllUsers = Value;
}
bool TenantCleanupFilters::GetDeleteAllPois() const
{
	return m_DeleteAllPois.value();
}

bool TenantCleanupFilters::HasDeleteAllPois() const
{
	return m_DeleteAllPois.has_value();
}
void TenantCleanupFilters::SetDeleteAllPois(const bool& Value)
{
	m_DeleteAllPois = Value;
}
bool TenantCleanupFilters::GetDeleteAllSequences() const
{
	return m_DeleteAllSequences.value();
}

bool TenantCleanupFilters::HasDeleteAllSequences() const
{
	return m_DeleteAllSequences.has_value();
}
void TenantCleanupFilters::SetDeleteAllSequences(const bool& Value)
{
	m_DeleteAllSequences = Value;
}
bool TenantCleanupFilters::GetDeleteAllEncryptedDocuments() const
{
	return m_DeleteAllEncryptedDocuments.value();
}

bool TenantCleanupFilters::HasDeleteAllEncryptedDocuments() const
{
	return m_DeleteAllEncryptedDocuments.has_value();
}
void TenantCleanupFilters::SetDeleteAllEncryptedDocuments(const bool& Value)
{
	m_DeleteAllEncryptedDocuments = Value;
}
bool TenantCleanupFilters::GetDeleteAllPrototypes() const
{
	return m_DeleteAllPrototypes.value();
}

bool TenantCleanupFilters::HasDeleteAllPrototypes() const
{
	return m_DeleteAllPrototypes.has_value();
}
void TenantCleanupFilters::SetDeleteAllPrototypes(const bool& Value)
{
	m_DeleteAllPrototypes = Value;
}

TenantDto::TenantDto()
{
}
TenantDto::~TenantDto()
{
}

utility::string_t TenantDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_CompanyName.has_value())
	{
		rapidjson::Value CompanyNameValue(TypeToJsonValue(m_CompanyName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("companyName", CompanyNameValue, JsonDoc.GetAllocator());
	}

	if (m_AdminFullName.has_value())
	{
		rapidjson::Value AdminFullNameValue(TypeToJsonValue(m_AdminFullName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("adminFullName", AdminFullNameValue, JsonDoc.GetAllocator());
	}

	if (m_CompanyWebUrl.has_value())
	{
		rapidjson::Value CompanyWebUrlValue(TypeToJsonValue(m_CompanyWebUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("companyWebUrl", CompanyWebUrlValue, JsonDoc.GetAllocator());
	}

	if (m_PendingAdmin.has_value())
	{
		rapidjson::Value PendingAdminValue(TypeToJsonValue(m_PendingAdmin, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("pendingAdmin", PendingAdminValue, JsonDoc.GetAllocator());
	}

	if (m_Locked.has_value())
	{
		rapidjson::Value LockedValue(TypeToJsonValue(m_Locked, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("locked", LockedValue, JsonDoc.GetAllocator());
	}

	if (m_EmailSettings.has_value())
	{
		rapidjson::Value EmailSettingsValue(TypeToJsonValue(m_EmailSettings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("emailSettings", EmailSettingsValue, JsonDoc.GetAllocator());
	}

	if (m_EmailTemplateSettings.has_value())
	{
		rapidjson::Value EmailTemplateSettingsValue(TypeToJsonValue(m_EmailTemplateSettings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("emailTemplateSettings", EmailTemplateSettingsValue, JsonDoc.GetAllocator());
	}

	if (m_EmailRedirectUrlAllowList.has_value())
	{
		rapidjson::Value EmailRedirectUrlAllowListValue(TypeToJsonValue(m_EmailRedirectUrlAllowList, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("emailRedirectUrlAllowList", EmailRedirectUrlAllowListValue, JsonDoc.GetAllocator());
	}

	if (m_CorsAllowedOrigins.has_value())
	{
		rapidjson::Value CorsAllowedOriginsValue(TypeToJsonValue(m_CorsAllowedOrigins, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("corsAllowedOrigins", CorsAllowedOriginsValue, JsonDoc.GetAllocator());
	}

	if (m_AdminUserId.has_value())
	{
		rapidjson::Value AdminUserIdValue(TypeToJsonValue(m_AdminUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("adminUserId", AdminUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_EnableMusubi.has_value())
	{
		rapidjson::Value EnableMusubiValue(TypeToJsonValue(m_EnableMusubi, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("enableMusubi", EnableMusubiValue, JsonDoc.GetAllocator());
	}

	if (m_AdminCredentials.has_value())
	{
		rapidjson::Value AdminCredentialsValue(TypeToJsonValue(m_AdminCredentials, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("adminCredentials", AdminCredentialsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void TenantDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name);
		}
	}

	if (JsonDoc.HasMember("companyName"))
	{
		const rapidjson::Value& CompanyNameValue = JsonDoc["companyName"];

		if (CompanyNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CompanyNameValue, m_CompanyName);
		}
	}

	if (JsonDoc.HasMember("adminFullName"))
	{
		const rapidjson::Value& AdminFullNameValue = JsonDoc["adminFullName"];

		if (AdminFullNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AdminFullNameValue, m_AdminFullName);
		}
	}

	if (JsonDoc.HasMember("companyWebUrl"))
	{
		const rapidjson::Value& CompanyWebUrlValue = JsonDoc["companyWebUrl"];

		if (CompanyWebUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CompanyWebUrlValue, m_CompanyWebUrl);
		}
	}

	if (JsonDoc.HasMember("pendingAdmin"))
	{
		const rapidjson::Value& PendingAdminValue = JsonDoc["pendingAdmin"];

		if (PendingAdminValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PendingAdminValue, m_PendingAdmin);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member pendingAdmin is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member locked is null!");
		}
	}

	if (JsonDoc.HasMember("emailSettings"))
	{
		const rapidjson::Value& EmailSettingsValue = JsonDoc["emailSettings"];

		if (EmailSettingsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EmailSettingsValue, m_EmailSettings);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member emailSettings is null!");
		}
	}

	if (JsonDoc.HasMember("emailTemplateSettings"))
	{
		const rapidjson::Value& EmailTemplateSettingsValue = JsonDoc["emailTemplateSettings"];

		if (EmailTemplateSettingsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EmailTemplateSettingsValue, m_EmailTemplateSettings);
		}
	}

	if (JsonDoc.HasMember("emailRedirectUrlAllowList"))
	{
		const rapidjson::Value& EmailRedirectUrlAllowListValue = JsonDoc["emailRedirectUrlAllowList"];

		if (EmailRedirectUrlAllowListValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EmailRedirectUrlAllowListValue, m_EmailRedirectUrlAllowList);
		}
	}

	if (JsonDoc.HasMember("corsAllowedOrigins"))
	{
		const rapidjson::Value& CorsAllowedOriginsValue = JsonDoc["corsAllowedOrigins"];

		if (CorsAllowedOriginsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CorsAllowedOriginsValue, m_CorsAllowedOrigins);
		}
	}

	if (JsonDoc.HasMember("adminUserId"))
	{
		const rapidjson::Value& AdminUserIdValue = JsonDoc["adminUserId"];

		if (AdminUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AdminUserIdValue, m_AdminUserId);
		}
	}

	if (JsonDoc.HasMember("enableMusubi"))
	{
		const rapidjson::Value& EnableMusubiValue = JsonDoc["enableMusubi"];

		if (EnableMusubiValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EnableMusubiValue, m_EnableMusubi);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member enableMusubi is null!");
		}
	}

	if (JsonDoc.HasMember("adminCredentials"))
	{
		const rapidjson::Value& AdminCredentialsValue = JsonDoc["adminCredentials"];

		if (AdminCredentialsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AdminCredentialsValue, m_AdminCredentials);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member adminCredentials is null!");
		}
	}
}


utility::string_t TenantDto::GetName() const
{
	return m_Name.value();
}

bool TenantDto::HasName() const
{
	return m_Name.has_value();
}
utility::string_t TenantDto::GetCompanyName() const
{
	return m_CompanyName.value();
}

bool TenantDto::HasCompanyName() const
{
	return m_CompanyName.has_value();
}
utility::string_t TenantDto::GetAdminFullName() const
{
	return m_AdminFullName.value();
}

bool TenantDto::HasAdminFullName() const
{
	return m_AdminFullName.has_value();
}
void TenantDto::SetAdminFullName(const utility::string_t& Value)
{
	m_AdminFullName = Value;
}
utility::string_t TenantDto::GetCompanyWebUrl() const
{
	return m_CompanyWebUrl.value();
}

bool TenantDto::HasCompanyWebUrl() const
{
	return m_CompanyWebUrl.has_value();
}
void TenantDto::SetCompanyWebUrl(const utility::string_t& Value)
{
	m_CompanyWebUrl = Value;
}
bool TenantDto::GetPendingAdmin() const
{
	return m_PendingAdmin.value();
}

bool TenantDto::HasPendingAdmin() const
{
	return m_PendingAdmin.has_value();
}
void TenantDto::SetPendingAdmin(const bool& Value)
{
	m_PendingAdmin = Value;
}
bool TenantDto::GetLocked() const
{
	return m_Locked.value();
}

bool TenantDto::HasLocked() const
{
	return m_Locked.has_value();
}
void TenantDto::SetLocked(const bool& Value)
{
	m_Locked = Value;
}
std::shared_ptr<TenantEmailSettingsDto> TenantDto::GetEmailSettings() const
{
	return m_EmailSettings.value();
}

bool TenantDto::HasEmailSettings() const
{
	return m_EmailSettings.has_value();
}
void TenantDto::SetEmailSettings(const std::shared_ptr<TenantEmailSettingsDto>& Value)
{
	m_EmailSettings = Value;
}
const std::vector<std::shared_ptr<TenantEmailTemplateSettingsDto>>& TenantDto::GetEmailTemplateSettings() const
{
	return m_EmailTemplateSettings.value();
}

bool TenantDto::HasEmailTemplateSettings() const
{
	return m_EmailTemplateSettings.has_value();
}
void TenantDto::SetEmailTemplateSettings(const std::vector<std::shared_ptr<TenantEmailTemplateSettingsDto>>& Value)
{
	m_EmailTemplateSettings = Value;
}
const std::vector<utility::string_t>& TenantDto::GetEmailRedirectUrlAllowList() const
{
	return m_EmailRedirectUrlAllowList.value();
}

bool TenantDto::HasEmailRedirectUrlAllowList() const
{
	return m_EmailRedirectUrlAllowList.has_value();
}
void TenantDto::SetEmailRedirectUrlAllowList(const std::vector<utility::string_t>& Value)
{
	m_EmailRedirectUrlAllowList = Value;
}
const std::vector<utility::string_t>& TenantDto::GetCorsAllowedOrigins() const
{
	return m_CorsAllowedOrigins.value();
}

bool TenantDto::HasCorsAllowedOrigins() const
{
	return m_CorsAllowedOrigins.has_value();
}
void TenantDto::SetCorsAllowedOrigins(const std::vector<utility::string_t>& Value)
{
	m_CorsAllowedOrigins = Value;
}
utility::string_t TenantDto::GetAdminUserId() const
{
	return m_AdminUserId.value();
}

bool TenantDto::HasAdminUserId() const
{
	return m_AdminUserId.has_value();
}
bool TenantDto::GetEnableMusubi() const
{
	return m_EnableMusubi.value();
}

bool TenantDto::HasEnableMusubi() const
{
	return m_EnableMusubi.has_value();
}
void TenantDto::SetEnableMusubi(const bool& Value)
{
	m_EnableMusubi = Value;
}
std::shared_ptr<TenantAdminAccount> TenantDto::GetAdminCredentials() const
{
	return m_AdminCredentials.value();
}

bool TenantDto::HasAdminCredentials() const
{
	return m_AdminCredentials.has_value();
}
void TenantDto::SetAdminCredentials(const std::shared_ptr<TenantAdminAccount>& Value)
{
	m_AdminCredentials = Value;
}

TenantEmailSettingsDto::TenantEmailSettingsDto()
{
}
TenantEmailSettingsDto::~TenantEmailSettingsDto()
{
}

utility::string_t TenantEmailSettingsDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_AllowedEmailDomains.has_value())
	{
		rapidjson::Value AllowedEmailDomainsValue(TypeToJsonValue(m_AllowedEmailDomains, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("allowedEmailDomains", AllowedEmailDomainsValue, JsonDoc.GetAllocator());
	}

	if (m_AllowedEmailUserNameSuffixes.has_value())
	{
		rapidjson::Value AllowedEmailUserNameSuffixesValue(TypeToJsonValue(m_AllowedEmailUserNameSuffixes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("allowedEmailUserNameSuffixes", AllowedEmailUserNameSuffixesValue, JsonDoc.GetAllocator());
	}

	if (m_DisableEmailSender.has_value())
	{
		rapidjson::Value DisableEmailSenderValue(TypeToJsonValue(m_DisableEmailSender, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("disableEmailSender", DisableEmailSenderValue, JsonDoc.GetAllocator());
	}

	if (m_EnableEmailAutoConfirm.has_value())
	{
		rapidjson::Value EnableEmailAutoConfirmValue(TypeToJsonValue(m_EnableEmailAutoConfirm, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("enableEmailAutoConfirm", EnableEmailAutoConfirmValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void TenantEmailSettingsDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("allowedEmailDomains"))
	{
		const rapidjson::Value& AllowedEmailDomainsValue = JsonDoc["allowedEmailDomains"];

		if (AllowedEmailDomainsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AllowedEmailDomainsValue, m_AllowedEmailDomains);
		}
	}

	if (JsonDoc.HasMember("allowedEmailUserNameSuffixes"))
	{
		const rapidjson::Value& AllowedEmailUserNameSuffixesValue = JsonDoc["allowedEmailUserNameSuffixes"];

		if (AllowedEmailUserNameSuffixesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AllowedEmailUserNameSuffixesValue, m_AllowedEmailUserNameSuffixes);
		}
	}

	if (JsonDoc.HasMember("disableEmailSender"))
	{
		const rapidjson::Value& DisableEmailSenderValue = JsonDoc["disableEmailSender"];

		if (DisableEmailSenderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DisableEmailSenderValue, m_DisableEmailSender);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member disableEmailSender is null!");
		}
	}

	if (JsonDoc.HasMember("enableEmailAutoConfirm"))
	{
		const rapidjson::Value& EnableEmailAutoConfirmValue = JsonDoc["enableEmailAutoConfirm"];

		if (EnableEmailAutoConfirmValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EnableEmailAutoConfirmValue, m_EnableEmailAutoConfirm);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member enableEmailAutoConfirm is null!");
		}
	}
}


const std::vector<utility::string_t>& TenantEmailSettingsDto::GetAllowedEmailDomains() const
{
	return m_AllowedEmailDomains.value();
}

bool TenantEmailSettingsDto::HasAllowedEmailDomains() const
{
	return m_AllowedEmailDomains.has_value();
}
void TenantEmailSettingsDto::SetAllowedEmailDomains(const std::vector<utility::string_t>& Value)
{
	m_AllowedEmailDomains = Value;
}
const std::vector<utility::string_t>& TenantEmailSettingsDto::GetAllowedEmailUserNameSuffixes() const
{
	return m_AllowedEmailUserNameSuffixes.value();
}

bool TenantEmailSettingsDto::HasAllowedEmailUserNameSuffixes() const
{
	return m_AllowedEmailUserNameSuffixes.has_value();
}
void TenantEmailSettingsDto::SetAllowedEmailUserNameSuffixes(const std::vector<utility::string_t>& Value)
{
	m_AllowedEmailUserNameSuffixes = Value;
}
bool TenantEmailSettingsDto::GetDisableEmailSender() const
{
	return m_DisableEmailSender.value();
}

bool TenantEmailSettingsDto::HasDisableEmailSender() const
{
	return m_DisableEmailSender.has_value();
}
void TenantEmailSettingsDto::SetDisableEmailSender(const bool& Value)
{
	m_DisableEmailSender = Value;
}
bool TenantEmailSettingsDto::GetEnableEmailAutoConfirm() const
{
	return m_EnableEmailAutoConfirm.value();
}

bool TenantEmailSettingsDto::HasEnableEmailAutoConfirm() const
{
	return m_EnableEmailAutoConfirm.has_value();
}
void TenantEmailSettingsDto::SetEnableEmailAutoConfirm(const bool& Value)
{
	m_EnableEmailAutoConfirm = Value;
}

TenantEmailTemplateSettingsDto::TenantEmailTemplateSettingsDto()
{
}
TenantEmailTemplateSettingsDto::~TenantEmailTemplateSettingsDto()
{
}

utility::string_t TenantEmailTemplateSettingsDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Type.has_value())
	{
		rapidjson::Value TypeValue(TypeToJsonValue(m_Type, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("type", TypeValue, JsonDoc.GetAllocator());
	}

	if (m_TemplateName.has_value())
	{
		rapidjson::Value TemplateNameValue(TypeToJsonValue(m_TemplateName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("templateName", TemplateNameValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceLinkTemplateName.has_value())
	{
		rapidjson::Value SpaceLinkTemplateNameValue(TypeToJsonValue(m_SpaceLinkTemplateName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceLinkTemplateName", SpaceLinkTemplateNameValue, JsonDoc.GetAllocator());
	}

	if (m_EnvironmentUrl.has_value())
	{
		rapidjson::Value EnvironmentUrlValue(TypeToJsonValue(m_EnvironmentUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("environmentUrl", EnvironmentUrlValue, JsonDoc.GetAllocator());
	}

	if (m_EnvironmentUrlTemplate.has_value())
	{
		rapidjson::Value EnvironmentUrlTemplateValue(TypeToJsonValue(m_EnvironmentUrlTemplate, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("environmentUrlTemplate", EnvironmentUrlTemplateValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceLinkUrlTemplate.has_value())
	{
		rapidjson::Value SpaceLinkUrlTemplateValue(TypeToJsonValue(m_SpaceLinkUrlTemplate, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceLinkUrlTemplate", SpaceLinkUrlTemplateValue, JsonDoc.GetAllocator());
	}

	if (m_TokenEnvironmentUrl.has_value())
	{
		rapidjson::Value TokenEnvironmentUrlValue(TypeToJsonValue(m_TokenEnvironmentUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tokenEnvironmentUrl", TokenEnvironmentUrlValue, JsonDoc.GetAllocator());
	}

	if (m_SenderEmail.has_value())
	{
		rapidjson::Value SenderEmailValue(TypeToJsonValue(m_SenderEmail, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("senderEmail", SenderEmailValue, JsonDoc.GetAllocator());
	}

	if (m_RecipientEmail.has_value())
	{
		rapidjson::Value RecipientEmailValue(TypeToJsonValue(m_RecipientEmail, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("recipientEmail", RecipientEmailValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void TenantEmailTemplateSettingsDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("type"))
	{
		const rapidjson::Value& TypeValue = JsonDoc["type"];

		if (TypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeValue, m_Type);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member type is null!");
		}
	}

	if (JsonDoc.HasMember("templateName"))
	{
		const rapidjson::Value& TemplateNameValue = JsonDoc["templateName"];

		if (TemplateNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TemplateNameValue, m_TemplateName);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member templateName is null!");
		}
	}

	if (JsonDoc.HasMember("spaceLinkTemplateName"))
	{
		const rapidjson::Value& SpaceLinkTemplateNameValue = JsonDoc["spaceLinkTemplateName"];

		if (SpaceLinkTemplateNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceLinkTemplateNameValue, m_SpaceLinkTemplateName);
		}
	}

	if (JsonDoc.HasMember("environmentUrl"))
	{
		const rapidjson::Value& EnvironmentUrlValue = JsonDoc["environmentUrl"];

		if (EnvironmentUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EnvironmentUrlValue, m_EnvironmentUrl);
		}
	}

	if (JsonDoc.HasMember("environmentUrlTemplate"))
	{
		const rapidjson::Value& EnvironmentUrlTemplateValue = JsonDoc["environmentUrlTemplate"];

		if (EnvironmentUrlTemplateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EnvironmentUrlTemplateValue, m_EnvironmentUrlTemplate);
		}
	}

	if (JsonDoc.HasMember("spaceLinkUrlTemplate"))
	{
		const rapidjson::Value& SpaceLinkUrlTemplateValue = JsonDoc["spaceLinkUrlTemplate"];

		if (SpaceLinkUrlTemplateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceLinkUrlTemplateValue, m_SpaceLinkUrlTemplate);
		}
	}

	if (JsonDoc.HasMember("tokenEnvironmentUrl"))
	{
		const rapidjson::Value& TokenEnvironmentUrlValue = JsonDoc["tokenEnvironmentUrl"];

		if (TokenEnvironmentUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TokenEnvironmentUrlValue, m_TokenEnvironmentUrl);
		}
	}

	if (JsonDoc.HasMember("senderEmail"))
	{
		const rapidjson::Value& SenderEmailValue = JsonDoc["senderEmail"];

		if (SenderEmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SenderEmailValue, m_SenderEmail);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member senderEmail is null!");
		}
	}

	if (JsonDoc.HasMember("recipientEmail"))
	{
		const rapidjson::Value& RecipientEmailValue = JsonDoc["recipientEmail"];

		if (RecipientEmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RecipientEmailValue, m_RecipientEmail);
		}
	}
}


utility::string_t TenantEmailTemplateSettingsDto::GetType() const
{
	return m_Type.value();
}

bool TenantEmailTemplateSettingsDto::HasType() const
{
	return m_Type.has_value();
}
void TenantEmailTemplateSettingsDto::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}
utility::string_t TenantEmailTemplateSettingsDto::GetTemplateName() const
{
	return m_TemplateName.value();
}

bool TenantEmailTemplateSettingsDto::HasTemplateName() const
{
	return m_TemplateName.has_value();
}
void TenantEmailTemplateSettingsDto::SetTemplateName(const utility::string_t& Value)
{
	m_TemplateName = Value;
}
utility::string_t TenantEmailTemplateSettingsDto::GetSpaceLinkTemplateName() const
{
	return m_SpaceLinkTemplateName.value();
}

bool TenantEmailTemplateSettingsDto::HasSpaceLinkTemplateName() const
{
	return m_SpaceLinkTemplateName.has_value();
}
void TenantEmailTemplateSettingsDto::SetSpaceLinkTemplateName(const utility::string_t& Value)
{
	m_SpaceLinkTemplateName = Value;
}
utility::string_t TenantEmailTemplateSettingsDto::GetEnvironmentUrl() const
{
	return m_EnvironmentUrl.value();
}

bool TenantEmailTemplateSettingsDto::HasEnvironmentUrl() const
{
	return m_EnvironmentUrl.has_value();
}
void TenantEmailTemplateSettingsDto::SetEnvironmentUrl(const utility::string_t& Value)
{
	m_EnvironmentUrl = Value;
}
utility::string_t TenantEmailTemplateSettingsDto::GetEnvironmentUrlTemplate() const
{
	return m_EnvironmentUrlTemplate.value();
}

bool TenantEmailTemplateSettingsDto::HasEnvironmentUrlTemplate() const
{
	return m_EnvironmentUrlTemplate.has_value();
}
void TenantEmailTemplateSettingsDto::SetEnvironmentUrlTemplate(const utility::string_t& Value)
{
	m_EnvironmentUrlTemplate = Value;
}
utility::string_t TenantEmailTemplateSettingsDto::GetSpaceLinkUrlTemplate() const
{
	return m_SpaceLinkUrlTemplate.value();
}

bool TenantEmailTemplateSettingsDto::HasSpaceLinkUrlTemplate() const
{
	return m_SpaceLinkUrlTemplate.has_value();
}
void TenantEmailTemplateSettingsDto::SetSpaceLinkUrlTemplate(const utility::string_t& Value)
{
	m_SpaceLinkUrlTemplate = Value;
}
utility::string_t TenantEmailTemplateSettingsDto::GetTokenEnvironmentUrl() const
{
	return m_TokenEnvironmentUrl.value();
}

bool TenantEmailTemplateSettingsDto::HasTokenEnvironmentUrl() const
{
	return m_TokenEnvironmentUrl.has_value();
}
void TenantEmailTemplateSettingsDto::SetTokenEnvironmentUrl(const utility::string_t& Value)
{
	m_TokenEnvironmentUrl = Value;
}
utility::string_t TenantEmailTemplateSettingsDto::GetSenderEmail() const
{
	return m_SenderEmail.value();
}

bool TenantEmailTemplateSettingsDto::HasSenderEmail() const
{
	return m_SenderEmail.has_value();
}
void TenantEmailTemplateSettingsDto::SetSenderEmail(const utility::string_t& Value)
{
	m_SenderEmail = Value;
}
utility::string_t TenantEmailTemplateSettingsDto::GetRecipientEmail() const
{
	return m_RecipientEmail.value();
}

bool TenantEmailTemplateSettingsDto::HasRecipientEmail() const
{
	return m_RecipientEmail.has_value();
}
void TenantEmailTemplateSettingsDto::SetRecipientEmail(const utility::string_t& Value)
{
	m_RecipientEmail = Value;
}

TokenResetPasswordRequest::TokenResetPasswordRequest()
{
}
TokenResetPasswordRequest::~TokenResetPasswordRequest()
{
}

utility::string_t TokenResetPasswordRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Token.has_value())
	{
		rapidjson::Value TokenValue(TypeToJsonValue(m_Token, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("token", TokenValue, JsonDoc.GetAllocator());
	}

	if (m_NewPassword.has_value())
	{
		rapidjson::Value NewPasswordValue(TypeToJsonValue(m_NewPassword, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("newPassword", NewPasswordValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void TokenResetPasswordRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("token"))
	{
		const rapidjson::Value& TokenValue = JsonDoc["token"];

		if (TokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TokenValue, m_Token);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member token is null!");
		}
	}

	if (JsonDoc.HasMember("newPassword"))
	{
		const rapidjson::Value& NewPasswordValue = JsonDoc["newPassword"];

		if (NewPasswordValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NewPasswordValue, m_NewPassword);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member newPassword is null!");
		}
	}
}


utility::string_t TokenResetPasswordRequest::GetToken() const
{
	return m_Token.value();
}

bool TokenResetPasswordRequest::HasToken() const
{
	return m_Token.has_value();
}
void TokenResetPasswordRequest::SetToken(const utility::string_t& Value)
{
	m_Token = Value;
}
utility::string_t TokenResetPasswordRequest::GetNewPassword() const
{
	return m_NewPassword.value();
}

bool TokenResetPasswordRequest::HasNewPassword() const
{
	return m_NewPassword.has_value();
}
void TokenResetPasswordRequest::SetNewPassword(const utility::string_t& Value)
{
	m_NewPassword = Value;
}

UpgradeGuestRequest::UpgradeGuestRequest()
{
}
UpgradeGuestRequest::~UpgradeGuestRequest()
{
}

utility::string_t UpgradeGuestRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Email.has_value())
	{
		rapidjson::Value EmailValue(TypeToJsonValue(m_Email, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("email", EmailValue, JsonDoc.GetAllocator());
	}

	if (m_UserName.has_value())
	{
		rapidjson::Value UserNameValue(TypeToJsonValue(m_UserName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userName", UserNameValue, JsonDoc.GetAllocator());
	}

	if (m_DisplayName.has_value())
	{
		rapidjson::Value DisplayNameValue(TypeToJsonValue(m_DisplayName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("displayName", DisplayNameValue, JsonDoc.GetAllocator());
	}

	if (m_Password.has_value())
	{
		rapidjson::Value PasswordValue(TypeToJsonValue(m_Password, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("password", PasswordValue, JsonDoc.GetAllocator());
	}

	if (m_GuestDeviceId.has_value())
	{
		rapidjson::Value GuestDeviceIdValue(TypeToJsonValue(m_GuestDeviceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("guestDeviceId", GuestDeviceIdValue, JsonDoc.GetAllocator());
	}

	if (m_SuppressConfirmationEmail.has_value())
	{
		rapidjson::Value SuppressConfirmationEmailValue(TypeToJsonValue(m_SuppressConfirmationEmail, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("suppressConfirmationEmail", SuppressConfirmationEmailValue, JsonDoc.GetAllocator());
	}

	if (m_AutoConfirm.has_value())
	{
		rapidjson::Value AutoConfirmValue(TypeToJsonValue(m_AutoConfirm, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("autoConfirm", AutoConfirmValue, JsonDoc.GetAllocator());
	}

	if (m_InviteToken.has_value())
	{
		rapidjson::Value InviteTokenValue(TypeToJsonValue(m_InviteToken, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("inviteToken", InviteTokenValue, JsonDoc.GetAllocator());
	}

	if (m_RedirectUrl.has_value())
	{
		rapidjson::Value RedirectUrlValue(TypeToJsonValue(m_RedirectUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("redirectUrl", RedirectUrlValue, JsonDoc.GetAllocator());
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member email is null!");
		}
	}

	if (JsonDoc.HasMember("userName"))
	{
		const rapidjson::Value& UserNameValue = JsonDoc["userName"];

		if (UserNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserNameValue, m_UserName);
		}
	}

	if (JsonDoc.HasMember("displayName"))
	{
		const rapidjson::Value& DisplayNameValue = JsonDoc["displayName"];

		if (DisplayNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DisplayNameValue, m_DisplayName);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member password is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member guestDeviceId is null!");
		}
	}

	if (JsonDoc.HasMember("suppressConfirmationEmail"))
	{
		const rapidjson::Value& SuppressConfirmationEmailValue = JsonDoc["suppressConfirmationEmail"];

		if (SuppressConfirmationEmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SuppressConfirmationEmailValue, m_SuppressConfirmationEmail);
		}
	}

	if (JsonDoc.HasMember("autoConfirm"))
	{
		const rapidjson::Value& AutoConfirmValue = JsonDoc["autoConfirm"];

		if (AutoConfirmValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AutoConfirmValue, m_AutoConfirm);
		}
	}

	if (JsonDoc.HasMember("inviteToken"))
	{
		const rapidjson::Value& InviteTokenValue = JsonDoc["inviteToken"];

		if (InviteTokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(InviteTokenValue, m_InviteToken);
		}
	}

	if (JsonDoc.HasMember("redirectUrl"))
	{
		const rapidjson::Value& RedirectUrlValue = JsonDoc["redirectUrl"];

		if (RedirectUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RedirectUrlValue, m_RedirectUrl);
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
void UpgradeGuestRequest::SetEmail(const utility::string_t& Value)
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
void UpgradeGuestRequest::SetUserName(const utility::string_t& Value)
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
void UpgradeGuestRequest::SetDisplayName(const utility::string_t& Value)
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
void UpgradeGuestRequest::SetPassword(const utility::string_t& Value)
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
void UpgradeGuestRequest::SetGuestDeviceId(const utility::string_t& Value)
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
void UpgradeGuestRequest::SetSuppressConfirmationEmail(const bool& Value)
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
void UpgradeGuestRequest::SetAutoConfirm(const bool& Value)
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
void UpgradeGuestRequest::SetInviteToken(const utility::string_t& Value)
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
void UpgradeGuestRequest::SetRedirectUrl(const utility::string_t& Value)
{
	m_RedirectUrl = Value;
}

UpgradeGuestSocialRequest::UpgradeGuestSocialRequest()
{
}
UpgradeGuestSocialRequest::~UpgradeGuestSocialRequest()
{
}

utility::string_t UpgradeGuestSocialRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Provider.has_value())
	{
		rapidjson::Value ProviderValue(TypeToJsonValue(m_Provider, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("provider", ProviderValue, JsonDoc.GetAllocator());
	}

	if (m_Token.has_value())
	{
		rapidjson::Value TokenValue(TypeToJsonValue(m_Token, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("token", TokenValue, JsonDoc.GetAllocator());
	}

	if (m_UserName.has_value())
	{
		rapidjson::Value UserNameValue(TypeToJsonValue(m_UserName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userName", UserNameValue, JsonDoc.GetAllocator());
	}

	if (m_DisplayName.has_value())
	{
		rapidjson::Value DisplayNameValue(TypeToJsonValue(m_DisplayName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("displayName", DisplayNameValue, JsonDoc.GetAllocator());
	}

	if (m_Password.has_value())
	{
		rapidjson::Value PasswordValue(TypeToJsonValue(m_Password, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("password", PasswordValue, JsonDoc.GetAllocator());
	}

	if (m_GuestDeviceId.has_value())
	{
		rapidjson::Value GuestDeviceIdValue(TypeToJsonValue(m_GuestDeviceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("guestDeviceId", GuestDeviceIdValue, JsonDoc.GetAllocator());
	}

	if (m_RedirectUrl.has_value())
	{
		rapidjson::Value RedirectUrlValue(TypeToJsonValue(m_RedirectUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("redirectUrl", RedirectUrlValue, JsonDoc.GetAllocator());
	}

	if (m_OAuthRedirectUri.has_value())
	{
		rapidjson::Value OAuthRedirectUriValue(TypeToJsonValue(m_OAuthRedirectUri, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("oAuthRedirectUri", OAuthRedirectUriValue, JsonDoc.GetAllocator());
	}

	if (m_OptionalProviderUserId.has_value())
	{
		rapidjson::Value OptionalProviderUserIdValue(TypeToJsonValue(m_OptionalProviderUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("optionalProviderUserId", OptionalProviderUserIdValue, JsonDoc.GetAllocator());
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member provider is null!");
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member token is null!");
		}
	}

	if (JsonDoc.HasMember("userName"))
	{
		const rapidjson::Value& UserNameValue = JsonDoc["userName"];

		if (UserNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserNameValue, m_UserName);
		}
	}

	if (JsonDoc.HasMember("displayName"))
	{
		const rapidjson::Value& DisplayNameValue = JsonDoc["displayName"];

		if (DisplayNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DisplayNameValue, m_DisplayName);
		}
	}

	if (JsonDoc.HasMember("password"))
	{
		const rapidjson::Value& PasswordValue = JsonDoc["password"];

		if (PasswordValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PasswordValue, m_Password);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member guestDeviceId is null!");
		}
	}

	if (JsonDoc.HasMember("redirectUrl"))
	{
		const rapidjson::Value& RedirectUrlValue = JsonDoc["redirectUrl"];

		if (RedirectUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RedirectUrlValue, m_RedirectUrl);
		}
	}

	if (JsonDoc.HasMember("oAuthRedirectUri"))
	{
		const rapidjson::Value& OAuthRedirectUriValue = JsonDoc["oAuthRedirectUri"];

		if (OAuthRedirectUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OAuthRedirectUriValue, m_OAuthRedirectUri);
		}
	}

	if (JsonDoc.HasMember("optionalProviderUserId"))
	{
		const rapidjson::Value& OptionalProviderUserIdValue = JsonDoc["optionalProviderUserId"];

		if (OptionalProviderUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OptionalProviderUserIdValue, m_OptionalProviderUserId);
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
void UpgradeGuestSocialRequest::SetProvider(const utility::string_t& Value)
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
void UpgradeGuestSocialRequest::SetToken(const utility::string_t& Value)
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
void UpgradeGuestSocialRequest::SetUserName(const utility::string_t& Value)
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
void UpgradeGuestSocialRequest::SetDisplayName(const utility::string_t& Value)
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
void UpgradeGuestSocialRequest::SetPassword(const utility::string_t& Value)
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
void UpgradeGuestSocialRequest::SetGuestDeviceId(const utility::string_t& Value)
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
void UpgradeGuestSocialRequest::SetRedirectUrl(const utility::string_t& Value)
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
void UpgradeGuestSocialRequest::SetOAuthRedirectUri(const utility::string_t& Value)
{
	m_OAuthRedirectUri = Value;
}
utility::string_t UpgradeGuestSocialRequest::GetOptionalProviderUserId() const
{
	return m_OptionalProviderUserId.value();
}

bool UpgradeGuestSocialRequest::HasOptionalProviderUserId() const
{
	return m_OptionalProviderUserId.has_value();
}
void UpgradeGuestSocialRequest::SetOptionalProviderUserId(const utility::string_t& Value)
{
	m_OptionalProviderUserId = Value;
}

UserQuery::UserQuery()
{
}
UserQuery::~UserQuery()
{
}

utility::string_t UserQuery::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_GuestDeviceId.has_value())
	{
		rapidjson::Value GuestDeviceIdValue(TypeToJsonValue(m_GuestDeviceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("guestDeviceId", GuestDeviceIdValue, JsonDoc.GetAllocator());
	}

	if (m_PartialGuestDeviceId.has_value())
	{
		rapidjson::Value PartialGuestDeviceIdValue(TypeToJsonValue(m_PartialGuestDeviceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("partialGuestDeviceId", PartialGuestDeviceIdValue, JsonDoc.GetAllocator());
	}

	if (m_Email.has_value())
	{
		rapidjson::Value EmailValue(TypeToJsonValue(m_Email, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("email", EmailValue, JsonDoc.GetAllocator());
	}

	if (m_UserName.has_value())
	{
		rapidjson::Value UserNameValue(TypeToJsonValue(m_UserName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userName", UserNameValue, JsonDoc.GetAllocator());
	}

	if (m_LastDeviceId.has_value())
	{
		rapidjson::Value LastDeviceIdValue(TypeToJsonValue(m_LastDeviceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastDeviceId", LastDeviceIdValue, JsonDoc.GetAllocator());
	}

	if (m_SearchPartialEmails.has_value())
	{
		rapidjson::Value SearchPartialEmailsValue(TypeToJsonValue(m_SearchPartialEmails, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("searchPartialEmails", SearchPartialEmailsValue, JsonDoc.GetAllocator());
	}

	if (m_GuestDeviceIds.has_value())
	{
		rapidjson::Value GuestDeviceIdsValue(TypeToJsonValue(m_GuestDeviceIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("guestDeviceIds", GuestDeviceIdsValue, JsonDoc.GetAllocator());
	}

	if (m_EmailAddresses.has_value())
	{
		rapidjson::Value EmailAddressesValue(TypeToJsonValue(m_EmailAddresses, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("emailAddresses", EmailAddressesValue, JsonDoc.GetAllocator());
	}

	if (m_UserNames.has_value())
	{
		rapidjson::Value UserNamesValue(TypeToJsonValue(m_UserNames, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userNames", UserNamesValue, JsonDoc.GetAllocator());
	}

	if (m_LastDeviceIds.has_value())
	{
		rapidjson::Value LastDeviceIdsValue(TypeToJsonValue(m_LastDeviceIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastDeviceIds", LastDeviceIdsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void UserQuery::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("guestDeviceId"))
	{
		const rapidjson::Value& GuestDeviceIdValue = JsonDoc["guestDeviceId"];

		if (GuestDeviceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GuestDeviceIdValue, m_GuestDeviceId);
		}
	}

	if (JsonDoc.HasMember("partialGuestDeviceId"))
	{
		const rapidjson::Value& PartialGuestDeviceIdValue = JsonDoc["partialGuestDeviceId"];

		if (PartialGuestDeviceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PartialGuestDeviceIdValue, m_PartialGuestDeviceId);
		}
	}

	if (JsonDoc.HasMember("email"))
	{
		const rapidjson::Value& EmailValue = JsonDoc["email"];

		if (EmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EmailValue, m_Email);
		}
	}

	if (JsonDoc.HasMember("userName"))
	{
		const rapidjson::Value& UserNameValue = JsonDoc["userName"];

		if (UserNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserNameValue, m_UserName);
		}
	}

	if (JsonDoc.HasMember("lastDeviceId"))
	{
		const rapidjson::Value& LastDeviceIdValue = JsonDoc["lastDeviceId"];

		if (LastDeviceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastDeviceIdValue, m_LastDeviceId);
		}
	}

	if (JsonDoc.HasMember("searchPartialEmails"))
	{
		const rapidjson::Value& SearchPartialEmailsValue = JsonDoc["searchPartialEmails"];

		if (SearchPartialEmailsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SearchPartialEmailsValue, m_SearchPartialEmails);
		}
	}

	if (JsonDoc.HasMember("guestDeviceIds"))
	{
		const rapidjson::Value& GuestDeviceIdsValue = JsonDoc["guestDeviceIds"];

		if (GuestDeviceIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GuestDeviceIdsValue, m_GuestDeviceIds);
		}
	}

	if (JsonDoc.HasMember("emailAddresses"))
	{
		const rapidjson::Value& EmailAddressesValue = JsonDoc["emailAddresses"];

		if (EmailAddressesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EmailAddressesValue, m_EmailAddresses);
		}
	}

	if (JsonDoc.HasMember("userNames"))
	{
		const rapidjson::Value& UserNamesValue = JsonDoc["userNames"];

		if (UserNamesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserNamesValue, m_UserNames);
		}
	}

	if (JsonDoc.HasMember("lastDeviceIds"))
	{
		const rapidjson::Value& LastDeviceIdsValue = JsonDoc["lastDeviceIds"];

		if (LastDeviceIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastDeviceIdsValue, m_LastDeviceIds);
		}
	}
}


utility::string_t UserQuery::GetGuestDeviceId() const
{
	return m_GuestDeviceId.value();
}

bool UserQuery::HasGuestDeviceId() const
{
	return m_GuestDeviceId.has_value();
}
void UserQuery::SetGuestDeviceId(const utility::string_t& Value)
{
	m_GuestDeviceId = Value;
}
utility::string_t UserQuery::GetPartialGuestDeviceId() const
{
	return m_PartialGuestDeviceId.value();
}

bool UserQuery::HasPartialGuestDeviceId() const
{
	return m_PartialGuestDeviceId.has_value();
}
void UserQuery::SetPartialGuestDeviceId(const utility::string_t& Value)
{
	m_PartialGuestDeviceId = Value;
}
utility::string_t UserQuery::GetEmail() const
{
	return m_Email.value();
}

bool UserQuery::HasEmail() const
{
	return m_Email.has_value();
}
void UserQuery::SetEmail(const utility::string_t& Value)
{
	m_Email = Value;
}
utility::string_t UserQuery::GetUserName() const
{
	return m_UserName.value();
}

bool UserQuery::HasUserName() const
{
	return m_UserName.has_value();
}
void UserQuery::SetUserName(const utility::string_t& Value)
{
	m_UserName = Value;
}
utility::string_t UserQuery::GetLastDeviceId() const
{
	return m_LastDeviceId.value();
}

bool UserQuery::HasLastDeviceId() const
{
	return m_LastDeviceId.has_value();
}
void UserQuery::SetLastDeviceId(const utility::string_t& Value)
{
	m_LastDeviceId = Value;
}
bool UserQuery::GetSearchPartialEmails() const
{
	return m_SearchPartialEmails.value();
}

bool UserQuery::HasSearchPartialEmails() const
{
	return m_SearchPartialEmails.has_value();
}
void UserQuery::SetSearchPartialEmails(const bool& Value)
{
	m_SearchPartialEmails = Value;
}
const std::vector<utility::string_t>& UserQuery::GetGuestDeviceIds() const
{
	return m_GuestDeviceIds.value();
}

bool UserQuery::HasGuestDeviceIds() const
{
	return m_GuestDeviceIds.has_value();
}
void UserQuery::SetGuestDeviceIds(const std::vector<utility::string_t>& Value)
{
	m_GuestDeviceIds = Value;
}
const std::vector<utility::string_t>& UserQuery::GetEmailAddresses() const
{
	return m_EmailAddresses.value();
}

bool UserQuery::HasEmailAddresses() const
{
	return m_EmailAddresses.has_value();
}
void UserQuery::SetEmailAddresses(const std::vector<utility::string_t>& Value)
{
	m_EmailAddresses = Value;
}
const std::vector<utility::string_t>& UserQuery::GetUserNames() const
{
	return m_UserNames.value();
}

bool UserQuery::HasUserNames() const
{
	return m_UserNames.has_value();
}
void UserQuery::SetUserNames(const std::vector<utility::string_t>& Value)
{
	m_UserNames = Value;
}
const std::vector<utility::string_t>& UserQuery::GetLastDeviceIds() const
{
	return m_LastDeviceIds.value();
}

bool UserQuery::HasLastDeviceIds() const
{
	return m_LastDeviceIds.has_value();
}
void UserQuery::SetLastDeviceIds(const std::vector<utility::string_t>& Value)
{
	m_LastDeviceIds = Value;
}

UserRolesDto::UserRolesDto()
{
}
UserRolesDto::~UserRolesDto()
{
}

utility::string_t UserRolesDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_Roles.has_value())
	{
		rapidjson::Value RolesValue(TypeToJsonValue(m_Roles, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("roles", RolesValue, JsonDoc.GetAllocator());
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
	}

	if (JsonDoc.HasMember("roles"))
	{
		const rapidjson::Value& RolesValue = JsonDoc["roles"];

		if (RolesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RolesValue, m_Roles);
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
const std::vector<utility::string_t>& UserRolesDto::GetRoles() const
{
	return m_Roles.value();
}

bool UserRolesDto::HasRoles() const
{
	return m_Roles.has_value();
}
void UserRolesDto::SetRoles(const std::vector<utility::string_t>& Value)
{
	m_Roles = Value;
}


} // namespace csp::services::generated::userservice