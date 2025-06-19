

#include "Dto.h"

#include "Common/Web/Json.h"
#include "Common/Web/Json_HttpPayload.h"
#include "Debug/Logging.h"

#include <optional>


using namespace csp::web;


namespace csp::services::generated::multiplayerservice
{


AreaOfInterestDto::AreaOfInterestDto()
{
}
AreaOfInterestDto::~AreaOfInterestDto()
{
}

utility::string_t AreaOfInterestDto::ToJson() const
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

	if (m_UpdatedBy.has_value())
	{
		rapidjson::Value UpdatedByValue(TypeToJsonValue(m_UpdatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedBy", UpdatedByValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedAt.has_value())
	{
		rapidjson::Value UpdatedAtValue(TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedAt", UpdatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_IsListening.has_value())
	{
		rapidjson::Value IsListeningValue(TypeToJsonValue(m_IsListening, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isListening", IsListeningValue, JsonDoc.GetAllocator());
	}

	if (m_IsSpectator.has_value())
	{
		rapidjson::Value IsSpectatorValue(TypeToJsonValue(m_IsSpectator, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isSpectator", IsSpectatorValue, JsonDoc.GetAllocator());
	}

	if (m_Position.has_value())
	{
		rapidjson::Value PositionValue(TypeToJsonValue(m_Position, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("position", PositionValue, JsonDoc.GetAllocator());
	}

	if (m_LastSolveTime.has_value())
	{
		rapidjson::Value LastSolveTimeValue(TypeToJsonValue(m_LastSolveTime, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastSolveTime", LastSolveTimeValue, JsonDoc.GetAllocator());
	}

	if (m_GlobalScopes.has_value())
	{
		rapidjson::Value GlobalScopesValue(TypeToJsonValue(m_GlobalScopes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("globalScopes", GlobalScopesValue, JsonDoc.GetAllocator());
	}

	if (m_ObjectScopes.has_value())
	{
		rapidjson::Value ObjectScopesValue(TypeToJsonValue(m_ObjectScopes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("objectScopes", ObjectScopesValue, JsonDoc.GetAllocator());
	}

	if (m_ObjectIds.has_value())
	{
		rapidjson::Value ObjectIdsValue(TypeToJsonValue(m_ObjectIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("objectIds", ObjectIdsValue, JsonDoc.GetAllocator());
	}

	if (m_Entourage.has_value())
	{
		rapidjson::Value EntourageValue(TypeToJsonValue(m_Entourage, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("entourage", EntourageValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AreaOfInterestDto::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("updatedBy"))
	{
		const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

		if (UpdatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedByValue, m_UpdatedBy);
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

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member updatedAt is null!");
		}
	}

	if (JsonDoc.HasMember("isListening"))
	{
		const rapidjson::Value& IsListeningValue = JsonDoc["isListening"];

		if (IsListeningValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsListeningValue, m_IsListening);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isListening is null!");
		}
	}

	if (JsonDoc.HasMember("isSpectator"))
	{
		const rapidjson::Value& IsSpectatorValue = JsonDoc["isSpectator"];

		if (IsSpectatorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsSpectatorValue, m_IsSpectator);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isSpectator is null!");
		}
	}

	if (JsonDoc.HasMember("position"))
	{
		const rapidjson::Value& PositionValue = JsonDoc["position"];

		if (PositionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PositionValue, m_Position);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member position is null!");
		}
	}

	if (JsonDoc.HasMember("lastSolveTime"))
	{
		const rapidjson::Value& LastSolveTimeValue = JsonDoc["lastSolveTime"];

		if (LastSolveTimeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastSolveTimeValue, m_LastSolveTime);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member lastSolveTime is null!");
		}
	}

	if (JsonDoc.HasMember("globalScopes"))
	{
		const rapidjson::Value& GlobalScopesValue = JsonDoc["globalScopes"];

		if (GlobalScopesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GlobalScopesValue, m_GlobalScopes);
		}
	}

	if (JsonDoc.HasMember("objectScopes"))
	{
		const rapidjson::Value& ObjectScopesValue = JsonDoc["objectScopes"];

		if (ObjectScopesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ObjectScopesValue, m_ObjectScopes);
		}
	}

	if (JsonDoc.HasMember("objectIds"))
	{
		const rapidjson::Value& ObjectIdsValue = JsonDoc["objectIds"];

		if (ObjectIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ObjectIdsValue, m_ObjectIds);
		}
	}

	if (JsonDoc.HasMember("entourage"))
	{
		const rapidjson::Value& EntourageValue = JsonDoc["entourage"];

		if (EntourageValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EntourageValue, m_Entourage);
		}
	}
}


utility::string_t AreaOfInterestDto::GetId() const
{
	return m_Id.value();
}

bool AreaOfInterestDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t AreaOfInterestDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool AreaOfInterestDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t AreaOfInterestDto::GetUpdatedBy() const
{
	return m_UpdatedBy.value();
}

bool AreaOfInterestDto::HasUpdatedBy() const
{
	return m_UpdatedBy.has_value();
}
utility::string_t AreaOfInterestDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool AreaOfInterestDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t AreaOfInterestDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool AreaOfInterestDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
bool AreaOfInterestDto::GetIsListening() const
{
	return m_IsListening.value();
}

bool AreaOfInterestDto::HasIsListening() const
{
	return m_IsListening.has_value();
}
bool AreaOfInterestDto::GetIsSpectator() const
{
	return m_IsSpectator.value();
}

bool AreaOfInterestDto::HasIsSpectator() const
{
	return m_IsSpectator.has_value();
}
std::shared_ptr<GeoCoord> AreaOfInterestDto::GetPosition() const
{
	return m_Position.value();
}

bool AreaOfInterestDto::HasPosition() const
{
	return m_Position.has_value();
}
void AreaOfInterestDto::SetPosition(const std::shared_ptr<GeoCoord>& Value)
{
	m_Position = Value;
}
utility::string_t AreaOfInterestDto::GetLastSolveTime() const
{
	return m_LastSolveTime.value();
}

bool AreaOfInterestDto::HasLastSolveTime() const
{
	return m_LastSolveTime.has_value();
}
const std::vector<utility::string_t>& AreaOfInterestDto::GetGlobalScopes() const
{
	return m_GlobalScopes.value();
}

bool AreaOfInterestDto::HasGlobalScopes() const
{
	return m_GlobalScopes.has_value();
}
const std::vector<utility::string_t>& AreaOfInterestDto::GetObjectScopes() const
{
	return m_ObjectScopes.value();
}

bool AreaOfInterestDto::HasObjectScopes() const
{
	return m_ObjectScopes.has_value();
}
const std::vector<utility::string_t>& AreaOfInterestDto::GetObjectIds() const
{
	return m_ObjectIds.value();
}

bool AreaOfInterestDto::HasObjectIds() const
{
	return m_ObjectIds.has_value();
}
const std::vector<utility::string_t>& AreaOfInterestDto::GetEntourage() const
{
	return m_Entourage.value();
}

bool AreaOfInterestDto::HasEntourage() const
{
	return m_Entourage.has_value();
}

BooleanUInt32NullableTuple::BooleanUInt32NullableTuple()
{
}
BooleanUInt32NullableTuple::~BooleanUInt32NullableTuple()
{
}

utility::string_t BooleanUInt32NullableTuple::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Item1.has_value())
	{
		rapidjson::Value Item1Value(TypeToJsonValue(m_Item1, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("item1", Item1Value, JsonDoc.GetAllocator());
	}

	if (m_Item2.has_value())
	{
		rapidjson::Value Item2Value(TypeToJsonValue(m_Item2, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("item2", Item2Value, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void BooleanUInt32NullableTuple::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("item1"))
	{
		const rapidjson::Value& Item1Value = JsonDoc["item1"];

		if (Item1Value != rapidjson::Type::kNullType)
		{
			JsonValueToType(Item1Value, m_Item1);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member item1 is null!");
		}
	}

	if (JsonDoc.HasMember("item2"))
	{
		const rapidjson::Value& Item2Value = JsonDoc["item2"];

		if (Item2Value != rapidjson::Type::kNullType)
		{
			JsonValueToType(Item2Value, m_Item2);
		}
	}
}


bool BooleanUInt32NullableTuple::GetItem1() const
{
	return m_Item1.value();
}

bool BooleanUInt32NullableTuple::HasItem1() const
{
	return m_Item1.has_value();
}
void BooleanUInt32NullableTuple::SetItem1(const bool& Value)
{
	m_Item1 = Value;
}
int32_t BooleanUInt32NullableTuple::GetItem2() const
{
	return m_Item2.value();
}

bool BooleanUInt32NullableTuple::HasItem2() const
{
	return m_Item2.has_value();
}
void BooleanUInt32NullableTuple::SetItem2(int32_t Value)
{
	m_Item2 = Value;
}

ClientConnectionDto::ClientConnectionDto()
{
}
ClientConnectionDto::~ClientConnectionDto()
{
}

utility::string_t ClientConnectionDto::ToJson() const
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

	if (m_ClientId.has_value())
	{
		rapidjson::Value ClientIdValue(TypeToJsonValue(m_ClientId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("clientId", ClientIdValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeIds.has_value())
	{
		rapidjson::Value ScopeIdsValue(TypeToJsonValue(m_ScopeIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeIds", ScopeIdsValue, JsonDoc.GetAllocator());
	}

	if (m_ConnectionStatus.has_value())
	{
		rapidjson::Value ConnectionStatusValue(TypeToJsonValue(m_ConnectionStatus, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("connectionStatus", ConnectionStatusValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ClientConnectionDto::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("clientId"))
	{
		const rapidjson::Value& ClientIdValue = JsonDoc["clientId"];

		if (ClientIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ClientIdValue, m_ClientId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member clientId is null!");
		}
	}

	if (JsonDoc.HasMember("scopeIds"))
	{
		const rapidjson::Value& ScopeIdsValue = JsonDoc["scopeIds"];

		if (ScopeIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeIdsValue, m_ScopeIds);
		}
	}

	if (JsonDoc.HasMember("connectionStatus"))
	{
		const rapidjson::Value& ConnectionStatusValue = JsonDoc["connectionStatus"];

		if (ConnectionStatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ConnectionStatusValue, m_ConnectionStatus);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member connectionStatus is null!");
		}
	}
}


utility::string_t ClientConnectionDto::GetId() const
{
	return m_Id.value();
}

bool ClientConnectionDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t ClientConnectionDto::GetUserId() const
{
	return m_UserId.value();
}

bool ClientConnectionDto::HasUserId() const
{
	return m_UserId.has_value();
}
int32_t ClientConnectionDto::GetClientId() const
{
	return m_ClientId.value();
}

bool ClientConnectionDto::HasClientId() const
{
	return m_ClientId.has_value();
}
const std::vector<utility::string_t>& ClientConnectionDto::GetScopeIds() const
{
	return m_ScopeIds.value();
}

bool ClientConnectionDto::HasScopeIds() const
{
	return m_ScopeIds.has_value();
}
std::shared_ptr<ClientConnectionStatus> ClientConnectionDto::GetConnectionStatus() const
{
	return m_ConnectionStatus.value();
}

bool ClientConnectionDto::HasConnectionStatus() const
{
	return m_ConnectionStatus.has_value();
}
void ClientConnectionDto::SetConnectionStatus(const std::shared_ptr<ClientConnectionStatus>& Value)
{
	m_ConnectionStatus = Value;
}

ClientConnectionDtoDataPage::ClientConnectionDtoDataPage()
{
}
ClientConnectionDtoDataPage::~ClientConnectionDtoDataPage()
{
}

utility::string_t ClientConnectionDtoDataPage::ToJson() const
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

void ClientConnectionDtoDataPage::FromJson(const utility::string_t& Val)
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


const std::vector<std::shared_ptr<ClientConnectionDto>>& ClientConnectionDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool ClientConnectionDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void ClientConnectionDtoDataPage::SetItems(const std::vector<std::shared_ptr<ClientConnectionDto>>& Value)
{
	m_Items = Value;
}
int32_t ClientConnectionDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool ClientConnectionDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void ClientConnectionDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t ClientConnectionDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool ClientConnectionDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void ClientConnectionDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t ClientConnectionDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool ClientConnectionDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void ClientConnectionDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t ClientConnectionDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool ClientConnectionDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void ClientConnectionDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

ClientConnectionStatus::ClientConnectionStatus()
{
}
ClientConnectionStatus::~ClientConnectionStatus()
{
}

utility::string_t ClientConnectionStatus::ToJson() const
{
	switch (Value)
	{
		case eClientConnectionStatus::DISCONNECTED:
			return "Disconnected";
		case eClientConnectionStatus::CONNECTED:
			return "Connected";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void ClientConnectionStatus::FromJson(const utility::string_t& Val)
{
	if (Val == "Disconnected")
	{
		Value = eClientConnectionStatus::DISCONNECTED;
	}
	else if (Val == "Connected")
	{
		Value = eClientConnectionStatus::CONNECTED;
	}
}

ClientConnectionStatus::eClientConnectionStatus ClientConnectionStatus::GetValue() const
{
	return Value;
}

void ClientConnectionStatus::SetValue(ClientConnectionStatus::eClientConnectionStatus const InValue)
{
	Value = InValue;
}

EventMessageDto::EventMessageDto()
{
}
EventMessageDto::~EventMessageDto()
{
}

utility::string_t EventMessageDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_EventType.has_value())
	{
		rapidjson::Value EventTypeValue(TypeToJsonValue(m_EventType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("eventType", EventTypeValue, JsonDoc.GetAllocator());
	}

	if (m_SenderUserId.has_value())
	{
		rapidjson::Value SenderUserIdValue(TypeToJsonValue(m_SenderUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("senderUserId", SenderUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_RecipientUserId.has_value())
	{
		rapidjson::Value RecipientUserIdValue(TypeToJsonValue(m_RecipientUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("recipientUserId", RecipientUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_Components.has_value())
	{
		rapidjson::Value ComponentsValue(TypeToJsonValue(m_Components, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("components", ComponentsValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeIds.has_value())
	{
		rapidjson::Value ScopeIdsValue(TypeToJsonValue(m_ScopeIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeIds", ScopeIdsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void EventMessageDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("eventType"))
	{
		const rapidjson::Value& EventTypeValue = JsonDoc["eventType"];

		if (EventTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EventTypeValue, m_EventType);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member eventType is null!");
		}
	}

	if (JsonDoc.HasMember("senderUserId"))
	{
		const rapidjson::Value& SenderUserIdValue = JsonDoc["senderUserId"];

		if (SenderUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SenderUserIdValue, m_SenderUserId);
		}
	}

	if (JsonDoc.HasMember("recipientUserId"))
	{
		const rapidjson::Value& RecipientUserIdValue = JsonDoc["recipientUserId"];

		if (RecipientUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RecipientUserIdValue, m_RecipientUserId);
		}
	}

	if (JsonDoc.HasMember("components"))
	{
		const rapidjson::Value& ComponentsValue = JsonDoc["components"];

		if (ComponentsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ComponentsValue, m_Components);
		}
	}

	if (JsonDoc.HasMember("scopeIds"))
	{
		const rapidjson::Value& ScopeIdsValue = JsonDoc["scopeIds"];

		if (ScopeIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeIdsValue, m_ScopeIds);
		}
	}
}


utility::string_t EventMessageDto::GetEventType() const
{
	return m_EventType.value();
}

bool EventMessageDto::HasEventType() const
{
	return m_EventType.has_value();
}
void EventMessageDto::SetEventType(const utility::string_t& Value)
{
	m_EventType = Value;
}
utility::string_t EventMessageDto::GetSenderUserId() const
{
	return m_SenderUserId.value();
}

bool EventMessageDto::HasSenderUserId() const
{
	return m_SenderUserId.has_value();
}
void EventMessageDto::SetSenderUserId(const utility::string_t& Value)
{
	m_SenderUserId = Value;
}
utility::string_t EventMessageDto::GetRecipientUserId() const
{
	return m_RecipientUserId.value();
}

bool EventMessageDto::HasRecipientUserId() const
{
	return m_RecipientUserId.has_value();
}
void EventMessageDto::SetRecipientUserId(const utility::string_t& Value)
{
	m_RecipientUserId = Value;
}
const std::map<utility::string_t, std::shared_ptr<IComponentData>>& EventMessageDto::GetComponents() const
{
	return m_Components.value();
}

bool EventMessageDto::HasComponents() const
{
	return m_Components.has_value();
}
void EventMessageDto::SetComponents(const std::map<utility::string_t, std::shared_ptr<IComponentData>>& Value)
{
	m_Components = Value;
}
const std::vector<utility::string_t>& EventMessageDto::GetScopeIds() const
{
	return m_ScopeIds.value();
}

bool EventMessageDto::HasScopeIds() const
{
	return m_ScopeIds.has_value();
}
void EventMessageDto::SetScopeIds(const std::vector<utility::string_t>& Value)
{
	m_ScopeIds = Value;
}

GeoCoord::GeoCoord()
{
}
GeoCoord::~GeoCoord()
{
}

utility::string_t GeoCoord::ToJson() const
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


	return JsonDocToString(JsonDoc);
}

void GeoCoord::FromJson(const utility::string_t& Val)
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
}


double GeoCoord::GetLongitude() const
{
	return m_Longitude.value();
}

bool GeoCoord::HasLongitude() const
{
	return m_Longitude.has_value();
}
void GeoCoord::SetLongitude(double Value)
{
	m_Longitude = Value;
}
double GeoCoord::GetLatitude() const
{
	return m_Latitude.value();
}

bool GeoCoord::HasLatitude() const
{
	return m_Latitude.has_value();
}
void GeoCoord::SetLatitude(double Value)
{
	m_Latitude = Value;
}

IComponentData::IComponentData()
{
}
IComponentData::~IComponentData()
{
}

utility::string_t IComponentData::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);



	return JsonDocToString(JsonDoc);
}

void IComponentData::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());
}



ImportObjectMessageRequest::ImportObjectMessageRequest()
{
}
ImportObjectMessageRequest::~ImportObjectMessageRequest()
{
}

utility::string_t ImportObjectMessageRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ScopeReferenceId.has_value())
	{
		rapidjson::Value ScopeReferenceIdValue(TypeToJsonValue(m_ScopeReferenceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeReferenceId", ScopeReferenceIdValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeReferenceType.has_value())
	{
		rapidjson::Value ScopeReferenceTypeValue(TypeToJsonValue(m_ScopeReferenceType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeReferenceType", ScopeReferenceTypeValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ImportObjectMessageRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("scopeReferenceId"))
	{
		const rapidjson::Value& ScopeReferenceIdValue = JsonDoc["scopeReferenceId"];

		if (ScopeReferenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeReferenceIdValue, m_ScopeReferenceId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member scopeReferenceId is null!");
		}
	}

	if (JsonDoc.HasMember("scopeReferenceType"))
	{
		const rapidjson::Value& ScopeReferenceTypeValue = JsonDoc["scopeReferenceType"];

		if (ScopeReferenceTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeReferenceTypeValue, m_ScopeReferenceType);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member scopeReferenceType is null!");
		}
	}
}


utility::string_t ImportObjectMessageRequest::GetScopeReferenceId() const
{
	return m_ScopeReferenceId.value();
}

bool ImportObjectMessageRequest::HasScopeReferenceId() const
{
	return m_ScopeReferenceId.has_value();
}
void ImportObjectMessageRequest::SetScopeReferenceId(const utility::string_t& Value)
{
	m_ScopeReferenceId = Value;
}
utility::string_t ImportObjectMessageRequest::GetScopeReferenceType() const
{
	return m_ScopeReferenceType.value();
}

bool ImportObjectMessageRequest::HasScopeReferenceType() const
{
	return m_ScopeReferenceType.has_value();
}
void ImportObjectMessageRequest::SetScopeReferenceType(const utility::string_t& Value)
{
	m_ScopeReferenceType = Value;
}

ObjectMessageDto::ObjectMessageDto()
{
}
ObjectMessageDto::~ObjectMessageDto()
{
}

utility::string_t ObjectMessageDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_PrefabId.has_value())
	{
		rapidjson::Value PrefabIdValue(TypeToJsonValue(m_PrefabId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prefabId", PrefabIdValue, JsonDoc.GetAllocator());
	}

	if (m_IsTransferable.has_value())
	{
		rapidjson::Value IsTransferableValue(TypeToJsonValue(m_IsTransferable, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isTransferable", IsTransferableValue, JsonDoc.GetAllocator());
	}

	if (m_IsPersistent.has_value())
	{
		rapidjson::Value IsPersistentValue(TypeToJsonValue(m_IsPersistent, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isPersistent", IsPersistentValue, JsonDoc.GetAllocator());
	}

	if (m_OwnerUserId.has_value())
	{
		rapidjson::Value OwnerUserIdValue(TypeToJsonValue(m_OwnerUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ownerUserId", OwnerUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeReferenceId.has_value())
	{
		rapidjson::Value ScopeReferenceIdValue(TypeToJsonValue(m_ScopeReferenceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeReferenceId", ScopeReferenceIdValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeReferenceType.has_value())
	{
		rapidjson::Value ScopeReferenceTypeValue(TypeToJsonValue(m_ScopeReferenceType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeReferenceType", ScopeReferenceTypeValue, JsonDoc.GetAllocator());
	}

	if (m_OnBehalfOfUserId.has_value())
	{
		rapidjson::Value OnBehalfOfUserIdValue(TypeToJsonValue(m_OnBehalfOfUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("onBehalfOfUserId", OnBehalfOfUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_ParentId.has_value())
	{
		rapidjson::Value ParentIdValue(TypeToJsonValue(m_ParentId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("parentId", ParentIdValue, JsonDoc.GetAllocator());
	}

	if (m_Components.has_value())
	{
		rapidjson::Value ComponentsValue(TypeToJsonValue(m_Components, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("components", ComponentsValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeIds.has_value())
	{
		rapidjson::Value ScopeIdsValue(TypeToJsonValue(m_ScopeIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeIds", ScopeIdsValue, JsonDoc.GetAllocator());
	}

	if (m_AoiCenter.has_value())
	{
		rapidjson::Value AoiCenterValue(TypeToJsonValue(m_AoiCenter, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("aoiCenter", AoiCenterValue, JsonDoc.GetAllocator());
	}

	if (m_DuplicatedFrom.has_value())
	{
		rapidjson::Value DuplicatedFromValue(TypeToJsonValue(m_DuplicatedFrom, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("duplicatedFrom", DuplicatedFromValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ObjectMessageDto::FromJson(const utility::string_t& Val)
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
		}
	}

	if (JsonDoc.HasMember("prefabId"))
	{
		const rapidjson::Value& PrefabIdValue = JsonDoc["prefabId"];

		if (PrefabIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrefabIdValue, m_PrefabId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member prefabId is null!");
		}
	}

	if (JsonDoc.HasMember("isTransferable"))
	{
		const rapidjson::Value& IsTransferableValue = JsonDoc["isTransferable"];

		if (IsTransferableValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsTransferableValue, m_IsTransferable);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isTransferable is null!");
		}
	}

	if (JsonDoc.HasMember("isPersistent"))
	{
		const rapidjson::Value& IsPersistentValue = JsonDoc["isPersistent"];

		if (IsPersistentValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsPersistentValue, m_IsPersistent);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isPersistent is null!");
		}
	}

	if (JsonDoc.HasMember("ownerUserId"))
	{
		const rapidjson::Value& OwnerUserIdValue = JsonDoc["ownerUserId"];

		if (OwnerUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OwnerUserIdValue, m_OwnerUserId);
		}
	}

	if (JsonDoc.HasMember("scopeReferenceId"))
	{
		const rapidjson::Value& ScopeReferenceIdValue = JsonDoc["scopeReferenceId"];

		if (ScopeReferenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeReferenceIdValue, m_ScopeReferenceId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member scopeReferenceId is null!");
		}
	}

	if (JsonDoc.HasMember("scopeReferenceType"))
	{
		const rapidjson::Value& ScopeReferenceTypeValue = JsonDoc["scopeReferenceType"];

		if (ScopeReferenceTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeReferenceTypeValue, m_ScopeReferenceType);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member scopeReferenceType is null!");
		}
	}

	if (JsonDoc.HasMember("onBehalfOfUserId"))
	{
		const rapidjson::Value& OnBehalfOfUserIdValue = JsonDoc["onBehalfOfUserId"];

		if (OnBehalfOfUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OnBehalfOfUserIdValue, m_OnBehalfOfUserId);
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

	if (JsonDoc.HasMember("components"))
	{
		const rapidjson::Value& ComponentsValue = JsonDoc["components"];

		if (ComponentsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ComponentsValue, m_Components);
		}
	}

	if (JsonDoc.HasMember("scopeIds"))
	{
		const rapidjson::Value& ScopeIdsValue = JsonDoc["scopeIds"];

		if (ScopeIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeIdsValue, m_ScopeIds);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member scopeIds is null!");
		}
	}

	if (JsonDoc.HasMember("aoiCenter"))
	{
		const rapidjson::Value& AoiCenterValue = JsonDoc["aoiCenter"];

		if (AoiCenterValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AoiCenterValue, m_AoiCenter);
		}
	}

	if (JsonDoc.HasMember("duplicatedFrom"))
	{
		const rapidjson::Value& DuplicatedFromValue = JsonDoc["duplicatedFrom"];

		if (DuplicatedFromValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DuplicatedFromValue, m_DuplicatedFrom);
		}
	}
}


int32_t ObjectMessageDto::GetId() const
{
	return m_Id.value();
}

bool ObjectMessageDto::HasId() const
{
	return m_Id.has_value();
}
int32_t ObjectMessageDto::GetPrefabId() const
{
	return m_PrefabId.value();
}

bool ObjectMessageDto::HasPrefabId() const
{
	return m_PrefabId.has_value();
}
void ObjectMessageDto::SetPrefabId(int32_t Value)
{
	m_PrefabId = Value;
}
bool ObjectMessageDto::GetIsTransferable() const
{
	return m_IsTransferable.value();
}

bool ObjectMessageDto::HasIsTransferable() const
{
	return m_IsTransferable.has_value();
}
void ObjectMessageDto::SetIsTransferable(const bool& Value)
{
	m_IsTransferable = Value;
}
bool ObjectMessageDto::GetIsPersistent() const
{
	return m_IsPersistent.value();
}

bool ObjectMessageDto::HasIsPersistent() const
{
	return m_IsPersistent.has_value();
}
void ObjectMessageDto::SetIsPersistent(const bool& Value)
{
	m_IsPersistent = Value;
}
utility::string_t ObjectMessageDto::GetOwnerUserId() const
{
	return m_OwnerUserId.value();
}

bool ObjectMessageDto::HasOwnerUserId() const
{
	return m_OwnerUserId.has_value();
}
void ObjectMessageDto::SetOwnerUserId(const utility::string_t& Value)
{
	m_OwnerUserId = Value;
}
utility::string_t ObjectMessageDto::GetScopeReferenceId() const
{
	return m_ScopeReferenceId.value();
}

bool ObjectMessageDto::HasScopeReferenceId() const
{
	return m_ScopeReferenceId.has_value();
}
void ObjectMessageDto::SetScopeReferenceId(const utility::string_t& Value)
{
	m_ScopeReferenceId = Value;
}
utility::string_t ObjectMessageDto::GetScopeReferenceType() const
{
	return m_ScopeReferenceType.value();
}

bool ObjectMessageDto::HasScopeReferenceType() const
{
	return m_ScopeReferenceType.has_value();
}
void ObjectMessageDto::SetScopeReferenceType(const utility::string_t& Value)
{
	m_ScopeReferenceType = Value;
}
utility::string_t ObjectMessageDto::GetOnBehalfOfUserId() const
{
	return m_OnBehalfOfUserId.value();
}

bool ObjectMessageDto::HasOnBehalfOfUserId() const
{
	return m_OnBehalfOfUserId.has_value();
}
void ObjectMessageDto::SetOnBehalfOfUserId(const utility::string_t& Value)
{
	m_OnBehalfOfUserId = Value;
}
int32_t ObjectMessageDto::GetParentId() const
{
	return m_ParentId.value();
}

bool ObjectMessageDto::HasParentId() const
{
	return m_ParentId.has_value();
}
void ObjectMessageDto::SetParentId(int32_t Value)
{
	m_ParentId = Value;
}
const std::map<utility::string_t, std::shared_ptr<IComponentData>>& ObjectMessageDto::GetComponents() const
{
	return m_Components.value();
}

bool ObjectMessageDto::HasComponents() const
{
	return m_Components.has_value();
}
void ObjectMessageDto::SetComponents(const std::map<utility::string_t, std::shared_ptr<IComponentData>>& Value)
{
	m_Components = Value;
}
const std::vector<utility::string_t>& ObjectMessageDto::GetScopeIds() const
{
	return m_ScopeIds.value();
}

bool ObjectMessageDto::HasScopeIds() const
{
	return m_ScopeIds.has_value();
}
void ObjectMessageDto::SetScopeIds(const std::vector<utility::string_t>& Value)
{
	m_ScopeIds = Value;
}
bool ObjectMessageDto::GetAoiCenter() const
{
	return m_AoiCenter.value();
}

bool ObjectMessageDto::HasAoiCenter() const
{
	return m_AoiCenter.has_value();
}
void ObjectMessageDto::SetAoiCenter(const bool& Value)
{
	m_AoiCenter = Value;
}
utility::string_t ObjectMessageDto::GetDuplicatedFrom() const
{
	return m_DuplicatedFrom.value();
}

bool ObjectMessageDto::HasDuplicatedFrom() const
{
	return m_DuplicatedFrom.has_value();
}
void ObjectMessageDto::SetDuplicatedFrom(const utility::string_t& Value)
{
	m_DuplicatedFrom = Value;
}

ObjectMessageDtoDataPage::ObjectMessageDtoDataPage()
{
}
ObjectMessageDtoDataPage::~ObjectMessageDtoDataPage()
{
}

utility::string_t ObjectMessageDtoDataPage::ToJson() const
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

void ObjectMessageDtoDataPage::FromJson(const utility::string_t& Val)
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


const std::vector<std::shared_ptr<ObjectMessageDto>>& ObjectMessageDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool ObjectMessageDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void ObjectMessageDtoDataPage::SetItems(const std::vector<std::shared_ptr<ObjectMessageDto>>& Value)
{
	m_Items = Value;
}
int32_t ObjectMessageDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool ObjectMessageDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void ObjectMessageDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t ObjectMessageDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool ObjectMessageDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void ObjectMessageDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t ObjectMessageDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool ObjectMessageDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void ObjectMessageDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t ObjectMessageDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool ObjectMessageDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void ObjectMessageDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

ObjectMessagePatchDto::ObjectMessagePatchDto()
{
}
ObjectMessagePatchDto::~ObjectMessagePatchDto()
{
}

utility::string_t ObjectMessagePatchDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_OwnerUserId.has_value())
	{
		rapidjson::Value OwnerUserIdValue(TypeToJsonValue(m_OwnerUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ownerUserId", OwnerUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_ParentId.has_value())
	{
		rapidjson::Value ParentIdValue(TypeToJsonValue(m_ParentId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("parentId", ParentIdValue, JsonDoc.GetAllocator());
	}

	if (m_Components.has_value())
	{
		rapidjson::Value ComponentsValue(TypeToJsonValue(m_Components, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("components", ComponentsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ObjectMessagePatchDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("ownerUserId"))
	{
		const rapidjson::Value& OwnerUserIdValue = JsonDoc["ownerUserId"];

		if (OwnerUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OwnerUserIdValue, m_OwnerUserId);
		}
	}

	if (JsonDoc.HasMember("parentId"))
	{
		const rapidjson::Value& ParentIdValue = JsonDoc["parentId"];

		if (ParentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ParentIdValue, m_ParentId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member parentId is null!");
		}
	}

	if (JsonDoc.HasMember("components"))
	{
		const rapidjson::Value& ComponentsValue = JsonDoc["components"];

		if (ComponentsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ComponentsValue, m_Components);
		}
	}
}


utility::string_t ObjectMessagePatchDto::GetOwnerUserId() const
{
	return m_OwnerUserId.value();
}

bool ObjectMessagePatchDto::HasOwnerUserId() const
{
	return m_OwnerUserId.has_value();
}
void ObjectMessagePatchDto::SetOwnerUserId(const utility::string_t& Value)
{
	m_OwnerUserId = Value;
}
std::shared_ptr<BooleanUInt32NullableTuple> ObjectMessagePatchDto::GetParentId() const
{
	return m_ParentId.value();
}

bool ObjectMessagePatchDto::HasParentId() const
{
	return m_ParentId.has_value();
}
void ObjectMessagePatchDto::SetParentId(const std::shared_ptr<BooleanUInt32NullableTuple>& Value)
{
	m_ParentId = Value;
}
const std::map<utility::string_t, std::shared_ptr<IComponentData>>& ObjectMessagePatchDto::GetComponents() const
{
	return m_Components.value();
}

bool ObjectMessagePatchDto::HasComponents() const
{
	return m_Components.has_value();
}
void ObjectMessagePatchDto::SetComponents(const std::map<utility::string_t, std::shared_ptr<IComponentData>>& Value)
{
	m_Components = Value;
}

PubSubModel::PubSubModel()
{
}
PubSubModel::~PubSubModel()
{
}

utility::string_t PubSubModel::ToJson() const
{
	switch (Value)
	{
		case ePubSubModel::OBJECT:
			return "Object";
		case ePubSubModel::GLOBAL:
			return "Global";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void PubSubModel::FromJson(const utility::string_t& Val)
{
	if (Val == "Object")
	{
		Value = ePubSubModel::OBJECT;
	}
	else if (Val == "Global")
	{
		Value = ePubSubModel::GLOBAL;
	}
}

PubSubModel::ePubSubModel PubSubModel::GetValue() const
{
	return Value;
}

void PubSubModel::SetValue(PubSubModel::ePubSubModel const InValue)
{
	Value = InValue;
}

ScopeDto::ScopeDto()
{
}
ScopeDto::~ScopeDto()
{
}

utility::string_t ScopeDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_ReferenceId.has_value())
	{
		rapidjson::Value ReferenceIdValue(TypeToJsonValue(m_ReferenceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("referenceId", ReferenceIdValue, JsonDoc.GetAllocator());
	}

	if (m_ReferenceType.has_value())
	{
		rapidjson::Value ReferenceTypeValue(TypeToJsonValue(m_ReferenceType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("referenceType", ReferenceTypeValue, JsonDoc.GetAllocator());
	}

	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_PubSubModel.has_value())
	{
		rapidjson::Value PubSubModelValue(TypeToJsonValue(m_PubSubModel, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("pubSubModel", PubSubModelValue, JsonDoc.GetAllocator());
	}

	if (m_SolveRadius.has_value())
	{
		rapidjson::Value SolveRadiusValue(TypeToJsonValue(m_SolveRadius, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("solveRadius", SolveRadiusValue, JsonDoc.GetAllocator());
	}

	if (m_ManagedLeaderElection.has_value())
	{
		rapidjson::Value ManagedLeaderElectionValue(TypeToJsonValue(m_ManagedLeaderElection, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("managedLeaderElection", ManagedLeaderElectionValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ScopeDto::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("pubSubModel"))
	{
		const rapidjson::Value& PubSubModelValue = JsonDoc["pubSubModel"];

		if (PubSubModelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PubSubModelValue, m_PubSubModel);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member pubSubModel is null!");
		}
	}

	if (JsonDoc.HasMember("solveRadius"))
	{
		const rapidjson::Value& SolveRadiusValue = JsonDoc["solveRadius"];

		if (SolveRadiusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SolveRadiusValue, m_SolveRadius);
		}
	}

	if (JsonDoc.HasMember("managedLeaderElection"))
	{
		const rapidjson::Value& ManagedLeaderElectionValue = JsonDoc["managedLeaderElection"];

		if (ManagedLeaderElectionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ManagedLeaderElectionValue, m_ManagedLeaderElection);
		}
	}
}


utility::string_t ScopeDto::GetId() const
{
	return m_Id.value();
}

bool ScopeDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t ScopeDto::GetReferenceId() const
{
	return m_ReferenceId.value();
}

bool ScopeDto::HasReferenceId() const
{
	return m_ReferenceId.has_value();
}
void ScopeDto::SetReferenceId(const utility::string_t& Value)
{
	m_ReferenceId = Value;
}
utility::string_t ScopeDto::GetReferenceType() const
{
	return m_ReferenceType.value();
}

bool ScopeDto::HasReferenceType() const
{
	return m_ReferenceType.has_value();
}
void ScopeDto::SetReferenceType(const utility::string_t& Value)
{
	m_ReferenceType = Value;
}
utility::string_t ScopeDto::GetName() const
{
	return m_Name.value();
}

bool ScopeDto::HasName() const
{
	return m_Name.has_value();
}
void ScopeDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
std::shared_ptr<PubSubModel> ScopeDto::GetPubSubModel() const
{
	return m_PubSubModel.value();
}

bool ScopeDto::HasPubSubModel() const
{
	return m_PubSubModel.has_value();
}
void ScopeDto::SetPubSubModel(const std::shared_ptr<PubSubModel>& Value)
{
	m_PubSubModel = Value;
}
double ScopeDto::GetSolveRadius() const
{
	return m_SolveRadius.value();
}

bool ScopeDto::HasSolveRadius() const
{
	return m_SolveRadius.has_value();
}
void ScopeDto::SetSolveRadius(double Value)
{
	m_SolveRadius = Value;
}
bool ScopeDto::GetManagedLeaderElection() const
{
	return m_ManagedLeaderElection.value();
}

bool ScopeDto::HasManagedLeaderElection() const
{
	return m_ManagedLeaderElection.has_value();
}
void ScopeDto::SetManagedLeaderElection(const bool& Value)
{
	m_ManagedLeaderElection = Value;
}

ScopeDtoDataPage::ScopeDtoDataPage()
{
}
ScopeDtoDataPage::~ScopeDtoDataPage()
{
}

utility::string_t ScopeDtoDataPage::ToJson() const
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

void ScopeDtoDataPage::FromJson(const utility::string_t& Val)
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


const std::vector<std::shared_ptr<ScopeDto>>& ScopeDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool ScopeDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void ScopeDtoDataPage::SetItems(const std::vector<std::shared_ptr<ScopeDto>>& Value)
{
	m_Items = Value;
}
int32_t ScopeDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool ScopeDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void ScopeDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t ScopeDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool ScopeDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void ScopeDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t ScopeDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool ScopeDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void ScopeDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t ScopeDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool ScopeDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void ScopeDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

ScopeLeaderDto::ScopeLeaderDto()
{
}
ScopeLeaderDto::~ScopeLeaderDto()
{
}

utility::string_t ScopeLeaderDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ScopeId.has_value())
	{
		rapidjson::Value ScopeIdValue(TypeToJsonValue(m_ScopeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeId", ScopeIdValue, JsonDoc.GetAllocator());
	}

	if (m_LeaderUserId.has_value())
	{
		rapidjson::Value LeaderUserIdValue(TypeToJsonValue(m_LeaderUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("leaderUserId", LeaderUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_ElectionInProgress.has_value())
	{
		rapidjson::Value ElectionInProgressValue(TypeToJsonValue(m_ElectionInProgress, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("electionInProgress", ElectionInProgressValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ScopeLeaderDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("scopeId"))
	{
		const rapidjson::Value& ScopeIdValue = JsonDoc["scopeId"];

		if (ScopeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeIdValue, m_ScopeId);
		}
	}

	if (JsonDoc.HasMember("leaderUserId"))
	{
		const rapidjson::Value& LeaderUserIdValue = JsonDoc["leaderUserId"];

		if (LeaderUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LeaderUserIdValue, m_LeaderUserId);
		}
	}

	if (JsonDoc.HasMember("electionInProgress"))
	{
		const rapidjson::Value& ElectionInProgressValue = JsonDoc["electionInProgress"];

		if (ElectionInProgressValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ElectionInProgressValue, m_ElectionInProgress);
		}
	}
}


utility::string_t ScopeLeaderDto::GetScopeId() const
{
	return m_ScopeId.value();
}

bool ScopeLeaderDto::HasScopeId() const
{
	return m_ScopeId.has_value();
}
void ScopeLeaderDto::SetScopeId(const utility::string_t& Value)
{
	m_ScopeId = Value;
}
utility::string_t ScopeLeaderDto::GetLeaderUserId() const
{
	return m_LeaderUserId.value();
}

bool ScopeLeaderDto::HasLeaderUserId() const
{
	return m_LeaderUserId.has_value();
}
void ScopeLeaderDto::SetLeaderUserId(const utility::string_t& Value)
{
	m_LeaderUserId = Value;
}
bool ScopeLeaderDto::GetElectionInProgress() const
{
	return m_ElectionInProgress.value();
}

bool ScopeLeaderDto::HasElectionInProgress() const
{
	return m_ElectionInProgress.has_value();
}
void ScopeLeaderDto::SetElectionInProgress(const bool& Value)
{
	m_ElectionInProgress = Value;
}


} // namespace csp::services::generated::multiplayerservice