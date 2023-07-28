

#include "Web/Json.h"
#include "Web/Json_HttpPayload.h"
#include "Debug/Logging.h"

#include "Dto.h"

#include <optional>


using namespace csp::web;


namespace csp::services::generated::aggregationservice
{


    AltitudeMode::AltitudeMode() { }
    AltitudeMode::~AltitudeMode() { }

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

    GroupRoleDto::GroupRoleDto() { }
    GroupRoleDto::~GroupRoleDto() { }

    utility::string_t GroupRoleDto::ToJson() const
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
            
                if (m_GroupRoles.has_value())
                {
                    rapidjson::Value GroupRolesValue(
                        TypeToJsonValue(m_GroupRoles, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "groupRoles",
                        GroupRolesValue,
                        JsonDoc.GetAllocator()
                    );
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
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
            
                if (JsonDoc.HasMember("groupRoles"))
                {
                    const rapidjson::Value& GroupRolesValue = JsonDoc["groupRoles"];

                    if (GroupRolesValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GroupRolesValue, m_GroupRoles);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member groupRoles is null!");
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

            void GroupRoleDto::SetUserId(
                    const utility::string_t& Value
                )
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

            void GroupRoleDto::SetGroupId(
                    const utility::string_t& Value
                )
            {
                    m_GroupId = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    GroupRoleDto::GetGroupRoles() const
            {
                    return m_GroupRoles.value();
                }

            bool GroupRoleDto::HasGroupRoles() const
            {
                return m_GroupRoles.has_value();
            }

            void GroupRoleDto::SetGroupRoles(
                    const std::vector<utility::string_t>& Value
                )
            {
                    m_GroupRoles = Value;
                }
                
        

    Icon::Icon() { }
    Icon::~Icon() { }

    utility::string_t Icon::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Href.has_value())
                {
                    rapidjson::Value HrefValue(
                        TypeToJsonValue(m_Href, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "href",
                        HrefValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member href is null!");
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

            void Icon::SetHref(
                    const utility::string_t& Value
                )
            {
                    m_Href = Value;
                }
                
        

    IconStyle::IconStyle() { }
    IconStyle::~IconStyle() { }

    utility::string_t IconStyle::ToJson() const
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
            
                if (m_Color.has_value())
                {
                    rapidjson::Value ColorValue(
                        TypeToJsonValue(m_Color, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "color",
                        ColorValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ColorMode.has_value())
                {
                    rapidjson::Value ColorModeValue(
                        TypeToJsonValue(m_ColorMode, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "colorMode",
                        ColorModeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Scale.has_value())
                {
                    rapidjson::Value ScaleValue(
                        TypeToJsonValue(m_Scale, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "scale",
                        ScaleValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Icon.has_value())
                {
                    rapidjson::Value IconValue(
                        TypeToJsonValue(m_Icon, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "icon",
                        IconValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("color"))
                {
                    const rapidjson::Value& ColorValue = JsonDoc["color"];

                    if (ColorValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ColorValue, m_Color);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member color is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("colorMode"))
                {
                    const rapidjson::Value& ColorModeValue = JsonDoc["colorMode"];

                    if (ColorModeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ColorModeValue, m_ColorMode);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member colorMode is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member scale is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member icon is null!");
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

            void IconStyle::SetId(
                    const utility::string_t& Value
                )
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

            void IconStyle::SetColor(
                    const utility::string_t& Value
                )
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

            void IconStyle::SetColorMode(
                    const utility::string_t& Value
                )
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

            void IconStyle::SetIcon(
                    const std::shared_ptr<Icon>& Value
                )
            {
                    m_Icon = Value;
                }
                
        

    Kml::Kml() { }
    Kml::~Kml() { }

    utility::string_t Kml::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Document.has_value())
                {
                    rapidjson::Value DocumentValue(
                        TypeToJsonValue(m_Document, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "document",
                        DocumentValue,
                        JsonDoc.GetAllocator()
                    );
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member document is null!");
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

            void Kml::SetDocument(
                    const std::shared_ptr<PositionKml>& Value
                )
            {
                    m_Document = Value;
                }
                
        

    LineString::LineString() { }
    LineString::~LineString() { }

    utility::string_t LineString::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Extrude.has_value())
                {
                    rapidjson::Value ExtrudeValue(
                        TypeToJsonValue(m_Extrude, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "extrude",
                        ExtrudeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Tessellate.has_value())
                {
                    rapidjson::Value TessellateValue(
                        TypeToJsonValue(m_Tessellate, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "tessellate",
                        TessellateValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AltitudeMode.has_value())
                {
                    rapidjson::Value AltitudeModeValue(
                        TypeToJsonValue(m_AltitudeMode, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "altitudeMode",
                        AltitudeModeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Coordinates.has_value())
                {
                    rapidjson::Value CoordinatesValue(
                        TypeToJsonValue(m_Coordinates, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "coordinates",
                        CoordinatesValue,
                        JsonDoc.GetAllocator()
                    );
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member extrude is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member tessellate is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member altitudeMode is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("coordinates"))
                {
                    const rapidjson::Value& CoordinatesValue = JsonDoc["coordinates"];

                    if (CoordinatesValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(CoordinatesValue, m_Coordinates);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member coordinates is null!");
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

            void LineString::SetExtrude(
                    const bool& Value
                )
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

            void LineString::SetTessellate(
                    const bool& Value
                )
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

            void LineString::SetAltitudeMode(
                    const std::shared_ptr<AltitudeMode>& Value
                )
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

            void LineString::SetCoordinates(
                    const utility::string_t& Value
                )
            {
                    m_Coordinates = Value;
                }
                
        

    LookAt::LookAt() { }
    LookAt::~LookAt() { }

    utility::string_t LookAt::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Longitude.has_value())
                {
                    rapidjson::Value LongitudeValue(
                        TypeToJsonValue(m_Longitude, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "longitude",
                        LongitudeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Latitude.has_value())
                {
                    rapidjson::Value LatitudeValue(
                        TypeToJsonValue(m_Latitude, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "latitude",
                        LatitudeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Altitude.has_value())
                {
                    rapidjson::Value AltitudeValue(
                        TypeToJsonValue(m_Altitude, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "altitude",
                        AltitudeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Range.has_value())
                {
                    rapidjson::Value RangeValue(
                        TypeToJsonValue(m_Range, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "range",
                        RangeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Tilt.has_value())
                {
                    rapidjson::Value TiltValue(
                        TypeToJsonValue(m_Tilt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "tilt",
                        TiltValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Heading.has_value())
                {
                    rapidjson::Value HeadingValue(
                        TypeToJsonValue(m_Heading, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "heading",
                        HeadingValue,
                        JsonDoc.GetAllocator()
                    );
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member longitude is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member latitude is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member altitude is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member range is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member tilt is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member heading is null!");
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
                
        

    Model::Model() { }
    Model::~Model() { }

    utility::string_t Model::ToJson() const
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
            
                if (m_AltitudeMode.has_value())
                {
                    rapidjson::Value AltitudeModeValue(
                        TypeToJsonValue(m_AltitudeMode, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "altitudeMode",
                        AltitudeModeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Location.has_value())
                {
                    rapidjson::Value LocationValue(
                        TypeToJsonValue(m_Location, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "location",
                        LocationValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Orientation.has_value())
                {
                    rapidjson::Value OrientationValue(
                        TypeToJsonValue(m_Orientation, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "orientation",
                        OrientationValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Scale.has_value())
                {
                    rapidjson::Value ScaleValue(
                        TypeToJsonValue(m_Scale, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "scale",
                        ScaleValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Link.has_value())
                {
                    rapidjson::Value LinkValue(
                        TypeToJsonValue(m_Link, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "link",
                        LinkValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member altitudeMode is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member location is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member orientation is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member scale is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member link is null!");
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

            void Model::SetId(
                    const utility::string_t& Value
                )
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

            void Model::SetAltitudeMode(
                    const std::shared_ptr<AltitudeMode>& Value
                )
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

            void Model::SetLocation(
                    const std::shared_ptr<ModelLocation>& Value
                )
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

            void Model::SetOrientation(
                    const std::shared_ptr<ModelOrientation>& Value
                )
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

            void Model::SetScale(
                    const std::shared_ptr<ModelScale>& Value
                )
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

            void Model::SetLink(
                    const std::shared_ptr<ModelLink>& Value
                )
            {
                    m_Link = Value;
                }
                
        

    ModelLink::ModelLink() { }
    ModelLink::~ModelLink() { }

    utility::string_t ModelLink::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Href.has_value())
                {
                    rapidjson::Value HrefValue(
                        TypeToJsonValue(m_Href, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "href",
                        HrefValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member href is null!");
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

            void ModelLink::SetHref(
                    const utility::string_t& Value
                )
            {
                    m_Href = Value;
                }
                
        

    ModelLocation::ModelLocation() { }
    ModelLocation::~ModelLocation() { }

    utility::string_t ModelLocation::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Longitude.has_value())
                {
                    rapidjson::Value LongitudeValue(
                        TypeToJsonValue(m_Longitude, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "longitude",
                        LongitudeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Latitude.has_value())
                {
                    rapidjson::Value LatitudeValue(
                        TypeToJsonValue(m_Latitude, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "latitude",
                        LatitudeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Altitude.has_value())
                {
                    rapidjson::Value AltitudeValue(
                        TypeToJsonValue(m_Altitude, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "altitude",
                        AltitudeValue,
                        JsonDoc.GetAllocator()
                    );
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member longitude is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member latitude is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member altitude is null!");
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
                
        

    ModelOrientation::ModelOrientation() { }
    ModelOrientation::~ModelOrientation() { }

    utility::string_t ModelOrientation::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Heading.has_value())
                {
                    rapidjson::Value HeadingValue(
                        TypeToJsonValue(m_Heading, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "heading",
                        HeadingValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Tilt.has_value())
                {
                    rapidjson::Value TiltValue(
                        TypeToJsonValue(m_Tilt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "tilt",
                        TiltValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Roll.has_value())
                {
                    rapidjson::Value RollValue(
                        TypeToJsonValue(m_Roll, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "roll",
                        RollValue,
                        JsonDoc.GetAllocator()
                    );
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member heading is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member tilt is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member roll is null!");
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
                
        

    ModelScale::ModelScale() { }
    ModelScale::~ModelScale() { }

    utility::string_t ModelScale::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_X.has_value())
                {
                    rapidjson::Value XValue(
                        TypeToJsonValue(m_X, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "x",
                        XValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Y.has_value())
                {
                    rapidjson::Value YValue(
                        TypeToJsonValue(m_Y, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "y",
                        YValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Z.has_value())
                {
                    rapidjson::Value ZValue(
                        TypeToJsonValue(m_Z, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "z",
                        ZValue,
                        JsonDoc.GetAllocator()
                    );
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member x is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member y is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member z is null!");
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
                
        

    Placemark::Placemark() { }
    Placemark::~Placemark() { }

    utility::string_t Placemark::ToJson() const
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
            
                if (m_StyleUrl.has_value())
                {
                    rapidjson::Value StyleUrlValue(
                        TypeToJsonValue(m_StyleUrl, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "styleUrl",
                        StyleUrlValue,
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
            
                if (m_LineString.has_value())
                {
                    rapidjson::Value LineStringValue(
                        TypeToJsonValue(m_LineString, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "lineString",
                        LineStringValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Point.has_value())
                {
                    rapidjson::Value PointValue(
                        TypeToJsonValue(m_Point, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "point",
                        PointValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Model.has_value())
                {
                    rapidjson::Value ModelValue(
                        TypeToJsonValue(m_Model, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "model",
                        ModelValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_LookAt.has_value())
                {
                    rapidjson::Value LookAtValue(
                        TypeToJsonValue(m_LookAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "lookAt",
                        LookAtValue,
                        JsonDoc.GetAllocator()
                    );
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
            
                if (JsonDoc.HasMember("styleUrl"))
                {
                    const rapidjson::Value& StyleUrlValue = JsonDoc["styleUrl"];

                    if (StyleUrlValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(StyleUrlValue, m_StyleUrl);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member styleUrl is null!");
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
            
                if (JsonDoc.HasMember("lineString"))
                {
                    const rapidjson::Value& LineStringValue = JsonDoc["lineString"];

                    if (LineStringValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(LineStringValue, m_LineString);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member lineString is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member point is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member model is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member lookAt is null!");
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

            void Placemark::SetId(
                    const utility::string_t& Value
                )
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

            void Placemark::SetName(
                    const utility::string_t& Value
                )
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

            void Placemark::SetStyleUrl(
                    const utility::string_t& Value
                )
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

            void Placemark::SetDescription(
                    const utility::string_t& Value
                )
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

            void Placemark::SetLineString(
                    const std::shared_ptr<LineString>& Value
                )
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

            void Placemark::SetPoint(
                    const std::shared_ptr<Point>& Value
                )
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

            void Placemark::SetModel(
                    const std::shared_ptr<Model>& Value
                )
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

            void Placemark::SetLookAt(
                    const std::shared_ptr<LookAt>& Value
                )
            {
                    m_LookAt = Value;
                }
                
        

    Point::Point() { }
    Point::~Point() { }

    utility::string_t Point::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Tessellate.has_value())
                {
                    rapidjson::Value TessellateValue(
                        TypeToJsonValue(m_Tessellate, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "tessellate",
                        TessellateValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AltitudeMode.has_value())
                {
                    rapidjson::Value AltitudeModeValue(
                        TypeToJsonValue(m_AltitudeMode, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "altitudeMode",
                        AltitudeModeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Coordinates.has_value())
                {
                    rapidjson::Value CoordinatesValue(
                        TypeToJsonValue(m_Coordinates, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "coordinates",
                        CoordinatesValue,
                        JsonDoc.GetAllocator()
                    );
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member tessellate is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member altitudeMode is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("coordinates"))
                {
                    const rapidjson::Value& CoordinatesValue = JsonDoc["coordinates"];

                    if (CoordinatesValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(CoordinatesValue, m_Coordinates);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member coordinates is null!");
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

            void Point::SetTessellate(
                    const bool& Value
                )
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

            void Point::SetAltitudeMode(
                    const std::shared_ptr<AltitudeMode>& Value
                )
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

            void Point::SetCoordinates(
                    const utility::string_t& Value
                )
            {
                    m_Coordinates = Value;
                }
                
        

    PositionKml::PositionKml() { }
    PositionKml::~PositionKml() { }

    utility::string_t PositionKml::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
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
            
                if (m_Style.has_value())
                {
                    rapidjson::Value StyleValue(
                        TypeToJsonValue(m_Style, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "style",
                        StyleValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Visibility.has_value())
                {
                    rapidjson::Value VisibilityValue(
                        TypeToJsonValue(m_Visibility, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "visibility",
                        VisibilityValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Open.has_value())
                {
                    rapidjson::Value OpenValue(
                        TypeToJsonValue(m_Open, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "open",
                        OpenValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Placemark.has_value())
                {
                    rapidjson::Value PlacemarkValue(
                        TypeToJsonValue(m_Placemark, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "placemark",
                        PlacemarkValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("style"))
                {
                    const rapidjson::Value& StyleValue = JsonDoc["style"];

                    if (StyleValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(StyleValue, m_Style);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member style is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member visibility is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member open is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("placemark"))
                {
                    const rapidjson::Value& PlacemarkValue = JsonDoc["placemark"];

                    if (PlacemarkValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PlacemarkValue, m_Placemark);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member placemark is null!");
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

            void PositionKml::SetName(
                    const utility::string_t& Value
                )
            {
                    m_Name = Value;
                }
                
        
            const std::vector<std::shared_ptr<Style>>&
                    PositionKml::GetStyle() const
            {
                    return m_Style.value();
                }

            bool PositionKml::HasStyle() const
            {
                return m_Style.has_value();
            }

            void PositionKml::SetStyle(
                    const std::vector<std::shared_ptr<Style>>& Value
                )
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

            void PositionKml::SetVisibility(
                    const bool& Value
                )
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

            void PositionKml::SetOpen(
                    const bool& Value
                )
            {
                    m_Open = Value;
                }
                
        
            const std::vector<std::shared_ptr<Placemark>>&
                    PositionKml::GetPlacemark() const
            {
                    return m_Placemark.value();
                }

            bool PositionKml::HasPlacemark() const
            {
                return m_Placemark.has_value();
            }

            void PositionKml::SetPlacemark(
                    const std::vector<std::shared_ptr<Placemark>>& Value
                )
            {
                    m_Placemark = Value;
                }
                
        

    ServiceRequest::ServiceRequest() { }
    ServiceRequest::~ServiceRequest() { }

    utility::string_t ServiceRequest::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_ServiceName.has_value())
                {
                    rapidjson::Value ServiceNameValue(
                        TypeToJsonValue(m_ServiceName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "serviceName",
                        ServiceNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_OperationName.has_value())
                {
                    rapidjson::Value OperationNameValue(
                        TypeToJsonValue(m_OperationName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "operationName",
                        OperationNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Help.has_value())
                {
                    rapidjson::Value HelpValue(
                        TypeToJsonValue(m_Help, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "help",
                        HelpValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Parameters.has_value())
                {
                    rapidjson::Value ParametersValue(
                        TypeToJsonValue(m_Parameters, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "parameters",
                        ParametersValue,
                        JsonDoc.GetAllocator()
                    );
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member serviceName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("operationName"))
                {
                    const rapidjson::Value& OperationNameValue = JsonDoc["operationName"];

                    if (OperationNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(OperationNameValue, m_OperationName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member operationName is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member help is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("parameters"))
                {
                    const rapidjson::Value& ParametersValue = JsonDoc["parameters"];

                    if (ParametersValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ParametersValue, m_Parameters);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member parameters is null!");
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

            void ServiceRequest::SetServiceName(
                    const utility::string_t& Value
                )
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

            void ServiceRequest::SetOperationName(
                    const utility::string_t& Value
                )
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

            void ServiceRequest::SetHelp(
                    const bool& Value
                )
            {
                    m_Help = Value;
                }
                
        
            const std::map<utility::string_t, utility::string_t>&
                    ServiceRequest::GetParameters() const
            {
                    return m_Parameters.value();
                }

            bool ServiceRequest::HasParameters() const
            {
                return m_Parameters.has_value();
            }

            void ServiceRequest::SetParameters(
                    const std::map<utility::string_t, utility::string_t>& Value
                )
            {
                    m_Parameters = Value;
                }
                
        

    ServiceResponse::ServiceResponse() { }
    ServiceResponse::~ServiceResponse() { }

    utility::string_t ServiceResponse::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Success.has_value())
                {
                    rapidjson::Value SuccessValue(
                        TypeToJsonValue(m_Success, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "success",
                        SuccessValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_StatusCode.has_value())
                {
                    rapidjson::Value StatusCodeValue(
                        TypeToJsonValue(m_StatusCode, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "statusCode",
                        StatusCodeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_StatusReason.has_value())
                {
                    rapidjson::Value StatusReasonValue(
                        TypeToJsonValue(m_StatusReason, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "statusReason",
                        StatusReasonValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ErrorCode.has_value())
                {
                    rapidjson::Value ErrorCodeValue(
                        TypeToJsonValue(m_ErrorCode, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "errorCode",
                        ErrorCodeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_OperationResult.has_value())
                {
                    rapidjson::Value OperationResultValue(
                        TypeToJsonValue(m_OperationResult, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "operationResult",
                        OperationResultValue,
                        JsonDoc.GetAllocator()
                    );
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member success is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("statusCode"))
                {
                    const rapidjson::Value& StatusCodeValue = JsonDoc["statusCode"];

                    if (StatusCodeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(StatusCodeValue, m_StatusCode);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member statusCode is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("statusReason"))
                {
                    const rapidjson::Value& StatusReasonValue = JsonDoc["statusReason"];

                    if (StatusReasonValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(StatusReasonValue, m_StatusReason);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member statusReason is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("errorCode"))
                {
                    const rapidjson::Value& ErrorCodeValue = JsonDoc["errorCode"];

                    if (ErrorCodeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ErrorCodeValue, m_ErrorCode);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member errorCode is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("operationResult"))
                {
                    const rapidjson::Value& OperationResultValue = JsonDoc["operationResult"];

                    if (OperationResultValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(OperationResultValue, m_OperationResult);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member operationResult is null!");
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

            void ServiceResponse::SetSuccess(
                    const bool& Value
                )
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

            void ServiceResponse::SetStatusReason(
                    const utility::string_t& Value
                )
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

            void ServiceResponse::SetErrorCode(
                    const utility::string_t& Value
                )
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

            void ServiceResponse::SetOperationResult(
                    const std::shared_ptr<rapidjson::Document>& Value
                )
            {
                    m_OperationResult = Value;
                }
                
        

    ShopifyCartDto::ShopifyCartDto() { }
    ShopifyCartDto::~ShopifyCartDto() { }

    utility::string_t ShopifyCartDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_SpaceId.has_value())
                {
                    rapidjson::Value SpaceIdValue(
                        TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "spaceId",
                        SpaceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ShopifyCartId.has_value())
                {
                    rapidjson::Value ShopifyCartIdValue(
                        TypeToJsonValue(m_ShopifyCartId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "shopifyCartId",
                        ShopifyCartIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Lines.has_value())
                {
                    rapidjson::Value LinesValue(
                        TypeToJsonValue(m_Lines, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "lines",
                        LinesValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_TotalQuantity.has_value())
                {
                    rapidjson::Value TotalQuantityValue(
                        TypeToJsonValue(m_TotalQuantity, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "totalQuantity",
                        TotalQuantityValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member spaceId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("shopifyCartId"))
                {
                    const rapidjson::Value& ShopifyCartIdValue = JsonDoc["shopifyCartId"];

                    if (ShopifyCartIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ShopifyCartIdValue, m_ShopifyCartId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member shopifyCartId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("lines"))
                {
                    const rapidjson::Value& LinesValue = JsonDoc["lines"];

                    if (LinesValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(LinesValue, m_Lines);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member lines is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member totalQuantity is null!");
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

            void ShopifyCartDto::SetSpaceId(
                    const utility::string_t& Value
                )
            {
                    m_SpaceId = Value;
                }
                
        
            utility::string_t ShopifyCartDto::GetShopifyCartId() const
            {
                    return m_ShopifyCartId.value();
                }

            bool ShopifyCartDto::HasShopifyCartId() const
            {
                return m_ShopifyCartId.has_value();
            }

            void ShopifyCartDto::SetShopifyCartId(
                    const utility::string_t& Value
                )
            {
                    m_ShopifyCartId = Value;
                }
                
        
            const std::vector<std::shared_ptr<ShopifyCartLineDto>>&
                    ShopifyCartDto::GetLines() const
            {
                    return m_Lines.value();
                }

            bool ShopifyCartDto::HasLines() const
            {
                return m_Lines.has_value();
            }

            void ShopifyCartDto::SetLines(
                    const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value
                )
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

            void ShopifyCartDto::SetTotalQuantity(int32_t Value)
            {
                    m_TotalQuantity = Value;
                }
                
        

    ShopifyCartLineDto::ShopifyCartLineDto() { }
    ShopifyCartLineDto::~ShopifyCartLineDto() { }

    utility::string_t ShopifyCartLineDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_ShopifyCartLineId.has_value())
                {
                    rapidjson::Value ShopifyCartLineIdValue(
                        TypeToJsonValue(m_ShopifyCartLineId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "shopifyCartLineId",
                        ShopifyCartLineIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ProductId.has_value())
                {
                    rapidjson::Value ProductIdValue(
                        TypeToJsonValue(m_ProductId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "productId",
                        ProductIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Quantity.has_value())
                {
                    rapidjson::Value QuantityValue(
                        TypeToJsonValue(m_Quantity, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "quantity",
                        QuantityValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member shopifyCartLineId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("productId"))
                {
                    const rapidjson::Value& ProductIdValue = JsonDoc["productId"];

                    if (ProductIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ProductIdValue, m_ProductId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member productId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("quantity"))
                {
                    const rapidjson::Value& QuantityValue = JsonDoc["quantity"];

                    if (QuantityValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(QuantityValue, m_Quantity);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member quantity is null!");
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

            void ShopifyCartLineDto::SetShopifyCartLineId(
                    const utility::string_t& Value
                )
            {
                    m_ShopifyCartLineId = Value;
                }
                
        
            utility::string_t ShopifyCartLineDto::GetProductId() const
            {
                    return m_ProductId.value();
                }

            bool ShopifyCartLineDto::HasProductId() const
            {
                return m_ProductId.has_value();
            }

            void ShopifyCartLineDto::SetProductId(
                    const utility::string_t& Value
                )
            {
                    m_ProductId = Value;
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
                
        

    ShopifyCartUpdateDto::ShopifyCartUpdateDto() { }
    ShopifyCartUpdateDto::~ShopifyCartUpdateDto() { }

    utility::string_t ShopifyCartUpdateDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_SpaceId.has_value())
                {
                    rapidjson::Value SpaceIdValue(
                        TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "spaceId",
                        SpaceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ShopifyCartId.has_value())
                {
                    rapidjson::Value ShopifyCartIdValue(
                        TypeToJsonValue(m_ShopifyCartId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "shopifyCartId",
                        ShopifyCartIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_CartChanges.has_value())
                {
                    rapidjson::Value CartChangesValue(
                        TypeToJsonValue(m_CartChanges, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "cartChanges",
                        CartChangesValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member spaceId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("shopifyCartId"))
                {
                    const rapidjson::Value& ShopifyCartIdValue = JsonDoc["shopifyCartId"];

                    if (ShopifyCartIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ShopifyCartIdValue, m_ShopifyCartId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member shopifyCartId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("cartChanges"))
                {
                    const rapidjson::Value& CartChangesValue = JsonDoc["cartChanges"];

                    if (CartChangesValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(CartChangesValue, m_CartChanges);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member cartChanges is null!");
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

            void ShopifyCartUpdateDto::SetSpaceId(
                    const utility::string_t& Value
                )
            {
                    m_SpaceId = Value;
                }
                
        
            utility::string_t ShopifyCartUpdateDto::GetShopifyCartId() const
            {
                    return m_ShopifyCartId.value();
                }

            bool ShopifyCartUpdateDto::HasShopifyCartId() const
            {
                return m_ShopifyCartId.has_value();
            }

            void ShopifyCartUpdateDto::SetShopifyCartId(
                    const utility::string_t& Value
                )
            {
                    m_ShopifyCartId = Value;
                }
                
        
            const std::map<utility::string_t, bool>&
                    ShopifyCartUpdateDto::GetCartChanges() const
            {
                    return m_CartChanges.value();
                }

            bool ShopifyCartUpdateDto::HasCartChanges() const
            {
                return m_CartChanges.has_value();
            }

            void ShopifyCartUpdateDto::SetCartChanges(
                    const std::map<utility::string_t, bool>& Value
                )
            {
                    m_CartChanges = Value;
                }
                
        

    ShopifyCheckoutDto::ShopifyCheckoutDto() { }
    ShopifyCheckoutDto::~ShopifyCheckoutDto() { }

    utility::string_t ShopifyCheckoutDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_StoreUrl.has_value())
                {
                    rapidjson::Value StoreUrlValue(
                        TypeToJsonValue(m_StoreUrl, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "storeUrl",
                        StoreUrlValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_CheckoutUrl.has_value())
                {
                    rapidjson::Value CheckoutUrlValue(
                        TypeToJsonValue(m_CheckoutUrl, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "checkoutUrl",
                        CheckoutUrlValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member storeUrl is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("checkoutUrl"))
                {
                    const rapidjson::Value& CheckoutUrlValue = JsonDoc["checkoutUrl"];

                    if (CheckoutUrlValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(CheckoutUrlValue, m_CheckoutUrl);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member checkoutUrl is null!");
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

            void ShopifyCheckoutDto::SetStoreUrl(
                    const utility::string_t& Value
                )
            {
                    m_StoreUrl = Value;
                }
                
        
            utility::string_t ShopifyCheckoutDto::GetCheckoutUrl() const
            {
                    return m_CheckoutUrl.value();
                }

            bool ShopifyCheckoutDto::HasCheckoutUrl() const
            {
                return m_CheckoutUrl.has_value();
            }

            void ShopifyCheckoutDto::SetCheckoutUrl(
                    const utility::string_t& Value
                )
            {
                    m_CheckoutUrl = Value;
                }
                
        

    ShopifyProductDto::ShopifyProductDto() { }
    ShopifyProductDto::~ShopifyProductDto() { }

    utility::string_t ShopifyProductDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
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
            
                if (m_Title.has_value())
                {
                    rapidjson::Value TitleValue(
                        TypeToJsonValue(m_Title, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "title",
                        TitleValue,
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
            
                if (m_Variants.has_value())
                {
                    rapidjson::Value VariantsValue(
                        TypeToJsonValue(m_Variants, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "variants",
                        VariantsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Media.has_value())
                {
                    rapidjson::Value MediaValue(
                        TypeToJsonValue(m_Media, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "media",
                        MediaValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
                    }
                    
                }
            
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
            
                if (JsonDoc.HasMember("title"))
                {
                    const rapidjson::Value& TitleValue = JsonDoc["title"];

                    if (TitleValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(TitleValue, m_Title);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member title is null!");
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
            
                if (JsonDoc.HasMember("variants"))
                {
                    const rapidjson::Value& VariantsValue = JsonDoc["variants"];

                    if (VariantsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(VariantsValue, m_Variants);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member variants is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("media"))
                {
                    const rapidjson::Value& MediaValue = JsonDoc["media"];

                    if (MediaValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(MediaValue, m_Media);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member media is null!");
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

            void ShopifyProductDto::SetCreatedAt(
                    const utility::string_t& Value
                )
            {
                    m_CreatedAt = Value;
                }
                
        
            utility::string_t ShopifyProductDto::GetId() const
            {
                    return m_Id.value();
                }

            bool ShopifyProductDto::HasId() const
            {
                return m_Id.has_value();
            }

            void ShopifyProductDto::SetId(
                    const utility::string_t& Value
                )
            {
                    m_Id = Value;
                }
                
        
            utility::string_t ShopifyProductDto::GetTitle() const
            {
                    return m_Title.value();
                }

            bool ShopifyProductDto::HasTitle() const
            {
                return m_Title.has_value();
            }

            void ShopifyProductDto::SetTitle(
                    const utility::string_t& Value
                )
            {
                    m_Title = Value;
                }
                
        
            utility::string_t ShopifyProductDto::GetDescription() const
            {
                    return m_Description.value();
                }

            bool ShopifyProductDto::HasDescription() const
            {
                return m_Description.has_value();
            }

            void ShopifyProductDto::SetDescription(
                    const utility::string_t& Value
                )
            {
                    m_Description = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    ShopifyProductDto::GetTags() const
            {
                    return m_Tags.value();
                }

            bool ShopifyProductDto::HasTags() const
            {
                return m_Tags.has_value();
            }

            void ShopifyProductDto::SetTags(
                    const std::vector<utility::string_t>& Value
                )
            {
                    m_Tags = Value;
                }
                
        
            const std::vector<std::shared_ptr<ShopifyProductVariants>>&
                    ShopifyProductDto::GetVariants() const
            {
                    return m_Variants.value();
                }

            bool ShopifyProductDto::HasVariants() const
            {
                return m_Variants.has_value();
            }

            void ShopifyProductDto::SetVariants(
                    const std::vector<std::shared_ptr<ShopifyProductVariants>>& Value
                )
            {
                    m_Variants = Value;
                }
                
        
            const std::vector<std::shared_ptr<ShopifyProductMedia>>&
                    ShopifyProductDto::GetMedia() const
            {
                    return m_Media.value();
                }

            bool ShopifyProductDto::HasMedia() const
            {
                return m_Media.has_value();
            }

            void ShopifyProductDto::SetMedia(
                    const std::vector<std::shared_ptr<ShopifyProductMedia>>& Value
                )
            {
                    m_Media = Value;
                }
                
        

    ShopifyProductMedia::ShopifyProductMedia() { }
    ShopifyProductMedia::~ShopifyProductMedia() { }

    utility::string_t ShopifyProductMedia::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_MediaContentType.has_value())
                {
                    rapidjson::Value MediaContentTypeValue(
                        TypeToJsonValue(m_MediaContentType, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "mediaContentType",
                        MediaContentTypeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Alt.has_value())
                {
                    rapidjson::Value AltValue(
                        TypeToJsonValue(m_Alt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "alt",
                        AltValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Url.has_value())
                {
                    rapidjson::Value UrlValue(
                        TypeToJsonValue(m_Url, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "url",
                        UrlValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member mediaContentType is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("alt"))
                {
                    const rapidjson::Value& AltValue = JsonDoc["alt"];

                    if (AltValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AltValue, m_Alt);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member alt is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("url"))
                {
                    const rapidjson::Value& UrlValue = JsonDoc["url"];

                    if (UrlValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UrlValue, m_Url);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member url is null!");
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

            void ShopifyProductMedia::SetMediaContentType(
                    const utility::string_t& Value
                )
            {
                    m_MediaContentType = Value;
                }
                
        
            utility::string_t ShopifyProductMedia::GetAlt() const
            {
                    return m_Alt.value();
                }

            bool ShopifyProductMedia::HasAlt() const
            {
                return m_Alt.has_value();
            }

            void ShopifyProductMedia::SetAlt(
                    const utility::string_t& Value
                )
            {
                    m_Alt = Value;
                }
                
        
            utility::string_t ShopifyProductMedia::GetUrl() const
            {
                    return m_Url.value();
                }

            bool ShopifyProductMedia::HasUrl() const
            {
                return m_Url.has_value();
            }

            void ShopifyProductMedia::SetUrl(
                    const utility::string_t& Value
                )
            {
                    m_Url = Value;
                }
                
        

    ShopifyProductVariants::ShopifyProductVariants() { }
    ShopifyProductVariants::~ShopifyProductVariants() { }

    utility::string_t ShopifyProductVariants::ToJson() const
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
            
                if (m_Title.has_value())
                {
                    rapidjson::Value TitleValue(
                        TypeToJsonValue(m_Title, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "title",
                        TitleValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member title is null!");
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

            void ShopifyProductVariants::SetId(
                    const utility::string_t& Value
                )
            {
                    m_Id = Value;
                }
                
        
            utility::string_t ShopifyProductVariants::GetTitle() const
            {
                    return m_Title.value();
                }

            bool ShopifyProductVariants::HasTitle() const
            {
                return m_Title.has_value();
            }

            void ShopifyProductVariants::SetTitle(
                    const utility::string_t& Value
                )
            {
                    m_Title = Value;
                }
                
        

    ShopifyStorefrontDto::ShopifyStorefrontDto() { }
    ShopifyStorefrontDto::~ShopifyStorefrontDto() { }

    utility::string_t ShopifyStorefrontDto::ToJson() const
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
            
                if (m_StoreName.has_value())
                {
                    rapidjson::Value StoreNameValue(
                        TypeToJsonValue(m_StoreName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "storeName",
                        StoreNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_SpaceOwnerId.has_value())
                {
                    rapidjson::Value SpaceOwnerIdValue(
                        TypeToJsonValue(m_SpaceOwnerId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "spaceOwnerId",
                        SpaceOwnerIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_SpaceId.has_value())
                {
                    rapidjson::Value SpaceIdValue(
                        TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "spaceId",
                        SpaceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_IsEcommerceActive.has_value())
                {
                    rapidjson::Value IsEcommerceActiveValue(
                        TypeToJsonValue(m_IsEcommerceActive, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "isEcommerceActive",
                        IsEcommerceActiveValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_PrivateAccessToken.has_value())
                {
                    rapidjson::Value PrivateAccessTokenValue(
                        TypeToJsonValue(m_PrivateAccessToken, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "privateAccessToken",
                        PrivateAccessTokenValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("storeName"))
                {
                    const rapidjson::Value& StoreNameValue = JsonDoc["storeName"];

                    if (StoreNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(StoreNameValue, m_StoreName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member storeName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("spaceOwnerId"))
                {
                    const rapidjson::Value& SpaceOwnerIdValue = JsonDoc["spaceOwnerId"];

                    if (SpaceOwnerIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(SpaceOwnerIdValue, m_SpaceOwnerId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member spaceOwnerId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("spaceId"))
                {
                    const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

                    if (SpaceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(SpaceIdValue, m_SpaceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member spaceId is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member isEcommerceActive is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member privateAccessToken is null!");
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

            void ShopifyStorefrontDto::SetId(
                    const utility::string_t& Value
                )
            {
                    m_Id = Value;
                }
                
        
            utility::string_t ShopifyStorefrontDto::GetStoreName() const
            {
                    return m_StoreName.value();
                }

            bool ShopifyStorefrontDto::HasStoreName() const
            {
                return m_StoreName.has_value();
            }

            void ShopifyStorefrontDto::SetStoreName(
                    const utility::string_t& Value
                )
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

            void ShopifyStorefrontDto::SetSpaceOwnerId(
                    const utility::string_t& Value
                )
            {
                    m_SpaceOwnerId = Value;
                }
                
        
            utility::string_t ShopifyStorefrontDto::GetSpaceId() const
            {
                    return m_SpaceId.value();
                }

            bool ShopifyStorefrontDto::HasSpaceId() const
            {
                return m_SpaceId.has_value();
            }

            void ShopifyStorefrontDto::SetSpaceId(
                    const utility::string_t& Value
                )
            {
                    m_SpaceId = Value;
                }
                
        
            bool ShopifyStorefrontDto::GetIsEcommerceActive() const
            {
                    return m_IsEcommerceActive.value();
                }

            bool ShopifyStorefrontDto::HasIsEcommerceActive() const
            {
                return m_IsEcommerceActive.has_value();
            }

            void ShopifyStorefrontDto::SetIsEcommerceActive(
                    const bool& Value
                )
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

            void ShopifyStorefrontDto::SetPrivateAccessToken(
                    const utility::string_t& Value
                )
            {
                    m_PrivateAccessToken = Value;
                }
                
        

    SpaceEventDto::SpaceEventDto() { }
    SpaceEventDto::~SpaceEventDto() { }

    utility::string_t SpaceEventDto::ToJson() const
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
            
                if (m_SpaceId.has_value())
                {
                    rapidjson::Value SpaceIdValue(
                        TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "spaceId",
                        SpaceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_SpaceOwnerId.has_value())
                {
                    rapidjson::Value SpaceOwnerIdValue(
                        TypeToJsonValue(m_SpaceOwnerId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "spaceOwnerId",
                        SpaceOwnerIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_VendorEventId.has_value())
                {
                    rapidjson::Value VendorEventIdValue(
                        TypeToJsonValue(m_VendorEventId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "vendorEventId",
                        VendorEventIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_VendorName.has_value())
                {
                    rapidjson::Value VendorNameValue(
                        TypeToJsonValue(m_VendorName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "vendorName",
                        VendorNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_VendorEventUri.has_value())
                {
                    rapidjson::Value VendorEventUriValue(
                        TypeToJsonValue(m_VendorEventUri, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "vendorEventUri",
                        VendorEventUriValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_IsTicketingActive.has_value())
                {
                    rapidjson::Value IsTicketingActiveValue(
                        TypeToJsonValue(m_IsTicketingActive, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "isTicketingActive",
                        IsTicketingActiveValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("spaceId"))
                {
                    const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

                    if (SpaceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(SpaceIdValue, m_SpaceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member spaceId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("spaceOwnerId"))
                {
                    const rapidjson::Value& SpaceOwnerIdValue = JsonDoc["spaceOwnerId"];

                    if (SpaceOwnerIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(SpaceOwnerIdValue, m_SpaceOwnerId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member spaceOwnerId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("vendorEventId"))
                {
                    const rapidjson::Value& VendorEventIdValue = JsonDoc["vendorEventId"];

                    if (VendorEventIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(VendorEventIdValue, m_VendorEventId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member vendorEventId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("vendorName"))
                {
                    const rapidjson::Value& VendorNameValue = JsonDoc["vendorName"];

                    if (VendorNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(VendorNameValue, m_VendorName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member vendorName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("vendorEventUri"))
                {
                    const rapidjson::Value& VendorEventUriValue = JsonDoc["vendorEventUri"];

                    if (VendorEventUriValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(VendorEventUriValue, m_VendorEventUri);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member vendorEventUri is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member isTicketingActive is null!");
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

            void SpaceEventDto::SetId(
                    const utility::string_t& Value
                )
            {
                    m_Id = Value;
                }
                
        
            utility::string_t SpaceEventDto::GetSpaceId() const
            {
                    return m_SpaceId.value();
                }

            bool SpaceEventDto::HasSpaceId() const
            {
                return m_SpaceId.has_value();
            }

            void SpaceEventDto::SetSpaceId(
                    const utility::string_t& Value
                )
            {
                    m_SpaceId = Value;
                }
                
        
            utility::string_t SpaceEventDto::GetSpaceOwnerId() const
            {
                    return m_SpaceOwnerId.value();
                }

            bool SpaceEventDto::HasSpaceOwnerId() const
            {
                return m_SpaceOwnerId.has_value();
            }

            void SpaceEventDto::SetSpaceOwnerId(
                    const utility::string_t& Value
                )
            {
                    m_SpaceOwnerId = Value;
                }
                
        
            utility::string_t SpaceEventDto::GetVendorEventId() const
            {
                    return m_VendorEventId.value();
                }

            bool SpaceEventDto::HasVendorEventId() const
            {
                return m_VendorEventId.has_value();
            }

            void SpaceEventDto::SetVendorEventId(
                    const utility::string_t& Value
                )
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

            void SpaceEventDto::SetVendorName(
                    const utility::string_t& Value
                )
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

            void SpaceEventDto::SetVendorEventUri(
                    const utility::string_t& Value
                )
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

            void SpaceEventDto::SetIsTicketingActive(
                    const bool& Value
                )
            {
                    m_IsTicketingActive = Value;
                }
                
        

    SpaceEventDtoDataPage::SpaceEventDtoDataPage() { }
    SpaceEventDtoDataPage::~SpaceEventDtoDataPage() { }

    utility::string_t SpaceEventDtoDataPage::ToJson() const
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

        
            const std::vector<std::shared_ptr<SpaceEventDto>>&
                    SpaceEventDtoDataPage::GetItems() const
            {
                    return m_Items.value();
                }

            bool SpaceEventDtoDataPage::HasItems() const
            {
                return m_Items.has_value();
            }

            void SpaceEventDtoDataPage::SetItems(
                    const std::vector<std::shared_ptr<SpaceEventDto>>& Value
                )
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
                
        

    SpaceTicketDto::SpaceTicketDto() { }
    SpaceTicketDto::~SpaceTicketDto() { }

    utility::string_t SpaceTicketDto::ToJson() const
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
            
                if (m_VendorEventId.has_value())
                {
                    rapidjson::Value VendorEventIdValue(
                        TypeToJsonValue(m_VendorEventId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "vendorEventId",
                        VendorEventIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_VendorName.has_value())
                {
                    rapidjson::Value VendorNameValue(
                        TypeToJsonValue(m_VendorName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "vendorName",
                        VendorNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_VendorTicketId.has_value())
                {
                    rapidjson::Value VendorTicketIdValue(
                        TypeToJsonValue(m_VendorTicketId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "vendorTicketId",
                        VendorTicketIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_SpaceId.has_value())
                {
                    rapidjson::Value SpaceIdValue(
                        TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "spaceId",
                        SpaceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_TicketStatus.has_value())
                {
                    rapidjson::Value TicketStatusValue(
                        TypeToJsonValue(m_TicketStatus, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "ticketStatus",
                        TicketStatusValue,
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
            
                if (m_EmailLower.has_value())
                {
                    rapidjson::Value EmailLowerValue(
                        TypeToJsonValue(m_EmailLower, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "emailLower",
                        EmailLowerValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("vendorEventId"))
                {
                    const rapidjson::Value& VendorEventIdValue = JsonDoc["vendorEventId"];

                    if (VendorEventIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(VendorEventIdValue, m_VendorEventId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member vendorEventId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("vendorName"))
                {
                    const rapidjson::Value& VendorNameValue = JsonDoc["vendorName"];

                    if (VendorNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(VendorNameValue, m_VendorName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member vendorName is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("vendorTicketId"))
                {
                    const rapidjson::Value& VendorTicketIdValue = JsonDoc["vendorTicketId"];

                    if (VendorTicketIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(VendorTicketIdValue, m_VendorTicketId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member vendorTicketId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("spaceId"))
                {
                    const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

                    if (SpaceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(SpaceIdValue, m_SpaceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member spaceId is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member ticketStatus is null!");
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
            
                if (JsonDoc.HasMember("emailLower"))
                {
                    const rapidjson::Value& EmailLowerValue = JsonDoc["emailLower"];

                    if (EmailLowerValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(EmailLowerValue, m_EmailLower);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member emailLower is null!");
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

            void SpaceTicketDto::SetId(
                    const utility::string_t& Value
                )
            {
                    m_Id = Value;
                }
                
        
            utility::string_t SpaceTicketDto::GetVendorEventId() const
            {
                    return m_VendorEventId.value();
                }

            bool SpaceTicketDto::HasVendorEventId() const
            {
                return m_VendorEventId.has_value();
            }

            void SpaceTicketDto::SetVendorEventId(
                    const utility::string_t& Value
                )
            {
                    m_VendorEventId = Value;
                }
                
        
            utility::string_t SpaceTicketDto::GetVendorName() const
            {
                    return m_VendorName.value();
                }

            bool SpaceTicketDto::HasVendorName() const
            {
                return m_VendorName.has_value();
            }

            void SpaceTicketDto::SetVendorName(
                    const utility::string_t& Value
                )
            {
                    m_VendorName = Value;
                }
                
        
            utility::string_t SpaceTicketDto::GetVendorTicketId() const
            {
                    return m_VendorTicketId.value();
                }

            bool SpaceTicketDto::HasVendorTicketId() const
            {
                return m_VendorTicketId.has_value();
            }

            void SpaceTicketDto::SetVendorTicketId(
                    const utility::string_t& Value
                )
            {
                    m_VendorTicketId = Value;
                }
                
        
            utility::string_t SpaceTicketDto::GetSpaceId() const
            {
                    return m_SpaceId.value();
                }

            bool SpaceTicketDto::HasSpaceId() const
            {
                return m_SpaceId.has_value();
            }

            void SpaceTicketDto::SetSpaceId(
                    const utility::string_t& Value
                )
            {
                    m_SpaceId = Value;
                }
                
        
            std::shared_ptr<TicketStatus> SpaceTicketDto::GetTicketStatus() const
            {
                    return m_TicketStatus.value();
                }

            bool SpaceTicketDto::HasTicketStatus() const
            {
                return m_TicketStatus.has_value();
            }

            void SpaceTicketDto::SetTicketStatus(
                    const std::shared_ptr<TicketStatus>& Value
                )
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

            void SpaceTicketDto::SetUserId(
                    const utility::string_t& Value
                )
            {
                    m_UserId = Value;
                }
                
        
            utility::string_t SpaceTicketDto::GetEmailLower() const
            {
                    return m_EmailLower.value();
                }

            bool SpaceTicketDto::HasEmailLower() const
            {
                return m_EmailLower.has_value();
            }

            void SpaceTicketDto::SetEmailLower(
                    const utility::string_t& Value
                )
            {
                    m_EmailLower = Value;
                }
                
        

    StringDataPage::StringDataPage() { }
    StringDataPage::~StringDataPage() { }

    utility::string_t StringDataPage::ToJson() const
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

        
            const std::vector<utility::string_t>&
                    StringDataPage::GetItems() const
            {
                    return m_Items.value();
                }

            bool StringDataPage::HasItems() const
            {
                return m_Items.has_value();
            }

            void StringDataPage::SetItems(
                    const std::vector<utility::string_t>& Value
                )
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
                
        

    Style::Style() { }
    Style::~Style() { }

    utility::string_t Style::ToJson() const
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
            
                if (m_IconStyle.has_value())
                {
                    rapidjson::Value IconStyleValue(
                        TypeToJsonValue(m_IconStyle, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "iconStyle",
                        IconStyleValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member iconStyle is null!");
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

            void Style::SetId(
                    const utility::string_t& Value
                )
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

            void Style::SetIconStyle(
                    const std::shared_ptr<IconStyle>& Value
                )
            {
                    m_IconStyle = Value;
                }
                
        

    TicketStatus::TicketStatus() { }
    TicketStatus::~TicketStatus() { }

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

    VendorProviderInfo::VendorProviderInfo() { }
    VendorProviderInfo::~VendorProviderInfo() { }

    utility::string_t VendorProviderInfo::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_VendorName.has_value())
                {
                    rapidjson::Value VendorNameValue(
                        TypeToJsonValue(m_VendorName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "vendorName",
                        VendorNameValue,
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
            
                if (m_OAuthRedirectUrl.has_value())
                {
                    rapidjson::Value OAuthRedirectUrlValue(
                        TypeToJsonValue(m_OAuthRedirectUrl, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "oAuthRedirectUrl",
                        OAuthRedirectUrlValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member vendorName is null!");
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
            
                if (JsonDoc.HasMember("oAuthRedirectUrl"))
                {
                    const rapidjson::Value& OAuthRedirectUrlValue = JsonDoc["oAuthRedirectUrl"];

                    if (OAuthRedirectUrlValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(OAuthRedirectUrlValue, m_OAuthRedirectUrl);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member oAuthRedirectUrl is null!");
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

            void VendorProviderInfo::SetVendorName(
                    const utility::string_t& Value
                )
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

            void VendorProviderInfo::SetClientId(
                    const utility::string_t& Value
                )
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

            void VendorProviderInfo::SetAuthorizeEndpoint(
                    const utility::string_t& Value
                )
            {
                    m_AuthorizeEndpoint = Value;
                }
                
        
            utility::string_t VendorProviderInfo::GetOAuthRedirectUrl() const
            {
                    return m_OAuthRedirectUrl.value();
                }

            bool VendorProviderInfo::HasOAuthRedirectUrl() const
            {
                return m_OAuthRedirectUrl.has_value();
            }

            void VendorProviderInfo::SetOAuthRedirectUrl(
                    const utility::string_t& Value
                )
            {
                    m_OAuthRedirectUrl = Value;
                }
                
        


} // namespace csp::services::aggregationservice