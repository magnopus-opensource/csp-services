

#include "Dto.h"

#include "Debug/Logging.h"
#include "Web/Json.h"
#include "Web/Json_HttpPayload.h"

#include <optional>


using namespace csp::web;


namespace csp::services::generated::spatialdataservice
{


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

AnchorDto::AnchorDto()
{
}
AnchorDto::~AnchorDto()
{
}

utility::string_t AnchorDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_MgsId.has_value())
	{
		rapidjson::Value MgsIdValue(TypeToJsonValue(m_MgsId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("mgsId", MgsIdValue, JsonDoc.GetAllocator());
	}

	if (m_ThirdPartyAnchorId.has_value())
	{
		rapidjson::Value ThirdPartyAnchorIdValue(TypeToJsonValue(m_ThirdPartyAnchorId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("thirdPartyAnchorId", ThirdPartyAnchorIdValue, JsonDoc.GetAllocator());
	}

	if (m_ThirdPartyProviderName.has_value())
	{
		rapidjson::Value ThirdPartyProviderNameValue(TypeToJsonValue(m_ThirdPartyProviderName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("thirdPartyProviderName", ThirdPartyProviderNameValue, JsonDoc.GetAllocator());
	}

	if (m_ReferenceId.has_value())
	{
		rapidjson::Value ReferenceIdValue(TypeToJsonValue(m_ReferenceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("referenceId", ReferenceIdValue, JsonDoc.GetAllocator());
	}

	if (m_AnchoredPrototypeId.has_value())
	{
		rapidjson::Value AnchoredPrototypeIdValue(TypeToJsonValue(m_AnchoredPrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("anchoredPrototypeId", AnchoredPrototypeIdValue, JsonDoc.GetAllocator());
	}

	if (m_AnchoredMultiplayerObjectId.has_value())
	{
		rapidjson::Value AnchoredMultiplayerObjectIdValue(TypeToJsonValue(m_AnchoredMultiplayerObjectId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("anchoredMultiplayerObjectId", AnchoredMultiplayerObjectIdValue, JsonDoc.GetAllocator());
	}

	if (m_SpatialKeyValue.has_value())
	{
		rapidjson::Value SpatialKeyValueValue(TypeToJsonValue(m_SpatialKeyValue, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spatialKeyValue", SpatialKeyValueValue, JsonDoc.GetAllocator());
	}

	if (m_Location.has_value())
	{
		rapidjson::Value LocationValue(TypeToJsonValue(m_Location, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("location", LocationValue, JsonDoc.GetAllocator());
	}

	if (m_Position.has_value())
	{
		rapidjson::Value PositionValue(TypeToJsonValue(m_Position, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("position", PositionValue, JsonDoc.GetAllocator());
	}

	if (m_Rotation.has_value())
	{
		rapidjson::Value RotationValue(TypeToJsonValue(m_Rotation, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("rotation", RotationValue, JsonDoc.GetAllocator());
	}

	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
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


	return JsonDocToString(JsonDoc);
}

void AnchorDto::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("mgsId"))
	{
		const rapidjson::Value& MgsIdValue = JsonDoc["mgsId"];

		if (MgsIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MgsIdValue, m_MgsId);
		}
	}

	if (JsonDoc.HasMember("thirdPartyAnchorId"))
	{
		const rapidjson::Value& ThirdPartyAnchorIdValue = JsonDoc["thirdPartyAnchorId"];

		if (ThirdPartyAnchorIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThirdPartyAnchorIdValue, m_ThirdPartyAnchorId);
		}
	}

	if (JsonDoc.HasMember("thirdPartyProviderName"))
	{
		const rapidjson::Value& ThirdPartyProviderNameValue = JsonDoc["thirdPartyProviderName"];

		if (ThirdPartyProviderNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThirdPartyProviderNameValue, m_ThirdPartyProviderName);
		}
	}

	if (JsonDoc.HasMember("referenceId"))
	{
		const rapidjson::Value& ReferenceIdValue = JsonDoc["referenceId"];

		if (ReferenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReferenceIdValue, m_ReferenceId);
		}
	}

	if (JsonDoc.HasMember("anchoredPrototypeId"))
	{
		const rapidjson::Value& AnchoredPrototypeIdValue = JsonDoc["anchoredPrototypeId"];

		if (AnchoredPrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AnchoredPrototypeIdValue, m_AnchoredPrototypeId);
		}
	}

	if (JsonDoc.HasMember("anchoredMultiplayerObjectId"))
	{
		const rapidjson::Value& AnchoredMultiplayerObjectIdValue = JsonDoc["anchoredMultiplayerObjectId"];

		if (AnchoredMultiplayerObjectIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AnchoredMultiplayerObjectIdValue, m_AnchoredMultiplayerObjectId);
		}
	}

	if (JsonDoc.HasMember("spatialKeyValue"))
	{
		const rapidjson::Value& SpatialKeyValueValue = JsonDoc["spatialKeyValue"];

		if (SpatialKeyValueValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpatialKeyValueValue, m_SpatialKeyValue);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member spatialKeyValue is null!");
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

	if (JsonDoc.HasMember("rotation"))
	{
		const rapidjson::Value& RotationValue = JsonDoc["rotation"];

		if (RotationValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RotationValue, m_Rotation);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member rotation is null!");
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
}


utility::string_t AnchorDto::GetId() const
{
	return m_Id.value();
}

bool AnchorDto::HasId() const
{
	return m_Id.has_value();
}
void AnchorDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t AnchorDto::GetMgsId() const
{
	return m_MgsId.value();
}

bool AnchorDto::HasMgsId() const
{
	return m_MgsId.has_value();
}
utility::string_t AnchorDto::GetThirdPartyAnchorId() const
{
	return m_ThirdPartyAnchorId.value();
}

bool AnchorDto::HasThirdPartyAnchorId() const
{
	return m_ThirdPartyAnchorId.has_value();
}
void AnchorDto::SetThirdPartyAnchorId(const utility::string_t& Value)
{
	m_ThirdPartyAnchorId = Value;
}
utility::string_t AnchorDto::GetThirdPartyProviderName() const
{
	return m_ThirdPartyProviderName.value();
}

bool AnchorDto::HasThirdPartyProviderName() const
{
	return m_ThirdPartyProviderName.has_value();
}
void AnchorDto::SetThirdPartyProviderName(const utility::string_t& Value)
{
	m_ThirdPartyProviderName = Value;
}
utility::string_t AnchorDto::GetReferenceId() const
{
	return m_ReferenceId.value();
}

bool AnchorDto::HasReferenceId() const
{
	return m_ReferenceId.has_value();
}
void AnchorDto::SetReferenceId(const utility::string_t& Value)
{
	m_ReferenceId = Value;
}
utility::string_t AnchorDto::GetAnchoredPrototypeId() const
{
	return m_AnchoredPrototypeId.value();
}

bool AnchorDto::HasAnchoredPrototypeId() const
{
	return m_AnchoredPrototypeId.has_value();
}
void AnchorDto::SetAnchoredPrototypeId(const utility::string_t& Value)
{
	m_AnchoredPrototypeId = Value;
}
int32_t AnchorDto::GetAnchoredMultiplayerObjectId() const
{
	return m_AnchoredMultiplayerObjectId.value();
}

bool AnchorDto::HasAnchoredMultiplayerObjectId() const
{
	return m_AnchoredMultiplayerObjectId.has_value();
}
void AnchorDto::SetAnchoredMultiplayerObjectId(int32_t Value)
{
	m_AnchoredMultiplayerObjectId = Value;
}
const std::map<utility::string_t, utility::string_t>& AnchorDto::GetSpatialKeyValue() const
{
	return m_SpatialKeyValue.value();
}

bool AnchorDto::HasSpatialKeyValue() const
{
	return m_SpatialKeyValue.has_value();
}
void AnchorDto::SetSpatialKeyValue(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_SpatialKeyValue = Value;
}
std::shared_ptr<GeoCoord> AnchorDto::GetLocation() const
{
	return m_Location.value();
}

bool AnchorDto::HasLocation() const
{
	return m_Location.has_value();
}
void AnchorDto::SetLocation(const std::shared_ptr<GeoCoord>& Value)
{
	m_Location = Value;
}
std::shared_ptr<AnchorPosition> AnchorDto::GetPosition() const
{
	return m_Position.value();
}

bool AnchorDto::HasPosition() const
{
	return m_Position.has_value();
}
void AnchorDto::SetPosition(const std::shared_ptr<AnchorPosition>& Value)
{
	m_Position = Value;
}
std::shared_ptr<AnchorRotation> AnchorDto::GetRotation() const
{
	return m_Rotation.value();
}

bool AnchorDto::HasRotation() const
{
	return m_Rotation.has_value();
}
void AnchorDto::SetRotation(const std::shared_ptr<AnchorRotation>& Value)
{
	m_Rotation = Value;
}
const std::vector<utility::string_t>& AnchorDto::GetTags() const
{
	return m_Tags.value();
}

bool AnchorDto::HasTags() const
{
	return m_Tags.has_value();
}
void AnchorDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
utility::string_t AnchorDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool AnchorDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t AnchorDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool AnchorDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}

AnchorDtoDataPage::AnchorDtoDataPage()
{
}
AnchorDtoDataPage::~AnchorDtoDataPage()
{
}

utility::string_t AnchorDtoDataPage::ToJson() const
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

void AnchorDtoDataPage::FromJson(const utility::string_t& Val)
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


const std::vector<std::shared_ptr<AnchorDto>>& AnchorDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool AnchorDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void AnchorDtoDataPage::SetItems(const std::vector<std::shared_ptr<AnchorDto>>& Value)
{
	m_Items = Value;
}
int32_t AnchorDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool AnchorDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void AnchorDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t AnchorDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool AnchorDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void AnchorDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t AnchorDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool AnchorDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void AnchorDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t AnchorDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool AnchorDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void AnchorDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

AnchorPosition::AnchorPosition()
{
}
AnchorPosition::~AnchorPosition()
{
}

utility::string_t AnchorPosition::ToJson() const
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

void AnchorPosition::FromJson(const utility::string_t& Val)
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


double AnchorPosition::GetX() const
{
	return m_X.value();
}

bool AnchorPosition::HasX() const
{
	return m_X.has_value();
}
void AnchorPosition::SetX(double Value)
{
	m_X = Value;
}
double AnchorPosition::GetY() const
{
	return m_Y.value();
}

bool AnchorPosition::HasY() const
{
	return m_Y.has_value();
}
void AnchorPosition::SetY(double Value)
{
	m_Y = Value;
}
double AnchorPosition::GetZ() const
{
	return m_Z.value();
}

bool AnchorPosition::HasZ() const
{
	return m_Z.has_value();
}
void AnchorPosition::SetZ(double Value)
{
	m_Z = Value;
}

AnchorResolutionDto::AnchorResolutionDto()
{
}
AnchorResolutionDto::~AnchorResolutionDto()
{
}

utility::string_t AnchorResolutionDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_AnchorId.has_value())
	{
		rapidjson::Value AnchorIdValue(TypeToJsonValue(m_AnchorId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("anchorId", AnchorIdValue, JsonDoc.GetAllocator());
	}

	if (m_SuccessfullyResolved.has_value())
	{
		rapidjson::Value SuccessfullyResolvedValue(TypeToJsonValue(m_SuccessfullyResolved, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("successfullyResolved", SuccessfullyResolvedValue, JsonDoc.GetAllocator());
	}

	if (m_ResolveAttempted.has_value())
	{
		rapidjson::Value ResolveAttemptedValue(TypeToJsonValue(m_ResolveAttempted, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("resolveAttempted", ResolveAttemptedValue, JsonDoc.GetAllocator());
	}

	if (m_ResolveTime.has_value())
	{
		rapidjson::Value ResolveTimeValue(TypeToJsonValue(m_ResolveTime, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("resolveTime", ResolveTimeValue, JsonDoc.GetAllocator());
	}

	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AnchorResolutionDto::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("anchorId"))
	{
		const rapidjson::Value& AnchorIdValue = JsonDoc["anchorId"];

		if (AnchorIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AnchorIdValue, m_AnchorId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member anchorId is null!");
		}
	}

	if (JsonDoc.HasMember("successfullyResolved"))
	{
		const rapidjson::Value& SuccessfullyResolvedValue = JsonDoc["successfullyResolved"];

		if (SuccessfullyResolvedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SuccessfullyResolvedValue, m_SuccessfullyResolved);
		}
	}

	if (JsonDoc.HasMember("resolveAttempted"))
	{
		const rapidjson::Value& ResolveAttemptedValue = JsonDoc["resolveAttempted"];

		if (ResolveAttemptedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ResolveAttemptedValue, m_ResolveAttempted);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member resolveAttempted is null!");
		}
	}

	if (JsonDoc.HasMember("resolveTime"))
	{
		const rapidjson::Value& ResolveTimeValue = JsonDoc["resolveTime"];

		if (ResolveTimeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ResolveTimeValue, m_ResolveTime);
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
}


utility::string_t AnchorResolutionDto::GetId() const
{
	return m_Id.value();
}

bool AnchorResolutionDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t AnchorResolutionDto::GetAnchorId() const
{
	return m_AnchorId.value();
}

bool AnchorResolutionDto::HasAnchorId() const
{
	return m_AnchorId.has_value();
}
void AnchorResolutionDto::SetAnchorId(const utility::string_t& Value)
{
	m_AnchorId = Value;
}
bool AnchorResolutionDto::GetSuccessfullyResolved() const
{
	return m_SuccessfullyResolved.value();
}

bool AnchorResolutionDto::HasSuccessfullyResolved() const
{
	return m_SuccessfullyResolved.has_value();
}
void AnchorResolutionDto::SetSuccessfullyResolved(const bool& Value)
{
	m_SuccessfullyResolved = Value;
}
int32_t AnchorResolutionDto::GetResolveAttempted() const
{
	return m_ResolveAttempted.value();
}

bool AnchorResolutionDto::HasResolveAttempted() const
{
	return m_ResolveAttempted.has_value();
}
void AnchorResolutionDto::SetResolveAttempted(int32_t Value)
{
	m_ResolveAttempted = Value;
}
double AnchorResolutionDto::GetResolveTime() const
{
	return m_ResolveTime.value();
}

bool AnchorResolutionDto::HasResolveTime() const
{
	return m_ResolveTime.has_value();
}
void AnchorResolutionDto::SetResolveTime(double Value)
{
	m_ResolveTime = Value;
}
const std::vector<utility::string_t>& AnchorResolutionDto::GetTags() const
{
	return m_Tags.value();
}

bool AnchorResolutionDto::HasTags() const
{
	return m_Tags.has_value();
}
void AnchorResolutionDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}

AnchorResolutionDtoDataPage::AnchorResolutionDtoDataPage()
{
}
AnchorResolutionDtoDataPage::~AnchorResolutionDtoDataPage()
{
}

utility::string_t AnchorResolutionDtoDataPage::ToJson() const
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

void AnchorResolutionDtoDataPage::FromJson(const utility::string_t& Val)
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


const std::vector<std::shared_ptr<AnchorResolutionDto>>& AnchorResolutionDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool AnchorResolutionDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void AnchorResolutionDtoDataPage::SetItems(const std::vector<std::shared_ptr<AnchorResolutionDto>>& Value)
{
	m_Items = Value;
}
int32_t AnchorResolutionDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool AnchorResolutionDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void AnchorResolutionDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t AnchorResolutionDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool AnchorResolutionDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void AnchorResolutionDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t AnchorResolutionDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool AnchorResolutionDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void AnchorResolutionDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t AnchorResolutionDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool AnchorResolutionDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void AnchorResolutionDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

AnchorRotation::AnchorRotation()
{
}
AnchorRotation::~AnchorRotation()
{
}

utility::string_t AnchorRotation::ToJson() const
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

	if (m_W.has_value())
	{
		rapidjson::Value WValue(TypeToJsonValue(m_W, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("w", WValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AnchorRotation::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("w"))
	{
		const rapidjson::Value& WValue = JsonDoc["w"];

		if (WValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WValue, m_W);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member w is null!");
		}
	}
}


double AnchorRotation::GetX() const
{
	return m_X.value();
}

bool AnchorRotation::HasX() const
{
	return m_X.has_value();
}
void AnchorRotation::SetX(double Value)
{
	m_X = Value;
}
double AnchorRotation::GetY() const
{
	return m_Y.value();
}

bool AnchorRotation::HasY() const
{
	return m_Y.has_value();
}
void AnchorRotation::SetY(double Value)
{
	m_Y = Value;
}
double AnchorRotation::GetZ() const
{
	return m_Z.value();
}

bool AnchorRotation::HasZ() const
{
	return m_Z.has_value();
}
void AnchorRotation::SetZ(double Value)
{
	m_Z = Value;
}
double AnchorRotation::GetW() const
{
	return m_W.value();
}

bool AnchorRotation::HasW() const
{
	return m_W.has_value();
}
void AnchorRotation::SetW(double Value)
{
	m_W = Value;
}

AnchorStatsDto::AnchorStatsDto()
{
}
AnchorStatsDto::~AnchorStatsDto()
{
}

utility::string_t AnchorStatsDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_AnchorId.has_value())
	{
		rapidjson::Value AnchorIdValue(TypeToJsonValue(m_AnchorId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("anchorId", AnchorIdValue, JsonDoc.GetAllocator());
	}

	if (m_AverageResolveTime.has_value())
	{
		rapidjson::Value AverageResolveTimeValue(TypeToJsonValue(m_AverageResolveTime, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("averageResolveTime", AverageResolveTimeValue, JsonDoc.GetAllocator());
	}

	if (m_AverageSuccessfullyResolved.has_value())
	{
		rapidjson::Value AverageSuccessfullyResolvedValue(TypeToJsonValue(m_AverageSuccessfullyResolved, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("averageSuccessfullyResolved", AverageSuccessfullyResolvedValue, JsonDoc.GetAllocator());
	}

	if (m_AverageResolveAttempted.has_value())
	{
		rapidjson::Value AverageResolveAttemptedValue(TypeToJsonValue(m_AverageResolveAttempted, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("averageResolveAttempted", AverageResolveAttemptedValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AnchorStatsDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("anchorId"))
	{
		const rapidjson::Value& AnchorIdValue = JsonDoc["anchorId"];

		if (AnchorIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AnchorIdValue, m_AnchorId);
		}
	}

	if (JsonDoc.HasMember("averageResolveTime"))
	{
		const rapidjson::Value& AverageResolveTimeValue = JsonDoc["averageResolveTime"];

		if (AverageResolveTimeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AverageResolveTimeValue, m_AverageResolveTime);
		}
	}

	if (JsonDoc.HasMember("averageSuccessfullyResolved"))
	{
		const rapidjson::Value& AverageSuccessfullyResolvedValue = JsonDoc["averageSuccessfullyResolved"];

		if (AverageSuccessfullyResolvedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AverageSuccessfullyResolvedValue, m_AverageSuccessfullyResolved);
		}
	}

	if (JsonDoc.HasMember("averageResolveAttempted"))
	{
		const rapidjson::Value& AverageResolveAttemptedValue = JsonDoc["averageResolveAttempted"];

		if (AverageResolveAttemptedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AverageResolveAttemptedValue, m_AverageResolveAttempted);
		}
	}
}


utility::string_t AnchorStatsDto::GetAnchorId() const
{
	return m_AnchorId.value();
}

bool AnchorStatsDto::HasAnchorId() const
{
	return m_AnchorId.has_value();
}
void AnchorStatsDto::SetAnchorId(const utility::string_t& Value)
{
	m_AnchorId = Value;
}
double AnchorStatsDto::GetAverageResolveTime() const
{
	return m_AverageResolveTime.value();
}

bool AnchorStatsDto::HasAverageResolveTime() const
{
	return m_AverageResolveTime.has_value();
}
double AnchorStatsDto::GetAverageSuccessfullyResolved() const
{
	return m_AverageSuccessfullyResolved.value();
}

bool AnchorStatsDto::HasAverageSuccessfullyResolved() const
{
	return m_AverageSuccessfullyResolved.has_value();
}
double AnchorStatsDto::GetAverageResolveAttempted() const
{
	return m_AverageResolveAttempted.value();
}

bool AnchorStatsDto::HasAverageResolveAttempted() const
{
	return m_AverageResolveAttempted.has_value();
}

CalendarItemDto::CalendarItemDto()
{
}
CalendarItemDto::~CalendarItemDto()
{
}

utility::string_t CalendarItemDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_EventStart.has_value())
	{
		rapidjson::Value EventStartValue(TypeToJsonValue(m_EventStart, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("eventStart", EventStartValue, JsonDoc.GetAllocator());
	}

	if (m_EventEnd.has_value())
	{
		rapidjson::Value EventEndValue(TypeToJsonValue(m_EventEnd, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("eventEnd", EventEndValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void CalendarItemDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("eventStart"))
	{
		const rapidjson::Value& EventStartValue = JsonDoc["eventStart"];

		if (EventStartValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EventStartValue, m_EventStart);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member eventStart is null!");
		}
	}

	if (JsonDoc.HasMember("eventEnd"))
	{
		const rapidjson::Value& EventEndValue = JsonDoc["eventEnd"];

		if (EventEndValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EventEndValue, m_EventEnd);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member eventEnd is null!");
		}
	}
}


utility::string_t CalendarItemDto::GetEventStart() const
{
	return m_EventStart.value();
}

bool CalendarItemDto::HasEventStart() const
{
	return m_EventStart.has_value();
}
void CalendarItemDto::SetEventStart(const utility::string_t& Value)
{
	m_EventStart = Value;
}
utility::string_t CalendarItemDto::GetEventEnd() const
{
	return m_EventEnd.value();
}

bool CalendarItemDto::HasEventEnd() const
{
	return m_EventEnd.has_value();
}
void CalendarItemDto::SetEventEnd(const utility::string_t& Value)
{
	m_EventEnd = Value;
}

CalendarItemDtoArrayPartialUpdate::CalendarItemDtoArrayPartialUpdate()
{
}
CalendarItemDtoArrayPartialUpdate::~CalendarItemDtoArrayPartialUpdate()
{
}

utility::string_t CalendarItemDtoArrayPartialUpdate::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Value.has_value())
	{
		rapidjson::Value ValueValue(TypeToJsonValue(m_Value, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("value", ValueValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void CalendarItemDtoArrayPartialUpdate::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("value"))
	{
		const rapidjson::Value& ValueValue = JsonDoc["value"];

		if (ValueValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ValueValue, m_Value);
		}
	}
}


const std::vector<std::shared_ptr<CalendarItemDto>>& CalendarItemDtoArrayPartialUpdate::GetValue() const
{
	return m_Value.value();
}

bool CalendarItemDtoArrayPartialUpdate::HasValue() const
{
	return m_Value.has_value();
}
void CalendarItemDtoArrayPartialUpdate::SetValue(const std::vector<std::shared_ptr<CalendarItemDto>>& Value)
{
	m_Value = Value;
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

GeoCoordArrayPartialUpdate::GeoCoordArrayPartialUpdate()
{
}
GeoCoordArrayPartialUpdate::~GeoCoordArrayPartialUpdate()
{
}

utility::string_t GeoCoordArrayPartialUpdate::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Value.has_value())
	{
		rapidjson::Value ValueValue(TypeToJsonValue(m_Value, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("value", ValueValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void GeoCoordArrayPartialUpdate::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("value"))
	{
		const rapidjson::Value& ValueValue = JsonDoc["value"];

		if (ValueValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ValueValue, m_Value);
		}
	}
}


const std::vector<std::shared_ptr<GeoCoord>>& GeoCoordArrayPartialUpdate::GetValue() const
{
	return m_Value.value();
}

bool GeoCoordArrayPartialUpdate::HasValue() const
{
	return m_Value.has_value();
}
void GeoCoordArrayPartialUpdate::SetValue(const std::vector<std::shared_ptr<GeoCoord>>& Value)
{
	m_Value = Value;
}

GeoCoordPartialUpdate::GeoCoordPartialUpdate()
{
}
GeoCoordPartialUpdate::~GeoCoordPartialUpdate()
{
}

utility::string_t GeoCoordPartialUpdate::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Value.has_value())
	{
		rapidjson::Value ValueValue(TypeToJsonValue(m_Value, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("value", ValueValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void GeoCoordPartialUpdate::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("value"))
	{
		const rapidjson::Value& ValueValue = JsonDoc["value"];

		if (ValueValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ValueValue, m_Value);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member value is null!");
		}
	}
}


std::shared_ptr<GeoCoord> GeoCoordPartialUpdate::GetValue() const
{
	return m_Value.value();
}

bool GeoCoordPartialUpdate::HasValue() const
{
	return m_Value.has_value();
}
void GeoCoordPartialUpdate::SetValue(const std::shared_ptr<GeoCoord>& Value)
{
	m_Value = Value;
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

MediaType::MediaType()
{
}
MediaType::~MediaType()
{
}

utility::string_t MediaType::ToJson() const
{
	switch (Value)
	{
		case eMediaType::VERBALTOUR:
			return "VerbalTour";
		case eMediaType::NARRATIVEAUDIO:
			return "NarrativeAudio";
		case eMediaType::VISUALAUDIO:
			return "VisualAudio";
		case eMediaType::MAPSYMBOL:
			return "MapSymbol";
		case eMediaType::ARART:
			return "ArArt";
		case eMediaType::VRART:
			return "VrArt";
		case eMediaType::QUESTART:
			return "QuestArt";
		case eMediaType::PRIMARYIMAGE:
			return "PrimaryImage";
		case eMediaType::OTHERIMAGE:
			return "OtherImage";
		case eMediaType::THUMBNAIL:
			return "Thumbnail";
		case eMediaType::VIDEO:
			return "Video";
		case eMediaType::REFERENCEVIDEO:
			return "ReferenceVideo";
		case eMediaType::REFERENCEAUDIO:
			return "ReferenceAudio";
		case eMediaType::REFERENCEIMAGE:
			return "ReferenceImage";
		case eMediaType::REFERENCEDOCUMENT:
			return "ReferenceDocument";
		case eMediaType::REFERENCEWEB:
			return "ReferenceWeb";
		case eMediaType::REFERENCEJSON:
			return "ReferenceJson";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void MediaType::FromJson(const utility::string_t& Val)
{
	if (Val == "VerbalTour")
	{
		Value = eMediaType::VERBALTOUR;
	}
	else if (Val == "NarrativeAudio")
	{
		Value = eMediaType::NARRATIVEAUDIO;
	}
	else if (Val == "VisualAudio")
	{
		Value = eMediaType::VISUALAUDIO;
	}
	else if (Val == "MapSymbol")
	{
		Value = eMediaType::MAPSYMBOL;
	}
	else if (Val == "ArArt")
	{
		Value = eMediaType::ARART;
	}
	else if (Val == "VrArt")
	{
		Value = eMediaType::VRART;
	}
	else if (Val == "QuestArt")
	{
		Value = eMediaType::QUESTART;
	}
	else if (Val == "PrimaryImage")
	{
		Value = eMediaType::PRIMARYIMAGE;
	}
	else if (Val == "OtherImage")
	{
		Value = eMediaType::OTHERIMAGE;
	}
	else if (Val == "Thumbnail")
	{
		Value = eMediaType::THUMBNAIL;
	}
	else if (Val == "Video")
	{
		Value = eMediaType::VIDEO;
	}
	else if (Val == "ReferenceVideo")
	{
		Value = eMediaType::REFERENCEVIDEO;
	}
	else if (Val == "ReferenceAudio")
	{
		Value = eMediaType::REFERENCEAUDIO;
	}
	else if (Val == "ReferenceImage")
	{
		Value = eMediaType::REFERENCEIMAGE;
	}
	else if (Val == "ReferenceDocument")
	{
		Value = eMediaType::REFERENCEDOCUMENT;
	}
	else if (Val == "ReferenceWeb")
	{
		Value = eMediaType::REFERENCEWEB;
	}
	else if (Val == "ReferenceJson")
	{
		Value = eMediaType::REFERENCEJSON;
	}
}

MediaType::eMediaType MediaType::GetValue() const
{
	return Value;
}

void MediaType::SetValue(MediaType::eMediaType const InValue)
{
	Value = InValue;
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

PersonalPointOfInterestDto::PersonalPointOfInterestDto()
{
}
PersonalPointOfInterestDto::~PersonalPointOfInterestDto()
{
}

utility::string_t PersonalPointOfInterestDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_PoiId.has_value())
	{
		rapidjson::Value PoiIdValue(TypeToJsonValue(m_PoiId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("poiId", PoiIdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void PersonalPointOfInterestDto::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("poiId"))
	{
		const rapidjson::Value& PoiIdValue = JsonDoc["poiId"];

		if (PoiIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PoiIdValue, m_PoiId);
		}
	}
}


utility::string_t PersonalPointOfInterestDto::GetUserId() const
{
	return m_UserId.value();
}

bool PersonalPointOfInterestDto::HasUserId() const
{
	return m_UserId.has_value();
}
utility::string_t PersonalPointOfInterestDto::GetPoiId() const
{
	return m_PoiId.value();
}

bool PersonalPointOfInterestDto::HasPoiId() const
{
	return m_PoiId.has_value();
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

PoiPartialUpdate::PoiPartialUpdate()
{
}
PoiPartialUpdate::~PoiPartialUpdate()
{
}

utility::string_t PoiPartialUpdate::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Location.has_value())
	{
		rapidjson::Value LocationValue(TypeToJsonValue(m_Location, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("location", LocationValue, JsonDoc.GetAllocator());
	}

	if (m_Geofence.has_value())
	{
		rapidjson::Value GeofenceValue(TypeToJsonValue(m_Geofence, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("geofence", GeofenceValue, JsonDoc.GetAllocator());
	}

	if (m_ScheduledEvents.has_value())
	{
		rapidjson::Value ScheduledEventsValue(TypeToJsonValue(m_ScheduledEvents, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scheduledEvents", ScheduledEventsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void PoiPartialUpdate::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


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

	if (JsonDoc.HasMember("geofence"))
	{
		const rapidjson::Value& GeofenceValue = JsonDoc["geofence"];

		if (GeofenceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GeofenceValue, m_Geofence);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member geofence is null!");
		}
	}

	if (JsonDoc.HasMember("scheduledEvents"))
	{
		const rapidjson::Value& ScheduledEventsValue = JsonDoc["scheduledEvents"];

		if (ScheduledEventsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScheduledEventsValue, m_ScheduledEvents);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member scheduledEvents is null!");
		}
	}
}


std::shared_ptr<GeoCoordPartialUpdate> PoiPartialUpdate::GetLocation() const
{
	return m_Location.value();
}

bool PoiPartialUpdate::HasLocation() const
{
	return m_Location.has_value();
}
void PoiPartialUpdate::SetLocation(const std::shared_ptr<GeoCoordPartialUpdate>& Value)
{
	m_Location = Value;
}
std::shared_ptr<GeoCoordArrayPartialUpdate> PoiPartialUpdate::GetGeofence() const
{
	return m_Geofence.value();
}

bool PoiPartialUpdate::HasGeofence() const
{
	return m_Geofence.has_value();
}
void PoiPartialUpdate::SetGeofence(const std::shared_ptr<GeoCoordArrayPartialUpdate>& Value)
{
	m_Geofence = Value;
}
std::shared_ptr<CalendarItemDtoArrayPartialUpdate> PoiPartialUpdate::GetScheduledEvents() const
{
	return m_ScheduledEvents.value();
}

bool PoiPartialUpdate::HasScheduledEvents() const
{
	return m_ScheduledEvents.has_value();
}
void PoiPartialUpdate::SetScheduledEvents(const std::shared_ptr<CalendarItemDtoArrayPartialUpdate>& Value)
{
	m_ScheduledEvents = Value;
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

PointOfInterestDto::PointOfInterestDto()
{
}
PointOfInterestDto::~PointOfInterestDto()
{
}

utility::string_t PointOfInterestDto::ToJson() const
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

	if (m_UiStrings.has_value())
	{
		rapidjson::Value UiStringsValue(TypeToJsonValue(m_UiStrings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("uiStrings", UiStringsValue, JsonDoc.GetAllocator());
	}

	if (m_Type.has_value())
	{
		rapidjson::Value TypeValue(TypeToJsonValue(m_Type, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("type", TypeValue, JsonDoc.GetAllocator());
	}

	if (m_ZoomLevel.has_value())
	{
		rapidjson::Value ZoomLevelValue(TypeToJsonValue(m_ZoomLevel, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("zoomLevel", ZoomLevelValue, JsonDoc.GetAllocator());
	}

	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}

	if (m_ThumbnailUri.has_value())
	{
		rapidjson::Value ThumbnailUriValue(TypeToJsonValue(m_ThumbnailUri, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("thumbnailUri", ThumbnailUriValue, JsonDoc.GetAllocator());
	}

	if (m_ThumbnailMimeType.has_value())
	{
		rapidjson::Value ThumbnailMimeTypeValue(TypeToJsonValue(m_ThumbnailMimeType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("thumbnailMimeType", ThumbnailMimeTypeValue, JsonDoc.GetAllocator());
	}

	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_Owner.has_value())
	{
		rapidjson::Value OwnerValue(TypeToJsonValue(m_Owner, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("owner", OwnerValue, JsonDoc.GetAllocator());
	}

	if (m_Location.has_value())
	{
		rapidjson::Value LocationValue(TypeToJsonValue(m_Location, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("location", LocationValue, JsonDoc.GetAllocator());
	}

	if (m_Schedule.has_value())
	{
		rapidjson::Value ScheduleValue(TypeToJsonValue(m_Schedule, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("schedule", ScheduleValue, JsonDoc.GetAllocator());
	}

	if (m_GeneratedSchedule.has_value())
	{
		rapidjson::Value GeneratedScheduleValue(TypeToJsonValue(m_GeneratedSchedule, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("generatedSchedule", GeneratedScheduleValue, JsonDoc.GetAllocator());
	}

	if (m_EventId.has_value())
	{
		rapidjson::Value EventIdValue(TypeToJsonValue(m_EventId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("eventId", EventIdValue, JsonDoc.GetAllocator());
	}

	if (m_ParentId.has_value())
	{
		rapidjson::Value ParentIdValue(TypeToJsonValue(m_ParentId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("parentId", ParentIdValue, JsonDoc.GetAllocator());
	}

	if (m_GroupId.has_value())
	{
		rapidjson::Value GroupIdValue(TypeToJsonValue(m_GroupId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupId", GroupIdValue, JsonDoc.GetAllocator());
	}

	if (m_Hidden.has_value())
	{
		rapidjson::Value HiddenValue(TypeToJsonValue(m_Hidden, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("hidden", HiddenValue, JsonDoc.GetAllocator());
	}

	if (m_Geofence.has_value())
	{
		rapidjson::Value GeofenceValue(TypeToJsonValue(m_Geofence, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("geofence", GeofenceValue, JsonDoc.GetAllocator());
	}

	if (m_Private.has_value())
	{
		rapidjson::Value PrivateValue(TypeToJsonValue(m_Private, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("private", PrivateValue, JsonDoc.GetAllocator());
	}

	if (m_ReferenceLookup.has_value())
	{
		rapidjson::Value ReferenceLookupValue(TypeToJsonValue(m_ReferenceLookup, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("referenceLookup", ReferenceLookupValue, JsonDoc.GetAllocator());
	}

	if (m_PrototypeId.has_value())
	{
		rapidjson::Value PrototypeIdValue(TypeToJsonValue(m_PrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeId", PrototypeIdValue, JsonDoc.GetAllocator());
	}

	if (m_PrototypeName.has_value())
	{
		rapidjson::Value PrototypeNameValue(TypeToJsonValue(m_PrototypeName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeName", PrototypeNameValue, JsonDoc.GetAllocator());
	}

	if (m_RequireAction.has_value())
	{
		rapidjson::Value RequireActionValue(TypeToJsonValue(m_RequireAction, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requireAction", RequireActionValue, JsonDoc.GetAllocator());
	}

	if (m_IsDebug.has_value())
	{
		rapidjson::Value IsDebugValue(TypeToJsonValue(m_IsDebug, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isDebug", IsDebugValue, JsonDoc.GetAllocator());
	}

	if (m_Orientation.has_value())
	{
		rapidjson::Value OrientationValue(TypeToJsonValue(m_Orientation, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("orientation", OrientationValue, JsonDoc.GetAllocator());
	}

	if (m_PrototypeTransform.has_value())
	{
		rapidjson::Value PrototypeTransformValue(TypeToJsonValue(m_PrototypeTransform, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeTransform", PrototypeTransformValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void PointOfInterestDto::FromJson(const utility::string_t& Val)
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
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt);
		}
	}

	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member title is null!");
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

	if (JsonDoc.HasMember("uiStrings"))
	{
		const rapidjson::Value& UiStringsValue = JsonDoc["uiStrings"];

		if (UiStringsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UiStringsValue, m_UiStrings);
		}
	}

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

	if (JsonDoc.HasMember("zoomLevel"))
	{
		const rapidjson::Value& ZoomLevelValue = JsonDoc["zoomLevel"];

		if (ZoomLevelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ZoomLevelValue, m_ZoomLevel);
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
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tags is null!");
		}
	}

	if (JsonDoc.HasMember("thumbnailUri"))
	{
		const rapidjson::Value& ThumbnailUriValue = JsonDoc["thumbnailUri"];

		if (ThumbnailUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailUriValue, m_ThumbnailUri);
		}
	}

	if (JsonDoc.HasMember("thumbnailMimeType"))
	{
		const rapidjson::Value& ThumbnailMimeTypeValue = JsonDoc["thumbnailMimeType"];

		if (ThumbnailMimeTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailMimeTypeValue, m_ThumbnailMimeType);
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

	if (JsonDoc.HasMember("owner"))
	{
		const rapidjson::Value& OwnerValue = JsonDoc["owner"];

		if (OwnerValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OwnerValue, m_Owner);
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

	if (JsonDoc.HasMember("schedule"))
	{
		const rapidjson::Value& ScheduleValue = JsonDoc["schedule"];

		if (ScheduleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScheduleValue, m_Schedule);
		}
	}

	if (JsonDoc.HasMember("generatedSchedule"))
	{
		const rapidjson::Value& GeneratedScheduleValue = JsonDoc["generatedSchedule"];

		if (GeneratedScheduleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GeneratedScheduleValue, m_GeneratedSchedule);
		}
	}

	if (JsonDoc.HasMember("eventId"))
	{
		const rapidjson::Value& EventIdValue = JsonDoc["eventId"];

		if (EventIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EventIdValue, m_EventId);
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

	if (JsonDoc.HasMember("groupId"))
	{
		const rapidjson::Value& GroupIdValue = JsonDoc["groupId"];

		if (GroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupIdValue, m_GroupId);
		}
	}

	if (JsonDoc.HasMember("hidden"))
	{
		const rapidjson::Value& HiddenValue = JsonDoc["hidden"];

		if (HiddenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HiddenValue, m_Hidden);
		}
	}

	if (JsonDoc.HasMember("geofence"))
	{
		const rapidjson::Value& GeofenceValue = JsonDoc["geofence"];

		if (GeofenceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GeofenceValue, m_Geofence);
		}
	}

	if (JsonDoc.HasMember("private"))
	{
		const rapidjson::Value& PrivateValue = JsonDoc["private"];

		if (PrivateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrivateValue, m_Private);
		}
	}

	if (JsonDoc.HasMember("referenceLookup"))
	{
		const rapidjson::Value& ReferenceLookupValue = JsonDoc["referenceLookup"];

		if (ReferenceLookupValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReferenceLookupValue, m_ReferenceLookup);
		}
	}

	if (JsonDoc.HasMember("prototypeId"))
	{
		const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

		if (PrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeIdValue, m_PrototypeId);
		}
	}

	if (JsonDoc.HasMember("prototypeName"))
	{
		const rapidjson::Value& PrototypeNameValue = JsonDoc["prototypeName"];

		if (PrototypeNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeNameValue, m_PrototypeName);
		}
	}

	if (JsonDoc.HasMember("requireAction"))
	{
		const rapidjson::Value& RequireActionValue = JsonDoc["requireAction"];

		if (RequireActionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequireActionValue, m_RequireAction);
		}
	}

	if (JsonDoc.HasMember("isDebug"))
	{
		const rapidjson::Value& IsDebugValue = JsonDoc["isDebug"];

		if (IsDebugValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsDebugValue, m_IsDebug);
		}
	}

	if (JsonDoc.HasMember("orientation"))
	{
		const rapidjson::Value& OrientationValue = JsonDoc["orientation"];

		if (OrientationValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OrientationValue, m_Orientation);
		}
	}

	if (JsonDoc.HasMember("prototypeTransform"))
	{
		const rapidjson::Value& PrototypeTransformValue = JsonDoc["prototypeTransform"];

		if (PrototypeTransformValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeTransformValue, m_PrototypeTransform);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member prototypeTransform is null!");
		}
	}
}


utility::string_t PointOfInterestDto::GetId() const
{
	return m_Id.value();
}

bool PointOfInterestDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t PointOfInterestDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool PointOfInterestDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t PointOfInterestDto::GetUpdatedBy() const
{
	return m_UpdatedBy.value();
}

bool PointOfInterestDto::HasUpdatedBy() const
{
	return m_UpdatedBy.has_value();
}
utility::string_t PointOfInterestDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool PointOfInterestDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t PointOfInterestDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool PointOfInterestDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
const std::vector<std::shared_ptr<LocalizedString>>& PointOfInterestDto::GetTitle() const
{
	return m_Title.value();
}

bool PointOfInterestDto::HasTitle() const
{
	return m_Title.has_value();
}
void PointOfInterestDto::SetTitle(const std::vector<std::shared_ptr<LocalizedString>>& Value)
{
	m_Title = Value;
}
const std::vector<std::shared_ptr<LocalizedString>>& PointOfInterestDto::GetDescription() const
{
	return m_Description.value();
}

bool PointOfInterestDto::HasDescription() const
{
	return m_Description.has_value();
}
void PointOfInterestDto::SetDescription(const std::vector<std::shared_ptr<LocalizedString>>& Value)
{
	m_Description = Value;
}
const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& PointOfInterestDto::GetUiStrings() const
{
	return m_UiStrings.value();
}

bool PointOfInterestDto::HasUiStrings() const
{
	return m_UiStrings.has_value();
}
void PointOfInterestDto::SetUiStrings(const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value)
{
	m_UiStrings = Value;
}
utility::string_t PointOfInterestDto::GetType() const
{
	return m_Type.value();
}

bool PointOfInterestDto::HasType() const
{
	return m_Type.has_value();
}
void PointOfInterestDto::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}
int32_t PointOfInterestDto::GetZoomLevel() const
{
	return m_ZoomLevel.value();
}

bool PointOfInterestDto::HasZoomLevel() const
{
	return m_ZoomLevel.has_value();
}
void PointOfInterestDto::SetZoomLevel(int32_t Value)
{
	m_ZoomLevel = Value;
}
const std::vector<utility::string_t>& PointOfInterestDto::GetTags() const
{
	return m_Tags.value();
}

bool PointOfInterestDto::HasTags() const
{
	return m_Tags.has_value();
}
void PointOfInterestDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
utility::string_t PointOfInterestDto::GetThumbnailUri() const
{
	return m_ThumbnailUri.value();
}

bool PointOfInterestDto::HasThumbnailUri() const
{
	return m_ThumbnailUri.has_value();
}
void PointOfInterestDto::SetThumbnailUri(const utility::string_t& Value)
{
	m_ThumbnailUri = Value;
}
utility::string_t PointOfInterestDto::GetThumbnailMimeType() const
{
	return m_ThumbnailMimeType.value();
}

bool PointOfInterestDto::HasThumbnailMimeType() const
{
	return m_ThumbnailMimeType.has_value();
}
void PointOfInterestDto::SetThumbnailMimeType(const utility::string_t& Value)
{
	m_ThumbnailMimeType = Value;
}
utility::string_t PointOfInterestDto::GetName() const
{
	return m_Name.value();
}

bool PointOfInterestDto::HasName() const
{
	return m_Name.has_value();
}
void PointOfInterestDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t PointOfInterestDto::GetOwner() const
{
	return m_Owner.value();
}

bool PointOfInterestDto::HasOwner() const
{
	return m_Owner.has_value();
}
void PointOfInterestDto::SetOwner(const utility::string_t& Value)
{
	m_Owner = Value;
}
std::shared_ptr<GeoCoord> PointOfInterestDto::GetLocation() const
{
	return m_Location.value();
}

bool PointOfInterestDto::HasLocation() const
{
	return m_Location.has_value();
}
void PointOfInterestDto::SetLocation(const std::shared_ptr<GeoCoord>& Value)
{
	m_Location = Value;
}
const std::vector<std::shared_ptr<CalendarItemDto>>& PointOfInterestDto::GetSchedule() const
{
	return m_Schedule.value();
}

bool PointOfInterestDto::HasSchedule() const
{
	return m_Schedule.has_value();
}
void PointOfInterestDto::SetSchedule(const std::vector<std::shared_ptr<CalendarItemDto>>& Value)
{
	m_Schedule = Value;
}
const std::vector<std::shared_ptr<CalendarItemDto>>& PointOfInterestDto::GetGeneratedSchedule() const
{
	return m_GeneratedSchedule.value();
}

bool PointOfInterestDto::HasGeneratedSchedule() const
{
	return m_GeneratedSchedule.has_value();
}
utility::string_t PointOfInterestDto::GetEventId() const
{
	return m_EventId.value();
}

bool PointOfInterestDto::HasEventId() const
{
	return m_EventId.has_value();
}
void PointOfInterestDto::SetEventId(const utility::string_t& Value)
{
	m_EventId = Value;
}
utility::string_t PointOfInterestDto::GetParentId() const
{
	return m_ParentId.value();
}

bool PointOfInterestDto::HasParentId() const
{
	return m_ParentId.has_value();
}
void PointOfInterestDto::SetParentId(const utility::string_t& Value)
{
	m_ParentId = Value;
}
utility::string_t PointOfInterestDto::GetGroupId() const
{
	return m_GroupId.value();
}

bool PointOfInterestDto::HasGroupId() const
{
	return m_GroupId.has_value();
}
void PointOfInterestDto::SetGroupId(const utility::string_t& Value)
{
	m_GroupId = Value;
}
bool PointOfInterestDto::GetHidden() const
{
	return m_Hidden.value();
}

bool PointOfInterestDto::HasHidden() const
{
	return m_Hidden.has_value();
}
void PointOfInterestDto::SetHidden(const bool& Value)
{
	m_Hidden = Value;
}
const std::vector<std::shared_ptr<GeoCoord>>& PointOfInterestDto::GetGeofence() const
{
	return m_Geofence.value();
}

bool PointOfInterestDto::HasGeofence() const
{
	return m_Geofence.has_value();
}
void PointOfInterestDto::SetGeofence(const std::vector<std::shared_ptr<GeoCoord>>& Value)
{
	m_Geofence = Value;
}
bool PointOfInterestDto::GetPrivate() const
{
	return m_Private.value();
}

bool PointOfInterestDto::HasPrivate() const
{
	return m_Private.has_value();
}
void PointOfInterestDto::SetPrivate(const bool& Value)
{
	m_Private = Value;
}
utility::string_t PointOfInterestDto::GetReferenceLookup() const
{
	return m_ReferenceLookup.value();
}

bool PointOfInterestDto::HasReferenceLookup() const
{
	return m_ReferenceLookup.has_value();
}
void PointOfInterestDto::SetReferenceLookup(const utility::string_t& Value)
{
	m_ReferenceLookup = Value;
}
utility::string_t PointOfInterestDto::GetPrototypeId() const
{
	return m_PrototypeId.value();
}

bool PointOfInterestDto::HasPrototypeId() const
{
	return m_PrototypeId.has_value();
}
void PointOfInterestDto::SetPrototypeId(const utility::string_t& Value)
{
	m_PrototypeId = Value;
}
utility::string_t PointOfInterestDto::GetPrototypeName() const
{
	return m_PrototypeName.value();
}

bool PointOfInterestDto::HasPrototypeName() const
{
	return m_PrototypeName.has_value();
}
void PointOfInterestDto::SetPrototypeName(const utility::string_t& Value)
{
	m_PrototypeName = Value;
}
bool PointOfInterestDto::GetRequireAction() const
{
	return m_RequireAction.value();
}

bool PointOfInterestDto::HasRequireAction() const
{
	return m_RequireAction.has_value();
}
void PointOfInterestDto::SetRequireAction(const bool& Value)
{
	m_RequireAction = Value;
}
bool PointOfInterestDto::GetIsDebug() const
{
	return m_IsDebug.value();
}

bool PointOfInterestDto::HasIsDebug() const
{
	return m_IsDebug.has_value();
}
void PointOfInterestDto::SetIsDebug(const bool& Value)
{
	m_IsDebug = Value;
}
float PointOfInterestDto::GetOrientation() const
{
	return m_Orientation.value();
}

bool PointOfInterestDto::HasOrientation() const
{
	return m_Orientation.has_value();
}
void PointOfInterestDto::SetOrientation(float Value)
{
	m_Orientation = Value;
}
std::shared_ptr<Transform> PointOfInterestDto::GetPrototypeTransform() const
{
	return m_PrototypeTransform.value();
}

bool PointOfInterestDto::HasPrototypeTransform() const
{
	return m_PrototypeTransform.has_value();
}
void PointOfInterestDto::SetPrototypeTransform(const std::shared_ptr<Transform>& Value)
{
	m_PrototypeTransform = Value;
}

PointOfInterestDtoDataPage::PointOfInterestDtoDataPage()
{
}
PointOfInterestDtoDataPage::~PointOfInterestDtoDataPage()
{
}

utility::string_t PointOfInterestDtoDataPage::ToJson() const
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

void PointOfInterestDtoDataPage::FromJson(const utility::string_t& Val)
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


const std::vector<std::shared_ptr<PointOfInterestDto>>& PointOfInterestDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool PointOfInterestDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void PointOfInterestDtoDataPage::SetItems(const std::vector<std::shared_ptr<PointOfInterestDto>>& Value)
{
	m_Items = Value;
}
int32_t PointOfInterestDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool PointOfInterestDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void PointOfInterestDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t PointOfInterestDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool PointOfInterestDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void PointOfInterestDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t PointOfInterestDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool PointOfInterestDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void PointOfInterestDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t PointOfInterestDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool PointOfInterestDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void PointOfInterestDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

PointOfInterestLiteDto::PointOfInterestLiteDto()
{
}
PointOfInterestLiteDto::~PointOfInterestLiteDto()
{
}

utility::string_t PointOfInterestLiteDto::ToJson() const
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

	if (m_UiStrings.has_value())
	{
		rapidjson::Value UiStringsValue(TypeToJsonValue(m_UiStrings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("uiStrings", UiStringsValue, JsonDoc.GetAllocator());
	}

	if (m_Type.has_value())
	{
		rapidjson::Value TypeValue(TypeToJsonValue(m_Type, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("type", TypeValue, JsonDoc.GetAllocator());
	}

	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}

	if (m_ThumbnailUri.has_value())
	{
		rapidjson::Value ThumbnailUriValue(TypeToJsonValue(m_ThumbnailUri, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("thumbnailUri", ThumbnailUriValue, JsonDoc.GetAllocator());
	}

	if (m_ThumbnailMimeType.has_value())
	{
		rapidjson::Value ThumbnailMimeTypeValue(TypeToJsonValue(m_ThumbnailMimeType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("thumbnailMimeType", ThumbnailMimeTypeValue, JsonDoc.GetAllocator());
	}

	if (m_Location.has_value())
	{
		rapidjson::Value LocationValue(TypeToJsonValue(m_Location, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("location", LocationValue, JsonDoc.GetAllocator());
	}

	if (m_Hidden.has_value())
	{
		rapidjson::Value HiddenValue(TypeToJsonValue(m_Hidden, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("hidden", HiddenValue, JsonDoc.GetAllocator());
	}

	if (m_Geofence.has_value())
	{
		rapidjson::Value GeofenceValue(TypeToJsonValue(m_Geofence, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("geofence", GeofenceValue, JsonDoc.GetAllocator());
	}

	if (m_PrototypeName.has_value())
	{
		rapidjson::Value PrototypeNameValue(TypeToJsonValue(m_PrototypeName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeName", PrototypeNameValue, JsonDoc.GetAllocator());
	}

	if (m_PrototypeId.has_value())
	{
		rapidjson::Value PrototypeIdValue(TypeToJsonValue(m_PrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeId", PrototypeIdValue, JsonDoc.GetAllocator());
	}

	if (m_Orientation.has_value())
	{
		rapidjson::Value OrientationValue(TypeToJsonValue(m_Orientation, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("orientation", OrientationValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void PointOfInterestLiteDto::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("uiStrings"))
	{
		const rapidjson::Value& UiStringsValue = JsonDoc["uiStrings"];

		if (UiStringsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UiStringsValue, m_UiStrings);
		}
	}

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

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tags is null!");
		}
	}

	if (JsonDoc.HasMember("thumbnailUri"))
	{
		const rapidjson::Value& ThumbnailUriValue = JsonDoc["thumbnailUri"];

		if (ThumbnailUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailUriValue, m_ThumbnailUri);
		}
	}

	if (JsonDoc.HasMember("thumbnailMimeType"))
	{
		const rapidjson::Value& ThumbnailMimeTypeValue = JsonDoc["thumbnailMimeType"];

		if (ThumbnailMimeTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailMimeTypeValue, m_ThumbnailMimeType);
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

	if (JsonDoc.HasMember("hidden"))
	{
		const rapidjson::Value& HiddenValue = JsonDoc["hidden"];

		if (HiddenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HiddenValue, m_Hidden);
		}
	}

	if (JsonDoc.HasMember("geofence"))
	{
		const rapidjson::Value& GeofenceValue = JsonDoc["geofence"];

		if (GeofenceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GeofenceValue, m_Geofence);
		}
	}

	if (JsonDoc.HasMember("prototypeName"))
	{
		const rapidjson::Value& PrototypeNameValue = JsonDoc["prototypeName"];

		if (PrototypeNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeNameValue, m_PrototypeName);
		}
	}

	if (JsonDoc.HasMember("prototypeId"))
	{
		const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

		if (PrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeIdValue, m_PrototypeId);
		}
	}

	if (JsonDoc.HasMember("orientation"))
	{
		const rapidjson::Value& OrientationValue = JsonDoc["orientation"];

		if (OrientationValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OrientationValue, m_Orientation);
		}
	}
}


utility::string_t PointOfInterestLiteDto::GetId() const
{
	return m_Id.value();
}

bool PointOfInterestLiteDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t PointOfInterestLiteDto::GetName() const
{
	return m_Name.value();
}

bool PointOfInterestLiteDto::HasName() const
{
	return m_Name.has_value();
}
void PointOfInterestLiteDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
const std::vector<std::shared_ptr<LocalizedString>>& PointOfInterestLiteDto::GetTitle() const
{
	return m_Title.value();
}

bool PointOfInterestLiteDto::HasTitle() const
{
	return m_Title.has_value();
}
void PointOfInterestLiteDto::SetTitle(const std::vector<std::shared_ptr<LocalizedString>>& Value)
{
	m_Title = Value;
}
const std::vector<std::shared_ptr<LocalizedString>>& PointOfInterestLiteDto::GetDescription() const
{
	return m_Description.value();
}

bool PointOfInterestLiteDto::HasDescription() const
{
	return m_Description.has_value();
}
void PointOfInterestLiteDto::SetDescription(const std::vector<std::shared_ptr<LocalizedString>>& Value)
{
	m_Description = Value;
}
const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& PointOfInterestLiteDto::GetUiStrings() const
{
	return m_UiStrings.value();
}

bool PointOfInterestLiteDto::HasUiStrings() const
{
	return m_UiStrings.has_value();
}
void PointOfInterestLiteDto::SetUiStrings(const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value)
{
	m_UiStrings = Value;
}
utility::string_t PointOfInterestLiteDto::GetType() const
{
	return m_Type.value();
}

bool PointOfInterestLiteDto::HasType() const
{
	return m_Type.has_value();
}
void PointOfInterestLiteDto::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}
const std::vector<utility::string_t>& PointOfInterestLiteDto::GetTags() const
{
	return m_Tags.value();
}

bool PointOfInterestLiteDto::HasTags() const
{
	return m_Tags.has_value();
}
void PointOfInterestLiteDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
utility::string_t PointOfInterestLiteDto::GetThumbnailUri() const
{
	return m_ThumbnailUri.value();
}

bool PointOfInterestLiteDto::HasThumbnailUri() const
{
	return m_ThumbnailUri.has_value();
}
void PointOfInterestLiteDto::SetThumbnailUri(const utility::string_t& Value)
{
	m_ThumbnailUri = Value;
}
utility::string_t PointOfInterestLiteDto::GetThumbnailMimeType() const
{
	return m_ThumbnailMimeType.value();
}

bool PointOfInterestLiteDto::HasThumbnailMimeType() const
{
	return m_ThumbnailMimeType.has_value();
}
void PointOfInterestLiteDto::SetThumbnailMimeType(const utility::string_t& Value)
{
	m_ThumbnailMimeType = Value;
}
std::shared_ptr<GeoCoord> PointOfInterestLiteDto::GetLocation() const
{
	return m_Location.value();
}

bool PointOfInterestLiteDto::HasLocation() const
{
	return m_Location.has_value();
}
void PointOfInterestLiteDto::SetLocation(const std::shared_ptr<GeoCoord>& Value)
{
	m_Location = Value;
}
bool PointOfInterestLiteDto::GetHidden() const
{
	return m_Hidden.value();
}

bool PointOfInterestLiteDto::HasHidden() const
{
	return m_Hidden.has_value();
}
void PointOfInterestLiteDto::SetHidden(const bool& Value)
{
	m_Hidden = Value;
}
const std::vector<std::shared_ptr<GeoCoord>>& PointOfInterestLiteDto::GetGeofence() const
{
	return m_Geofence.value();
}

bool PointOfInterestLiteDto::HasGeofence() const
{
	return m_Geofence.has_value();
}
void PointOfInterestLiteDto::SetGeofence(const std::vector<std::shared_ptr<GeoCoord>>& Value)
{
	m_Geofence = Value;
}
utility::string_t PointOfInterestLiteDto::GetPrototypeName() const
{
	return m_PrototypeName.value();
}

bool PointOfInterestLiteDto::HasPrototypeName() const
{
	return m_PrototypeName.has_value();
}
void PointOfInterestLiteDto::SetPrototypeName(const utility::string_t& Value)
{
	m_PrototypeName = Value;
}
utility::string_t PointOfInterestLiteDto::GetPrototypeId() const
{
	return m_PrototypeId.value();
}

bool PointOfInterestLiteDto::HasPrototypeId() const
{
	return m_PrototypeId.has_value();
}
void PointOfInterestLiteDto::SetPrototypeId(const utility::string_t& Value)
{
	m_PrototypeId = Value;
}
float PointOfInterestLiteDto::GetOrientation() const
{
	return m_Orientation.value();
}

bool PointOfInterestLiteDto::HasOrientation() const
{
	return m_Orientation.has_value();
}
void PointOfInterestLiteDto::SetOrientation(float Value)
{
	m_Orientation = Value;
}

PointOfInterestLiteDtoDataPage::PointOfInterestLiteDtoDataPage()
{
}
PointOfInterestLiteDtoDataPage::~PointOfInterestLiteDtoDataPage()
{
}

utility::string_t PointOfInterestLiteDtoDataPage::ToJson() const
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

void PointOfInterestLiteDtoDataPage::FromJson(const utility::string_t& Val)
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


const std::vector<std::shared_ptr<PointOfInterestLiteDto>>& PointOfInterestLiteDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool PointOfInterestLiteDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void PointOfInterestLiteDtoDataPage::SetItems(const std::vector<std::shared_ptr<PointOfInterestLiteDto>>& Value)
{
	m_Items = Value;
}
int32_t PointOfInterestLiteDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool PointOfInterestLiteDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void PointOfInterestLiteDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t PointOfInterestLiteDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool PointOfInterestLiteDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void PointOfInterestLiteDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t PointOfInterestLiteDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool PointOfInterestLiteDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void PointOfInterestLiteDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t PointOfInterestLiteDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool PointOfInterestLiteDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void PointOfInterestLiteDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

PositionDto::PositionDto()
{
}
PositionDto::~PositionDto()
{
}

utility::string_t PositionDto::ToJson() const
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

	if (m_Position.has_value())
	{
		rapidjson::Value PositionValue(TypeToJsonValue(m_Position, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("position", PositionValue, JsonDoc.GetAllocator());
	}

	if (m_Offsite.has_value())
	{
		rapidjson::Value OffsiteValue(TypeToJsonValue(m_Offsite, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("offsite", OffsiteValue, JsonDoc.GetAllocator());
	}

	if (m_DeviceId.has_value())
	{
		rapidjson::Value DeviceIdValue(TypeToJsonValue(m_DeviceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deviceId", DeviceIdValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_GeofenceSearchRadius.has_value())
	{
		rapidjson::Value GeofenceSearchRadiusValue(TypeToJsonValue(m_GeofenceSearchRadius, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("geofenceSearchRadius", GeofenceSearchRadiusValue, JsonDoc.GetAllocator());
	}

	if (m_Spectator.has_value())
	{
		rapidjson::Value SpectatorValue(TypeToJsonValue(m_Spectator, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spectator", SpectatorValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void PositionDto::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("offsite"))
	{
		const rapidjson::Value& OffsiteValue = JsonDoc["offsite"];

		if (OffsiteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OffsiteValue, m_Offsite);
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

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt);
		}
	}

	if (JsonDoc.HasMember("geofenceSearchRadius"))
	{
		const rapidjson::Value& GeofenceSearchRadiusValue = JsonDoc["geofenceSearchRadius"];

		if (GeofenceSearchRadiusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GeofenceSearchRadiusValue, m_GeofenceSearchRadius);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member geofenceSearchRadius is null!");
		}
	}

	if (JsonDoc.HasMember("spectator"))
	{
		const rapidjson::Value& SpectatorValue = JsonDoc["spectator"];

		if (SpectatorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpectatorValue, m_Spectator);
		}
	}
}


utility::string_t PositionDto::GetId() const
{
	return m_Id.value();
}

bool PositionDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t PositionDto::GetUserId() const
{
	return m_UserId.value();
}

bool PositionDto::HasUserId() const
{
	return m_UserId.has_value();
}
std::shared_ptr<GeoCoord> PositionDto::GetPosition() const
{
	return m_Position.value();
}

bool PositionDto::HasPosition() const
{
	return m_Position.has_value();
}
void PositionDto::SetPosition(const std::shared_ptr<GeoCoord>& Value)
{
	m_Position = Value;
}
bool PositionDto::GetOffsite() const
{
	return m_Offsite.value();
}

bool PositionDto::HasOffsite() const
{
	return m_Offsite.has_value();
}
void PositionDto::SetOffsite(const bool& Value)
{
	m_Offsite = Value;
}
utility::string_t PositionDto::GetDeviceId() const
{
	return m_DeviceId.value();
}

bool PositionDto::HasDeviceId() const
{
	return m_DeviceId.has_value();
}
void PositionDto::SetDeviceId(const utility::string_t& Value)
{
	m_DeviceId = Value;
}
utility::string_t PositionDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool PositionDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
double PositionDto::GetGeofenceSearchRadius() const
{
	return m_GeofenceSearchRadius.value();
}

bool PositionDto::HasGeofenceSearchRadius() const
{
	return m_GeofenceSearchRadius.has_value();
}
bool PositionDto::GetSpectator() const
{
	return m_Spectator.value();
}

bool PositionDto::HasSpectator() const
{
	return m_Spectator.has_value();
}
void PositionDto::SetSpectator(const bool& Value)
{
	m_Spectator = Value;
}

PositionDtoDataPage::PositionDtoDataPage()
{
}
PositionDtoDataPage::~PositionDtoDataPage()
{
}

utility::string_t PositionDtoDataPage::ToJson() const
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

void PositionDtoDataPage::FromJson(const utility::string_t& Val)
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


const std::vector<std::shared_ptr<PositionDto>>& PositionDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool PositionDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void PositionDtoDataPage::SetItems(const std::vector<std::shared_ptr<PositionDto>>& Value)
{
	m_Items = Value;
}
int32_t PositionDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool PositionDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void PositionDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t PositionDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool PositionDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void PositionDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t PositionDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool PositionDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void PositionDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t PositionDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool PositionDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void PositionDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
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

Rotation::Rotation()
{
}
Rotation::~Rotation()
{
}

utility::string_t Rotation::ToJson() const
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

	if (m_W.has_value())
	{
		rapidjson::Value WValue(TypeToJsonValue(m_W, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("w", WValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void Rotation::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("w"))
	{
		const rapidjson::Value& WValue = JsonDoc["w"];

		if (WValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WValue, m_W);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member w is null!");
		}
	}
}


float Rotation::GetX() const
{
	return m_X.value();
}

bool Rotation::HasX() const
{
	return m_X.has_value();
}
void Rotation::SetX(float Value)
{
	m_X = Value;
}
float Rotation::GetY() const
{
	return m_Y.value();
}

bool Rotation::HasY() const
{
	return m_Y.has_value();
}
void Rotation::SetY(float Value)
{
	m_Y = Value;
}
float Rotation::GetZ() const
{
	return m_Z.value();
}

bool Rotation::HasZ() const
{
	return m_Z.has_value();
}
void Rotation::SetZ(float Value)
{
	m_Z = Value;
}
float Rotation::GetW() const
{
	return m_W.value();
}

bool Rotation::HasW() const
{
	return m_W.has_value();
}
void Rotation::SetW(float Value)
{
	m_W = Value;
}

Scale::Scale()
{
}
Scale::~Scale()
{
}

utility::string_t Scale::ToJson() const
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

void Scale::FromJson(const utility::string_t& Val)
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


float Scale::GetX() const
{
	return m_X.value();
}

bool Scale::HasX() const
{
	return m_X.has_value();
}
void Scale::SetX(float Value)
{
	m_X = Value;
}
float Scale::GetY() const
{
	return m_Y.value();
}

bool Scale::HasY() const
{
	return m_Y.has_value();
}
void Scale::SetY(float Value)
{
	m_Y = Value;
}
float Scale::GetZ() const
{
	return m_Z.value();
}

bool Scale::HasZ() const
{
	return m_Z.has_value();
}
void Scale::SetZ(float Value)
{
	m_Z = Value;
}

SpaceTimeDto::SpaceTimeDto()
{
}
SpaceTimeDto::~SpaceTimeDto()
{
}

utility::string_t SpaceTimeDto::ToJson() const
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

	if (m_SpaceTimeType.has_value())
	{
		rapidjson::Value SpaceTimeTypeValue(TypeToJsonValue(m_SpaceTimeType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceTimeType", SpaceTimeTypeValue, JsonDoc.GetAllocator());
	}

	if (m_GroupId.has_value())
	{
		rapidjson::Value GroupIdValue(TypeToJsonValue(m_GroupId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupId", GroupIdValue, JsonDoc.GetAllocator());
	}

	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_Location.has_value())
	{
		rapidjson::Value LocationValue(TypeToJsonValue(m_Location, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("location", LocationValue, JsonDoc.GetAllocator());
	}

	if (m_Offsite.has_value())
	{
		rapidjson::Value OffsiteValue(TypeToJsonValue(m_Offsite, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("offsite", OffsiteValue, JsonDoc.GetAllocator());
	}

	if (m_PoiId.has_value())
	{
		rapidjson::Value PoiIdValue(TypeToJsonValue(m_PoiId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("poiId", PoiIdValue, JsonDoc.GetAllocator());
	}

	if (m_PrototypeId.has_value())
	{
		rapidjson::Value PrototypeIdValue(TypeToJsonValue(m_PrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeId", PrototypeIdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SpaceTimeDto::FromJson(const utility::string_t& Val)
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
	}

	if (JsonDoc.HasMember("spaceTimeType"))
	{
		const rapidjson::Value& SpaceTimeTypeValue = JsonDoc["spaceTimeType"];

		if (SpaceTimeTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceTimeTypeValue, m_SpaceTimeType);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member spaceTimeType is null!");
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

	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId);
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

	if (JsonDoc.HasMember("offsite"))
	{
		const rapidjson::Value& OffsiteValue = JsonDoc["offsite"];

		if (OffsiteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OffsiteValue, m_Offsite);
		}
	}

	if (JsonDoc.HasMember("poiId"))
	{
		const rapidjson::Value& PoiIdValue = JsonDoc["poiId"];

		if (PoiIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PoiIdValue, m_PoiId);
		}
	}

	if (JsonDoc.HasMember("prototypeId"))
	{
		const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

		if (PrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeIdValue, m_PrototypeId);
		}
	}
}


utility::string_t SpaceTimeDto::GetId() const
{
	return m_Id.value();
}

bool SpaceTimeDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t SpaceTimeDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool SpaceTimeDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
std::shared_ptr<SpaceTimeType> SpaceTimeDto::GetSpaceTimeType() const
{
	return m_SpaceTimeType.value();
}

bool SpaceTimeDto::HasSpaceTimeType() const
{
	return m_SpaceTimeType.has_value();
}
void SpaceTimeDto::SetSpaceTimeType(const std::shared_ptr<SpaceTimeType>& Value)
{
	m_SpaceTimeType = Value;
}
utility::string_t SpaceTimeDto::GetGroupId() const
{
	return m_GroupId.value();
}

bool SpaceTimeDto::HasGroupId() const
{
	return m_GroupId.has_value();
}
void SpaceTimeDto::SetGroupId(const utility::string_t& Value)
{
	m_GroupId = Value;
}
utility::string_t SpaceTimeDto::GetUserId() const
{
	return m_UserId.value();
}

bool SpaceTimeDto::HasUserId() const
{
	return m_UserId.has_value();
}
std::shared_ptr<GeoCoord> SpaceTimeDto::GetLocation() const
{
	return m_Location.value();
}

bool SpaceTimeDto::HasLocation() const
{
	return m_Location.has_value();
}
void SpaceTimeDto::SetLocation(const std::shared_ptr<GeoCoord>& Value)
{
	m_Location = Value;
}
bool SpaceTimeDto::GetOffsite() const
{
	return m_Offsite.value();
}

bool SpaceTimeDto::HasOffsite() const
{
	return m_Offsite.has_value();
}
void SpaceTimeDto::SetOffsite(const bool& Value)
{
	m_Offsite = Value;
}
utility::string_t SpaceTimeDto::GetPoiId() const
{
	return m_PoiId.value();
}

bool SpaceTimeDto::HasPoiId() const
{
	return m_PoiId.has_value();
}
void SpaceTimeDto::SetPoiId(const utility::string_t& Value)
{
	m_PoiId = Value;
}
utility::string_t SpaceTimeDto::GetPrototypeId() const
{
	return m_PrototypeId.value();
}

bool SpaceTimeDto::HasPrototypeId() const
{
	return m_PrototypeId.has_value();
}
void SpaceTimeDto::SetPrototypeId(const utility::string_t& Value)
{
	m_PrototypeId = Value;
}

SpaceTimeDtoDataPage::SpaceTimeDtoDataPage()
{
}
SpaceTimeDtoDataPage::~SpaceTimeDtoDataPage()
{
}

utility::string_t SpaceTimeDtoDataPage::ToJson() const
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

void SpaceTimeDtoDataPage::FromJson(const utility::string_t& Val)
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


const std::vector<std::shared_ptr<SpaceTimeDto>>& SpaceTimeDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool SpaceTimeDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void SpaceTimeDtoDataPage::SetItems(const std::vector<std::shared_ptr<SpaceTimeDto>>& Value)
{
	m_Items = Value;
}
int32_t SpaceTimeDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool SpaceTimeDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void SpaceTimeDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t SpaceTimeDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool SpaceTimeDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void SpaceTimeDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t SpaceTimeDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool SpaceTimeDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void SpaceTimeDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t SpaceTimeDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool SpaceTimeDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void SpaceTimeDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

SpaceTimeType::SpaceTimeType()
{
}
SpaceTimeType::~SpaceTimeType()
{
}

utility::string_t SpaceTimeType::ToJson() const
{
	switch (Value)
	{
		case eSpaceTimeType::EVENT:
			return "Event";
		case eSpaceTimeType::POSITION:
			return "Position";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void SpaceTimeType::FromJson(const utility::string_t& Val)
{
	if (Val == "Event")
	{
		Value = eSpaceTimeType::EVENT;
	}
	else if (Val == "Position")
	{
		Value = eSpaceTimeType::POSITION;
	}
}

SpaceTimeType::eSpaceTimeType SpaceTimeType::GetValue() const
{
	return Value;
}

void SpaceTimeType::SetValue(SpaceTimeType::eSpaceTimeType const InValue)
{
	Value = InValue;
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

Transform::Transform()
{
}
Transform::~Transform()
{
}

utility::string_t Transform::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Scale.has_value())
	{
		rapidjson::Value ScaleValue(TypeToJsonValue(m_Scale, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scale", ScaleValue, JsonDoc.GetAllocator());
	}

	if (m_Translation.has_value())
	{
		rapidjson::Value TranslationValue(TypeToJsonValue(m_Translation, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("translation", TranslationValue, JsonDoc.GetAllocator());
	}

	if (m_Rotation.has_value())
	{
		rapidjson::Value RotationValue(TypeToJsonValue(m_Rotation, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("rotation", RotationValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void Transform::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


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

	if (JsonDoc.HasMember("translation"))
	{
		const rapidjson::Value& TranslationValue = JsonDoc["translation"];

		if (TranslationValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TranslationValue, m_Translation);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member translation is null!");
		}
	}

	if (JsonDoc.HasMember("rotation"))
	{
		const rapidjson::Value& RotationValue = JsonDoc["rotation"];

		if (RotationValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RotationValue, m_Rotation);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member rotation is null!");
		}
	}
}


std::shared_ptr<Scale> Transform::GetScale() const
{
	return m_Scale.value();
}

bool Transform::HasScale() const
{
	return m_Scale.has_value();
}
void Transform::SetScale(const std::shared_ptr<Scale>& Value)
{
	m_Scale = Value;
}
std::shared_ptr<Translation> Transform::GetTranslation() const
{
	return m_Translation.value();
}

bool Transform::HasTranslation() const
{
	return m_Translation.has_value();
}
void Transform::SetTranslation(const std::shared_ptr<Translation>& Value)
{
	m_Translation = Value;
}
std::shared_ptr<Rotation> Transform::GetRotation() const
{
	return m_Rotation.value();
}

bool Transform::HasRotation() const
{
	return m_Rotation.has_value();
}
void Transform::SetRotation(const std::shared_ptr<Rotation>& Value)
{
	m_Rotation = Value;
}

Translation::Translation()
{
}
Translation::~Translation()
{
}

utility::string_t Translation::ToJson() const
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

void Translation::FromJson(const utility::string_t& Val)
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


float Translation::GetX() const
{
	return m_X.value();
}

bool Translation::HasX() const
{
	return m_X.has_value();
}
void Translation::SetX(float Value)
{
	m_X = Value;
}
float Translation::GetY() const
{
	return m_Y.value();
}

bool Translation::HasY() const
{
	return m_Y.has_value();
}
void Translation::SetY(float Value)
{
	m_Y = Value;
}
float Translation::GetZ() const
{
	return m_Z.value();
}

bool Translation::HasZ() const
{
	return m_Z.has_value();
}
void Translation::SetZ(float Value)
{
	m_Z = Value;
}


} // namespace csp::services::generated::spatialdataservice