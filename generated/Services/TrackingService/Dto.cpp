

#include "Web/Json.h"
#include "Web/Json_HttpPayload.h"
#include "Debug/Logging.h"

#include "Dto.h"

#include <optional>


using namespace csp::web;


namespace csp::services::generated::trackingservice
{


    QuotaFeatureActivityDto::QuotaFeatureActivityDto() { }
    QuotaFeatureActivityDto::~QuotaFeatureActivityDto() { }

    utility::string_t QuotaFeatureActivityDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_FeatureName.has_value())
                {
                    rapidjson::Value FeatureNameValue(
                        TypeToJsonValue(m_FeatureName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "featureName",
                        FeatureNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AppliesToType.has_value())
                {
                    rapidjson::Value AppliesToTypeValue(
                        TypeToJsonValue(m_AppliesToType, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "appliesToType",
                        AppliesToTypeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AppliesToId.has_value())
                {
                    rapidjson::Value AppliesToIdValue(
                        TypeToJsonValue(m_AppliesToId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "appliesToId",
                        AppliesToIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AppliesToQualifierType.has_value())
                {
                    rapidjson::Value AppliesToQualifierTypeValue(
                        TypeToJsonValue(m_AppliesToQualifierType, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "appliesToQualifierType",
                        AppliesToQualifierTypeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AppliesToQualifierId.has_value())
                {
                    rapidjson::Value AppliesToQualifierIdValue(
                        TypeToJsonValue(m_AppliesToQualifierId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "appliesToQualifierId",
                        AppliesToQualifierIdValue,
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
            
                if (m_Amount.has_value())
                {
                    rapidjson::Value AmountValue(
                        TypeToJsonValue(m_Amount, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "amount",
                        AmountValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void QuotaFeatureActivityDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("featureName"))
                {
                    const rapidjson::Value& FeatureNameValue = JsonDoc["featureName"];

                    if (FeatureNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(FeatureNameValue, m_FeatureName);
                    }
                }
            
                if (JsonDoc.HasMember("appliesToType"))
                {
                    const rapidjson::Value& AppliesToTypeValue = JsonDoc["appliesToType"];

                    if (AppliesToTypeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AppliesToTypeValue, m_AppliesToType);
                    }
                }
            
                if (JsonDoc.HasMember("appliesToId"))
                {
                    const rapidjson::Value& AppliesToIdValue = JsonDoc["appliesToId"];

                    if (AppliesToIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AppliesToIdValue, m_AppliesToId);
                    }
                }
            
                if (JsonDoc.HasMember("appliesToQualifierType"))
                {
                    const rapidjson::Value& AppliesToQualifierTypeValue = JsonDoc["appliesToQualifierType"];

                    if (AppliesToQualifierTypeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AppliesToQualifierTypeValue, m_AppliesToQualifierType);
                    }
                }
            
                if (JsonDoc.HasMember("appliesToQualifierId"))
                {
                    const rapidjson::Value& AppliesToQualifierIdValue = JsonDoc["appliesToQualifierId"];

                    if (AppliesToQualifierIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AppliesToQualifierIdValue, m_AppliesToQualifierId);
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
            
                if (JsonDoc.HasMember("amount"))
                {
                    const rapidjson::Value& AmountValue = JsonDoc["amount"];

                    if (AmountValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AmountValue, m_Amount);
                    }
                    else
                    {
                        CSP_LOG_ERROR_MSG("Error: Non-nullable member amount is null!");
                    }
                    
                }
            
        }

        
            utility::string_t QuotaFeatureActivityDto::GetFeatureName() const
            {
                    return m_FeatureName.value();
                }

            bool QuotaFeatureActivityDto::HasFeatureName() const
            {
                return m_FeatureName.has_value();
            }

            void QuotaFeatureActivityDto::SetFeatureName(
                    const utility::string_t& Value
                )
            {
                    m_FeatureName = Value;
                }
                
        
            utility::string_t QuotaFeatureActivityDto::GetAppliesToType() const
            {
                    return m_AppliesToType.value();
                }

            bool QuotaFeatureActivityDto::HasAppliesToType() const
            {
                return m_AppliesToType.has_value();
            }

            void QuotaFeatureActivityDto::SetAppliesToType(
                    const utility::string_t& Value
                )
            {
                    m_AppliesToType = Value;
                }
                
        
            utility::string_t QuotaFeatureActivityDto::GetAppliesToId() const
            {
                    return m_AppliesToId.value();
                }

            bool QuotaFeatureActivityDto::HasAppliesToId() const
            {
                return m_AppliesToId.has_value();
            }

            void QuotaFeatureActivityDto::SetAppliesToId(
                    const utility::string_t& Value
                )
            {
                    m_AppliesToId = Value;
                }
                
        
            utility::string_t QuotaFeatureActivityDto::GetAppliesToQualifierType() const
            {
                    return m_AppliesToQualifierType.value();
                }

            bool QuotaFeatureActivityDto::HasAppliesToQualifierType() const
            {
                return m_AppliesToQualifierType.has_value();
            }

            void QuotaFeatureActivityDto::SetAppliesToQualifierType(
                    const utility::string_t& Value
                )
            {
                    m_AppliesToQualifierType = Value;
                }
                
        
            utility::string_t QuotaFeatureActivityDto::GetAppliesToQualifierId() const
            {
                    return m_AppliesToQualifierId.value();
                }

            bool QuotaFeatureActivityDto::HasAppliesToQualifierId() const
            {
                return m_AppliesToQualifierId.has_value();
            }

            void QuotaFeatureActivityDto::SetAppliesToQualifierId(
                    const utility::string_t& Value
                )
            {
                    m_AppliesToQualifierId = Value;
                }
                
        
            utility::string_t QuotaFeatureActivityDto::GetCreatedBy() const
            {
                    return m_CreatedBy.value();
                }

            bool QuotaFeatureActivityDto::HasCreatedBy() const
            {
                return m_CreatedBy.has_value();
            }

            void QuotaFeatureActivityDto::SetCreatedBy(
                    const utility::string_t& Value
                )
            {
                    m_CreatedBy = Value;
                }
                
        
            utility::string_t QuotaFeatureActivityDto::GetCreatedAt() const
            {
                    return m_CreatedAt.value();
                }

            bool QuotaFeatureActivityDto::HasCreatedAt() const
            {
                return m_CreatedAt.has_value();
            }

            void QuotaFeatureActivityDto::SetCreatedAt(
                    const utility::string_t& Value
                )
            {
                    m_CreatedAt = Value;
                }
                
        
            int32_t QuotaFeatureActivityDto::GetAmount() const
            {
                    return m_Amount.value();
                }

            bool QuotaFeatureActivityDto::HasAmount() const
            {
                return m_Amount.has_value();
            }

            void QuotaFeatureActivityDto::SetAmount(int32_t Value)
            {
                    m_Amount = Value;
                }
                
        

    QuotaFeatureActivityDtoDataPage::QuotaFeatureActivityDtoDataPage() { }
    QuotaFeatureActivityDtoDataPage::~QuotaFeatureActivityDtoDataPage() { }

    utility::string_t QuotaFeatureActivityDtoDataPage::ToJson() const
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

        void QuotaFeatureActivityDtoDataPage::FromJson(const utility::string_t& Val)
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

        
            const std::vector<std::shared_ptr<QuotaFeatureActivityDto>>&
                    QuotaFeatureActivityDtoDataPage::GetItems() const
            {
                    return m_Items.value();
                }

            bool QuotaFeatureActivityDtoDataPage::HasItems() const
            {
                return m_Items.has_value();
            }

            void QuotaFeatureActivityDtoDataPage::SetItems(
                    const std::vector<std::shared_ptr<QuotaFeatureActivityDto>>& Value
                )
            {
                    m_Items = Value;
                }
                
        
            int32_t QuotaFeatureActivityDtoDataPage::GetSkip() const
            {
                    return m_Skip.value();
                }

            bool QuotaFeatureActivityDtoDataPage::HasSkip() const
            {
                return m_Skip.has_value();
            }

            void QuotaFeatureActivityDtoDataPage::SetSkip(int32_t Value)
            {
                    m_Skip = Value;
                }
                
        
            int32_t QuotaFeatureActivityDtoDataPage::GetLimit() const
            {
                    return m_Limit.value();
                }

            bool QuotaFeatureActivityDtoDataPage::HasLimit() const
            {
                return m_Limit.has_value();
            }

            void QuotaFeatureActivityDtoDataPage::SetLimit(int32_t Value)
            {
                    m_Limit = Value;
                }
                
        
            int32_t QuotaFeatureActivityDtoDataPage::GetItemCount() const
            {
                    return m_ItemCount.value();
                }

            bool QuotaFeatureActivityDtoDataPage::HasItemCount() const
            {
                return m_ItemCount.has_value();
            }

            void QuotaFeatureActivityDtoDataPage::SetItemCount(int32_t Value)
            {
                    m_ItemCount = Value;
                }
                
        
            int64_t QuotaFeatureActivityDtoDataPage::GetItemTotalCount() const
            {
                    return m_ItemTotalCount.value();
                }

            bool QuotaFeatureActivityDtoDataPage::HasItemTotalCount() const
            {
                return m_ItemTotalCount.has_value();
            }

            void QuotaFeatureActivityDtoDataPage::SetItemTotalCount(int64_t Value)
            {
                    m_ItemTotalCount = Value;
                }
                
        

    QuotaFeatureLimitProgressDto::QuotaFeatureLimitProgressDto() { }
    QuotaFeatureLimitProgressDto::~QuotaFeatureLimitProgressDto() { }

    utility::string_t QuotaFeatureLimitProgressDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_FeatureName.has_value())
                {
                    rapidjson::Value FeatureNameValue(
                        TypeToJsonValue(m_FeatureName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "featureName",
                        FeatureNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ActivityCount.has_value())
                {
                    rapidjson::Value ActivityCountValue(
                        TypeToJsonValue(m_ActivityCount, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "activityCount",
                        ActivityCountValue,
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
            

            return JsonDocToString(JsonDoc);
        }

        void QuotaFeatureLimitProgressDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("featureName"))
                {
                    const rapidjson::Value& FeatureNameValue = JsonDoc["featureName"];

                    if (FeatureNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(FeatureNameValue, m_FeatureName);
                    }
                }
            
                if (JsonDoc.HasMember("activityCount"))
                {
                    const rapidjson::Value& ActivityCountValue = JsonDoc["activityCount"];

                    if (ActivityCountValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ActivityCountValue, m_ActivityCount);
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
            
        }

        
            utility::string_t QuotaFeatureLimitProgressDto::GetFeatureName() const
            {
                    return m_FeatureName.value();
                }

            bool QuotaFeatureLimitProgressDto::HasFeatureName() const
            {
                return m_FeatureName.has_value();
            }

            void QuotaFeatureLimitProgressDto::SetFeatureName(
                    const utility::string_t& Value
                )
            {
                    m_FeatureName = Value;
                }
                
        
            int32_t QuotaFeatureLimitProgressDto::GetActivityCount() const
            {
                    return m_ActivityCount.value();
                }

            bool QuotaFeatureLimitProgressDto::HasActivityCount() const
            {
                return m_ActivityCount.has_value();
            }

            void QuotaFeatureLimitProgressDto::SetActivityCount(int32_t Value)
            {
                    m_ActivityCount = Value;
                }
                
        
            int32_t QuotaFeatureLimitProgressDto::GetLimit() const
            {
                    return m_Limit.value();
                }

            bool QuotaFeatureLimitProgressDto::HasLimit() const
            {
                return m_Limit.has_value();
            }

            void QuotaFeatureLimitProgressDto::SetLimit(int32_t Value)
            {
                    m_Limit = Value;
                }
                
        

    QuotaFeatureTierDto::QuotaFeatureTierDto() { }
    QuotaFeatureTierDto::~QuotaFeatureTierDto() { }

    utility::string_t QuotaFeatureTierDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_FeatureName.has_value())
                {
                    rapidjson::Value FeatureNameValue(
                        TypeToJsonValue(m_FeatureName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "featureName",
                        FeatureNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_TierName.has_value())
                {
                    rapidjson::Value TierNameValue(
                        TypeToJsonValue(m_TierName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "tierName",
                        TierNameValue,
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
            
                if (m_Period.has_value())
                {
                    rapidjson::Value PeriodValue(
                        TypeToJsonValue(m_Period, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "period",
                        PeriodValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AllowReductions.has_value())
                {
                    rapidjson::Value AllowReductionsValue(
                        TypeToJsonValue(m_AllowReductions, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "allowReductions",
                        AllowReductionsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void QuotaFeatureTierDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("featureName"))
                {
                    const rapidjson::Value& FeatureNameValue = JsonDoc["featureName"];

                    if (FeatureNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(FeatureNameValue, m_FeatureName);
                    }
                }
            
                if (JsonDoc.HasMember("tierName"))
                {
                    const rapidjson::Value& TierNameValue = JsonDoc["tierName"];

                    if (TierNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(TierNameValue, m_TierName);
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
            
                if (JsonDoc.HasMember("period"))
                {
                    const rapidjson::Value& PeriodValue = JsonDoc["period"];

                    if (PeriodValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PeriodValue, m_Period);
                    }
                    else
                    {
                        CSP_LOG_ERROR_MSG("Error: Non-nullable member period is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("allowReductions"))
                {
                    const rapidjson::Value& AllowReductionsValue = JsonDoc["allowReductions"];

                    if (AllowReductionsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AllowReductionsValue, m_AllowReductions);
                    }
                    else
                    {
                        CSP_LOG_ERROR_MSG("Error: Non-nullable member allowReductions is null!");
                    }
                    
                }
            
        }

        
            utility::string_t QuotaFeatureTierDto::GetFeatureName() const
            {
                    return m_FeatureName.value();
                }

            bool QuotaFeatureTierDto::HasFeatureName() const
            {
                return m_FeatureName.has_value();
            }

            void QuotaFeatureTierDto::SetFeatureName(
                    const utility::string_t& Value
                )
            {
                    m_FeatureName = Value;
                }
                
        
            utility::string_t QuotaFeatureTierDto::GetTierName() const
            {
                    return m_TierName.value();
                }

            bool QuotaFeatureTierDto::HasTierName() const
            {
                return m_TierName.has_value();
            }

            void QuotaFeatureTierDto::SetTierName(
                    const utility::string_t& Value
                )
            {
                    m_TierName = Value;
                }
                
        
            int32_t QuotaFeatureTierDto::GetLimit() const
            {
                    return m_Limit.value();
                }

            bool QuotaFeatureTierDto::HasLimit() const
            {
                return m_Limit.has_value();
            }

            void QuotaFeatureTierDto::SetLimit(int32_t Value)
            {
                    m_Limit = Value;
                }
                
        
            std::shared_ptr<QuotaSumByPeriodDto> QuotaFeatureTierDto::GetPeriod() const
            {
                    return m_Period.value();
                }

            bool QuotaFeatureTierDto::HasPeriod() const
            {
                return m_Period.has_value();
            }

            void QuotaFeatureTierDto::SetPeriod(
                    const std::shared_ptr<QuotaSumByPeriodDto>& Value
                )
            {
                    m_Period = Value;
                }
                
        
            bool QuotaFeatureTierDto::GetAllowReductions() const
            {
                    return m_AllowReductions.value();
                }

            bool QuotaFeatureTierDto::HasAllowReductions() const
            {
                return m_AllowReductions.has_value();
            }

            void QuotaFeatureTierDto::SetAllowReductions(
                    const bool& Value
                )
            {
                    m_AllowReductions = Value;
                }
                
        

    QuotaSumByPeriodDto::QuotaSumByPeriodDto() { }
    QuotaSumByPeriodDto::~QuotaSumByPeriodDto() { }

    utility::string_t QuotaSumByPeriodDto::ToJson() const
        {
            switch (Value)
            {
                case eQuotaSumByPeriodDto::TOTAL:
                    return "Total";
                case eQuotaSumByPeriodDto::CALENDARMONTH:
                    return "CalendarMonth";
                case eQuotaSumByPeriodDto::HOURS24:
                    return "Hours24";
                
                default:
                    throw std::runtime_error("Unknown enum value!");
            }
        }

        void QuotaSumByPeriodDto::FromJson(const utility::string_t& Val)
        {
             if (Val == "Total")
                {
                    Value = eQuotaSumByPeriodDto::TOTAL;
                }
            else if (Val == "CalendarMonth")
                {
                    Value = eQuotaSumByPeriodDto::CALENDARMONTH;
                }
            else if (Val == "Hours24")
                {
                    Value = eQuotaSumByPeriodDto::HOURS24;
                }
            
        }

        QuotaSumByPeriodDto::eQuotaSumByPeriodDto QuotaSumByPeriodDto::GetValue() const
        {
            return Value;
        }

        void QuotaSumByPeriodDto::SetValue(QuotaSumByPeriodDto::eQuotaSumByPeriodDto const InValue)
        {
            Value = InValue;
        }

    QuotaTierAssignmentDto::QuotaTierAssignmentDto() { }
    QuotaTierAssignmentDto::~QuotaTierAssignmentDto() { }

    utility::string_t QuotaTierAssignmentDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_AssignedToType.has_value())
                {
                    rapidjson::Value AssignedToTypeValue(
                        TypeToJsonValue(m_AssignedToType, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "assignedToType",
                        AssignedToTypeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AssignedToId.has_value())
                {
                    rapidjson::Value AssignedToIdValue(
                        TypeToJsonValue(m_AssignedToId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "assignedToId",
                        AssignedToIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_TierName.has_value())
                {
                    rapidjson::Value TierNameValue(
                        TypeToJsonValue(m_TierName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "tierName",
                        TierNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            

            return JsonDocToString(JsonDoc);
        }

        void QuotaTierAssignmentDto::FromJson(const utility::string_t& Val)
        {
            rapidjson::Document JsonDoc;

            if (Val.c_str() == nullptr)
            {
                return;
            }

            JsonDoc.Parse(Val.c_str());

            
                if (JsonDoc.HasMember("assignedToType"))
                {
                    const rapidjson::Value& AssignedToTypeValue = JsonDoc["assignedToType"];

                    if (AssignedToTypeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AssignedToTypeValue, m_AssignedToType);
                    }
                }
            
                if (JsonDoc.HasMember("assignedToId"))
                {
                    const rapidjson::Value& AssignedToIdValue = JsonDoc["assignedToId"];

                    if (AssignedToIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AssignedToIdValue, m_AssignedToId);
                    }
                }
            
                if (JsonDoc.HasMember("tierName"))
                {
                    const rapidjson::Value& TierNameValue = JsonDoc["tierName"];

                    if (TierNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(TierNameValue, m_TierName);
                    }
                }
            
        }

        
            utility::string_t QuotaTierAssignmentDto::GetAssignedToType() const
            {
                    return m_AssignedToType.value();
                }

            bool QuotaTierAssignmentDto::HasAssignedToType() const
            {
                return m_AssignedToType.has_value();
            }

            void QuotaTierAssignmentDto::SetAssignedToType(
                    const utility::string_t& Value
                )
            {
                    m_AssignedToType = Value;
                }
                
        
            utility::string_t QuotaTierAssignmentDto::GetAssignedToId() const
            {
                    return m_AssignedToId.value();
                }

            bool QuotaTierAssignmentDto::HasAssignedToId() const
            {
                return m_AssignedToId.has_value();
            }

            void QuotaTierAssignmentDto::SetAssignedToId(
                    const utility::string_t& Value
                )
            {
                    m_AssignedToId = Value;
                }
                
        
            utility::string_t QuotaTierAssignmentDto::GetTierName() const
            {
                    return m_TierName.value();
                }

            bool QuotaTierAssignmentDto::HasTierName() const
            {
                return m_TierName.has_value();
            }

            void QuotaTierAssignmentDto::SetTierName(
                    const utility::string_t& Value
                )
            {
                    m_TierName = Value;
                }
                
        


} // namespace csp::services::trackingservice