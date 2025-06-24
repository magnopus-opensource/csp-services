

#include "Dto.h"

#include "Common/Web/Json.h"
#include "Common/Web/Json_HttpPayload.h"
#include "Debug/Logging.h"

#include <optional>


using namespace csp::web;


namespace csp::services::generated::aggregationservice
{


AloClassCompletedRequest::AloClassCompletedRequest()
{
}
AloClassCompletedRequest::~AloClassCompletedRequest()
{
}

utility::string_t AloClassCompletedRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_ClassDefinitionId.has_value())
	{
		rapidjson::Value ClassDefinitionIdValue(TypeToJsonValue(m_ClassDefinitionId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("classDefinitionId", ClassDefinitionIdValue, JsonDoc.GetAllocator());
	}

	if (m_SeriesPlanId.has_value())
	{
		rapidjson::Value SeriesPlanIdValue(TypeToJsonValue(m_SeriesPlanId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("seriesPlanId", SeriesPlanIdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AloClassCompletedRequest::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("classDefinitionId"))
	{
		const rapidjson::Value& ClassDefinitionIdValue = JsonDoc["classDefinitionId"];

		if (ClassDefinitionIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ClassDefinitionIdValue, m_ClassDefinitionId);
		}
	}

	if (JsonDoc.HasMember("seriesPlanId"))
	{
		const rapidjson::Value& SeriesPlanIdValue = JsonDoc["seriesPlanId"];

		if (SeriesPlanIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SeriesPlanIdValue, m_SeriesPlanId);
		}
	}
}


utility::string_t AloClassCompletedRequest::GetUserId() const
{
	return m_UserId.value();
}

bool AloClassCompletedRequest::HasUserId() const
{
	return m_UserId.has_value();
}
utility::string_t AloClassCompletedRequest::GetClassDefinitionId() const
{
	return m_ClassDefinitionId.value();
}

bool AloClassCompletedRequest::HasClassDefinitionId() const
{
	return m_ClassDefinitionId.has_value();
}
utility::string_t AloClassCompletedRequest::GetSeriesPlanId() const
{
	return m_SeriesPlanId.value();
}

bool AloClassCompletedRequest::HasSeriesPlanId() const
{
	return m_SeriesPlanId.has_value();
}
void AloClassCompletedRequest::SetSeriesPlanId(const utility::string_t& Value)
{
	m_SeriesPlanId = Value;
}

AloClassCompletedResponse::AloClassCompletedResponse()
{
}
AloClassCompletedResponse::~AloClassCompletedResponse()
{
}

utility::string_t AloClassCompletedResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_BadgeIdsEarned.has_value())
	{
		rapidjson::Value BadgeIdsEarnedValue(TypeToJsonValue(m_BadgeIdsEarned, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("badgeIdsEarned", BadgeIdsEarnedValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AloClassCompletedResponse::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("badgeIdsEarned"))
	{
		const rapidjson::Value& BadgeIdsEarnedValue = JsonDoc["badgeIdsEarned"];

		if (BadgeIdsEarnedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(BadgeIdsEarnedValue, m_BadgeIdsEarned);
		}
	}
}


const std::vector<utility::string_t>& AloClassCompletedResponse::GetBadgeIdsEarned() const
{
	return m_BadgeIdsEarned.value();
}

bool AloClassCompletedResponse::HasBadgeIdsEarned() const
{
	return m_BadgeIdsEarned.has_value();
}
void AloClassCompletedResponse::SetBadgeIdsEarned(const std::vector<utility::string_t>& Value)
{
	m_BadgeIdsEarned = Value;
}

AltitudeMode::AltitudeMode()
{
}
AltitudeMode::~AltitudeMode()
{
}

utility::string_t AltitudeMode::ToJson() const
{
	switch (Value)
	{
		case eAltitudeMode::RELATIVETOGROUND:
			return "relativeToGround";
		case eAltitudeMode::ABSOLUTE:
			return "absolute";
		case eAltitudeMode::RELATIVETOSEAFLOOR:
			return "relativeToSeaFloor";
		case eAltitudeMode::CLAMPTOGROUND:
			return "clampToGround";
		case eAltitudeMode::CLAMPTOSEAFLOOR:
			return "clampToSeaFloor";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void AltitudeMode::FromJson(const utility::string_t& Val)
{
	if (Val == "relativeToGround")
	{
		Value = eAltitudeMode::RELATIVETOGROUND;
	}
	else if (Val == "absolute")
	{
		Value = eAltitudeMode::ABSOLUTE;
	}
	else if (Val == "relativeToSeaFloor")
	{
		Value = eAltitudeMode::RELATIVETOSEAFLOOR;
	}
	else if (Val == "clampToGround")
	{
		Value = eAltitudeMode::CLAMPTOGROUND;
	}
	else if (Val == "clampToSeaFloor")
	{
		Value = eAltitudeMode::CLAMPTOSEAFLOOR;
	}
}

AltitudeMode::eAltitudeMode AltitudeMode::GetValue() const
{
	return Value;
}

void AltitudeMode::SetValue(AltitudeMode::eAltitudeMode const InValue)
{
	Value = InValue;
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

DuplicateSpaceRequest::DuplicateSpaceRequest()
{
}
DuplicateSpaceRequest::~DuplicateSpaceRequest()
{
}

utility::string_t DuplicateSpaceRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_NewGroupOwnerId.has_value())
	{
		rapidjson::Value NewGroupOwnerIdValue(TypeToJsonValue(m_NewGroupOwnerId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("newGroupOwnerId", NewGroupOwnerIdValue, JsonDoc.GetAllocator());
	}

	if (m_MemberGroupIds.has_value())
	{
		rapidjson::Value MemberGroupIdsValue(TypeToJsonValue(m_MemberGroupIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("memberGroupIds", MemberGroupIdsValue, JsonDoc.GetAllocator());
	}

	if (m_RequestUserId.has_value())
	{
		rapidjson::Value RequestUserIdValue(TypeToJsonValue(m_RequestUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requestUserId", RequestUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_NewUniqueName.has_value())
	{
		rapidjson::Value NewUniqueNameValue(TypeToJsonValue(m_NewUniqueName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("newUniqueName", NewUniqueNameValue, JsonDoc.GetAllocator());
	}

	if (m_RequiresInvite.has_value())
	{
		rapidjson::Value RequiresInviteValue(TypeToJsonValue(m_RequiresInvite, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requiresInvite", RequiresInviteValue, JsonDoc.GetAllocator());
	}

	if (m_Discoverable.has_value())
	{
		rapidjson::Value DiscoverableValue(TypeToJsonValue(m_Discoverable, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("discoverable", DiscoverableValue, JsonDoc.GetAllocator());
	}

	if (m_ShallowCopy.has_value())
	{
		rapidjson::Value ShallowCopyValue(TypeToJsonValue(m_ShallowCopy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("shallowCopy", ShallowCopyValue, JsonDoc.GetAllocator());
	}

	if (m_AsyncCall.has_value())
	{
		rapidjson::Value AsyncCallValue(TypeToJsonValue(m_AsyncCall, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("asyncCall", AsyncCallValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DuplicateSpaceRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("newGroupOwnerId"))
	{
		const rapidjson::Value& NewGroupOwnerIdValue = JsonDoc["newGroupOwnerId"];

		if (NewGroupOwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NewGroupOwnerIdValue, m_NewGroupOwnerId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member newGroupOwnerId is null!");
		}
	}

	if (JsonDoc.HasMember("memberGroupIds"))
	{
		const rapidjson::Value& MemberGroupIdsValue = JsonDoc["memberGroupIds"];

		if (MemberGroupIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MemberGroupIdsValue, m_MemberGroupIds);
		}
	}

	if (JsonDoc.HasMember("requestUserId"))
	{
		const rapidjson::Value& RequestUserIdValue = JsonDoc["requestUserId"];

		if (RequestUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequestUserIdValue, m_RequestUserId);
		}
	}

	if (JsonDoc.HasMember("newUniqueName"))
	{
		const rapidjson::Value& NewUniqueNameValue = JsonDoc["newUniqueName"];

		if (NewUniqueNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NewUniqueNameValue, m_NewUniqueName);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member newUniqueName is null!");
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

	if (JsonDoc.HasMember("shallowCopy"))
	{
		const rapidjson::Value& ShallowCopyValue = JsonDoc["shallowCopy"];

		if (ShallowCopyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ShallowCopyValue, m_ShallowCopy);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member shallowCopy is null!");
		}
	}

	if (JsonDoc.HasMember("asyncCall"))
	{
		const rapidjson::Value& AsyncCallValue = JsonDoc["asyncCall"];

		if (AsyncCallValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AsyncCallValue, m_AsyncCall);
		}
	}
}


utility::string_t DuplicateSpaceRequest::GetTenantName() const
{
	return m_TenantName.value();
}

bool DuplicateSpaceRequest::HasTenantName() const
{
	return m_TenantName.has_value();
}
utility::string_t DuplicateSpaceRequest::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool DuplicateSpaceRequest::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
void DuplicateSpaceRequest::SetSpaceId(const utility::string_t& Value)
{
	m_SpaceId = Value;
}
utility::string_t DuplicateSpaceRequest::GetNewGroupOwnerId() const
{
	return m_NewGroupOwnerId.value();
}

bool DuplicateSpaceRequest::HasNewGroupOwnerId() const
{
	return m_NewGroupOwnerId.has_value();
}
void DuplicateSpaceRequest::SetNewGroupOwnerId(const utility::string_t& Value)
{
	m_NewGroupOwnerId = Value;
}
const std::vector<utility::string_t>& DuplicateSpaceRequest::GetMemberGroupIds() const
{
	return m_MemberGroupIds.value();
}

bool DuplicateSpaceRequest::HasMemberGroupIds() const
{
	return m_MemberGroupIds.has_value();
}
void DuplicateSpaceRequest::SetMemberGroupIds(const std::vector<utility::string_t>& Value)
{
	m_MemberGroupIds = Value;
}
utility::string_t DuplicateSpaceRequest::GetRequestUserId() const
{
	return m_RequestUserId.value();
}

bool DuplicateSpaceRequest::HasRequestUserId() const
{
	return m_RequestUserId.has_value();
}
utility::string_t DuplicateSpaceRequest::GetNewUniqueName() const
{
	return m_NewUniqueName.value();
}

bool DuplicateSpaceRequest::HasNewUniqueName() const
{
	return m_NewUniqueName.has_value();
}
void DuplicateSpaceRequest::SetNewUniqueName(const utility::string_t& Value)
{
	m_NewUniqueName = Value;
}
bool DuplicateSpaceRequest::GetRequiresInvite() const
{
	return m_RequiresInvite.value();
}

bool DuplicateSpaceRequest::HasRequiresInvite() const
{
	return m_RequiresInvite.has_value();
}
void DuplicateSpaceRequest::SetRequiresInvite(const bool& Value)
{
	m_RequiresInvite = Value;
}
bool DuplicateSpaceRequest::GetDiscoverable() const
{
	return m_Discoverable.value();
}

bool DuplicateSpaceRequest::HasDiscoverable() const
{
	return m_Discoverable.has_value();
}
void DuplicateSpaceRequest::SetDiscoverable(const bool& Value)
{
	m_Discoverable = Value;
}
bool DuplicateSpaceRequest::GetShallowCopy() const
{
	return m_ShallowCopy.value();
}

bool DuplicateSpaceRequest::HasShallowCopy() const
{
	return m_ShallowCopy.has_value();
}
void DuplicateSpaceRequest::SetShallowCopy(const bool& Value)
{
	m_ShallowCopy = Value;
}
bool DuplicateSpaceRequest::GetAsyncCall() const
{
	return m_AsyncCall.value();
}

bool DuplicateSpaceRequest::HasAsyncCall() const
{
	return m_AsyncCall.has_value();
}
void DuplicateSpaceRequest::SetAsyncCall(const bool& Value)
{
	m_AsyncCall = Value;
}

GroupRoleDto::GroupRoleDto()
{
}
GroupRoleDto::~GroupRoleDto()
{
}

utility::string_t GroupRoleDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_GroupId.has_value())
	{
		rapidjson::Value GroupIdValue(TypeToJsonValue(m_GroupId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupId", GroupIdValue, JsonDoc.GetAllocator());
	}

	if (m_GroupRoles.has_value())
	{
		rapidjson::Value GroupRolesValue(TypeToJsonValue(m_GroupRoles, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupRoles", GroupRolesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void GroupRoleDto::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("groupId"))
	{
		const rapidjson::Value& GroupIdValue = JsonDoc["groupId"];

		if (GroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupIdValue, m_GroupId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member groupId is null!");
		}
	}

	if (JsonDoc.HasMember("groupRoles"))
	{
		const rapidjson::Value& GroupRolesValue = JsonDoc["groupRoles"];

		if (GroupRolesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupRolesValue, m_GroupRoles);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member groupRoles is null!");
		}
	}
}


utility::string_t GroupRoleDto::GetUserId() const
{
	return m_UserId.value();
}

bool GroupRoleDto::HasUserId() const
{
	return m_UserId.has_value();
}
void GroupRoleDto::SetUserId(const utility::string_t& Value)
{
	m_UserId = Value;
}
utility::string_t GroupRoleDto::GetGroupId() const
{
	return m_GroupId.value();
}

bool GroupRoleDto::HasGroupId() const
{
	return m_GroupId.has_value();
}
void GroupRoleDto::SetGroupId(const utility::string_t& Value)
{
	m_GroupId = Value;
}
const std::vector<utility::string_t>& GroupRoleDto::GetGroupRoles() const
{
	return m_GroupRoles.value();
}

bool GroupRoleDto::HasGroupRoles() const
{
	return m_GroupRoles.has_value();
}
void GroupRoleDto::SetGroupRoles(const std::vector<utility::string_t>& Value)
{
	m_GroupRoles = Value;
}

HarmonizeAloRequest::HarmonizeAloRequest()
{
}
HarmonizeAloRequest::~HarmonizeAloRequest()
{
}

utility::string_t HarmonizeAloRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Nonce.has_value())
	{
		rapidjson::Value NonceValue(TypeToJsonValue(m_Nonce, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nonce", NonceValue, JsonDoc.GetAllocator());
	}

	if (m_MetaUserId.has_value())
	{
		rapidjson::Value MetaUserIdValue(TypeToJsonValue(m_MetaUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("metaUserId", MetaUserIdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void HarmonizeAloRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("nonce"))
	{
		const rapidjson::Value& NonceValue = JsonDoc["nonce"];

		if (NonceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NonceValue, m_Nonce);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member nonce is null!");
		}
	}

	if (JsonDoc.HasMember("metaUserId"))
	{
		const rapidjson::Value& MetaUserIdValue = JsonDoc["metaUserId"];

		if (MetaUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MetaUserIdValue, m_MetaUserId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member metaUserId is null!");
		}
	}
}


utility::string_t HarmonizeAloRequest::GetNonce() const
{
	return m_Nonce.value();
}

bool HarmonizeAloRequest::HasNonce() const
{
	return m_Nonce.has_value();
}
void HarmonizeAloRequest::SetNonce(const utility::string_t& Value)
{
	m_Nonce = Value;
}
utility::string_t HarmonizeAloRequest::GetMetaUserId() const
{
	return m_MetaUserId.value();
}

bool HarmonizeAloRequest::HasMetaUserId() const
{
	return m_MetaUserId.has_value();
}
void HarmonizeAloRequest::SetMetaUserId(const utility::string_t& Value)
{
	m_MetaUserId = Value;
}

HarmonizeAloResponse::HarmonizeAloResponse()
{
}
HarmonizeAloResponse::~HarmonizeAloResponse()
{
}

utility::string_t HarmonizeAloResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Auth.has_value())
	{
		rapidjson::Value AuthValue(TypeToJsonValue(m_Auth, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("auth", AuthValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void HarmonizeAloResponse::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("auth"))
	{
		const rapidjson::Value& AuthValue = JsonDoc["auth"];

		if (AuthValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AuthValue, m_Auth);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member auth is null!");
		}
	}
}


std::shared_ptr<AuthDto> HarmonizeAloResponse::GetAuth() const
{
	return m_Auth.value();
}

bool HarmonizeAloResponse::HasAuth() const
{
	return m_Auth.has_value();
}
void HarmonizeAloResponse::SetAuth(const std::shared_ptr<AuthDto>& Value)
{
	m_Auth = Value;
}

Icon::Icon()
{
}
Icon::~Icon()
{
}

utility::string_t Icon::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Href.has_value())
	{
		rapidjson::Value HrefValue(TypeToJsonValue(m_Href, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("href", HrefValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void Icon::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("href"))
	{
		const rapidjson::Value& HrefValue = JsonDoc["href"];

		if (HrefValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HrefValue, m_Href);
		}
	}
}


utility::string_t Icon::GetHref() const
{
	return m_Href.value();
}

bool Icon::HasHref() const
{
	return m_Href.has_value();
}
void Icon::SetHref(const utility::string_t& Value)
{
	m_Href = Value;
}

IconStyle::IconStyle()
{
}
IconStyle::~IconStyle()
{
}

utility::string_t IconStyle::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Color.has_value())
	{
		rapidjson::Value ColorValue(TypeToJsonValue(m_Color, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("color", ColorValue, JsonDoc.GetAllocator());
	}

	if (m_ColorMode.has_value())
	{
		rapidjson::Value ColorModeValue(TypeToJsonValue(m_ColorMode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("colorMode", ColorModeValue, JsonDoc.GetAllocator());
	}

	if (m_Scale.has_value())
	{
		rapidjson::Value ScaleValue(TypeToJsonValue(m_Scale, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scale", ScaleValue, JsonDoc.GetAllocator());
	}

	if (m_Icon.has_value())
	{
		rapidjson::Value IconValue(TypeToJsonValue(m_Icon, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("icon", IconValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void IconStyle::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("color"))
	{
		const rapidjson::Value& ColorValue = JsonDoc["color"];

		if (ColorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ColorValue, m_Color);
		}
	}

	if (JsonDoc.HasMember("colorMode"))
	{
		const rapidjson::Value& ColorModeValue = JsonDoc["colorMode"];

		if (ColorModeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ColorModeValue, m_ColorMode);
		}
	}

	if (JsonDoc.HasMember("scale"))
	{
		const rapidjson::Value& ScaleValue = JsonDoc["scale"];

		if (ScaleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScaleValue, m_Scale);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member scale is null!");
		}
	}

	if (JsonDoc.HasMember("icon"))
	{
		const rapidjson::Value& IconValue = JsonDoc["icon"];

		if (IconValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IconValue, m_Icon);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member icon is null!");
		}
	}
}


utility::string_t IconStyle::GetId() const
{
	return m_Id.value();
}

bool IconStyle::HasId() const
{
	return m_Id.has_value();
}
void IconStyle::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t IconStyle::GetColor() const
{
	return m_Color.value();
}

bool IconStyle::HasColor() const
{
	return m_Color.has_value();
}
void IconStyle::SetColor(const utility::string_t& Value)
{
	m_Color = Value;
}
utility::string_t IconStyle::GetColorMode() const
{
	return m_ColorMode.value();
}

bool IconStyle::HasColorMode() const
{
	return m_ColorMode.has_value();
}
void IconStyle::SetColorMode(const utility::string_t& Value)
{
	m_ColorMode = Value;
}
float IconStyle::GetScale() const
{
	return m_Scale.value();
}

bool IconStyle::HasScale() const
{
	return m_Scale.has_value();
}
void IconStyle::SetScale(float Value)
{
	m_Scale = Value;
}
std::shared_ptr<Icon> IconStyle::GetIcon() const
{
	return m_Icon.value();
}

bool IconStyle::HasIcon() const
{
	return m_Icon.has_value();
}
void IconStyle::SetIcon(const std::shared_ptr<Icon>& Value)
{
	m_Icon = Value;
}

ImportSpaceOptions::ImportSpaceOptions()
{
}
ImportSpaceOptions::~ImportSpaceOptions()
{
}

utility::string_t ImportSpaceOptions::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_OverwriteExistingSpace.has_value())
	{
		rapidjson::Value OverwriteExistingSpaceValue(TypeToJsonValue(m_OverwriteExistingSpace, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("overwriteExistingSpace", OverwriteExistingSpaceValue, JsonDoc.GetAllocator());
	}

	if (m_RequiresInvite.has_value())
	{
		rapidjson::Value RequiresInviteValue(TypeToJsonValue(m_RequiresInvite, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requiresInvite", RequiresInviteValue, JsonDoc.GetAllocator());
	}

	if (m_Discoverable.has_value())
	{
		rapidjson::Value DiscoverableValue(TypeToJsonValue(m_Discoverable, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("discoverable", DiscoverableValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ImportSpaceOptions::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("overwriteExistingSpace"))
	{
		const rapidjson::Value& OverwriteExistingSpaceValue = JsonDoc["overwriteExistingSpace"];

		if (OverwriteExistingSpaceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OverwriteExistingSpaceValue, m_OverwriteExistingSpace);
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
}


bool ImportSpaceOptions::GetOverwriteExistingSpace() const
{
	return m_OverwriteExistingSpace.value();
}

bool ImportSpaceOptions::HasOverwriteExistingSpace() const
{
	return m_OverwriteExistingSpace.has_value();
}
void ImportSpaceOptions::SetOverwriteExistingSpace(const bool& Value)
{
	m_OverwriteExistingSpace = Value;
}
bool ImportSpaceOptions::GetRequiresInvite() const
{
	return m_RequiresInvite.value();
}

bool ImportSpaceOptions::HasRequiresInvite() const
{
	return m_RequiresInvite.has_value();
}
void ImportSpaceOptions::SetRequiresInvite(const bool& Value)
{
	m_RequiresInvite = Value;
}
bool ImportSpaceOptions::GetDiscoverable() const
{
	return m_Discoverable.value();
}

bool ImportSpaceOptions::HasDiscoverable() const
{
	return m_Discoverable.has_value();
}
void ImportSpaceOptions::SetDiscoverable(const bool& Value)
{
	m_Discoverable = Value;
}

ImportSpaceRequest::ImportSpaceRequest()
{
}
ImportSpaceRequest::~ImportSpaceRequest()
{
}

utility::string_t ImportSpaceRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_ExportId.has_value())
	{
		rapidjson::Value ExportIdValue(TypeToJsonValue(m_ExportId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("exportId", ExportIdValue, JsonDoc.GetAllocator());
	}

	if (m_NewGroupOwnerId.has_value())
	{
		rapidjson::Value NewGroupOwnerIdValue(TypeToJsonValue(m_NewGroupOwnerId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("newGroupOwnerId", NewGroupOwnerIdValue, JsonDoc.GetAllocator());
	}

	if (m_MemberGroupIds.has_value())
	{
		rapidjson::Value MemberGroupIdsValue(TypeToJsonValue(m_MemberGroupIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("memberGroupIds", MemberGroupIdsValue, JsonDoc.GetAllocator());
	}

	if (m_RequestUserId.has_value())
	{
		rapidjson::Value RequestUserIdValue(TypeToJsonValue(m_RequestUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requestUserId", RequestUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_NewUniqueName.has_value())
	{
		rapidjson::Value NewUniqueNameValue(TypeToJsonValue(m_NewUniqueName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("newUniqueName", NewUniqueNameValue, JsonDoc.GetAllocator());
	}

	if (m_ImportSpaceOptions.has_value())
	{
		rapidjson::Value ImportSpaceOptionsValue(TypeToJsonValue(m_ImportSpaceOptions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("importSpaceOptions", ImportSpaceOptionsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ImportSpaceRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("exportId"))
	{
		const rapidjson::Value& ExportIdValue = JsonDoc["exportId"];

		if (ExportIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExportIdValue, m_ExportId);
		}
	}

	if (JsonDoc.HasMember("newGroupOwnerId"))
	{
		const rapidjson::Value& NewGroupOwnerIdValue = JsonDoc["newGroupOwnerId"];

		if (NewGroupOwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NewGroupOwnerIdValue, m_NewGroupOwnerId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member newGroupOwnerId is null!");
		}
	}

	if (JsonDoc.HasMember("memberGroupIds"))
	{
		const rapidjson::Value& MemberGroupIdsValue = JsonDoc["memberGroupIds"];

		if (MemberGroupIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MemberGroupIdsValue, m_MemberGroupIds);
		}
	}

	if (JsonDoc.HasMember("requestUserId"))
	{
		const rapidjson::Value& RequestUserIdValue = JsonDoc["requestUserId"];

		if (RequestUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequestUserIdValue, m_RequestUserId);
		}
	}

	if (JsonDoc.HasMember("newUniqueName"))
	{
		const rapidjson::Value& NewUniqueNameValue = JsonDoc["newUniqueName"];

		if (NewUniqueNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NewUniqueNameValue, m_NewUniqueName);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member newUniqueName is null!");
		}
	}

	if (JsonDoc.HasMember("importSpaceOptions"))
	{
		const rapidjson::Value& ImportSpaceOptionsValue = JsonDoc["importSpaceOptions"];

		if (ImportSpaceOptionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ImportSpaceOptionsValue, m_ImportSpaceOptions);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member importSpaceOptions is null!");
		}
	}
}


utility::string_t ImportSpaceRequest::GetTenantName() const
{
	return m_TenantName.value();
}

bool ImportSpaceRequest::HasTenantName() const
{
	return m_TenantName.has_value();
}
utility::string_t ImportSpaceRequest::GetExportId() const
{
	return m_ExportId.value();
}

bool ImportSpaceRequest::HasExportId() const
{
	return m_ExportId.has_value();
}
void ImportSpaceRequest::SetExportId(const utility::string_t& Value)
{
	m_ExportId = Value;
}
utility::string_t ImportSpaceRequest::GetNewGroupOwnerId() const
{
	return m_NewGroupOwnerId.value();
}

bool ImportSpaceRequest::HasNewGroupOwnerId() const
{
	return m_NewGroupOwnerId.has_value();
}
void ImportSpaceRequest::SetNewGroupOwnerId(const utility::string_t& Value)
{
	m_NewGroupOwnerId = Value;
}
const std::vector<utility::string_t>& ImportSpaceRequest::GetMemberGroupIds() const
{
	return m_MemberGroupIds.value();
}

bool ImportSpaceRequest::HasMemberGroupIds() const
{
	return m_MemberGroupIds.has_value();
}
void ImportSpaceRequest::SetMemberGroupIds(const std::vector<utility::string_t>& Value)
{
	m_MemberGroupIds = Value;
}
utility::string_t ImportSpaceRequest::GetRequestUserId() const
{
	return m_RequestUserId.value();
}

bool ImportSpaceRequest::HasRequestUserId() const
{
	return m_RequestUserId.has_value();
}
utility::string_t ImportSpaceRequest::GetNewUniqueName() const
{
	return m_NewUniqueName.value();
}

bool ImportSpaceRequest::HasNewUniqueName() const
{
	return m_NewUniqueName.has_value();
}
void ImportSpaceRequest::SetNewUniqueName(const utility::string_t& Value)
{
	m_NewUniqueName = Value;
}
std::shared_ptr<ImportSpaceOptions> ImportSpaceRequest::GetImportSpaceOptions() const
{
	return m_ImportSpaceOptions.value();
}

bool ImportSpaceRequest::HasImportSpaceOptions() const
{
	return m_ImportSpaceOptions.has_value();
}
void ImportSpaceRequest::SetImportSpaceOptions(const std::shared_ptr<ImportSpaceOptions>& Value)
{
	m_ImportSpaceOptions = Value;
}

Kml::Kml()
{
}
Kml::~Kml()
{
}

utility::string_t Kml::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Document.has_value())
	{
		rapidjson::Value DocumentValue(TypeToJsonValue(m_Document, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("document", DocumentValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void Kml::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("document"))
	{
		const rapidjson::Value& DocumentValue = JsonDoc["document"];

		if (DocumentValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DocumentValue, m_Document);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member document is null!");
		}
	}
}


std::shared_ptr<PositionKml> Kml::GetDocument() const
{
	return m_Document.value();
}

bool Kml::HasDocument() const
{
	return m_Document.has_value();
}
void Kml::SetDocument(const std::shared_ptr<PositionKml>& Value)
{
	m_Document = Value;
}

LineString::LineString()
{
}
LineString::~LineString()
{
}

utility::string_t LineString::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Extrude.has_value())
	{
		rapidjson::Value ExtrudeValue(TypeToJsonValue(m_Extrude, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("extrude", ExtrudeValue, JsonDoc.GetAllocator());
	}

	if (m_Tessellate.has_value())
	{
		rapidjson::Value TessellateValue(TypeToJsonValue(m_Tessellate, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tessellate", TessellateValue, JsonDoc.GetAllocator());
	}

	if (m_AltitudeMode.has_value())
	{
		rapidjson::Value AltitudeModeValue(TypeToJsonValue(m_AltitudeMode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("altitudeMode", AltitudeModeValue, JsonDoc.GetAllocator());
	}

	if (m_Coordinates.has_value())
	{
		rapidjson::Value CoordinatesValue(TypeToJsonValue(m_Coordinates, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("coordinates", CoordinatesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void LineString::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("extrude"))
	{
		const rapidjson::Value& ExtrudeValue = JsonDoc["extrude"];

		if (ExtrudeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExtrudeValue, m_Extrude);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member extrude is null!");
		}
	}

	if (JsonDoc.HasMember("tessellate"))
	{
		const rapidjson::Value& TessellateValue = JsonDoc["tessellate"];

		if (TessellateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TessellateValue, m_Tessellate);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tessellate is null!");
		}
	}

	if (JsonDoc.HasMember("altitudeMode"))
	{
		const rapidjson::Value& AltitudeModeValue = JsonDoc["altitudeMode"];

		if (AltitudeModeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AltitudeModeValue, m_AltitudeMode);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member altitudeMode is null!");
		}
	}

	if (JsonDoc.HasMember("coordinates"))
	{
		const rapidjson::Value& CoordinatesValue = JsonDoc["coordinates"];

		if (CoordinatesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoordinatesValue, m_Coordinates);
		}
	}
}


bool LineString::GetExtrude() const
{
	return m_Extrude.value();
}

bool LineString::HasExtrude() const
{
	return m_Extrude.has_value();
}
void LineString::SetExtrude(const bool& Value)
{
	m_Extrude = Value;
}
bool LineString::GetTessellate() const
{
	return m_Tessellate.value();
}

bool LineString::HasTessellate() const
{
	return m_Tessellate.has_value();
}
void LineString::SetTessellate(const bool& Value)
{
	m_Tessellate = Value;
}
std::shared_ptr<AltitudeMode> LineString::GetAltitudeMode() const
{
	return m_AltitudeMode.value();
}

bool LineString::HasAltitudeMode() const
{
	return m_AltitudeMode.has_value();
}
void LineString::SetAltitudeMode(const std::shared_ptr<AltitudeMode>& Value)
{
	m_AltitudeMode = Value;
}
utility::string_t LineString::GetCoordinates() const
{
	return m_Coordinates.value();
}

bool LineString::HasCoordinates() const
{
	return m_Coordinates.has_value();
}
void LineString::SetCoordinates(const utility::string_t& Value)
{
	m_Coordinates = Value;
}

LocalizedString::LocalizedString()
{
}
LocalizedString::~LocalizedString()
{
}

utility::string_t LocalizedString::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_LanguageCode.has_value())
	{
		rapidjson::Value LanguageCodeValue(TypeToJsonValue(m_LanguageCode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("languageCode", LanguageCodeValue, JsonDoc.GetAllocator());
	}

	if (m_Value.has_value())
	{
		rapidjson::Value ValueValue(TypeToJsonValue(m_Value, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("value", ValueValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void LocalizedString::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("languageCode"))
	{
		const rapidjson::Value& LanguageCodeValue = JsonDoc["languageCode"];

		if (LanguageCodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LanguageCodeValue, m_LanguageCode);
		}
	}

	if (JsonDoc.HasMember("value"))
	{
		const rapidjson::Value& ValueValue = JsonDoc["value"];

		if (ValueValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ValueValue, m_Value);
		}
	}
}


utility::string_t LocalizedString::GetLanguageCode() const
{
	return m_LanguageCode.value();
}

bool LocalizedString::HasLanguageCode() const
{
	return m_LanguageCode.has_value();
}
void LocalizedString::SetLanguageCode(const utility::string_t& Value)
{
	m_LanguageCode = Value;
}
utility::string_t LocalizedString::GetValue() const
{
	return m_Value.value();
}

bool LocalizedString::HasValue() const
{
	return m_Value.has_value();
}
void LocalizedString::SetValue(const utility::string_t& Value)
{
	m_Value = Value;
}

LookAt::LookAt()
{
}
LookAt::~LookAt()
{
}

utility::string_t LookAt::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Longitude.has_value())
	{
		rapidjson::Value LongitudeValue(TypeToJsonValue(m_Longitude, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("longitude", LongitudeValue, JsonDoc.GetAllocator());
	}

	if (m_Latitude.has_value())
	{
		rapidjson::Value LatitudeValue(TypeToJsonValue(m_Latitude, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("latitude", LatitudeValue, JsonDoc.GetAllocator());
	}

	if (m_Altitude.has_value())
	{
		rapidjson::Value AltitudeValue(TypeToJsonValue(m_Altitude, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("altitude", AltitudeValue, JsonDoc.GetAllocator());
	}

	if (m_Range.has_value())
	{
		rapidjson::Value RangeValue(TypeToJsonValue(m_Range, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("range", RangeValue, JsonDoc.GetAllocator());
	}

	if (m_Tilt.has_value())
	{
		rapidjson::Value TiltValue(TypeToJsonValue(m_Tilt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tilt", TiltValue, JsonDoc.GetAllocator());
	}

	if (m_Heading.has_value())
	{
		rapidjson::Value HeadingValue(TypeToJsonValue(m_Heading, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("heading", HeadingValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void LookAt::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("longitude"))
	{
		const rapidjson::Value& LongitudeValue = JsonDoc["longitude"];

		if (LongitudeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LongitudeValue, m_Longitude);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member longitude is null!");
		}
	}

	if (JsonDoc.HasMember("latitude"))
	{
		const rapidjson::Value& LatitudeValue = JsonDoc["latitude"];

		if (LatitudeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LatitudeValue, m_Latitude);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member latitude is null!");
		}
	}

	if (JsonDoc.HasMember("altitude"))
	{
		const rapidjson::Value& AltitudeValue = JsonDoc["altitude"];

		if (AltitudeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AltitudeValue, m_Altitude);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member altitude is null!");
		}
	}

	if (JsonDoc.HasMember("range"))
	{
		const rapidjson::Value& RangeValue = JsonDoc["range"];

		if (RangeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RangeValue, m_Range);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member range is null!");
		}
	}

	if (JsonDoc.HasMember("tilt"))
	{
		const rapidjson::Value& TiltValue = JsonDoc["tilt"];

		if (TiltValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TiltValue, m_Tilt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tilt is null!");
		}
	}

	if (JsonDoc.HasMember("heading"))
	{
		const rapidjson::Value& HeadingValue = JsonDoc["heading"];

		if (HeadingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HeadingValue, m_Heading);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member heading is null!");
		}
	}
}


double LookAt::GetLongitude() const
{
	return m_Longitude.value();
}

bool LookAt::HasLongitude() const
{
	return m_Longitude.has_value();
}
void LookAt::SetLongitude(double Value)
{
	m_Longitude = Value;
}
double LookAt::GetLatitude() const
{
	return m_Latitude.value();
}

bool LookAt::HasLatitude() const
{
	return m_Latitude.has_value();
}
void LookAt::SetLatitude(double Value)
{
	m_Latitude = Value;
}
int32_t LookAt::GetAltitude() const
{
	return m_Altitude.value();
}

bool LookAt::HasAltitude() const
{
	return m_Altitude.has_value();
}
void LookAt::SetAltitude(int32_t Value)
{
	m_Altitude = Value;
}
double LookAt::GetRange() const
{
	return m_Range.value();
}

bool LookAt::HasRange() const
{
	return m_Range.has_value();
}
void LookAt::SetRange(double Value)
{
	m_Range = Value;
}
double LookAt::GetTilt() const
{
	return m_Tilt.value();
}

bool LookAt::HasTilt() const
{
	return m_Tilt.has_value();
}
void LookAt::SetTilt(double Value)
{
	m_Tilt = Value;
}
double LookAt::GetHeading() const
{
	return m_Heading.value();
}

bool LookAt::HasHeading() const
{
	return m_Heading.has_value();
}
void LookAt::SetHeading(double Value)
{
	m_Heading = Value;
}

Model::Model()
{
}
Model::~Model()
{
}

utility::string_t Model::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_AltitudeMode.has_value())
	{
		rapidjson::Value AltitudeModeValue(TypeToJsonValue(m_AltitudeMode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("altitudeMode", AltitudeModeValue, JsonDoc.GetAllocator());
	}

	if (m_Location.has_value())
	{
		rapidjson::Value LocationValue(TypeToJsonValue(m_Location, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("location", LocationValue, JsonDoc.GetAllocator());
	}

	if (m_Orientation.has_value())
	{
		rapidjson::Value OrientationValue(TypeToJsonValue(m_Orientation, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("orientation", OrientationValue, JsonDoc.GetAllocator());
	}

	if (m_Scale.has_value())
	{
		rapidjson::Value ScaleValue(TypeToJsonValue(m_Scale, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scale", ScaleValue, JsonDoc.GetAllocator());
	}

	if (m_Link.has_value())
	{
		rapidjson::Value LinkValue(TypeToJsonValue(m_Link, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("link", LinkValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void Model::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("altitudeMode"))
	{
		const rapidjson::Value& AltitudeModeValue = JsonDoc["altitudeMode"];

		if (AltitudeModeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AltitudeModeValue, m_AltitudeMode);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member altitudeMode is null!");
		}
	}

	if (JsonDoc.HasMember("location"))
	{
		const rapidjson::Value& LocationValue = JsonDoc["location"];

		if (LocationValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LocationValue, m_Location);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member location is null!");
		}
	}

	if (JsonDoc.HasMember("orientation"))
	{
		const rapidjson::Value& OrientationValue = JsonDoc["orientation"];

		if (OrientationValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OrientationValue, m_Orientation);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member orientation is null!");
		}
	}

	if (JsonDoc.HasMember("scale"))
	{
		const rapidjson::Value& ScaleValue = JsonDoc["scale"];

		if (ScaleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScaleValue, m_Scale);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member scale is null!");
		}
	}

	if (JsonDoc.HasMember("link"))
	{
		const rapidjson::Value& LinkValue = JsonDoc["link"];

		if (LinkValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LinkValue, m_Link);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member link is null!");
		}
	}
}


utility::string_t Model::GetId() const
{
	return m_Id.value();
}

bool Model::HasId() const
{
	return m_Id.has_value();
}
void Model::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
std::shared_ptr<AltitudeMode> Model::GetAltitudeMode() const
{
	return m_AltitudeMode.value();
}

bool Model::HasAltitudeMode() const
{
	return m_AltitudeMode.has_value();
}
void Model::SetAltitudeMode(const std::shared_ptr<AltitudeMode>& Value)
{
	m_AltitudeMode = Value;
}
std::shared_ptr<ModelLocation> Model::GetLocation() const
{
	return m_Location.value();
}

bool Model::HasLocation() const
{
	return m_Location.has_value();
}
void Model::SetLocation(const std::shared_ptr<ModelLocation>& Value)
{
	m_Location = Value;
}
std::shared_ptr<ModelOrientation> Model::GetOrientation() const
{
	return m_Orientation.value();
}

bool Model::HasOrientation() const
{
	return m_Orientation.has_value();
}
void Model::SetOrientation(const std::shared_ptr<ModelOrientation>& Value)
{
	m_Orientation = Value;
}
std::shared_ptr<ModelScale> Model::GetScale() const
{
	return m_Scale.value();
}

bool Model::HasScale() const
{
	return m_Scale.has_value();
}
void Model::SetScale(const std::shared_ptr<ModelScale>& Value)
{
	m_Scale = Value;
}
std::shared_ptr<ModelLink> Model::GetLink() const
{
	return m_Link.value();
}

bool Model::HasLink() const
{
	return m_Link.has_value();
}
void Model::SetLink(const std::shared_ptr<ModelLink>& Value)
{
	m_Link = Value;
}

ModelLink::ModelLink()
{
}
ModelLink::~ModelLink()
{
}

utility::string_t ModelLink::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Href.has_value())
	{
		rapidjson::Value HrefValue(TypeToJsonValue(m_Href, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("href", HrefValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ModelLink::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("href"))
	{
		const rapidjson::Value& HrefValue = JsonDoc["href"];

		if (HrefValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HrefValue, m_Href);
		}
	}
}


utility::string_t ModelLink::GetHref() const
{
	return m_Href.value();
}

bool ModelLink::HasHref() const
{
	return m_Href.has_value();
}
void ModelLink::SetHref(const utility::string_t& Value)
{
	m_Href = Value;
}

ModelLocation::ModelLocation()
{
}
ModelLocation::~ModelLocation()
{
}

utility::string_t ModelLocation::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Longitude.has_value())
	{
		rapidjson::Value LongitudeValue(TypeToJsonValue(m_Longitude, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("longitude", LongitudeValue, JsonDoc.GetAllocator());
	}

	if (m_Latitude.has_value())
	{
		rapidjson::Value LatitudeValue(TypeToJsonValue(m_Latitude, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("latitude", LatitudeValue, JsonDoc.GetAllocator());
	}

	if (m_Altitude.has_value())
	{
		rapidjson::Value AltitudeValue(TypeToJsonValue(m_Altitude, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("altitude", AltitudeValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ModelLocation::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("longitude"))
	{
		const rapidjson::Value& LongitudeValue = JsonDoc["longitude"];

		if (LongitudeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LongitudeValue, m_Longitude);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member longitude is null!");
		}
	}

	if (JsonDoc.HasMember("latitude"))
	{
		const rapidjson::Value& LatitudeValue = JsonDoc["latitude"];

		if (LatitudeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LatitudeValue, m_Latitude);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member latitude is null!");
		}
	}

	if (JsonDoc.HasMember("altitude"))
	{
		const rapidjson::Value& AltitudeValue = JsonDoc["altitude"];

		if (AltitudeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AltitudeValue, m_Altitude);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member altitude is null!");
		}
	}
}


double ModelLocation::GetLongitude() const
{
	return m_Longitude.value();
}

bool ModelLocation::HasLongitude() const
{
	return m_Longitude.has_value();
}
void ModelLocation::SetLongitude(double Value)
{
	m_Longitude = Value;
}
double ModelLocation::GetLatitude() const
{
	return m_Latitude.value();
}

bool ModelLocation::HasLatitude() const
{
	return m_Latitude.has_value();
}
void ModelLocation::SetLatitude(double Value)
{
	m_Latitude = Value;
}
int32_t ModelLocation::GetAltitude() const
{
	return m_Altitude.value();
}

bool ModelLocation::HasAltitude() const
{
	return m_Altitude.has_value();
}
void ModelLocation::SetAltitude(int32_t Value)
{
	m_Altitude = Value;
}

ModelOrientation::ModelOrientation()
{
}
ModelOrientation::~ModelOrientation()
{
}

utility::string_t ModelOrientation::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Heading.has_value())
	{
		rapidjson::Value HeadingValue(TypeToJsonValue(m_Heading, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("heading", HeadingValue, JsonDoc.GetAllocator());
	}

	if (m_Tilt.has_value())
	{
		rapidjson::Value TiltValue(TypeToJsonValue(m_Tilt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tilt", TiltValue, JsonDoc.GetAllocator());
	}

	if (m_Roll.has_value())
	{
		rapidjson::Value RollValue(TypeToJsonValue(m_Roll, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("roll", RollValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ModelOrientation::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("heading"))
	{
		const rapidjson::Value& HeadingValue = JsonDoc["heading"];

		if (HeadingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HeadingValue, m_Heading);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member heading is null!");
		}
	}

	if (JsonDoc.HasMember("tilt"))
	{
		const rapidjson::Value& TiltValue = JsonDoc["tilt"];

		if (TiltValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TiltValue, m_Tilt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tilt is null!");
		}
	}

	if (JsonDoc.HasMember("roll"))
	{
		const rapidjson::Value& RollValue = JsonDoc["roll"];

		if (RollValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RollValue, m_Roll);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member roll is null!");
		}
	}
}


float ModelOrientation::GetHeading() const
{
	return m_Heading.value();
}

bool ModelOrientation::HasHeading() const
{
	return m_Heading.has_value();
}
void ModelOrientation::SetHeading(float Value)
{
	m_Heading = Value;
}
float ModelOrientation::GetTilt() const
{
	return m_Tilt.value();
}

bool ModelOrientation::HasTilt() const
{
	return m_Tilt.has_value();
}
void ModelOrientation::SetTilt(float Value)
{
	m_Tilt = Value;
}
int32_t ModelOrientation::GetRoll() const
{
	return m_Roll.value();
}

bool ModelOrientation::HasRoll() const
{
	return m_Roll.has_value();
}
void ModelOrientation::SetRoll(int32_t Value)
{
	m_Roll = Value;
}

ModelScale::ModelScale()
{
}
ModelScale::~ModelScale()
{
}

utility::string_t ModelScale::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_X.has_value())
	{
		rapidjson::Value XValue(TypeToJsonValue(m_X, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("x", XValue, JsonDoc.GetAllocator());
	}

	if (m_Y.has_value())
	{
		rapidjson::Value YValue(TypeToJsonValue(m_Y, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("y", YValue, JsonDoc.GetAllocator());
	}

	if (m_Z.has_value())
	{
		rapidjson::Value ZValue(TypeToJsonValue(m_Z, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("z", ZValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ModelScale::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("x"))
	{
		const rapidjson::Value& XValue = JsonDoc["x"];

		if (XValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(XValue, m_X);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member x is null!");
		}
	}

	if (JsonDoc.HasMember("y"))
	{
		const rapidjson::Value& YValue = JsonDoc["y"];

		if (YValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(YValue, m_Y);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member y is null!");
		}
	}

	if (JsonDoc.HasMember("z"))
	{
		const rapidjson::Value& ZValue = JsonDoc["z"];

		if (ZValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ZValue, m_Z);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member z is null!");
		}
	}
}


int32_t ModelScale::GetX() const
{
	return m_X.value();
}

bool ModelScale::HasX() const
{
	return m_X.has_value();
}
void ModelScale::SetX(int32_t Value)
{
	m_X = Value;
}
int32_t ModelScale::GetY() const
{
	return m_Y.value();
}

bool ModelScale::HasY() const
{
	return m_Y.has_value();
}
void ModelScale::SetY(int32_t Value)
{
	m_Y = Value;
}
int32_t ModelScale::GetZ() const
{
	return m_Z.value();
}

bool ModelScale::HasZ() const
{
	return m_Z.has_value();
}
void ModelScale::SetZ(int32_t Value)
{
	m_Z = Value;
}

Placemark::Placemark()
{
}
Placemark::~Placemark()
{
}

utility::string_t Placemark::ToJson() const
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

	if (m_StyleUrl.has_value())
	{
		rapidjson::Value StyleUrlValue(TypeToJsonValue(m_StyleUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("styleUrl", StyleUrlValue, JsonDoc.GetAllocator());
	}

	if (m_Description.has_value())
	{
		rapidjson::Value DescriptionValue(TypeToJsonValue(m_Description, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("description", DescriptionValue, JsonDoc.GetAllocator());
	}

	if (m_LineString.has_value())
	{
		rapidjson::Value LineStringValue(TypeToJsonValue(m_LineString, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lineString", LineStringValue, JsonDoc.GetAllocator());
	}

	if (m_Point.has_value())
	{
		rapidjson::Value PointValue(TypeToJsonValue(m_Point, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("point", PointValue, JsonDoc.GetAllocator());
	}

	if (m_Model.has_value())
	{
		rapidjson::Value ModelValue(TypeToJsonValue(m_Model, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("model", ModelValue, JsonDoc.GetAllocator());
	}

	if (m_LookAt.has_value())
	{
		rapidjson::Value LookAtValue(TypeToJsonValue(m_LookAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lookAt", LookAtValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void Placemark::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("styleUrl"))
	{
		const rapidjson::Value& StyleUrlValue = JsonDoc["styleUrl"];

		if (StyleUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StyleUrlValue, m_StyleUrl);
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

	if (JsonDoc.HasMember("lineString"))
	{
		const rapidjson::Value& LineStringValue = JsonDoc["lineString"];

		if (LineStringValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LineStringValue, m_LineString);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member lineString is null!");
		}
	}

	if (JsonDoc.HasMember("point"))
	{
		const rapidjson::Value& PointValue = JsonDoc["point"];

		if (PointValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PointValue, m_Point);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member point is null!");
		}
	}

	if (JsonDoc.HasMember("model"))
	{
		const rapidjson::Value& ModelValue = JsonDoc["model"];

		if (ModelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModelValue, m_Model);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member model is null!");
		}
	}

	if (JsonDoc.HasMember("lookAt"))
	{
		const rapidjson::Value& LookAtValue = JsonDoc["lookAt"];

		if (LookAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LookAtValue, m_LookAt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member lookAt is null!");
		}
	}
}


utility::string_t Placemark::GetId() const
{
	return m_Id.value();
}

bool Placemark::HasId() const
{
	return m_Id.has_value();
}
void Placemark::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t Placemark::GetName() const
{
	return m_Name.value();
}

bool Placemark::HasName() const
{
	return m_Name.has_value();
}
void Placemark::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t Placemark::GetStyleUrl() const
{
	return m_StyleUrl.value();
}

bool Placemark::HasStyleUrl() const
{
	return m_StyleUrl.has_value();
}
void Placemark::SetStyleUrl(const utility::string_t& Value)
{
	m_StyleUrl = Value;
}
utility::string_t Placemark::GetDescription() const
{
	return m_Description.value();
}

bool Placemark::HasDescription() const
{
	return m_Description.has_value();
}
void Placemark::SetDescription(const utility::string_t& Value)
{
	m_Description = Value;
}
std::shared_ptr<LineString> Placemark::GetLineString() const
{
	return m_LineString.value();
}

bool Placemark::HasLineString() const
{
	return m_LineString.has_value();
}
void Placemark::SetLineString(const std::shared_ptr<LineString>& Value)
{
	m_LineString = Value;
}
std::shared_ptr<Point> Placemark::GetPoint() const
{
	return m_Point.value();
}

bool Placemark::HasPoint() const
{
	return m_Point.has_value();
}
void Placemark::SetPoint(const std::shared_ptr<Point>& Value)
{
	m_Point = Value;
}
std::shared_ptr<Model> Placemark::GetModel() const
{
	return m_Model.value();
}

bool Placemark::HasModel() const
{
	return m_Model.has_value();
}
void Placemark::SetModel(const std::shared_ptr<Model>& Value)
{
	m_Model = Value;
}
std::shared_ptr<LookAt> Placemark::GetLookAt() const
{
	return m_LookAt.value();
}

bool Placemark::HasLookAt() const
{
	return m_LookAt.has_value();
}
void Placemark::SetLookAt(const std::shared_ptr<LookAt>& Value)
{
	m_LookAt = Value;
}

Point::Point()
{
}
Point::~Point()
{
}

utility::string_t Point::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Tessellate.has_value())
	{
		rapidjson::Value TessellateValue(TypeToJsonValue(m_Tessellate, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tessellate", TessellateValue, JsonDoc.GetAllocator());
	}

	if (m_AltitudeMode.has_value())
	{
		rapidjson::Value AltitudeModeValue(TypeToJsonValue(m_AltitudeMode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("altitudeMode", AltitudeModeValue, JsonDoc.GetAllocator());
	}

	if (m_Coordinates.has_value())
	{
		rapidjson::Value CoordinatesValue(TypeToJsonValue(m_Coordinates, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("coordinates", CoordinatesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void Point::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("tessellate"))
	{
		const rapidjson::Value& TessellateValue = JsonDoc["tessellate"];

		if (TessellateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TessellateValue, m_Tessellate);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tessellate is null!");
		}
	}

	if (JsonDoc.HasMember("altitudeMode"))
	{
		const rapidjson::Value& AltitudeModeValue = JsonDoc["altitudeMode"];

		if (AltitudeModeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AltitudeModeValue, m_AltitudeMode);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member altitudeMode is null!");
		}
	}

	if (JsonDoc.HasMember("coordinates"))
	{
		const rapidjson::Value& CoordinatesValue = JsonDoc["coordinates"];

		if (CoordinatesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoordinatesValue, m_Coordinates);
		}
	}
}


bool Point::GetTessellate() const
{
	return m_Tessellate.value();
}

bool Point::HasTessellate() const
{
	return m_Tessellate.has_value();
}
void Point::SetTessellate(const bool& Value)
{
	m_Tessellate = Value;
}
std::shared_ptr<AltitudeMode> Point::GetAltitudeMode() const
{
	return m_AltitudeMode.value();
}

bool Point::HasAltitudeMode() const
{
	return m_AltitudeMode.has_value();
}
void Point::SetAltitudeMode(const std::shared_ptr<AltitudeMode>& Value)
{
	m_AltitudeMode = Value;
}
utility::string_t Point::GetCoordinates() const
{
	return m_Coordinates.value();
}

bool Point::HasCoordinates() const
{
	return m_Coordinates.has_value();
}
void Point::SetCoordinates(const utility::string_t& Value)
{
	m_Coordinates = Value;
}

PositionKml::PositionKml()
{
}
PositionKml::~PositionKml()
{
}

utility::string_t PositionKml::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_Style.has_value())
	{
		rapidjson::Value StyleValue(TypeToJsonValue(m_Style, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("style", StyleValue, JsonDoc.GetAllocator());
	}

	if (m_Visibility.has_value())
	{
		rapidjson::Value VisibilityValue(TypeToJsonValue(m_Visibility, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("visibility", VisibilityValue, JsonDoc.GetAllocator());
	}

	if (m_Open.has_value())
	{
		rapidjson::Value OpenValue(TypeToJsonValue(m_Open, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("open", OpenValue, JsonDoc.GetAllocator());
	}

	if (m_Placemark.has_value())
	{
		rapidjson::Value PlacemarkValue(TypeToJsonValue(m_Placemark, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("placemark", PlacemarkValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void PositionKml::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("style"))
	{
		const rapidjson::Value& StyleValue = JsonDoc["style"];

		if (StyleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StyleValue, m_Style);
		}
	}

	if (JsonDoc.HasMember("visibility"))
	{
		const rapidjson::Value& VisibilityValue = JsonDoc["visibility"];

		if (VisibilityValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VisibilityValue, m_Visibility);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member visibility is null!");
		}
	}

	if (JsonDoc.HasMember("open"))
	{
		const rapidjson::Value& OpenValue = JsonDoc["open"];

		if (OpenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OpenValue, m_Open);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member open is null!");
		}
	}

	if (JsonDoc.HasMember("placemark"))
	{
		const rapidjson::Value& PlacemarkValue = JsonDoc["placemark"];

		if (PlacemarkValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PlacemarkValue, m_Placemark);
		}
	}
}


utility::string_t PositionKml::GetName() const
{
	return m_Name.value();
}

bool PositionKml::HasName() const
{
	return m_Name.has_value();
}
void PositionKml::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
const std::vector<std::shared_ptr<Style>>& PositionKml::GetStyle() const
{
	return m_Style.value();
}

bool PositionKml::HasStyle() const
{
	return m_Style.has_value();
}
void PositionKml::SetStyle(const std::vector<std::shared_ptr<Style>>& Value)
{
	m_Style = Value;
}
bool PositionKml::GetVisibility() const
{
	return m_Visibility.value();
}

bool PositionKml::HasVisibility() const
{
	return m_Visibility.has_value();
}
void PositionKml::SetVisibility(const bool& Value)
{
	m_Visibility = Value;
}
bool PositionKml::GetOpen() const
{
	return m_Open.value();
}

bool PositionKml::HasOpen() const
{
	return m_Open.has_value();
}
void PositionKml::SetOpen(const bool& Value)
{
	m_Open = Value;
}
const std::vector<std::shared_ptr<Placemark>>& PositionKml::GetPlacemark() const
{
	return m_Placemark.value();
}

bool PositionKml::HasPlacemark() const
{
	return m_Placemark.has_value();
}
void PositionKml::SetPlacemark(const std::vector<std::shared_ptr<Placemark>>& Value)
{
	m_Placemark = Value;
}

ProblemDetails::ProblemDetails()
{
}
ProblemDetails::~ProblemDetails()
{
}

utility::string_t ProblemDetails::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Type.has_value())
	{
		rapidjson::Value TypeValue(TypeToJsonValue(m_Type, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("type", TypeValue, JsonDoc.GetAllocator());
	}

	if (m_Title.has_value())
	{
		rapidjson::Value TitleValue(TypeToJsonValue(m_Title, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("title", TitleValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_Detail.has_value())
	{
		rapidjson::Value DetailValue(TypeToJsonValue(m_Detail, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("detail", DetailValue, JsonDoc.GetAllocator());
	}

	if (m_Instance.has_value())
	{
		rapidjson::Value InstanceValue(TypeToJsonValue(m_Instance, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("instance", InstanceValue, JsonDoc.GetAllocator());
	}

	if (m_Extensions.has_value())
	{
		rapidjson::Value ExtensionsValue(TypeToJsonValue(m_Extensions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("extensions", ExtensionsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ProblemDetails::FromJson(const utility::string_t& Val)
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
	}

	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status);
		}
	}

	if (JsonDoc.HasMember("detail"))
	{
		const rapidjson::Value& DetailValue = JsonDoc["detail"];

		if (DetailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DetailValue, m_Detail);
		}
	}

	if (JsonDoc.HasMember("instance"))
	{
		const rapidjson::Value& InstanceValue = JsonDoc["instance"];

		if (InstanceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(InstanceValue, m_Instance);
		}
	}

	if (JsonDoc.HasMember("extensions"))
	{
		const rapidjson::Value& ExtensionsValue = JsonDoc["extensions"];

		if (ExtensionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExtensionsValue, m_Extensions);
		}
	}
}


utility::string_t ProblemDetails::GetType() const
{
	return m_Type.value();
}

bool ProblemDetails::HasType() const
{
	return m_Type.has_value();
}
void ProblemDetails::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}
utility::string_t ProblemDetails::GetTitle() const
{
	return m_Title.value();
}

bool ProblemDetails::HasTitle() const
{
	return m_Title.has_value();
}
void ProblemDetails::SetTitle(const utility::string_t& Value)
{
	m_Title = Value;
}
int32_t ProblemDetails::GetStatus() const
{
	return m_Status.value();
}

bool ProblemDetails::HasStatus() const
{
	return m_Status.has_value();
}
void ProblemDetails::SetStatus(int32_t Value)
{
	m_Status = Value;
}
utility::string_t ProblemDetails::GetDetail() const
{
	return m_Detail.value();
}

bool ProblemDetails::HasDetail() const
{
	return m_Detail.has_value();
}
void ProblemDetails::SetDetail(const utility::string_t& Value)
{
	m_Detail = Value;
}
utility::string_t ProblemDetails::GetInstance() const
{
	return m_Instance.value();
}

bool ProblemDetails::HasInstance() const
{
	return m_Instance.has_value();
}
void ProblemDetails::SetInstance(const utility::string_t& Value)
{
	m_Instance = Value;
}
const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& ProblemDetails::GetExtensions() const
{
	return m_Extensions.value();
}

bool ProblemDetails::HasExtensions() const
{
	return m_Extensions.has_value();
}
void ProblemDetails::SetExtensions(const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& Value)
{
	m_Extensions = Value;
}

PrototypeDto::PrototypeDto()
{
}
PrototypeDto::~PrototypeDto()
{
}

utility::string_t PrototypeDto::ToJson() const
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

	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}

	if (m_Metadata.has_value())
	{
		rapidjson::Value MetadataValue(TypeToJsonValue(m_Metadata, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("metadata", MetadataValue, JsonDoc.GetAllocator());
	}

	if (m_UiStrings.has_value())
	{
		rapidjson::Value UiStringsValue(TypeToJsonValue(m_UiStrings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("uiStrings", UiStringsValue, JsonDoc.GetAllocator());
	}

	if (m_State.has_value())
	{
		rapidjson::Value StateValue(TypeToJsonValue(m_State, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("state", StateValue, JsonDoc.GetAllocator());
	}

	if (m_PointOfInterestId.has_value())
	{
		rapidjson::Value PointOfInterestIdValue(TypeToJsonValue(m_PointOfInterestId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("pointOfInterestId", PointOfInterestIdValue, JsonDoc.GetAllocator());
	}

	if (m_ParentId.has_value())
	{
		rapidjson::Value ParentIdValue(TypeToJsonValue(m_ParentId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("parentId", ParentIdValue, JsonDoc.GetAllocator());
	}

	if (m_GroupIds.has_value())
	{
		rapidjson::Value GroupIdsValue(TypeToJsonValue(m_GroupIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupIds", GroupIdsValue, JsonDoc.GetAllocator());
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

	if (m_Highlander.has_value())
	{
		rapidjson::Value HighlanderValue(TypeToJsonValue(m_Highlander, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("highlander", HighlanderValue, JsonDoc.GetAllocator());
	}

	if (m_Type.has_value())
	{
		rapidjson::Value TypeValue(TypeToJsonValue(m_Type, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("type", TypeValue, JsonDoc.GetAllocator());
	}

	if (m_SystemOwned.has_value())
	{
		rapidjson::Value SystemOwnedValue(TypeToJsonValue(m_SystemOwned, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("systemOwned", SystemOwnedValue, JsonDoc.GetAllocator());
	}

	if (m_PrototypeOwnerId.has_value())
	{
		rapidjson::Value PrototypeOwnerIdValue(TypeToJsonValue(m_PrototypeOwnerId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeOwnerId", PrototypeOwnerIdValue, JsonDoc.GetAllocator());
	}

	if (m_OrganizationId.has_value())
	{
		rapidjson::Value OrganizationIdValue(TypeToJsonValue(m_OrganizationId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("organizationId", OrganizationIdValue, JsonDoc.GetAllocator());
	}

	if (m_ReadAccess.has_value())
	{
		rapidjson::Value ReadAccessValue(TypeToJsonValue(m_ReadAccess, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("readAccess", ReadAccessValue, JsonDoc.GetAllocator());
	}

	if (m_WriteAccess.has_value())
	{
		rapidjson::Value WriteAccessValue(TypeToJsonValue(m_WriteAccess, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("writeAccess", WriteAccessValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void PrototypeDto::FromJson(const utility::string_t& Val)
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
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
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

	if (JsonDoc.HasMember("metadata"))
	{
		const rapidjson::Value& MetadataValue = JsonDoc["metadata"];

		if (MetadataValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MetadataValue, m_Metadata);
		}
	}

	if (JsonDoc.HasMember("uiStrings"))
	{
		const rapidjson::Value& UiStringsValue = JsonDoc["uiStrings"];

		if (UiStringsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UiStringsValue, m_UiStrings);
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

	if (JsonDoc.HasMember("pointOfInterestId"))
	{
		const rapidjson::Value& PointOfInterestIdValue = JsonDoc["pointOfInterestId"];

		if (PointOfInterestIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PointOfInterestIdValue, m_PointOfInterestId);
		}
	}

	if (JsonDoc.HasMember("parentId"))
	{
		const rapidjson::Value& ParentIdValue = JsonDoc["parentId"];

		if (ParentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ParentIdValue, m_ParentId);
		}
	}

	if (JsonDoc.HasMember("groupIds"))
	{
		const rapidjson::Value& GroupIdsValue = JsonDoc["groupIds"];

		if (GroupIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupIdsValue, m_GroupIds);
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

	if (JsonDoc.HasMember("highlander"))
	{
		const rapidjson::Value& HighlanderValue = JsonDoc["highlander"];

		if (HighlanderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HighlanderValue, m_Highlander);
		}
	}

	if (JsonDoc.HasMember("type"))
	{
		const rapidjson::Value& TypeValue = JsonDoc["type"];

		if (TypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeValue, m_Type);
		}
	}

	if (JsonDoc.HasMember("systemOwned"))
	{
		const rapidjson::Value& SystemOwnedValue = JsonDoc["systemOwned"];

		if (SystemOwnedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemOwnedValue, m_SystemOwned);
		}
	}

	if (JsonDoc.HasMember("prototypeOwnerId"))
	{
		const rapidjson::Value& PrototypeOwnerIdValue = JsonDoc["prototypeOwnerId"];

		if (PrototypeOwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeOwnerIdValue, m_PrototypeOwnerId);
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

	if (JsonDoc.HasMember("readAccess"))
	{
		const rapidjson::Value& ReadAccessValue = JsonDoc["readAccess"];

		if (ReadAccessValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReadAccessValue, m_ReadAccess);
		}
	}

	if (JsonDoc.HasMember("writeAccess"))
	{
		const rapidjson::Value& WriteAccessValue = JsonDoc["writeAccess"];

		if (WriteAccessValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WriteAccessValue, m_WriteAccess);
		}
	}
}


utility::string_t PrototypeDto::GetId() const
{
	return m_Id.value();
}

bool PrototypeDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t PrototypeDto::GetName() const
{
	return m_Name.value();
}

bool PrototypeDto::HasName() const
{
	return m_Name.has_value();
}
void PrototypeDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
const std::vector<utility::string_t>& PrototypeDto::GetTags() const
{
	return m_Tags.value();
}

bool PrototypeDto::HasTags() const
{
	return m_Tags.has_value();
}
void PrototypeDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
const std::map<utility::string_t, utility::string_t>& PrototypeDto::GetMetadata() const
{
	return m_Metadata.value();
}

bool PrototypeDto::HasMetadata() const
{
	return m_Metadata.has_value();
}
void PrototypeDto::SetMetadata(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Metadata = Value;
}
const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& PrototypeDto::GetUiStrings() const
{
	return m_UiStrings.value();
}

bool PrototypeDto::HasUiStrings() const
{
	return m_UiStrings.has_value();
}
void PrototypeDto::SetUiStrings(const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value)
{
	m_UiStrings = Value;
}
const std::map<utility::string_t, utility::string_t>& PrototypeDto::GetState() const
{
	return m_State.value();
}

bool PrototypeDto::HasState() const
{
	return m_State.has_value();
}
void PrototypeDto::SetState(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_State = Value;
}
utility::string_t PrototypeDto::GetPointOfInterestId() const
{
	return m_PointOfInterestId.value();
}

bool PrototypeDto::HasPointOfInterestId() const
{
	return m_PointOfInterestId.has_value();
}
void PrototypeDto::SetPointOfInterestId(const utility::string_t& Value)
{
	m_PointOfInterestId = Value;
}
utility::string_t PrototypeDto::GetParentId() const
{
	return m_ParentId.value();
}

bool PrototypeDto::HasParentId() const
{
	return m_ParentId.has_value();
}
void PrototypeDto::SetParentId(const utility::string_t& Value)
{
	m_ParentId = Value;
}
const std::vector<utility::string_t>& PrototypeDto::GetGroupIds() const
{
	return m_GroupIds.value();
}

bool PrototypeDto::HasGroupIds() const
{
	return m_GroupIds.has_value();
}
void PrototypeDto::SetGroupIds(const std::vector<utility::string_t>& Value)
{
	m_GroupIds = Value;
}
utility::string_t PrototypeDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool PrototypeDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t PrototypeDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool PrototypeDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t PrototypeDto::GetUpdatedBy() const
{
	return m_UpdatedBy.value();
}

bool PrototypeDto::HasUpdatedBy() const
{
	return m_UpdatedBy.has_value();
}
utility::string_t PrototypeDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool PrototypeDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
bool PrototypeDto::GetHighlander() const
{
	return m_Highlander.value();
}

bool PrototypeDto::HasHighlander() const
{
	return m_Highlander.has_value();
}
void PrototypeDto::SetHighlander(const bool& Value)
{
	m_Highlander = Value;
}
utility::string_t PrototypeDto::GetType() const
{
	return m_Type.value();
}

bool PrototypeDto::HasType() const
{
	return m_Type.has_value();
}
void PrototypeDto::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}
bool PrototypeDto::GetSystemOwned() const
{
	return m_SystemOwned.value();
}

bool PrototypeDto::HasSystemOwned() const
{
	return m_SystemOwned.has_value();
}
void PrototypeDto::SetSystemOwned(const bool& Value)
{
	m_SystemOwned = Value;
}
utility::string_t PrototypeDto::GetPrototypeOwnerId() const
{
	return m_PrototypeOwnerId.value();
}

bool PrototypeDto::HasPrototypeOwnerId() const
{
	return m_PrototypeOwnerId.has_value();
}
void PrototypeDto::SetPrototypeOwnerId(const utility::string_t& Value)
{
	m_PrototypeOwnerId = Value;
}
utility::string_t PrototypeDto::GetOrganizationId() const
{
	return m_OrganizationId.value();
}

bool PrototypeDto::HasOrganizationId() const
{
	return m_OrganizationId.has_value();
}
const std::vector<utility::string_t>& PrototypeDto::GetReadAccess() const
{
	return m_ReadAccess.value();
}

bool PrototypeDto::HasReadAccess() const
{
	return m_ReadAccess.has_value();
}
void PrototypeDto::SetReadAccess(const std::vector<utility::string_t>& Value)
{
	m_ReadAccess = Value;
}
const std::vector<utility::string_t>& PrototypeDto::GetWriteAccess() const
{
	return m_WriteAccess.value();
}

bool PrototypeDto::HasWriteAccess() const
{
	return m_WriteAccess.has_value();
}
void PrototypeDto::SetWriteAccess(const std::vector<utility::string_t>& Value)
{
	m_WriteAccess = Value;
}

PrototypeDtoDataPage::PrototypeDtoDataPage()
{
}
PrototypeDtoDataPage::~PrototypeDtoDataPage()
{
}

utility::string_t PrototypeDtoDataPage::ToJson() const
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

void PrototypeDtoDataPage::FromJson(const utility::string_t& Val)
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


const std::vector<std::shared_ptr<PrototypeDto>>& PrototypeDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool PrototypeDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void PrototypeDtoDataPage::SetItems(const std::vector<std::shared_ptr<PrototypeDto>>& Value)
{
	m_Items = Value;
}
int32_t PrototypeDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool PrototypeDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void PrototypeDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t PrototypeDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool PrototypeDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void PrototypeDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t PrototypeDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool PrototypeDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void PrototypeDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t PrototypeDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool PrototypeDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void PrototypeDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

SequenceDto::SequenceDto()
{
}
SequenceDto::~SequenceDto()
{
}

utility::string_t SequenceDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Key.has_value())
	{
		rapidjson::Value KeyValue(TypeToJsonValue(m_Key, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("key", KeyValue, JsonDoc.GetAllocator());
	}

	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_ReferenceType.has_value())
	{
		rapidjson::Value ReferenceTypeValue(TypeToJsonValue(m_ReferenceType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("referenceType", ReferenceTypeValue, JsonDoc.GetAllocator());
	}

	if (m_ReferenceId.has_value())
	{
		rapidjson::Value ReferenceIdValue(TypeToJsonValue(m_ReferenceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("referenceId", ReferenceIdValue, JsonDoc.GetAllocator());
	}

	if (m_Metadata.has_value())
	{
		rapidjson::Value MetadataValue(TypeToJsonValue(m_Metadata, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("metadata", MetadataValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SequenceDto::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("key"))
	{
		const rapidjson::Value& KeyValue = JsonDoc["key"];

		if (KeyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeyValue, m_Key);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member key is null!");
		}
	}

	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member items is null!");
		}
	}

	if (JsonDoc.HasMember("referenceType"))
	{
		const rapidjson::Value& ReferenceTypeValue = JsonDoc["referenceType"];

		if (ReferenceTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReferenceTypeValue, m_ReferenceType);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member referenceType is null!");
		}
	}

	if (JsonDoc.HasMember("referenceId"))
	{
		const rapidjson::Value& ReferenceIdValue = JsonDoc["referenceId"];

		if (ReferenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReferenceIdValue, m_ReferenceId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member referenceId is null!");
		}
	}

	if (JsonDoc.HasMember("metadata"))
	{
		const rapidjson::Value& MetadataValue = JsonDoc["metadata"];

		if (MetadataValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MetadataValue, m_Metadata);
		}
	}
}


utility::string_t SequenceDto::GetId() const
{
	return m_Id.value();
}

bool SequenceDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t SequenceDto::GetKey() const
{
	return m_Key.value();
}

bool SequenceDto::HasKey() const
{
	return m_Key.has_value();
}
void SequenceDto::SetKey(const utility::string_t& Value)
{
	m_Key = Value;
}
const std::vector<utility::string_t>& SequenceDto::GetItems() const
{
	return m_Items.value();
}

bool SequenceDto::HasItems() const
{
	return m_Items.has_value();
}
void SequenceDto::SetItems(const std::vector<utility::string_t>& Value)
{
	m_Items = Value;
}
utility::string_t SequenceDto::GetReferenceType() const
{
	return m_ReferenceType.value();
}

bool SequenceDto::HasReferenceType() const
{
	return m_ReferenceType.has_value();
}
void SequenceDto::SetReferenceType(const utility::string_t& Value)
{
	m_ReferenceType = Value;
}
utility::string_t SequenceDto::GetReferenceId() const
{
	return m_ReferenceId.value();
}

bool SequenceDto::HasReferenceId() const
{
	return m_ReferenceId.has_value();
}
void SequenceDto::SetReferenceId(const utility::string_t& Value)
{
	m_ReferenceId = Value;
}
const std::map<utility::string_t, utility::string_t>& SequenceDto::GetMetadata() const
{
	return m_Metadata.value();
}

bool SequenceDto::HasMetadata() const
{
	return m_Metadata.has_value();
}
void SequenceDto::SetMetadata(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Metadata = Value;
}

SequenceDtoDataPage::SequenceDtoDataPage()
{
}
SequenceDtoDataPage::~SequenceDtoDataPage()
{
}

utility::string_t SequenceDtoDataPage::ToJson() const
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

void SequenceDtoDataPage::FromJson(const utility::string_t& Val)
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


const std::vector<std::shared_ptr<SequenceDto>>& SequenceDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool SequenceDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void SequenceDtoDataPage::SetItems(const std::vector<std::shared_ptr<SequenceDto>>& Value)
{
	m_Items = Value;
}
int32_t SequenceDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool SequenceDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void SequenceDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t SequenceDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool SequenceDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void SequenceDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t SequenceDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool SequenceDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void SequenceDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t SequenceDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool SequenceDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void SequenceDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

ServiceRequest::ServiceRequest()
{
}
ServiceRequest::~ServiceRequest()
{
}

utility::string_t ServiceRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ServiceName.has_value())
	{
		rapidjson::Value ServiceNameValue(TypeToJsonValue(m_ServiceName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("serviceName", ServiceNameValue, JsonDoc.GetAllocator());
	}

	if (m_OperationName.has_value())
	{
		rapidjson::Value OperationNameValue(TypeToJsonValue(m_OperationName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("operationName", OperationNameValue, JsonDoc.GetAllocator());
	}

	if (m_Help.has_value())
	{
		rapidjson::Value HelpValue(TypeToJsonValue(m_Help, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("help", HelpValue, JsonDoc.GetAllocator());
	}

	if (m_Parameters.has_value())
	{
		rapidjson::Value ParametersValue(TypeToJsonValue(m_Parameters, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("parameters", ParametersValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ServiceRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("serviceName"))
	{
		const rapidjson::Value& ServiceNameValue = JsonDoc["serviceName"];

		if (ServiceNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ServiceNameValue, m_ServiceName);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member serviceName is null!");
		}
	}

	if (JsonDoc.HasMember("operationName"))
	{
		const rapidjson::Value& OperationNameValue = JsonDoc["operationName"];

		if (OperationNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OperationNameValue, m_OperationName);
		}
	}

	if (JsonDoc.HasMember("help"))
	{
		const rapidjson::Value& HelpValue = JsonDoc["help"];

		if (HelpValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HelpValue, m_Help);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member help is null!");
		}
	}

	if (JsonDoc.HasMember("parameters"))
	{
		const rapidjson::Value& ParametersValue = JsonDoc["parameters"];

		if (ParametersValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ParametersValue, m_Parameters);
		}
	}
}


utility::string_t ServiceRequest::GetServiceName() const
{
	return m_ServiceName.value();
}

bool ServiceRequest::HasServiceName() const
{
	return m_ServiceName.has_value();
}
void ServiceRequest::SetServiceName(const utility::string_t& Value)
{
	m_ServiceName = Value;
}
utility::string_t ServiceRequest::GetOperationName() const
{
	return m_OperationName.value();
}

bool ServiceRequest::HasOperationName() const
{
	return m_OperationName.has_value();
}
void ServiceRequest::SetOperationName(const utility::string_t& Value)
{
	m_OperationName = Value;
}
bool ServiceRequest::GetHelp() const
{
	return m_Help.value();
}

bool ServiceRequest::HasHelp() const
{
	return m_Help.has_value();
}
void ServiceRequest::SetHelp(const bool& Value)
{
	m_Help = Value;
}
const std::map<utility::string_t, utility::string_t>& ServiceRequest::GetParameters() const
{
	return m_Parameters.value();
}

bool ServiceRequest::HasParameters() const
{
	return m_Parameters.has_value();
}
void ServiceRequest::SetParameters(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Parameters = Value;
}

ServiceResponse::ServiceResponse()
{
}
ServiceResponse::~ServiceResponse()
{
}

utility::string_t ServiceResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Success.has_value())
	{
		rapidjson::Value SuccessValue(TypeToJsonValue(m_Success, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("success", SuccessValue, JsonDoc.GetAllocator());
	}

	if (m_StatusCode.has_value())
	{
		rapidjson::Value StatusCodeValue(TypeToJsonValue(m_StatusCode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("statusCode", StatusCodeValue, JsonDoc.GetAllocator());
	}

	if (m_StatusReason.has_value())
	{
		rapidjson::Value StatusReasonValue(TypeToJsonValue(m_StatusReason, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("statusReason", StatusReasonValue, JsonDoc.GetAllocator());
	}

	if (m_ErrorCode.has_value())
	{
		rapidjson::Value ErrorCodeValue(TypeToJsonValue(m_ErrorCode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("errorCode", ErrorCodeValue, JsonDoc.GetAllocator());
	}

	if (m_OperationResult.has_value())
	{
		rapidjson::Value OperationResultValue(TypeToJsonValue(m_OperationResult, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("operationResult", OperationResultValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ServiceResponse::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("success"))
	{
		const rapidjson::Value& SuccessValue = JsonDoc["success"];

		if (SuccessValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SuccessValue, m_Success);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member success is null!");
		}
	}

	if (JsonDoc.HasMember("statusCode"))
	{
		const rapidjson::Value& StatusCodeValue = JsonDoc["statusCode"];

		if (StatusCodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusCodeValue, m_StatusCode);
		}
	}

	if (JsonDoc.HasMember("statusReason"))
	{
		const rapidjson::Value& StatusReasonValue = JsonDoc["statusReason"];

		if (StatusReasonValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusReasonValue, m_StatusReason);
		}
	}

	if (JsonDoc.HasMember("errorCode"))
	{
		const rapidjson::Value& ErrorCodeValue = JsonDoc["errorCode"];

		if (ErrorCodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ErrorCodeValue, m_ErrorCode);
		}
	}

	if (JsonDoc.HasMember("operationResult"))
	{
		const rapidjson::Value& OperationResultValue = JsonDoc["operationResult"];

		if (OperationResultValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OperationResultValue, m_OperationResult);
		}
	}
}


bool ServiceResponse::GetSuccess() const
{
	return m_Success.value();
}

bool ServiceResponse::HasSuccess() const
{
	return m_Success.has_value();
}
void ServiceResponse::SetSuccess(const bool& Value)
{
	m_Success = Value;
}
int32_t ServiceResponse::GetStatusCode() const
{
	return m_StatusCode.value();
}

bool ServiceResponse::HasStatusCode() const
{
	return m_StatusCode.has_value();
}
void ServiceResponse::SetStatusCode(int32_t Value)
{
	m_StatusCode = Value;
}
utility::string_t ServiceResponse::GetStatusReason() const
{
	return m_StatusReason.value();
}

bool ServiceResponse::HasStatusReason() const
{
	return m_StatusReason.has_value();
}
void ServiceResponse::SetStatusReason(const utility::string_t& Value)
{
	m_StatusReason = Value;
}
utility::string_t ServiceResponse::GetErrorCode() const
{
	return m_ErrorCode.value();
}

bool ServiceResponse::HasErrorCode() const
{
	return m_ErrorCode.has_value();
}
void ServiceResponse::SetErrorCode(const utility::string_t& Value)
{
	m_ErrorCode = Value;
}
std::shared_ptr<rapidjson::Document> ServiceResponse::GetOperationResult() const
{
	return m_OperationResult.value();
}

bool ServiceResponse::HasOperationResult() const
{
	return m_OperationResult.has_value();
}
void ServiceResponse::SetOperationResult(const std::shared_ptr<rapidjson::Document>& Value)
{
	m_OperationResult = Value;
}

ShopifyCartDto::ShopifyCartDto()
{
}
ShopifyCartDto::~ShopifyCartDto()
{
}

utility::string_t ShopifyCartDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_ShopifyCartId.has_value())
	{
		rapidjson::Value ShopifyCartIdValue(TypeToJsonValue(m_ShopifyCartId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("shopifyCartId", ShopifyCartIdValue, JsonDoc.GetAllocator());
	}

	if (m_Lines.has_value())
	{
		rapidjson::Value LinesValue(TypeToJsonValue(m_Lines, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lines", LinesValue, JsonDoc.GetAllocator());
	}

	if (m_TotalQuantity.has_value())
	{
		rapidjson::Value TotalQuantityValue(TypeToJsonValue(m_TotalQuantity, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("totalQuantity", TotalQuantityValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyCartDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("shopifyCartId"))
	{
		const rapidjson::Value& ShopifyCartIdValue = JsonDoc["shopifyCartId"];

		if (ShopifyCartIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ShopifyCartIdValue, m_ShopifyCartId);
		}
	}

	if (JsonDoc.HasMember("lines"))
	{
		const rapidjson::Value& LinesValue = JsonDoc["lines"];

		if (LinesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LinesValue, m_Lines);
		}
	}

	if (JsonDoc.HasMember("totalQuantity"))
	{
		const rapidjson::Value& TotalQuantityValue = JsonDoc["totalQuantity"];

		if (TotalQuantityValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TotalQuantityValue, m_TotalQuantity);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member totalQuantity is null!");
		}
	}
}


utility::string_t ShopifyCartDto::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool ShopifyCartDto::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
utility::string_t ShopifyCartDto::GetShopifyCartId() const
{
	return m_ShopifyCartId.value();
}

bool ShopifyCartDto::HasShopifyCartId() const
{
	return m_ShopifyCartId.has_value();
}
const std::vector<std::shared_ptr<ShopifyCartLineDto>>& ShopifyCartDto::GetLines() const
{
	return m_Lines.value();
}

bool ShopifyCartDto::HasLines() const
{
	return m_Lines.has_value();
}
void ShopifyCartDto::SetLines(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value)
{
	m_Lines = Value;
}
int32_t ShopifyCartDto::GetTotalQuantity() const
{
	return m_TotalQuantity.value();
}

bool ShopifyCartDto::HasTotalQuantity() const
{
	return m_TotalQuantity.has_value();
}

ShopifyCartLineDto::ShopifyCartLineDto()
{
}
ShopifyCartLineDto::~ShopifyCartLineDto()
{
}

utility::string_t ShopifyCartLineDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ShopifyCartLineId.has_value())
	{
		rapidjson::Value ShopifyCartLineIdValue(TypeToJsonValue(m_ShopifyCartLineId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("shopifyCartLineId", ShopifyCartLineIdValue, JsonDoc.GetAllocator());
	}

	if (m_ProductVariantId.has_value())
	{
		rapidjson::Value ProductVariantIdValue(TypeToJsonValue(m_ProductVariantId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("productVariantId", ProductVariantIdValue, JsonDoc.GetAllocator());
	}

	if (m_Quantity.has_value())
	{
		rapidjson::Value QuantityValue(TypeToJsonValue(m_Quantity, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("quantity", QuantityValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyCartLineDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("shopifyCartLineId"))
	{
		const rapidjson::Value& ShopifyCartLineIdValue = JsonDoc["shopifyCartLineId"];

		if (ShopifyCartLineIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ShopifyCartLineIdValue, m_ShopifyCartLineId);
		}
	}

	if (JsonDoc.HasMember("productVariantId"))
	{
		const rapidjson::Value& ProductVariantIdValue = JsonDoc["productVariantId"];

		if (ProductVariantIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProductVariantIdValue, m_ProductVariantId);
		}
	}

	if (JsonDoc.HasMember("quantity"))
	{
		const rapidjson::Value& QuantityValue = JsonDoc["quantity"];

		if (QuantityValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QuantityValue, m_Quantity);
		}
	}
}


utility::string_t ShopifyCartLineDto::GetShopifyCartLineId() const
{
	return m_ShopifyCartLineId.value();
}

bool ShopifyCartLineDto::HasShopifyCartLineId() const
{
	return m_ShopifyCartLineId.has_value();
}
void ShopifyCartLineDto::SetShopifyCartLineId(const utility::string_t& Value)
{
	m_ShopifyCartLineId = Value;
}
utility::string_t ShopifyCartLineDto::GetProductVariantId() const
{
	return m_ProductVariantId.value();
}

bool ShopifyCartLineDto::HasProductVariantId() const
{
	return m_ProductVariantId.has_value();
}
void ShopifyCartLineDto::SetProductVariantId(const utility::string_t& Value)
{
	m_ProductVariantId = Value;
}
int32_t ShopifyCartLineDto::GetQuantity() const
{
	return m_Quantity.value();
}

bool ShopifyCartLineDto::HasQuantity() const
{
	return m_Quantity.has_value();
}
void ShopifyCartLineDto::SetQuantity(int32_t Value)
{
	m_Quantity = Value;
}

ShopifyCartUpdateDto::ShopifyCartUpdateDto()
{
}
ShopifyCartUpdateDto::~ShopifyCartUpdateDto()
{
}

utility::string_t ShopifyCartUpdateDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_ShopifyCartId.has_value())
	{
		rapidjson::Value ShopifyCartIdValue(TypeToJsonValue(m_ShopifyCartId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("shopifyCartId", ShopifyCartIdValue, JsonDoc.GetAllocator());
	}

	if (m_AddLineCartChanges.has_value())
	{
		rapidjson::Value AddLineCartChangesValue(TypeToJsonValue(m_AddLineCartChanges, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("addLineCartChanges", AddLineCartChangesValue, JsonDoc.GetAllocator());
	}

	if (m_RemoveLineCartChanges.has_value())
	{
		rapidjson::Value RemoveLineCartChangesValue(TypeToJsonValue(m_RemoveLineCartChanges, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("removeLineCartChanges", RemoveLineCartChangesValue, JsonDoc.GetAllocator());
	}

	if (m_UpdateLineQtyCartChanges.has_value())
	{
		rapidjson::Value UpdateLineQtyCartChangesValue(TypeToJsonValue(m_UpdateLineQtyCartChanges, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updateLineQtyCartChanges", UpdateLineQtyCartChangesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyCartUpdateDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("shopifyCartId"))
	{
		const rapidjson::Value& ShopifyCartIdValue = JsonDoc["shopifyCartId"];

		if (ShopifyCartIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ShopifyCartIdValue, m_ShopifyCartId);
		}
	}

	if (JsonDoc.HasMember("addLineCartChanges"))
	{
		const rapidjson::Value& AddLineCartChangesValue = JsonDoc["addLineCartChanges"];

		if (AddLineCartChangesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AddLineCartChangesValue, m_AddLineCartChanges);
		}
	}

	if (JsonDoc.HasMember("removeLineCartChanges"))
	{
		const rapidjson::Value& RemoveLineCartChangesValue = JsonDoc["removeLineCartChanges"];

		if (RemoveLineCartChangesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RemoveLineCartChangesValue, m_RemoveLineCartChanges);
		}
	}

	if (JsonDoc.HasMember("updateLineQtyCartChanges"))
	{
		const rapidjson::Value& UpdateLineQtyCartChangesValue = JsonDoc["updateLineQtyCartChanges"];

		if (UpdateLineQtyCartChangesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdateLineQtyCartChangesValue, m_UpdateLineQtyCartChanges);
		}
	}
}


utility::string_t ShopifyCartUpdateDto::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool ShopifyCartUpdateDto::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
utility::string_t ShopifyCartUpdateDto::GetShopifyCartId() const
{
	return m_ShopifyCartId.value();
}

bool ShopifyCartUpdateDto::HasShopifyCartId() const
{
	return m_ShopifyCartId.has_value();
}
const std::vector<std::shared_ptr<ShopifyCartLineDto>>& ShopifyCartUpdateDto::GetAddLineCartChanges() const
{
	return m_AddLineCartChanges.value();
}

bool ShopifyCartUpdateDto::HasAddLineCartChanges() const
{
	return m_AddLineCartChanges.has_value();
}
void ShopifyCartUpdateDto::SetAddLineCartChanges(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value)
{
	m_AddLineCartChanges = Value;
}
const std::vector<std::shared_ptr<ShopifyCartLineDto>>& ShopifyCartUpdateDto::GetRemoveLineCartChanges() const
{
	return m_RemoveLineCartChanges.value();
}

bool ShopifyCartUpdateDto::HasRemoveLineCartChanges() const
{
	return m_RemoveLineCartChanges.has_value();
}
void ShopifyCartUpdateDto::SetRemoveLineCartChanges(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value)
{
	m_RemoveLineCartChanges = Value;
}
const std::vector<std::shared_ptr<ShopifyCartLineDto>>& ShopifyCartUpdateDto::GetUpdateLineQtyCartChanges() const
{
	return m_UpdateLineQtyCartChanges.value();
}

bool ShopifyCartUpdateDto::HasUpdateLineQtyCartChanges() const
{
	return m_UpdateLineQtyCartChanges.has_value();
}
void ShopifyCartUpdateDto::SetUpdateLineQtyCartChanges(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value)
{
	m_UpdateLineQtyCartChanges = Value;
}

ShopifyCheckoutDto::ShopifyCheckoutDto()
{
}
ShopifyCheckoutDto::~ShopifyCheckoutDto()
{
}

utility::string_t ShopifyCheckoutDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_StoreUrl.has_value())
	{
		rapidjson::Value StoreUrlValue(TypeToJsonValue(m_StoreUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("storeUrl", StoreUrlValue, JsonDoc.GetAllocator());
	}

	if (m_CheckoutUrl.has_value())
	{
		rapidjson::Value CheckoutUrlValue(TypeToJsonValue(m_CheckoutUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("checkoutUrl", CheckoutUrlValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyCheckoutDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("storeUrl"))
	{
		const rapidjson::Value& StoreUrlValue = JsonDoc["storeUrl"];

		if (StoreUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StoreUrlValue, m_StoreUrl);
		}
	}

	if (JsonDoc.HasMember("checkoutUrl"))
	{
		const rapidjson::Value& CheckoutUrlValue = JsonDoc["checkoutUrl"];

		if (CheckoutUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CheckoutUrlValue, m_CheckoutUrl);
		}
	}
}


utility::string_t ShopifyCheckoutDto::GetStoreUrl() const
{
	return m_StoreUrl.value();
}

bool ShopifyCheckoutDto::HasStoreUrl() const
{
	return m_StoreUrl.has_value();
}
utility::string_t ShopifyCheckoutDto::GetCheckoutUrl() const
{
	return m_CheckoutUrl.value();
}

bool ShopifyCheckoutDto::HasCheckoutUrl() const
{
	return m_CheckoutUrl.has_value();
}

ShopifyMoney::ShopifyMoney()
{
}
ShopifyMoney::~ShopifyMoney()
{
}

utility::string_t ShopifyMoney::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Amount.has_value())
	{
		rapidjson::Value AmountValue(TypeToJsonValue(m_Amount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("amount", AmountValue, JsonDoc.GetAllocator());
	}

	if (m_CurrencyCode.has_value())
	{
		rapidjson::Value CurrencyCodeValue(TypeToJsonValue(m_CurrencyCode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("currencyCode", CurrencyCodeValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyMoney::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("amount"))
	{
		const rapidjson::Value& AmountValue = JsonDoc["amount"];

		if (AmountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AmountValue, m_Amount);
		}
	}

	if (JsonDoc.HasMember("currencyCode"))
	{
		const rapidjson::Value& CurrencyCodeValue = JsonDoc["currencyCode"];

		if (CurrencyCodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CurrencyCodeValue, m_CurrencyCode);
		}
	}
}


double ShopifyMoney::GetAmount() const
{
	return m_Amount.value();
}

bool ShopifyMoney::HasAmount() const
{
	return m_Amount.has_value();
}
utility::string_t ShopifyMoney::GetCurrencyCode() const
{
	return m_CurrencyCode.value();
}

bool ShopifyMoney::HasCurrencyCode() const
{
	return m_CurrencyCode.has_value();
}

ShopifyProductDto::ShopifyProductDto()
{
}
ShopifyProductDto::~ShopifyProductDto()
{
}

utility::string_t ShopifyProductDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Title.has_value())
	{
		rapidjson::Value TitleValue(TypeToJsonValue(m_Title, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("title", TitleValue, JsonDoc.GetAllocator());
	}

	if (m_Description.has_value())
	{
		rapidjson::Value DescriptionValue(TypeToJsonValue(m_Description, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("description", DescriptionValue, JsonDoc.GetAllocator());
	}

	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}

	if (m_Variants.has_value())
	{
		rapidjson::Value VariantsValue(TypeToJsonValue(m_Variants, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("variants", VariantsValue, JsonDoc.GetAllocator());
	}

	if (m_Media.has_value())
	{
		rapidjson::Value MediaValue(TypeToJsonValue(m_Media, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("media", MediaValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyProductDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt);
		}
	}

	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title);
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

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags);
		}
	}

	if (JsonDoc.HasMember("variants"))
	{
		const rapidjson::Value& VariantsValue = JsonDoc["variants"];

		if (VariantsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VariantsValue, m_Variants);
		}
	}

	if (JsonDoc.HasMember("media"))
	{
		const rapidjson::Value& MediaValue = JsonDoc["media"];

		if (MediaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MediaValue, m_Media);
		}
	}
}


utility::string_t ShopifyProductDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool ShopifyProductDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t ShopifyProductDto::GetId() const
{
	return m_Id.value();
}

bool ShopifyProductDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t ShopifyProductDto::GetTitle() const
{
	return m_Title.value();
}

bool ShopifyProductDto::HasTitle() const
{
	return m_Title.has_value();
}
utility::string_t ShopifyProductDto::GetDescription() const
{
	return m_Description.value();
}

bool ShopifyProductDto::HasDescription() const
{
	return m_Description.has_value();
}
const std::vector<utility::string_t>& ShopifyProductDto::GetTags() const
{
	return m_Tags.value();
}

bool ShopifyProductDto::HasTags() const
{
	return m_Tags.has_value();
}
const std::vector<std::shared_ptr<ShopifyProductVariants>>& ShopifyProductDto::GetVariants() const
{
	return m_Variants.value();
}

bool ShopifyProductDto::HasVariants() const
{
	return m_Variants.has_value();
}
const std::vector<std::shared_ptr<ShopifyProductMedia>>& ShopifyProductDto::GetMedia() const
{
	return m_Media.value();
}

bool ShopifyProductDto::HasMedia() const
{
	return m_Media.has_value();
}

ShopifyProductMedia::ShopifyProductMedia()
{
}
ShopifyProductMedia::~ShopifyProductMedia()
{
}

utility::string_t ShopifyProductMedia::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_MediaContentType.has_value())
	{
		rapidjson::Value MediaContentTypeValue(TypeToJsonValue(m_MediaContentType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("mediaContentType", MediaContentTypeValue, JsonDoc.GetAllocator());
	}

	if (m_Alt.has_value())
	{
		rapidjson::Value AltValue(TypeToJsonValue(m_Alt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("alt", AltValue, JsonDoc.GetAllocator());
	}

	if (m_Url.has_value())
	{
		rapidjson::Value UrlValue(TypeToJsonValue(m_Url, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("url", UrlValue, JsonDoc.GetAllocator());
	}

	if (m_Width.has_value())
	{
		rapidjson::Value WidthValue(TypeToJsonValue(m_Width, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("width", WidthValue, JsonDoc.GetAllocator());
	}

	if (m_Height.has_value())
	{
		rapidjson::Value HeightValue(TypeToJsonValue(m_Height, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("height", HeightValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyProductMedia::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("mediaContentType"))
	{
		const rapidjson::Value& MediaContentTypeValue = JsonDoc["mediaContentType"];

		if (MediaContentTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MediaContentTypeValue, m_MediaContentType);
		}
	}

	if (JsonDoc.HasMember("alt"))
	{
		const rapidjson::Value& AltValue = JsonDoc["alt"];

		if (AltValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AltValue, m_Alt);
		}
	}

	if (JsonDoc.HasMember("url"))
	{
		const rapidjson::Value& UrlValue = JsonDoc["url"];

		if (UrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UrlValue, m_Url);
		}
	}

	if (JsonDoc.HasMember("width"))
	{
		const rapidjson::Value& WidthValue = JsonDoc["width"];

		if (WidthValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WidthValue, m_Width);
		}
	}

	if (JsonDoc.HasMember("height"))
	{
		const rapidjson::Value& HeightValue = JsonDoc["height"];

		if (HeightValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HeightValue, m_Height);
		}
	}
}


utility::string_t ShopifyProductMedia::GetMediaContentType() const
{
	return m_MediaContentType.value();
}

bool ShopifyProductMedia::HasMediaContentType() const
{
	return m_MediaContentType.has_value();
}
utility::string_t ShopifyProductMedia::GetAlt() const
{
	return m_Alt.value();
}

bool ShopifyProductMedia::HasAlt() const
{
	return m_Alt.has_value();
}
utility::string_t ShopifyProductMedia::GetUrl() const
{
	return m_Url.value();
}

bool ShopifyProductMedia::HasUrl() const
{
	return m_Url.has_value();
}
int32_t ShopifyProductMedia::GetWidth() const
{
	return m_Width.value();
}

bool ShopifyProductMedia::HasWidth() const
{
	return m_Width.has_value();
}
int32_t ShopifyProductMedia::GetHeight() const
{
	return m_Height.value();
}

bool ShopifyProductMedia::HasHeight() const
{
	return m_Height.has_value();
}

ShopifyProductVariants::ShopifyProductVariants()
{
}
ShopifyProductVariants::~ShopifyProductVariants()
{
}

utility::string_t ShopifyProductVariants::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Title.has_value())
	{
		rapidjson::Value TitleValue(TypeToJsonValue(m_Title, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("title", TitleValue, JsonDoc.GetAllocator());
	}

	if (m_AvailableForSale.has_value())
	{
		rapidjson::Value AvailableForSaleValue(TypeToJsonValue(m_AvailableForSale, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("availableForSale", AvailableForSaleValue, JsonDoc.GetAllocator());
	}

	if (m_QuantityAvailable.has_value())
	{
		rapidjson::Value QuantityAvailableValue(TypeToJsonValue(m_QuantityAvailable, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("quantityAvailable", QuantityAvailableValue, JsonDoc.GetAllocator());
	}

	if (m_Image.has_value())
	{
		rapidjson::Value ImageValue(TypeToJsonValue(m_Image, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("image", ImageValue, JsonDoc.GetAllocator());
	}

	if (m_SelectedOptions.has_value())
	{
		rapidjson::Value SelectedOptionsValue(TypeToJsonValue(m_SelectedOptions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("selectedOptions", SelectedOptionsValue, JsonDoc.GetAllocator());
	}

	if (m_UnitPrice.has_value())
	{
		rapidjson::Value UnitPriceValue(TypeToJsonValue(m_UnitPrice, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("unitPrice", UnitPriceValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyProductVariants::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title);
		}
	}

	if (JsonDoc.HasMember("availableForSale"))
	{
		const rapidjson::Value& AvailableForSaleValue = JsonDoc["availableForSale"];

		if (AvailableForSaleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AvailableForSaleValue, m_AvailableForSale);
		}
	}

	if (JsonDoc.HasMember("quantityAvailable"))
	{
		const rapidjson::Value& QuantityAvailableValue = JsonDoc["quantityAvailable"];

		if (QuantityAvailableValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QuantityAvailableValue, m_QuantityAvailable);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member quantityAvailable is null!");
		}
	}

	if (JsonDoc.HasMember("image"))
	{
		const rapidjson::Value& ImageValue = JsonDoc["image"];

		if (ImageValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ImageValue, m_Image);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member image is null!");
		}
	}

	if (JsonDoc.HasMember("selectedOptions"))
	{
		const rapidjson::Value& SelectedOptionsValue = JsonDoc["selectedOptions"];

		if (SelectedOptionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SelectedOptionsValue, m_SelectedOptions);
		}
	}

	if (JsonDoc.HasMember("unitPrice"))
	{
		const rapidjson::Value& UnitPriceValue = JsonDoc["unitPrice"];

		if (UnitPriceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UnitPriceValue, m_UnitPrice);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member unitPrice is null!");
		}
	}
}


utility::string_t ShopifyProductVariants::GetId() const
{
	return m_Id.value();
}

bool ShopifyProductVariants::HasId() const
{
	return m_Id.has_value();
}
utility::string_t ShopifyProductVariants::GetTitle() const
{
	return m_Title.value();
}

bool ShopifyProductVariants::HasTitle() const
{
	return m_Title.has_value();
}
bool ShopifyProductVariants::GetAvailableForSale() const
{
	return m_AvailableForSale.value();
}

bool ShopifyProductVariants::HasAvailableForSale() const
{
	return m_AvailableForSale.has_value();
}
int32_t ShopifyProductVariants::GetQuantityAvailable() const
{
	return m_QuantityAvailable.value();
}

bool ShopifyProductVariants::HasQuantityAvailable() const
{
	return m_QuantityAvailable.has_value();
}
std::shared_ptr<ShopifyProductMedia> ShopifyProductVariants::GetImage() const
{
	return m_Image.value();
}

bool ShopifyProductVariants::HasImage() const
{
	return m_Image.has_value();
}
void ShopifyProductVariants::SetImage(const std::shared_ptr<ShopifyProductMedia>& Value)
{
	m_Image = Value;
}
const std::vector<std::shared_ptr<ShopifyVariantOption>>& ShopifyProductVariants::GetSelectedOptions() const
{
	return m_SelectedOptions.value();
}

bool ShopifyProductVariants::HasSelectedOptions() const
{
	return m_SelectedOptions.has_value();
}
std::shared_ptr<ShopifyMoney> ShopifyProductVariants::GetUnitPrice() const
{
	return m_UnitPrice.value();
}

bool ShopifyProductVariants::HasUnitPrice() const
{
	return m_UnitPrice.has_value();
}
void ShopifyProductVariants::SetUnitPrice(const std::shared_ptr<ShopifyMoney>& Value)
{
	m_UnitPrice = Value;
}

ShopifyStorefrontDto::ShopifyStorefrontDto()
{
}
ShopifyStorefrontDto::~ShopifyStorefrontDto()
{
}

utility::string_t ShopifyStorefrontDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_StoreName.has_value())
	{
		rapidjson::Value StoreNameValue(TypeToJsonValue(m_StoreName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("storeName", StoreNameValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceOwnerId.has_value())
	{
		rapidjson::Value SpaceOwnerIdValue(TypeToJsonValue(m_SpaceOwnerId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceOwnerId", SpaceOwnerIdValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_IsEcommerceActive.has_value())
	{
		rapidjson::Value IsEcommerceActiveValue(TypeToJsonValue(m_IsEcommerceActive, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isEcommerceActive", IsEcommerceActiveValue, JsonDoc.GetAllocator());
	}

	if (m_PrivateAccessToken.has_value())
	{
		rapidjson::Value PrivateAccessTokenValue(TypeToJsonValue(m_PrivateAccessToken, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("privateAccessToken", PrivateAccessTokenValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyStorefrontDto::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("storeName"))
	{
		const rapidjson::Value& StoreNameValue = JsonDoc["storeName"];

		if (StoreNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StoreNameValue, m_StoreName);
		}
	}

	if (JsonDoc.HasMember("spaceOwnerId"))
	{
		const rapidjson::Value& SpaceOwnerIdValue = JsonDoc["spaceOwnerId"];

		if (SpaceOwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceOwnerIdValue, m_SpaceOwnerId);
		}
	}

	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("isEcommerceActive"))
	{
		const rapidjson::Value& IsEcommerceActiveValue = JsonDoc["isEcommerceActive"];

		if (IsEcommerceActiveValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsEcommerceActiveValue, m_IsEcommerceActive);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isEcommerceActive is null!");
		}
	}

	if (JsonDoc.HasMember("privateAccessToken"))
	{
		const rapidjson::Value& PrivateAccessTokenValue = JsonDoc["privateAccessToken"];

		if (PrivateAccessTokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrivateAccessTokenValue, m_PrivateAccessToken);
		}
	}
}


utility::string_t ShopifyStorefrontDto::GetId() const
{
	return m_Id.value();
}

bool ShopifyStorefrontDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t ShopifyStorefrontDto::GetStoreName() const
{
	return m_StoreName.value();
}

bool ShopifyStorefrontDto::HasStoreName() const
{
	return m_StoreName.has_value();
}
void ShopifyStorefrontDto::SetStoreName(const utility::string_t& Value)
{
	m_StoreName = Value;
}
utility::string_t ShopifyStorefrontDto::GetSpaceOwnerId() const
{
	return m_SpaceOwnerId.value();
}

bool ShopifyStorefrontDto::HasSpaceOwnerId() const
{
	return m_SpaceOwnerId.has_value();
}
utility::string_t ShopifyStorefrontDto::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool ShopifyStorefrontDto::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
bool ShopifyStorefrontDto::GetIsEcommerceActive() const
{
	return m_IsEcommerceActive.value();
}

bool ShopifyStorefrontDto::HasIsEcommerceActive() const
{
	return m_IsEcommerceActive.has_value();
}
void ShopifyStorefrontDto::SetIsEcommerceActive(const bool& Value)
{
	m_IsEcommerceActive = Value;
}
utility::string_t ShopifyStorefrontDto::GetPrivateAccessToken() const
{
	return m_PrivateAccessToken.value();
}

bool ShopifyStorefrontDto::HasPrivateAccessToken() const
{
	return m_PrivateAccessToken.has_value();
}
void ShopifyStorefrontDto::SetPrivateAccessToken(const utility::string_t& Value)
{
	m_PrivateAccessToken = Value;
}

ShopifyStorefrontDtoDataPage::ShopifyStorefrontDtoDataPage()
{
}
ShopifyStorefrontDtoDataPage::~ShopifyStorefrontDtoDataPage()
{
}

utility::string_t ShopifyStorefrontDtoDataPage::ToJson() const
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

void ShopifyStorefrontDtoDataPage::FromJson(const utility::string_t& Val)
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


const std::vector<std::shared_ptr<ShopifyStorefrontDto>>& ShopifyStorefrontDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool ShopifyStorefrontDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void ShopifyStorefrontDtoDataPage::SetItems(const std::vector<std::shared_ptr<ShopifyStorefrontDto>>& Value)
{
	m_Items = Value;
}
int32_t ShopifyStorefrontDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool ShopifyStorefrontDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void ShopifyStorefrontDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t ShopifyStorefrontDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool ShopifyStorefrontDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void ShopifyStorefrontDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t ShopifyStorefrontDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool ShopifyStorefrontDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void ShopifyStorefrontDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t ShopifyStorefrontDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool ShopifyStorefrontDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void ShopifyStorefrontDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

ShopifyStorefrontValidationRequest::ShopifyStorefrontValidationRequest()
{
}
ShopifyStorefrontValidationRequest::~ShopifyStorefrontValidationRequest()
{
}

utility::string_t ShopifyStorefrontValidationRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_StoreName.has_value())
	{
		rapidjson::Value StoreNameValue(TypeToJsonValue(m_StoreName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("storeName", StoreNameValue, JsonDoc.GetAllocator());
	}

	if (m_PrivateAccessToken.has_value())
	{
		rapidjson::Value PrivateAccessTokenValue(TypeToJsonValue(m_PrivateAccessToken, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("privateAccessToken", PrivateAccessTokenValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyStorefrontValidationRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("storeName"))
	{
		const rapidjson::Value& StoreNameValue = JsonDoc["storeName"];

		if (StoreNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StoreNameValue, m_StoreName);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member storeName is null!");
		}
	}

	if (JsonDoc.HasMember("privateAccessToken"))
	{
		const rapidjson::Value& PrivateAccessTokenValue = JsonDoc["privateAccessToken"];

		if (PrivateAccessTokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrivateAccessTokenValue, m_PrivateAccessToken);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member privateAccessToken is null!");
		}
	}
}


utility::string_t ShopifyStorefrontValidationRequest::GetStoreName() const
{
	return m_StoreName.value();
}

bool ShopifyStorefrontValidationRequest::HasStoreName() const
{
	return m_StoreName.has_value();
}
void ShopifyStorefrontValidationRequest::SetStoreName(const utility::string_t& Value)
{
	m_StoreName = Value;
}
utility::string_t ShopifyStorefrontValidationRequest::GetPrivateAccessToken() const
{
	return m_PrivateAccessToken.value();
}

bool ShopifyStorefrontValidationRequest::HasPrivateAccessToken() const
{
	return m_PrivateAccessToken.has_value();
}
void ShopifyStorefrontValidationRequest::SetPrivateAccessToken(const utility::string_t& Value)
{
	m_PrivateAccessToken = Value;
}

ShopifyVariantOption::ShopifyVariantOption()
{
}
ShopifyVariantOption::~ShopifyVariantOption()
{
}

utility::string_t ShopifyVariantOption::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_OptionName.has_value())
	{
		rapidjson::Value OptionNameValue(TypeToJsonValue(m_OptionName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("optionName", OptionNameValue, JsonDoc.GetAllocator());
	}

	if (m_OptionValue.has_value())
	{
		rapidjson::Value OptionValueValue(TypeToJsonValue(m_OptionValue, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("optionValue", OptionValueValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyVariantOption::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("optionName"))
	{
		const rapidjson::Value& OptionNameValue = JsonDoc["optionName"];

		if (OptionNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OptionNameValue, m_OptionName);
		}
	}

	if (JsonDoc.HasMember("optionValue"))
	{
		const rapidjson::Value& OptionValueValue = JsonDoc["optionValue"];

		if (OptionValueValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OptionValueValue, m_OptionValue);
		}
	}
}


utility::string_t ShopifyVariantOption::GetOptionName() const
{
	return m_OptionName.value();
}

bool ShopifyVariantOption::HasOptionName() const
{
	return m_OptionName.has_value();
}
utility::string_t ShopifyVariantOption::GetOptionValue() const
{
	return m_OptionValue.value();
}

bool ShopifyVariantOption::HasOptionValue() const
{
	return m_OptionValue.has_value();
}

SliceCompatibility::SliceCompatibility()
{
}
SliceCompatibility::~SliceCompatibility()
{
}

utility::string_t SliceCompatibility::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_MinimumVersion.has_value())
	{
		rapidjson::Value MinimumVersionValue(TypeToJsonValue(m_MinimumVersion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("minimumVersion", MinimumVersionValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SliceCompatibility::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("minimumVersion"))
	{
		const rapidjson::Value& MinimumVersionValue = JsonDoc["minimumVersion"];

		if (MinimumVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MinimumVersionValue, m_MinimumVersion);
		}
	}
}


utility::string_t SliceCompatibility::GetMinimumVersion() const
{
	return m_MinimumVersion.value();
}

bool SliceCompatibility::HasMinimumVersion() const
{
	return m_MinimumVersion.has_value();
}
void SliceCompatibility::SetMinimumVersion(const utility::string_t& Value)
{
	m_MinimumVersion = Value;
}

SpaceEventDto::SpaceEventDto()
{
}
SpaceEventDto::~SpaceEventDto()
{
}

utility::string_t SpaceEventDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceOwnerId.has_value())
	{
		rapidjson::Value SpaceOwnerIdValue(TypeToJsonValue(m_SpaceOwnerId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceOwnerId", SpaceOwnerIdValue, JsonDoc.GetAllocator());
	}

	if (m_VendorEventId.has_value())
	{
		rapidjson::Value VendorEventIdValue(TypeToJsonValue(m_VendorEventId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("vendorEventId", VendorEventIdValue, JsonDoc.GetAllocator());
	}

	if (m_VendorName.has_value())
	{
		rapidjson::Value VendorNameValue(TypeToJsonValue(m_VendorName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("vendorName", VendorNameValue, JsonDoc.GetAllocator());
	}

	if (m_VendorEventUri.has_value())
	{
		rapidjson::Value VendorEventUriValue(TypeToJsonValue(m_VendorEventUri, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("vendorEventUri", VendorEventUriValue, JsonDoc.GetAllocator());
	}

	if (m_IsTicketingActive.has_value())
	{
		rapidjson::Value IsTicketingActiveValue(TypeToJsonValue(m_IsTicketingActive, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isTicketingActive", IsTicketingActiveValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SpaceEventDto::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("spaceOwnerId"))
	{
		const rapidjson::Value& SpaceOwnerIdValue = JsonDoc["spaceOwnerId"];

		if (SpaceOwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceOwnerIdValue, m_SpaceOwnerId);
		}
	}

	if (JsonDoc.HasMember("vendorEventId"))
	{
		const rapidjson::Value& VendorEventIdValue = JsonDoc["vendorEventId"];

		if (VendorEventIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VendorEventIdValue, m_VendorEventId);
		}
	}

	if (JsonDoc.HasMember("vendorName"))
	{
		const rapidjson::Value& VendorNameValue = JsonDoc["vendorName"];

		if (VendorNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VendorNameValue, m_VendorName);
		}
	}

	if (JsonDoc.HasMember("vendorEventUri"))
	{
		const rapidjson::Value& VendorEventUriValue = JsonDoc["vendorEventUri"];

		if (VendorEventUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VendorEventUriValue, m_VendorEventUri);
		}
	}

	if (JsonDoc.HasMember("isTicketingActive"))
	{
		const rapidjson::Value& IsTicketingActiveValue = JsonDoc["isTicketingActive"];

		if (IsTicketingActiveValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsTicketingActiveValue, m_IsTicketingActive);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isTicketingActive is null!");
		}
	}
}


utility::string_t SpaceEventDto::GetId() const
{
	return m_Id.value();
}

bool SpaceEventDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t SpaceEventDto::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool SpaceEventDto::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
utility::string_t SpaceEventDto::GetSpaceOwnerId() const
{
	return m_SpaceOwnerId.value();
}

bool SpaceEventDto::HasSpaceOwnerId() const
{
	return m_SpaceOwnerId.has_value();
}
utility::string_t SpaceEventDto::GetVendorEventId() const
{
	return m_VendorEventId.value();
}

bool SpaceEventDto::HasVendorEventId() const
{
	return m_VendorEventId.has_value();
}
void SpaceEventDto::SetVendorEventId(const utility::string_t& Value)
{
	m_VendorEventId = Value;
}
utility::string_t SpaceEventDto::GetVendorName() const
{
	return m_VendorName.value();
}

bool SpaceEventDto::HasVendorName() const
{
	return m_VendorName.has_value();
}
void SpaceEventDto::SetVendorName(const utility::string_t& Value)
{
	m_VendorName = Value;
}
utility::string_t SpaceEventDto::GetVendorEventUri() const
{
	return m_VendorEventUri.value();
}

bool SpaceEventDto::HasVendorEventUri() const
{
	return m_VendorEventUri.has_value();
}
void SpaceEventDto::SetVendorEventUri(const utility::string_t& Value)
{
	m_VendorEventUri = Value;
}
bool SpaceEventDto::GetIsTicketingActive() const
{
	return m_IsTicketingActive.value();
}

bool SpaceEventDto::HasIsTicketingActive() const
{
	return m_IsTicketingActive.has_value();
}
void SpaceEventDto::SetIsTicketingActive(const bool& Value)
{
	m_IsTicketingActive = Value;
}

SpaceEventDtoDataPage::SpaceEventDtoDataPage()
{
}
SpaceEventDtoDataPage::~SpaceEventDtoDataPage()
{
}

utility::string_t SpaceEventDtoDataPage::ToJson() const
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

void SpaceEventDtoDataPage::FromJson(const utility::string_t& Val)
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


const std::vector<std::shared_ptr<SpaceEventDto>>& SpaceEventDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool SpaceEventDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void SpaceEventDtoDataPage::SetItems(const std::vector<std::shared_ptr<SpaceEventDto>>& Value)
{
	m_Items = Value;
}
int32_t SpaceEventDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool SpaceEventDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void SpaceEventDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t SpaceEventDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool SpaceEventDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void SpaceEventDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t SpaceEventDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool SpaceEventDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void SpaceEventDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t SpaceEventDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool SpaceEventDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void SpaceEventDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

SpaceExportDto::SpaceExportDto()
{
}
SpaceExportDto::~SpaceExportDto()
{
}

utility::string_t SpaceExportDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ExportId.has_value())
	{
		rapidjson::Value ExportIdValue(TypeToJsonValue(m_ExportId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("exportId", ExportIdValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_AsyncCall.has_value())
	{
		rapidjson::Value AsyncCallValue(TypeToJsonValue(m_AsyncCall, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("asyncCall", AsyncCallValue, JsonDoc.GetAllocator());
	}

	if (m_RequestUserId.has_value())
	{
		rapidjson::Value RequestUserIdValue(TypeToJsonValue(m_RequestUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requestUserId", RequestUserIdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SpaceExportDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("exportId"))
	{
		const rapidjson::Value& ExportIdValue = JsonDoc["exportId"];

		if (ExportIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExportIdValue, m_ExportId);
		}
	}

	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("asyncCall"))
	{
		const rapidjson::Value& AsyncCallValue = JsonDoc["asyncCall"];

		if (AsyncCallValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AsyncCallValue, m_AsyncCall);
		}
	}

	if (JsonDoc.HasMember("requestUserId"))
	{
		const rapidjson::Value& RequestUserIdValue = JsonDoc["requestUserId"];

		if (RequestUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequestUserIdValue, m_RequestUserId);
		}
	}
}


utility::string_t SpaceExportDto::GetExportId() const
{
	return m_ExportId.value();
}

bool SpaceExportDto::HasExportId() const
{
	return m_ExportId.has_value();
}
utility::string_t SpaceExportDto::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool SpaceExportDto::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
utility::string_t SpaceExportDto::GetTenantName() const
{
	return m_TenantName.value();
}

bool SpaceExportDto::HasTenantName() const
{
	return m_TenantName.has_value();
}
bool SpaceExportDto::GetAsyncCall() const
{
	return m_AsyncCall.value();
}

bool SpaceExportDto::HasAsyncCall() const
{
	return m_AsyncCall.has_value();
}
void SpaceExportDto::SetAsyncCall(const bool& Value)
{
	m_AsyncCall = Value;
}
utility::string_t SpaceExportDto::GetRequestUserId() const
{
	return m_RequestUserId.value();
}

bool SpaceExportDto::HasRequestUserId() const
{
	return m_RequestUserId.has_value();
}
void SpaceExportDto::SetRequestUserId(const utility::string_t& Value)
{
	m_RequestUserId = Value;
}

SpaceImportDto::SpaceImportDto()
{
}
SpaceImportDto::~SpaceImportDto()
{
}

utility::string_t SpaceImportDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ExportId.has_value())
	{
		rapidjson::Value ExportIdValue(TypeToJsonValue(m_ExportId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("exportId", ExportIdValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_AsyncCall.has_value())
	{
		rapidjson::Value AsyncCallValue(TypeToJsonValue(m_AsyncCall, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("asyncCall", AsyncCallValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SpaceImportDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("exportId"))
	{
		const rapidjson::Value& ExportIdValue = JsonDoc["exportId"];

		if (ExportIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExportIdValue, m_ExportId);
		}
	}

	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("asyncCall"))
	{
		const rapidjson::Value& AsyncCallValue = JsonDoc["asyncCall"];

		if (AsyncCallValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AsyncCallValue, m_AsyncCall);
		}
	}
}


utility::string_t SpaceImportDto::GetExportId() const
{
	return m_ExportId.value();
}

bool SpaceImportDto::HasExportId() const
{
	return m_ExportId.has_value();
}
utility::string_t SpaceImportDto::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool SpaceImportDto::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
utility::string_t SpaceImportDto::GetTenantName() const
{
	return m_TenantName.value();
}

bool SpaceImportDto::HasTenantName() const
{
	return m_TenantName.has_value();
}
bool SpaceImportDto::GetAsyncCall() const
{
	return m_AsyncCall.value();
}

bool SpaceImportDto::HasAsyncCall() const
{
	return m_AsyncCall.has_value();
}
void SpaceImportDto::SetAsyncCall(const bool& Value)
{
	m_AsyncCall = Value;
}

SpaceTicketDto::SpaceTicketDto()
{
}
SpaceTicketDto::~SpaceTicketDto()
{
}

utility::string_t SpaceTicketDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_VendorEventId.has_value())
	{
		rapidjson::Value VendorEventIdValue(TypeToJsonValue(m_VendorEventId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("vendorEventId", VendorEventIdValue, JsonDoc.GetAllocator());
	}

	if (m_VendorName.has_value())
	{
		rapidjson::Value VendorNameValue(TypeToJsonValue(m_VendorName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("vendorName", VendorNameValue, JsonDoc.GetAllocator());
	}

	if (m_VendorTicketId.has_value())
	{
		rapidjson::Value VendorTicketIdValue(TypeToJsonValue(m_VendorTicketId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("vendorTicketId", VendorTicketIdValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_TicketStatus.has_value())
	{
		rapidjson::Value TicketStatusValue(TypeToJsonValue(m_TicketStatus, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ticketStatus", TicketStatusValue, JsonDoc.GetAllocator());
	}

	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_EmailLower.has_value())
	{
		rapidjson::Value EmailLowerValue(TypeToJsonValue(m_EmailLower, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("emailLower", EmailLowerValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SpaceTicketDto::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("vendorEventId"))
	{
		const rapidjson::Value& VendorEventIdValue = JsonDoc["vendorEventId"];

		if (VendorEventIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VendorEventIdValue, m_VendorEventId);
		}
	}

	if (JsonDoc.HasMember("vendorName"))
	{
		const rapidjson::Value& VendorNameValue = JsonDoc["vendorName"];

		if (VendorNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VendorNameValue, m_VendorName);
		}
	}

	if (JsonDoc.HasMember("vendorTicketId"))
	{
		const rapidjson::Value& VendorTicketIdValue = JsonDoc["vendorTicketId"];

		if (VendorTicketIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VendorTicketIdValue, m_VendorTicketId);
		}
	}

	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("ticketStatus"))
	{
		const rapidjson::Value& TicketStatusValue = JsonDoc["ticketStatus"];

		if (TicketStatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TicketStatusValue, m_TicketStatus);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member ticketStatus is null!");
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

	if (JsonDoc.HasMember("emailLower"))
	{
		const rapidjson::Value& EmailLowerValue = JsonDoc["emailLower"];

		if (EmailLowerValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EmailLowerValue, m_EmailLower);
		}
	}
}


utility::string_t SpaceTicketDto::GetId() const
{
	return m_Id.value();
}

bool SpaceTicketDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t SpaceTicketDto::GetVendorEventId() const
{
	return m_VendorEventId.value();
}

bool SpaceTicketDto::HasVendorEventId() const
{
	return m_VendorEventId.has_value();
}
utility::string_t SpaceTicketDto::GetVendorName() const
{
	return m_VendorName.value();
}

bool SpaceTicketDto::HasVendorName() const
{
	return m_VendorName.has_value();
}
utility::string_t SpaceTicketDto::GetVendorTicketId() const
{
	return m_VendorTicketId.value();
}

bool SpaceTicketDto::HasVendorTicketId() const
{
	return m_VendorTicketId.has_value();
}
utility::string_t SpaceTicketDto::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool SpaceTicketDto::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
std::shared_ptr<TicketStatus> SpaceTicketDto::GetTicketStatus() const
{
	return m_TicketStatus.value();
}

bool SpaceTicketDto::HasTicketStatus() const
{
	return m_TicketStatus.has_value();
}
void SpaceTicketDto::SetTicketStatus(const std::shared_ptr<TicketStatus>& Value)
{
	m_TicketStatus = Value;
}
utility::string_t SpaceTicketDto::GetUserId() const
{
	return m_UserId.value();
}

bool SpaceTicketDto::HasUserId() const
{
	return m_UserId.has_value();
}
utility::string_t SpaceTicketDto::GetEmailLower() const
{
	return m_EmailLower.value();
}

bool SpaceTicketDto::HasEmailLower() const
{
	return m_EmailLower.has_value();
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

Style::Style()
{
}
Style::~Style()
{
}

utility::string_t Style::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_IconStyle.has_value())
	{
		rapidjson::Value IconStyleValue(TypeToJsonValue(m_IconStyle, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("iconStyle", IconStyleValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void Style::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("iconStyle"))
	{
		const rapidjson::Value& IconStyleValue = JsonDoc["iconStyle"];

		if (IconStyleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IconStyleValue, m_IconStyle);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member iconStyle is null!");
		}
	}
}


utility::string_t Style::GetId() const
{
	return m_Id.value();
}

bool Style::HasId() const
{
	return m_Id.has_value();
}
void Style::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
std::shared_ptr<IconStyle> Style::GetIconStyle() const
{
	return m_IconStyle.value();
}

bool Style::HasIconStyle() const
{
	return m_IconStyle.has_value();
}
void Style::SetIconStyle(const std::shared_ptr<IconStyle>& Value)
{
	m_IconStyle = Value;
}

TicketStatus::TicketStatus()
{
}
TicketStatus::~TicketStatus()
{
}

utility::string_t TicketStatus::ToJson() const
{
	switch (Value)
	{
		case eTicketStatus::PURCHASED:
			return "Purchased";
		case eTicketStatus::REDEEMED:
			return "Redeemed";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void TicketStatus::FromJson(const utility::string_t& Val)
{
	if (Val == "Purchased")
	{
		Value = eTicketStatus::PURCHASED;
	}
	else if (Val == "Redeemed")
	{
		Value = eTicketStatus::REDEEMED;
	}
}

TicketStatus::eTicketStatus TicketStatus::GetValue() const
{
	return Value;
}

void TicketStatus::SetValue(TicketStatus::eTicketStatus const InValue)
{
	Value = InValue;
}

VendorProviderInfo::VendorProviderInfo()
{
}
VendorProviderInfo::~VendorProviderInfo()
{
}

utility::string_t VendorProviderInfo::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_VendorName.has_value())
	{
		rapidjson::Value VendorNameValue(TypeToJsonValue(m_VendorName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("vendorName", VendorNameValue, JsonDoc.GetAllocator());
	}

	if (m_ClientId.has_value())
	{
		rapidjson::Value ClientIdValue(TypeToJsonValue(m_ClientId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("clientId", ClientIdValue, JsonDoc.GetAllocator());
	}

	if (m_AuthorizeEndpoint.has_value())
	{
		rapidjson::Value AuthorizeEndpointValue(TypeToJsonValue(m_AuthorizeEndpoint, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("authorizeEndpoint", AuthorizeEndpointValue, JsonDoc.GetAllocator());
	}

	if (m_OAuthRedirectUrl.has_value())
	{
		rapidjson::Value OAuthRedirectUrlValue(TypeToJsonValue(m_OAuthRedirectUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("oAuthRedirectUrl", OAuthRedirectUrlValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void VendorProviderInfo::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("vendorName"))
	{
		const rapidjson::Value& VendorNameValue = JsonDoc["vendorName"];

		if (VendorNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VendorNameValue, m_VendorName);
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

	if (JsonDoc.HasMember("authorizeEndpoint"))
	{
		const rapidjson::Value& AuthorizeEndpointValue = JsonDoc["authorizeEndpoint"];

		if (AuthorizeEndpointValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AuthorizeEndpointValue, m_AuthorizeEndpoint);
		}
	}

	if (JsonDoc.HasMember("oAuthRedirectUrl"))
	{
		const rapidjson::Value& OAuthRedirectUrlValue = JsonDoc["oAuthRedirectUrl"];

		if (OAuthRedirectUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OAuthRedirectUrlValue, m_OAuthRedirectUrl);
		}
	}
}


utility::string_t VendorProviderInfo::GetVendorName() const
{
	return m_VendorName.value();
}

bool VendorProviderInfo::HasVendorName() const
{
	return m_VendorName.has_value();
}
void VendorProviderInfo::SetVendorName(const utility::string_t& Value)
{
	m_VendorName = Value;
}
utility::string_t VendorProviderInfo::GetClientId() const
{
	return m_ClientId.value();
}

bool VendorProviderInfo::HasClientId() const
{
	return m_ClientId.has_value();
}
void VendorProviderInfo::SetClientId(const utility::string_t& Value)
{
	m_ClientId = Value;
}
utility::string_t VendorProviderInfo::GetAuthorizeEndpoint() const
{
	return m_AuthorizeEndpoint.value();
}

bool VendorProviderInfo::HasAuthorizeEndpoint() const
{
	return m_AuthorizeEndpoint.has_value();
}
utility::string_t VendorProviderInfo::GetOAuthRedirectUrl() const
{
	return m_OAuthRedirectUrl.value();
}

bool VendorProviderInfo::HasOAuthRedirectUrl() const
{
	return m_OAuthRedirectUrl.has_value();
}

VersionMatrix::VersionMatrix()
{
}
VersionMatrix::~VersionMatrix()
{
}

utility::string_t VersionMatrix::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ServiceVersion.has_value())
	{
		rapidjson::Value ServiceVersionValue(TypeToJsonValue(m_ServiceVersion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("serviceVersion", ServiceVersionValue, JsonDoc.GetAllocator());
	}

	if (m_Matrix.has_value())
	{
		rapidjson::Value MatrixValue(TypeToJsonValue(m_Matrix, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("matrix", MatrixValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void VersionMatrix::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("serviceVersion"))
	{
		const rapidjson::Value& ServiceVersionValue = JsonDoc["serviceVersion"];

		if (ServiceVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ServiceVersionValue, m_ServiceVersion);
		}
	}

	if (JsonDoc.HasMember("matrix"))
	{
		const rapidjson::Value& MatrixValue = JsonDoc["matrix"];

		if (MatrixValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MatrixValue, m_Matrix);
		}
	}
}


utility::string_t VersionMatrix::GetServiceVersion() const
{
	return m_ServiceVersion.value();
}

bool VersionMatrix::HasServiceVersion() const
{
	return m_ServiceVersion.has_value();
}
void VersionMatrix::SetServiceVersion(const utility::string_t& Value)
{
	m_ServiceVersion = Value;
}
const std::map<utility::string_t, std::shared_ptr<SliceCompatibility>>& VersionMatrix::GetMatrix() const
{
	return m_Matrix.value();
}

bool VersionMatrix::HasMatrix() const
{
	return m_Matrix.has_value();
}
void VersionMatrix::SetMatrix(const std::map<utility::string_t, std::shared_ptr<SliceCompatibility>>& Value)
{
	m_Matrix = Value;
}


} // namespace csp::services::generated::aggregationservice