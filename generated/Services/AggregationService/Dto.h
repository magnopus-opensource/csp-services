

#pragma once

#include "Services/DtoBase/DtoBase.h"

#include <optional>


namespace csp::services::generated::aggregationservice
{

class AloClassCompletedRequest;
class AloClassCompletedResponse;
class AltitudeMode;
class AuthDto;
class DuplicateSpaceRequest;
class GroupRoleDto;
class HarmonizeAloRequest;
class HarmonizeAloResponse;
class Icon;
class IconStyle;
class ImportSpaceOptions;
class ImportSpaceRequest;
class Kml;
class LineString;
class LocalizedString;
class LookAt;
class Model;
class ModelLink;
class ModelLocation;
class ModelOrientation;
class ModelScale;
class Placemark;
class Point;
class PositionKml;
class ProblemDetails;
class PrototypeDto;
class PrototypeDtoDataPage;
class SequenceDto;
class SequenceDtoDataPage;
class ServiceRequest;
class ServiceResponse;
class ShopifyCartDto;
class ShopifyCartLineDto;
class ShopifyCartUpdateDto;
class ShopifyCheckoutDto;
class ShopifyMoney;
class ShopifyProductDto;
class ShopifyProductMedia;
class ShopifyProductVariants;
class ShopifyStorefrontDto;
class ShopifyStorefrontDtoDataPage;
class ShopifyStorefrontValidationRequest;
class ShopifyVariantOption;
class SliceCompatibility;
class SpaceEventDto;
class SpaceEventDtoDataPage;
class SpaceExportDto;
class SpaceImportDto;
class SpaceTicketDto;
class StringDataPage;
class Style;
class TicketStatus;
class VendorProviderInfo;
class VersionMatrix;



    /// <summary>
        /// Request to server when class is completed
        /// </summary>
    class AloClassCompletedRequest : public csp::services::DtoBase
        {
        public:
            AloClassCompletedRequest();
            virtual ~AloClassCompletedRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Id of the user who completed the class
                    /// </summary>
                utility::string_t GetUserId() const;
                bool HasUserId() const;
            
                /// <summary>
                    /// Id of the Class Definition Prototype
                    /// </summary>
                utility::string_t GetClassDefinitionId() const;
                bool HasClassDefinitionId() const;
            
                /// <summary>
                    /// Optional: Id of the parent Series (Plan)
                    /// </summary>
                utility::string_t GetSeriesPlanId() const;
                void SetSeriesPlanId(const utility::string_t& Value);bool HasSeriesPlanId() const;
            

        protected:
            std::optional<utility::string_t> m_UserId;
            std::optional<utility::string_t> m_ClassDefinitionId;
            std::optional<utility::string_t> m_SeriesPlanId;
            };

    /// <summary>
        /// Response from server when class is completed
        /// </summary>
    class AloClassCompletedResponse : public csp::services::DtoBase
        {
        public:
            AloClassCompletedResponse();
            virtual ~AloClassCompletedResponse();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Ids of the Badges earned
                    /// </summary>
                const std::vector<utility::string_t>& GetBadgeIdsEarned() const;
                void SetBadgeIdsEarned(const std::vector<utility::string_t>& Value);bool HasBadgeIdsEarned() const;
            

        protected:
            std::optional<std::vector<utility::string_t>> m_BadgeIdsEarned;
            };

    /// <summary>
        /// An enum describing the different altitudes a line can inhabit
        /// </summary>
    class AltitudeMode : public csp::services::EnumBase
        {
        public:
            AltitudeMode();
            virtual ~AltitudeMode();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            enum class eAltitudeMode
            {
                RELATIVETOGROUND,
                ABSOLUTE,
                RELATIVETOSEAFLOOR,
                CLAMPTOGROUND,
                CLAMPTOSEAFLOOR
                
            };

            eAltitudeMode GetValue() const;
            void SetValue(eAltitudeMode const Value);

        protected:
            eAltitudeMode Value = {};
        };

    /// <summary>
        /// DTO for carrying authentication information.
        /// </summary>
    class AuthDto : public csp::services::DtoBase
        {
        public:
            AuthDto();
            virtual ~AuthDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The unique identifier for the user
                    /// </summary>
                utility::string_t GetUserId() const;
                void SetUserId(const utility::string_t& Value);bool HasUserId() const;
            
                /// <summary>
                    /// The token for accessing the API
                    /// </summary>
                utility::string_t GetAccessToken() const;
                void SetAccessToken(const utility::string_t& Value);bool HasAccessToken() const;
            
                /// <summary>
                    /// The date and time the access token expires
                    /// </summary>
                utility::string_t GetAccessTokenExpiresAt() const;
                void SetAccessTokenExpiresAt(const utility::string_t& Value);bool HasAccessTokenExpiresAt() const;
            
                /// <summary>
                    /// The refresh token to use to request a new access token
                    /// </summary>
                utility::string_t GetRefreshToken() const;
                void SetRefreshToken(const utility::string_t& Value);bool HasRefreshToken() const;
            
                /// <summary>
                    /// The date and time the refresh token expires
                    /// </summary>
                utility::string_t GetRefreshTokenExpiresAt() const;
                void SetRefreshTokenExpiresAt(const utility::string_t& Value);bool HasRefreshTokenExpiresAt() const;
            
                /// <summary>
                    /// Ids of the user's organizations
                    /// </summary>
                const std::vector<utility::string_t>& GetOrganizationIds() const;
                void SetOrganizationIds(const std::vector<utility::string_t>& Value);bool HasOrganizationIds() const;
            
                /// <summary>
                    /// The ID of the device which has been granted access.
                    /// </summary>
                utility::string_t GetDeviceId() const;
                void SetDeviceId(const utility::string_t& Value);bool HasDeviceId() const;
            

        protected:
            std::optional<utility::string_t> m_UserId;
            std::optional<utility::string_t> m_AccessToken;
            std::optional<utility::string_t> m_AccessTokenExpiresAt;
            std::optional<utility::string_t> m_RefreshToken;
            std::optional<utility::string_t> m_RefreshTokenExpiresAt;
            std::optional<std::vector<utility::string_t>> m_OrganizationIds;
            std::optional<utility::string_t> m_DeviceId;
            };

    /// <summary>
        /// A request that includes the needed data to duplicate a space
        /// </summary>
    class DuplicateSpaceRequest : public csp::services::DtoBase
        {
        public:
            DuplicateSpaceRequest();
            virtual ~DuplicateSpaceRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The tenant name that the space belongs to
                    /// </summary>
                utility::string_t GetTenantName() const;
                bool HasTenantName() const;
            
                /// <summary>
                    /// The id of the space to duplicate
                    /// </summary>
                utility::string_t GetSpaceId() const;
                void SetSpaceId(const utility::string_t& Value);bool HasSpaceId() const;
            
                /// <summary>
                    /// The ownerId (userId) that this new space will be assigned to
                    /// </summary>
                utility::string_t GetNewGroupOwnerId() const;
                void SetNewGroupOwnerId(const utility::string_t& Value);bool HasNewGroupOwnerId() const;
            
                /// <summary>
                    /// The groupIds we wish to copy the userList from, to apply to the duplicated space
                    /// </summary>
                const std::vector<utility::string_t>& GetMemberGroupIds() const;
                void SetMemberGroupIds(const std::vector<utility::string_t>& Value);bool HasMemberGroupIds() const;
            
                /// <summary>
                    /// THe user that is requesting the space duplication
                    /// </summary>
                utility::string_t GetRequestUserId() const;
                bool HasRequestUserId() const;
            
                /// <summary>
                    /// The unique name for the new space
                    /// </summary>
                utility::string_t GetNewUniqueName() const;
                void SetNewUniqueName(const utility::string_t& Value);bool HasNewUniqueName() const;
            
                /// <summary>
                    /// If this space requires an invite to join
                    /// </summary>
                bool GetRequiresInvite() const;
                void SetRequiresInvite(const bool& Value);bool HasRequiresInvite() const;
            
                /// <summary>
                    /// If this space is discoverable
                    /// </summary>
                bool GetDiscoverable() const;
                void SetDiscoverable(const bool& Value);bool HasDiscoverable() const;
            
                /// <summary>
                    /// If true, the ExternalURLs of the copied assets will point to the original asset's URL and the actual files will not be copied
                    /// </summary>
                bool GetShallowCopy() const;
                void SetShallowCopy(const bool& Value);bool HasShallowCopy() const;
            
                /// <summary>
                    /// If true, the request is immediately responded with a 200 and a message is put on the queue
                    /// </summary>
                bool GetAsyncCall() const;
                void SetAsyncCall(const bool& Value);bool HasAsyncCall() const;
            

        protected:
            std::optional<utility::string_t> m_TenantName;
            std::optional<utility::string_t> m_SpaceId;
            std::optional<utility::string_t> m_NewGroupOwnerId;
            std::optional<std::vector<utility::string_t>> m_MemberGroupIds;
            std::optional<utility::string_t> m_RequestUserId;
            std::optional<utility::string_t> m_NewUniqueName;
            std::optional<bool> m_RequiresInvite;
            std::optional<bool> m_Discoverable;
            std::optional<bool> m_ShallowCopy;
            std::optional<bool> m_AsyncCall;
            };

    /// <summary>
        /// DTO containing group role info
        /// </summary>
    class GroupRoleDto : public csp::services::DtoBase
        {
        public:
            GroupRoleDto();
            virtual ~GroupRoleDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Id of the user to which the role applies.
                    /// </summary>
                utility::string_t GetUserId() const;
                void SetUserId(const utility::string_t& Value);bool HasUserId() const;
            
                /// <summary>
                    /// Id of the group to which the user has the role
                    /// </summary>
                utility::string_t GetGroupId() const;
                void SetGroupId(const utility::string_t& Value);bool HasGroupId() const;
            
                /// <summary>
                    /// Roles which the user has
                    /// </summary>
                const std::vector<utility::string_t>& GetGroupRoles() const;
                void SetGroupRoles(const std::vector<utility::string_t>& Value);bool HasGroupRoles() const;
            

        protected:
            std::optional<utility::string_t> m_UserId;
            std::optional<utility::string_t> m_GroupId;
            std::optional<std::vector<utility::string_t>> m_GroupRoles;
            };

    /// <summary>
        /// Request to harmonize alo
        /// </summary>
    class HarmonizeAloRequest : public csp::services::DtoBase
        {
        public:
            HarmonizeAloRequest();
            virtual ~HarmonizeAloRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Nonce from Meta
                    /// </summary>
                utility::string_t GetNonce() const;
                void SetNonce(const utility::string_t& Value);bool HasNonce() const;
            
                /// <summary>
                    /// UserId from Meta
                    /// </summary>
                utility::string_t GetMetaUserId() const;
                void SetMetaUserId(const utility::string_t& Value);bool HasMetaUserId() const;
            

        protected:
            std::optional<utility::string_t> m_Nonce;
            std::optional<utility::string_t> m_MetaUserId;
            };

    /// <summary>
        /// Response from harmonize
        /// </summary>
    class HarmonizeAloResponse : public csp::services::DtoBase
        {
        public:
            HarmonizeAloResponse();
            virtual ~HarmonizeAloResponse();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                std::shared_ptr<AuthDto> GetAuth() const;
                void SetAuth(const std::shared_ptr<AuthDto>& Value);bool HasAuth() const;
            

        protected:
            std::optional<std::shared_ptr<AuthDto>> m_Auth;
            };

    /// <summary>
        /// Xml definition for an Icon - the pin on a map
        /// </summary>
    class Icon : public csp::services::DtoBase
        {
        public:
            Icon();
            virtual ~Icon();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The url for the pin style for google earth
                    /// </summary>
                utility::string_t GetHref() const;
                void SetHref(const utility::string_t& Value);bool HasHref() const;
            

        protected:
            std::optional<utility::string_t> m_Href;
            };

    /// <summary>
        /// The icon style for the kml document
        /// </summary>
    class IconStyle : public csp::services::DtoBase
        {
        public:
            IconStyle();
            virtual ~IconStyle();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The name of the icon style
                    /// </summary>
                utility::string_t GetId() const;
                void SetId(const utility::string_t& Value);bool HasId() const;
            
                /// <summary>
                    /// The hexBinary color definition for the icon
                    /// the first two letters are the opacity, from 00 (transparent) to ff (fully opaque)
                    /// https://developers.google.com/kml/documentation/kmlreference#colorstyle
                    /// </summary>
                utility::string_t GetColor() const;
                void SetColor(const utility::string_t& Value);bool HasColor() const;
            
                /// <summary>
                    /// Normal or Random Color Mode
                    /// </summary>
                utility::string_t GetColorMode() const;
                void SetColorMode(const utility::string_t& Value);bool HasColorMode() const;
            
                /// <summary>
                    /// The scale of the icon. 1.0f is normal, you can define
                    /// highlighted styles that are larger.
                    /// </summary>
                float GetScale() const;
                void SetScale(float Value);bool HasScale() const;
            
                std::shared_ptr<Icon> GetIcon() const;
                void SetIcon(const std::shared_ptr<Icon>& Value);bool HasIcon() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_Color;
            std::optional<utility::string_t> m_ColorMode;
            std::optional<float> m_Scale;
            std::optional<std::shared_ptr<Icon>> m_Icon;
            };

    /// <summary>
        /// Additional options for importing a space
        /// </summary>
    class ImportSpaceOptions : public csp::services::DtoBase
        {
        public:
            ImportSpaceOptions();
            virtual ~ImportSpaceOptions();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// If true, we will locate an existing space in this environment and overwrite it with the details on the export
                    /// </summary>
                bool GetOverwriteExistingSpace() const;
                void SetOverwriteExistingSpace(const bool& Value);bool HasOverwriteExistingSpace() const;
            
                /// <summary>
                    /// If this space requires an invite to join
                    /// </summary>
                bool GetRequiresInvite() const;
                void SetRequiresInvite(const bool& Value);bool HasRequiresInvite() const;
            
                /// <summary>
                    /// If this space is discoverable
                    /// </summary>
                bool GetDiscoverable() const;
                void SetDiscoverable(const bool& Value);bool HasDiscoverable() const;
            

        protected:
            std::optional<bool> m_OverwriteExistingSpace;
            std::optional<bool> m_RequiresInvite;
            std::optional<bool> m_Discoverable;
            };

    /// <summary>
        /// A request that includes the needed data to import a space
        /// </summary>
    class ImportSpaceRequest : public csp::services::DtoBase
        {
        public:
            ImportSpaceRequest();
            virtual ~ImportSpaceRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The tenant name that the space belongs to
                    /// </summary>
                utility::string_t GetTenantName() const;
                bool HasTenantName() const;
            
                /// <summary>
                    /// The id of the space to duplicate
                    /// </summary>
                utility::string_t GetExportId() const;
                void SetExportId(const utility::string_t& Value);bool HasExportId() const;
            
                /// <summary>
                    /// The ownerId (userId) that this new space will be assigned to
                    /// </summary>
                utility::string_t GetNewGroupOwnerId() const;
                void SetNewGroupOwnerId(const utility::string_t& Value);bool HasNewGroupOwnerId() const;
            
                /// <summary>
                    /// The groupIds we wish to copy the userList from, to apply to the duplicated space
                    /// </summary>
                const std::vector<utility::string_t>& GetMemberGroupIds() const;
                void SetMemberGroupIds(const std::vector<utility::string_t>& Value);bool HasMemberGroupIds() const;
            
                /// <summary>
                    /// THe user that is requesting the space duplication
                    /// </summary>
                utility::string_t GetRequestUserId() const;
                bool HasRequestUserId() const;
            
                /// <summary>
                    /// The unique name for the new space
                    /// </summary>
                utility::string_t GetNewUniqueName() const;
                void SetNewUniqueName(const utility::string_t& Value);bool HasNewUniqueName() const;
            
                std::shared_ptr<ImportSpaceOptions> GetImportSpaceOptions() const;
                void SetImportSpaceOptions(const std::shared_ptr<ImportSpaceOptions>& Value);bool HasImportSpaceOptions() const;
            

        protected:
            std::optional<utility::string_t> m_TenantName;
            std::optional<utility::string_t> m_ExportId;
            std::optional<utility::string_t> m_NewGroupOwnerId;
            std::optional<std::vector<utility::string_t>> m_MemberGroupIds;
            std::optional<utility::string_t> m_RequestUserId;
            std::optional<utility::string_t> m_NewUniqueName;
            std::optional<std::shared_ptr<ImportSpaceOptions>> m_ImportSpaceOptions;
            };

    /// <summary>
        /// Structure defining user position as Kml
        /// </summary>
    class Kml : public csp::services::DtoBase
        {
        public:
            Kml();
            virtual ~Kml();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                std::shared_ptr<PositionKml> GetDocument() const;
                void SetDocument(const std::shared_ptr<PositionKml>& Value);bool HasDocument() const;
            

        protected:
            std::optional<std::shared_ptr<PositionKml>> m_Document;
            };

    /// <summary>
        /// The line string to draw in the placemark
        /// </summary>
    class LineString : public csp::services::DtoBase
        {
        public:
            LineString();
            virtual ~LineString();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Extrude the line to the ground
                    /// </summary>
                bool GetExtrude() const;
                void SetExtrude(const bool& Value);bool HasExtrude() const;
            
                /// <summary>
                    /// Tessellate breaks the line up into smaller chunks
                    /// </summary>
                bool GetTessellate() const;
                void SetTessellate(const bool& Value);bool HasTessellate() const;
            
                std::shared_ptr<AltitudeMode> GetAltitudeMode() const;
                void SetAltitudeMode(const std::shared_ptr<AltitudeMode>& Value);bool HasAltitudeMode() const;
            
                /// <summary>
                    /// The coordinates for this linestring
                    /// </summary>
                utility::string_t GetCoordinates() const;
                void SetCoordinates(const utility::string_t& Value);bool HasCoordinates() const;
            

        protected:
            std::optional<bool> m_Extrude;
            std::optional<bool> m_Tessellate;
            std::optional<std::shared_ptr<AltitudeMode>> m_AltitudeMode;
            std::optional<utility::string_t> m_Coordinates;
            };

    class LocalizedString : public csp::services::DtoBase
        {
        public:
            LocalizedString();
            virtual ~LocalizedString();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                utility::string_t GetLanguageCode() const;
                void SetLanguageCode(const utility::string_t& Value);bool HasLanguageCode() const;
            
                utility::string_t GetValue() const;
                void SetValue(const utility::string_t& Value);bool HasValue() const;
            

        protected:
            std::optional<utility::string_t> m_LanguageCode;
            std::optional<utility::string_t> m_Value;
            };

    /// <summary>
        /// The origin view for the scene
        /// </summary>
    class LookAt : public csp::services::DtoBase
        {
        public:
            LookAt();
            virtual ~LookAt();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The Longitude
                    /// </summary>
                double GetLongitude() const;
                void SetLongitude(double Value);bool HasLongitude() const;
            
                /// <summary>
                    /// The Latitude
                    /// </summary>
                double GetLatitude() const;
                void SetLatitude(double Value);bool HasLatitude() const;
            
                /// <summary>
                    /// The Altitude
                    /// </summary>
                int32_t GetAltitude() const;
                void SetAltitude(int32_t Value);bool HasAltitude() const;
            
                /// <summary>
                    /// The Range
                    /// </summary>
                double GetRange() const;
                void SetRange(double Value);bool HasRange() const;
            
                /// <summary>
                    /// The Tilt
                    /// </summary>
                double GetTilt() const;
                void SetTilt(double Value);bool HasTilt() const;
            
                /// <summary>
                    /// The Heading
                    /// </summary>
                double GetHeading() const;
                void SetHeading(double Value);bool HasHeading() const;
            

        protected:
            std::optional<double> m_Longitude;
            std::optional<double> m_Latitude;
            std::optional<int32_t> m_Altitude;
            std::optional<double> m_Range;
            std::optional<double> m_Tilt;
            std::optional<double> m_Heading;
            };

    /// <summary>
        /// The 3d model we are using as an icon
        /// </summary>
    class Model : public csp::services::DtoBase
        {
        public:
            Model();
            virtual ~Model();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// the value of the Id attribute
                    /// </summary>
                utility::string_t GetId() const;
                void SetId(const utility::string_t& Value);bool HasId() const;
            
                std::shared_ptr<AltitudeMode> GetAltitudeMode() const;
                void SetAltitudeMode(const std::shared_ptr<AltitudeMode>& Value);bool HasAltitudeMode() const;
            
                std::shared_ptr<ModelLocation> GetLocation() const;
                void SetLocation(const std::shared_ptr<ModelLocation>& Value);bool HasLocation() const;
            
                std::shared_ptr<ModelOrientation> GetOrientation() const;
                void SetOrientation(const std::shared_ptr<ModelOrientation>& Value);bool HasOrientation() const;
            
                std::shared_ptr<ModelScale> GetScale() const;
                void SetScale(const std::shared_ptr<ModelScale>& Value);bool HasScale() const;
            
                std::shared_ptr<ModelLink> GetLink() const;
                void SetLink(const std::shared_ptr<ModelLink>& Value);bool HasLink() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<std::shared_ptr<AltitudeMode>> m_AltitudeMode;
            std::optional<std::shared_ptr<ModelLocation>> m_Location;
            std::optional<std::shared_ptr<ModelOrientation>> m_Orientation;
            std::optional<std::shared_ptr<ModelScale>> m_Scale;
            std::optional<std::shared_ptr<ModelLink>> m_Link;
            };

    /// <summary>
        /// The link to the 3d object
        /// </summary>
    class ModelLink : public csp::services::DtoBase
        {
        public:
            ModelLink();
            virtual ~ModelLink();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The location of the 3d object
                    /// </summary>
                utility::string_t GetHref() const;
                void SetHref(const utility::string_t& Value);bool HasHref() const;
            

        protected:
            std::optional<utility::string_t> m_Href;
            };

    /// <summary>
        /// The location of the 3d object
        /// </summary>
    class ModelLocation : public csp::services::DtoBase
        {
        public:
            ModelLocation();
            virtual ~ModelLocation();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The Longitude of the 3d object
                    /// </summary>
                double GetLongitude() const;
                void SetLongitude(double Value);bool HasLongitude() const;
            
                /// <summary>
                    /// The Latitude of the 3d object
                    /// </summary>
                double GetLatitude() const;
                void SetLatitude(double Value);bool HasLatitude() const;
            
                /// <summary>
                    /// The Altitude of the 3d object
                    /// </summary>
                int32_t GetAltitude() const;
                void SetAltitude(int32_t Value);bool HasAltitude() const;
            

        protected:
            std::optional<double> m_Longitude;
            std::optional<double> m_Latitude;
            std::optional<int32_t> m_Altitude;
            };

    /// <summary>
        /// The orientation of the object
        /// </summary>
    class ModelOrientation : public csp::services::DtoBase
        {
        public:
            ModelOrientation();
            virtual ~ModelOrientation();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The heading for the orientation of the object
                    /// </summary>
                float GetHeading() const;
                void SetHeading(float Value);bool HasHeading() const;
            
                /// <summary>
                    /// The tilt of the object
                    /// </summary>
                float GetTilt() const;
                void SetTilt(float Value);bool HasTilt() const;
            
                /// <summary>
                    /// The roll of the object
                    /// </summary>
                int32_t GetRoll() const;
                void SetRoll(int32_t Value);bool HasRoll() const;
            

        protected:
            std::optional<float> m_Heading;
            std::optional<float> m_Tilt;
            std::optional<int32_t> m_Roll;
            };

    /// <summary>
        /// The scale given to the 3d object
        /// </summary>
    class ModelScale : public csp::services::DtoBase
        {
        public:
            ModelScale();
            virtual ~ModelScale();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The X scale
                    /// </summary>
                int32_t GetX() const;
                void SetX(int32_t Value);bool HasX() const;
            
                /// <summary>
                    /// The Y scale
                    /// </summary>
                int32_t GetY() const;
                void SetY(int32_t Value);bool HasY() const;
            
                /// <summary>
                    /// The Z scale
                    /// </summary>
                int32_t GetZ() const;
                void SetZ(int32_t Value);bool HasZ() const;
            

        protected:
            std::optional<int32_t> m_X;
            std::optional<int32_t> m_Y;
            std::optional<int32_t> m_Z;
            };

    /// <summary>
        /// Definition for a Placemark Inside a Kml Document
        /// </summary>
    class Placemark : public csp::services::DtoBase
        {
        public:
            Placemark();
            virtual ~Placemark();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// the value of the Id attribute
                    /// </summary>
                utility::string_t GetId() const;
                void SetId(const utility::string_t& Value);bool HasId() const;
            
                /// <summary>
                    /// The name of the placemark
                    /// </summary>
                utility::string_t GetName() const;
                void SetName(const utility::string_t& Value);bool HasName() const;
            
                /// <summary>
                    /// The style associated with this placemark, defined by the
                    /// Style on the root level of the document. If the root style name is
                    /// "MyStyle", this would reference it with a string "#MyStyle"
                    /// </summary>
                utility::string_t GetStyleUrl() const;
                void SetStyleUrl(const utility::string_t& Value);bool HasStyleUrl() const;
            
                /// <summary>
                    /// The description of the placemark. This will show up on google earth
                    /// as a description to the user
                    /// </summary>
                utility::string_t GetDescription() const;
                void SetDescription(const utility::string_t& Value);bool HasDescription() const;
            
                std::shared_ptr<LineString> GetLineString() const;
                void SetLineString(const std::shared_ptr<LineString>& Value);bool HasLineString() const;
            
                std::shared_ptr<Point> GetPoint() const;
                void SetPoint(const std::shared_ptr<Point>& Value);bool HasPoint() const;
            
                std::shared_ptr<Model> GetModel() const;
                void SetModel(const std::shared_ptr<Model>& Value);bool HasModel() const;
            
                std::shared_ptr<LookAt> GetLookAt() const;
                void SetLookAt(const std::shared_ptr<LookAt>& Value);bool HasLookAt() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_Name;
            std::optional<utility::string_t> m_StyleUrl;
            std::optional<utility::string_t> m_Description;
            std::optional<std::shared_ptr<LineString>> m_LineString;
            std::optional<std::shared_ptr<Point>> m_Point;
            std::optional<std::shared_ptr<Model>> m_Model;
            std::optional<std::shared_ptr<LookAt>> m_LookAt;
            };

    /// <summary>
        /// The individual point to draw in the placemark
        /// </summary>
    class Point : public csp::services::DtoBase
        {
        public:
            Point();
            virtual ~Point();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Tessellate breaks the line up into smaller chunks
                    /// </summary>
                bool GetTessellate() const;
                void SetTessellate(const bool& Value);bool HasTessellate() const;
            
                std::shared_ptr<AltitudeMode> GetAltitudeMode() const;
                void SetAltitudeMode(const std::shared_ptr<AltitudeMode>& Value);bool HasAltitudeMode() const;
            
                /// <summary>
                    /// The coordinates for this linestring
                    /// </summary>
                utility::string_t GetCoordinates() const;
                void SetCoordinates(const utility::string_t& Value);bool HasCoordinates() const;
            

        protected:
            std::optional<bool> m_Tessellate;
            std::optional<std::shared_ptr<AltitudeMode>> m_AltitudeMode;
            std::optional<utility::string_t> m_Coordinates;
            };

    /// <summary>
        /// Structure defining user position as Kml
        /// </summary>
    class PositionKml : public csp::services::DtoBase
        {
        public:
            PositionKml();
            virtual ~PositionKml();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The name of the kml structure
                    /// </summary>
                utility::string_t GetName() const;
                void SetName(const utility::string_t& Value);bool HasName() const;
            
                /// <summary>
                    /// The style definition of the kml elements. These are used to define each point or set of points
                    /// and how they are shown on a map (color, pin style, size, etc)
                    /// </summary>
                const std::vector<std::shared_ptr<Style>>& GetStyle() const;
                void SetStyle(const std::vector<std::shared_ptr<Style>>& Value);bool HasStyle() const;
            
                /// <summary>
                    /// The visibility of the structure, should usually be true
                    /// </summary>
                bool GetVisibility() const;
                void SetVisibility(const bool& Value);bool HasVisibility() const;
            
                /// <summary>
                    /// Camera operator - i believe
                    /// </summary>
                bool GetOpen() const;
                void SetOpen(const bool& Value);bool HasOpen() const;
            
                /// <summary>
                    /// The placemark, defines a point or a line on a map
                    /// </summary>
                const std::vector<std::shared_ptr<Placemark>>& GetPlacemark() const;
                void SetPlacemark(const std::vector<std::shared_ptr<Placemark>>& Value);bool HasPlacemark() const;
            

        protected:
            std::optional<utility::string_t> m_Name;
            std::optional<std::vector<std::shared_ptr<Style>>> m_Style;
            std::optional<bool> m_Visibility;
            std::optional<bool> m_Open;
            std::optional<std::vector<std::shared_ptr<Placemark>>> m_Placemark;
            };

    class ProblemDetails : public csp::services::DtoBase
        {
        public:
            ProblemDetails();
            virtual ~ProblemDetails();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                utility::string_t GetType() const;
                void SetType(const utility::string_t& Value);bool HasType() const;
            
                utility::string_t GetTitle() const;
                void SetTitle(const utility::string_t& Value);bool HasTitle() const;
            
                int32_t GetStatus() const;
                void SetStatus(int32_t Value);bool HasStatus() const;
            
                utility::string_t GetDetail() const;
                void SetDetail(const utility::string_t& Value);bool HasDetail() const;
            
                utility::string_t GetInstance() const;
                void SetInstance(const utility::string_t& Value);bool HasInstance() const;
            
                const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& GetExtensions() const;
                void SetExtensions(const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& Value);bool HasExtensions() const;
            

        protected:
            std::optional<utility::string_t> m_Type;
            std::optional<utility::string_t> m_Title;
            std::optional<int32_t> m_Status;
            std::optional<utility::string_t> m_Detail;
            std::optional<utility::string_t> m_Instance;
            std::optional<std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>> m_Extensions;
            };

    /// <summary>
        /// Prototype data transform object
        /// </summary>
    class PrototypeDto : public csp::services::DtoBase
        {
        public:
            PrototypeDto();
            virtual ~PrototypeDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The unique identifier for this instance
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// Name for the prototype
                    /// </summary>
                utility::string_t GetName() const;
                void SetName(const utility::string_t& Value);bool HasName() const;
            
                /// <summary>
                    /// Tags for this prototype
                    /// or an empty list if none
                    /// </summary>
                const std::vector<utility::string_t>& GetTags() const;
                void SetTags(const std::vector<utility::string_t>& Value);bool HasTags() const;
            
                /// <summary>
                    /// Collection of metadata for this prototype
                    /// or an empty dictionary if none
                    /// </summary>
                const std::map<utility::string_t, utility::string_t>& GetMetadata() const;
                void SetMetadata(const std::map<utility::string_t, utility::string_t>& Value);bool HasMetadata() const;
            
                /// <summary>
                    /// Collection of translations stored per key meant to be shown in localized user interfaces.
                    /// </summary>
                const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& GetUiStrings() const;
                void SetUiStrings(const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value);bool HasUiStrings() const;
            
                /// <summary>
                    /// Collection of default states for certain items such as reward items.
                    /// </summary>
                const std::map<utility::string_t, utility::string_t>& GetState() const;
                void SetState(const std::map<utility::string_t, utility::string_t>& Value);bool HasState() const;
            
                /// <summary>
                    /// The Point of Interest ID that contains geospatial data related to this Prototype
                    /// </summary>
                utility::string_t GetPointOfInterestId() const;
                void SetPointOfInterestId(const utility::string_t& Value);bool HasPointOfInterestId() const;
            
                /// <summary>
                    /// The Parent PrototypeId to this particular record, if any
                    /// </summary>
                utility::string_t GetParentId() const;
                void SetParentId(const utility::string_t& Value);bool HasParentId() const;
            
                /// <summary>
                    /// If this prototype can only be viewed by a specific set of group ids
                    /// </summary>
                const std::vector<utility::string_t>& GetGroupIds() const;
                void SetGroupIds(const std::vector<utility::string_t>& Value);bool HasGroupIds() const;
            
                /// <summary>
                    /// The user identity which created this instance
                    /// </summary>
                utility::string_t GetCreatedBy() const;
                bool HasCreatedBy() const;
            
                /// <summary>
                    /// The date and time this prototype was first created
                    /// </summary>
                utility::string_t GetCreatedAt() const;
                bool HasCreatedAt() const;
            
                /// <summary>
                    /// The user identity which last updated this instance
                    /// </summary>
                utility::string_t GetUpdatedBy() const;
                bool HasUpdatedBy() const;
            
                /// <summary>
                    /// The date and time this prototype was last updated
                    /// </summary>
                utility::string_t GetUpdatedAt() const;
                bool HasUpdatedAt() const;
            
                /// <summary>
                    /// There can be only one... instantiated prototype per user
                    /// </summary>
                bool GetHighlander() const;
                void SetHighlander(const bool& Value);bool HasHighlander() const;
            
                /// <summary>
                    /// Type of the prototype
                    /// </summary>
                utility::string_t GetType() const;
                void SetType(const utility::string_t& Value);bool HasType() const;
            
                /// <summary>
                    /// Whether the prototype is owned by the system
                    /// </summary>
                bool GetSystemOwned() const;
                void SetSystemOwned(const bool& Value);bool HasSystemOwned() const;
            
                /// <summary>
                    /// Whether the prototype is owned by the user who created it
                    /// </summary>
                utility::string_t GetPrototypeOwnerId() const;
                void SetPrototypeOwnerId(const utility::string_t& Value);bool HasPrototypeOwnerId() const;
            
                /// <summary>
                    /// The organizationId that the prototype belongs to
                    /// </summary>
                utility::string_t GetOrganizationId() const;
                bool HasOrganizationId() const;
            
                /// <summary>
                    /// Access restrictions for read, if none, publicly readable
                    /// </summary>
                const std::vector<utility::string_t>& GetReadAccess() const;
                void SetReadAccess(const std::vector<utility::string_t>& Value);bool HasReadAccess() const;
            
                /// <summary>
                    /// Access restrictions for write, if none, publicly writeable
                    /// </summary>
                const std::vector<utility::string_t>& GetWriteAccess() const;
                void SetWriteAccess(const std::vector<utility::string_t>& Value);bool HasWriteAccess() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_Name;
            std::optional<std::vector<utility::string_t>> m_Tags;
            std::optional<std::map<utility::string_t, utility::string_t>> m_Metadata;
            std::optional<std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>> m_UiStrings;
            std::optional<std::map<utility::string_t, utility::string_t>> m_State;
            std::optional<utility::string_t> m_PointOfInterestId;
            std::optional<utility::string_t> m_ParentId;
            std::optional<std::vector<utility::string_t>> m_GroupIds;
            std::optional<utility::string_t> m_CreatedBy;
            std::optional<utility::string_t> m_CreatedAt;
            std::optional<utility::string_t> m_UpdatedBy;
            std::optional<utility::string_t> m_UpdatedAt;
            std::optional<bool> m_Highlander;
            std::optional<utility::string_t> m_Type;
            std::optional<bool> m_SystemOwned;
            std::optional<utility::string_t> m_PrototypeOwnerId;
            std::optional<utility::string_t> m_OrganizationId;
            std::optional<std::vector<utility::string_t>> m_ReadAccess;
            std::optional<std::vector<utility::string_t>> m_WriteAccess;
            };

    class PrototypeDtoDataPage : public csp::services::DtoBase
        {
        public:
            PrototypeDtoDataPage();
            virtual ~PrototypeDtoDataPage();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                const std::vector<std::shared_ptr<PrototypeDto>>& GetItems() const;
                void SetItems(const std::vector<std::shared_ptr<PrototypeDto>>& Value);bool HasItems() const;
            
                int32_t GetSkip() const;
                void SetSkip(int32_t Value);bool HasSkip() const;
            
                int32_t GetLimit() const;
                void SetLimit(int32_t Value);bool HasLimit() const;
            
                int32_t GetItemCount() const;
                void SetItemCount(int32_t Value);bool HasItemCount() const;
            
                int64_t GetItemTotalCount() const;
                void SetItemTotalCount(int64_t Value);bool HasItemTotalCount() const;
            

        protected:
            std::optional<std::vector<std::shared_ptr<PrototypeDto>>> m_Items;
            std::optional<int32_t> m_Skip;
            std::optional<int32_t> m_Limit;
            std::optional<int32_t> m_ItemCount;
            std::optional<int64_t> m_ItemTotalCount;
            };

    /// <summary>
        /// Contains information for sorting entities.
        /// </summary>
    class SequenceDto : public csp::services::DtoBase
        {
        public:
            SequenceDto();
            virtual ~SequenceDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The Id of this sequence. Can be at most 64 characters.
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// The unique key used to identify this sequence. Can be at most 1000 characters.
                    /// </summary>
                utility::string_t GetKey() const;
                void SetKey(const utility::string_t& Value);bool HasKey() const;
            
                /// <summary>
                    /// An ordered list of Ids in this sequence.
                    /// </summary>
                const std::vector<utility::string_t>& GetItems() const;
                void SetItems(const std::vector<utility::string_t>& Value);bool HasItems() const;
            
                /// <summary>
                    /// The type of entity that the Olympus.Service.Aggregation.Dtos.SequenceDto.ReferenceId identifies, e.g. "GroupId".
                    /// Can be at most 64 characters.
                    /// </summary>
                utility::string_t GetReferenceType() const;
                void SetReferenceType(const utility::string_t& Value);bool HasReferenceType() const;
            
                /// <summary>
                    /// The Id of the entity that this sequence is associated with to, e.g. a group Id. Can
                    /// be at most 64 characters.
                    /// </summary>
                utility::string_t GetReferenceId() const;
                void SetReferenceId(const utility::string_t& Value);bool HasReferenceId() const;
            
                /// <summary>
                    /// Optional metadata about the sequence. Can be used as the client sees fit for managing
                    /// sequences. Keys and values can be at most 64 characters. The dictionary can have at most
                    /// 25 entries.
                    /// </summary>
                const std::map<utility::string_t, utility::string_t>& GetMetadata() const;
                void SetMetadata(const std::map<utility::string_t, utility::string_t>& Value);bool HasMetadata() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_Key;
            std::optional<std::vector<utility::string_t>> m_Items;
            std::optional<utility::string_t> m_ReferenceType;
            std::optional<utility::string_t> m_ReferenceId;
            std::optional<std::map<utility::string_t, utility::string_t>> m_Metadata;
            };

    class SequenceDtoDataPage : public csp::services::DtoBase
        {
        public:
            SequenceDtoDataPage();
            virtual ~SequenceDtoDataPage();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                const std::vector<std::shared_ptr<SequenceDto>>& GetItems() const;
                void SetItems(const std::vector<std::shared_ptr<SequenceDto>>& Value);bool HasItems() const;
            
                int32_t GetSkip() const;
                void SetSkip(int32_t Value);bool HasSkip() const;
            
                int32_t GetLimit() const;
                void SetLimit(int32_t Value);bool HasLimit() const;
            
                int32_t GetItemCount() const;
                void SetItemCount(int32_t Value);bool HasItemCount() const;
            
                int64_t GetItemTotalCount() const;
                void SetItemTotalCount(int64_t Value);bool HasItemTotalCount() const;
            

        protected:
            std::optional<std::vector<std::shared_ptr<SequenceDto>>> m_Items;
            std::optional<int32_t> m_Skip;
            std::optional<int32_t> m_Limit;
            std::optional<int32_t> m_ItemCount;
            std::optional<int64_t> m_ItemTotalCount;
            };

    /// <summary>
        /// Generic descriptor for a request to a service
        /// </summary>
    class ServiceRequest : public csp::services::DtoBase
        {
        public:
            ServiceRequest();
            virtual ~ServiceRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// A key that identifies the API
                    /// </summary>
                utility::string_t GetServiceName() const;
                void SetServiceName(const utility::string_t& Value);bool HasServiceName() const;
            
                /// <summary>
                    /// A key that identifies the Operation on the API
                    /// </summary>
                utility::string_t GetOperationName() const;
                void SetOperationName(const utility::string_t& Value);bool HasOperationName() const;
            
                /// <summary>
                    /// A flag indicating this request is actually a request
                    /// for information about the operation identified by
                    /// Magnopus.Service.ExternalServiceProxy.Dtos.ServiceRequest.OperationName
                    /// </summary>
                bool GetHelp() const;
                void SetHelp(const bool& Value);bool HasHelp() const;
            
                /// <summary>
                    /// A key/value store of input values that will be provided
                    /// to the API
                    /// </summary>
                const std::map<utility::string_t, utility::string_t>& GetParameters() const;
                void SetParameters(const std::map<utility::string_t, utility::string_t>& Value);bool HasParameters() const;
            

        protected:
            std::optional<utility::string_t> m_ServiceName;
            std::optional<utility::string_t> m_OperationName;
            std::optional<bool> m_Help;
            std::optional<std::map<utility::string_t, utility::string_t>> m_Parameters;
            };

    /// <summary>
        /// Abstract representation of an API response
        /// </summary>
    class ServiceResponse : public csp::services::DtoBase
        {
        public:
            ServiceResponse();
            virtual ~ServiceResponse();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Whether the call can be considered a success
                    /// </summary>
                bool GetSuccess() const;
                void SetSuccess(const bool& Value);bool HasSuccess() const;
            
                /// <summary>
                    /// The numeric status of the call
                    /// </summary>
                int32_t GetStatusCode() const;
                void SetStatusCode(int32_t Value);bool HasStatusCode() const;
            
                /// <summary>
                    /// Some optional justification for the numeric status
                    /// </summary>
                utility::string_t GetStatusReason() const;
                void SetStatusReason(const utility::string_t& Value);bool HasStatusReason() const;
            
                /// <summary>
                    /// An optional error specific code
                    /// </summary>
                utility::string_t GetErrorCode() const;
                void SetErrorCode(const utility::string_t& Value);bool HasErrorCode() const;
            
                /// <summary>
                    /// The raw operation result
                    /// </summary>
                std::shared_ptr<rapidjson::Document> GetOperationResult() const;
                void SetOperationResult(const std::shared_ptr<rapidjson::Document>& Value);bool HasOperationResult() const;
            

        protected:
            std::optional<bool> m_Success;
            std::optional<int32_t> m_StatusCode;
            std::optional<utility::string_t> m_StatusReason;
            std::optional<utility::string_t> m_ErrorCode;
            std::optional<std::shared_ptr<rapidjson::Document>> m_OperationResult;
            };

    /// <summary>
        /// Contains information contained within a Shopify Cart
        /// </summary>
    class ShopifyCartDto : public csp::services::DtoBase
        {
        public:
            ShopifyCartDto();
            virtual ~ShopifyCartDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Id of the Space this cart is associated to
                    /// </summary>
                utility::string_t GetSpaceId() const;
                bool HasSpaceId() const;
            
                /// <summary>
                    /// Id of the Cart at Shopify
                    /// </summary>
                utility::string_t GetShopifyCartId() const;
                bool HasShopifyCartId() const;
            
                /// <summary>
                    /// Lines representing items in the Shopify Cart
                    /// </summary>
                const std::vector<std::shared_ptr<ShopifyCartLineDto>>& GetLines() const;
                void SetLines(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value);bool HasLines() const;
            
                /// <summary>
                    /// Total quantity of all lines
                    /// </summary>
                int32_t GetTotalQuantity() const;
                bool HasTotalQuantity() const;
            

        protected:
            std::optional<utility::string_t> m_SpaceId;
            std::optional<utility::string_t> m_ShopifyCartId;
            std::optional<std::vector<std::shared_ptr<ShopifyCartLineDto>>> m_Lines;
            std::optional<int32_t> m_TotalQuantity;
            };

    /// <summary>
        /// Represents a line item in a Shopify Cart
        /// </summary>
    class ShopifyCartLineDto : public csp::services::DtoBase
        {
        public:
            ShopifyCartLineDto();
            virtual ~ShopifyCartLineDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Id of the Cart Line in the Shopify Cart
                    /// </summary>
                utility::string_t GetShopifyCartLineId() const;
                void SetShopifyCartLineId(const utility::string_t& Value);bool HasShopifyCartLineId() const;
            
                /// <summary>
                    /// Id of the Product Variant in Shopify
                    /// </summary>
                utility::string_t GetProductVariantId() const;
                void SetProductVariantId(const utility::string_t& Value);bool HasProductVariantId() const;
            
                /// <summary>
                    /// Quantity of the item
                    /// </summary>
                int32_t GetQuantity() const;
                void SetQuantity(int32_t Value);bool HasQuantity() const;
            

        protected:
            std::optional<utility::string_t> m_ShopifyCartLineId;
            std::optional<utility::string_t> m_ProductVariantId;
            std::optional<int32_t> m_Quantity;
            };

    /// <summary>
        /// Contains information contained within a Shopify Cart
        /// </summary>
    class ShopifyCartUpdateDto : public csp::services::DtoBase
        {
        public:
            ShopifyCartUpdateDto();
            virtual ~ShopifyCartUpdateDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Id of the Space this cart is associated to
                    /// </summary>
                utility::string_t GetSpaceId() const;
                bool HasSpaceId() const;
            
                /// <summary>
                    /// Id of the Cart at Shopify
                    /// </summary>
                utility::string_t GetShopifyCartId() const;
                bool HasShopifyCartId() const;
            
                /// <summary>
                    /// Add line updates to make to the cart
                    /// </summary>
                const std::vector<std::shared_ptr<ShopifyCartLineDto>>& GetAddLineCartChanges() const;
                void SetAddLineCartChanges(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value);bool HasAddLineCartChanges() const;
            
                /// <summary>
                    /// Remove line updates to make to the cart
                    /// </summary>
                const std::vector<std::shared_ptr<ShopifyCartLineDto>>& GetRemoveLineCartChanges() const;
                void SetRemoveLineCartChanges(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value);bool HasRemoveLineCartChanges() const;
            
                /// <summary>
                    /// Update line quantity updates to make to the cart
                    /// </summary>
                const std::vector<std::shared_ptr<ShopifyCartLineDto>>& GetUpdateLineQtyCartChanges() const;
                void SetUpdateLineQtyCartChanges(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value);bool HasUpdateLineQtyCartChanges() const;
            

        protected:
            std::optional<utility::string_t> m_SpaceId;
            std::optional<utility::string_t> m_ShopifyCartId;
            std::optional<std::vector<std::shared_ptr<ShopifyCartLineDto>>> m_AddLineCartChanges;
            std::optional<std::vector<std::shared_ptr<ShopifyCartLineDto>>> m_RemoveLineCartChanges;
            std::optional<std::vector<std::shared_ptr<ShopifyCartLineDto>>> m_UpdateLineQtyCartChanges;
            };

    /// <summary>
        /// Contains information necessary to Navigate to a storefront on Shopify
        /// </summary>
    class ShopifyCheckoutDto : public csp::services::DtoBase
        {
        public:
            ShopifyCheckoutDto();
            virtual ~ShopifyCheckoutDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The url for the store
                    /// </summary>
                utility::string_t GetStoreUrl() const;
                bool HasStoreUrl() const;
            
                /// <summary>
                    /// The url for the store
                    /// </summary>
                utility::string_t GetCheckoutUrl() const;
                bool HasCheckoutUrl() const;
            

        protected:
            std::optional<utility::string_t> m_StoreUrl;
            std::optional<utility::string_t> m_CheckoutUrl;
            };

    /// <summary>
        /// Represents a price in Shopify with currency code
        /// </summary>
    class ShopifyMoney : public csp::services::DtoBase
        {
        public:
            ShopifyMoney();
            virtual ~ShopifyMoney();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The name of the option, Such as Size
                    /// </summary>
                double GetAmount() const;
                bool HasAmount() const;
            
                /// <summary>
                    /// The value of the option for this variant, such as Small
                    /// </summary>
                utility::string_t GetCurrencyCode() const;
                bool HasCurrencyCode() const;
            

        protected:
            std::optional<double> m_Amount;
            std::optional<utility::string_t> m_CurrencyCode;
            };

    /// <summary>
        /// Object containing properties for space details.
        /// </summary>
    class ShopifyProductDto : public csp::services::DtoBase
        {
        public:
            ShopifyProductDto();
            virtual ~ShopifyProductDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The date the product was created
                    /// </summary>
                utility::string_t GetCreatedAt() const;
                bool HasCreatedAt() const;
            
                /// <summary>
                    /// The id of the product
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// The title of the product
                    /// </summary>
                utility::string_t GetTitle() const;
                bool HasTitle() const;
            
                /// <summary>
                    /// The product description
                    /// </summary>
                utility::string_t GetDescription() const;
                bool HasDescription() const;
            
                /// <summary>
                    /// A list of available product tags
                    /// </summary>
                const std::vector<utility::string_t>& GetTags() const;
                bool HasTags() const;
            
                /// <summary>
                    /// A list of available variants
                    /// </summary>
                const std::vector<std::shared_ptr<ShopifyProductVariants>>& GetVariants() const;
                bool HasVariants() const;
            
                /// <summary>
                    /// A list of available media
                    /// </summary>
                const std::vector<std::shared_ptr<ShopifyProductMedia>>& GetMedia() const;
                bool HasMedia() const;
            

        protected:
            std::optional<utility::string_t> m_CreatedAt;
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_Title;
            std::optional<utility::string_t> m_Description;
            std::optional<std::vector<utility::string_t>> m_Tags;
            std::optional<std::vector<std::shared_ptr<ShopifyProductVariants>>> m_Variants;
            std::optional<std::vector<std::shared_ptr<ShopifyProductMedia>>> m_Media;
            };

    /// <summary>
        /// A media item of the product
        /// </summary>
    class ShopifyProductMedia : public csp::services::DtoBase
        {
        public:
            ShopifyProductMedia();
            virtual ~ShopifyProductMedia();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Media's content type
                    /// </summary>
                utility::string_t GetMediaContentType() const;
                bool HasMediaContentType() const;
            
                /// <summary>
                    /// Media's 'alt' description
                    /// </summary>
                utility::string_t GetAlt() const;
                bool HasAlt() const;
            
                /// <summary>
                    /// Url of media
                    /// </summary>
                utility::string_t GetUrl() const;
                bool HasUrl() const;
            
                /// <summary>
                    /// The width of the media, if available
                    /// </summary>
                int32_t GetWidth() const;
                bool HasWidth() const;
            
                /// <summary>
                    /// The height of the media, if available
                    /// </summary>
                int32_t GetHeight() const;
                bool HasHeight() const;
            

        protected:
            std::optional<utility::string_t> m_MediaContentType;
            std::optional<utility::string_t> m_Alt;
            std::optional<utility::string_t> m_Url;
            std::optional<int32_t> m_Width;
            std::optional<int32_t> m_Height;
            };

    /// <summary>
        /// A variant of the original product
        /// </summary>
    class ShopifyProductVariants : public csp::services::DtoBase
        {
        public:
            ShopifyProductVariants();
            virtual ~ShopifyProductVariants();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The id of the product variant
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// The title of the product variant
                    /// </summary>
                utility::string_t GetTitle() const;
                bool HasTitle() const;
            
                /// <summary>
                    /// If the product variant is actually available
                    /// </summary>
                bool GetAvailableForSale() const;
                bool HasAvailableForSale() const;
            
                /// <summary>
                    /// Inventory quantity available
                    /// </summary>
                int32_t GetQuantityAvailable() const;
                bool HasQuantityAvailable() const;
            
                std::shared_ptr<ShopifyProductMedia> GetImage() const;
                void SetImage(const std::shared_ptr<ShopifyProductMedia>& Value);bool HasImage() const;
            
                /// <summary>
                    /// Selected options, such as size, for the product, if any.
                    /// </summary>
                const std::vector<std::shared_ptr<ShopifyVariantOption>>& GetSelectedOptions() const;
                bool HasSelectedOptions() const;
            
                std::shared_ptr<ShopifyMoney> GetUnitPrice() const;
                void SetUnitPrice(const std::shared_ptr<ShopifyMoney>& Value);bool HasUnitPrice() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_Title;
            std::optional<bool> m_AvailableForSale;
            std::optional<int32_t> m_QuantityAvailable;
            std::optional<std::shared_ptr<ShopifyProductMedia>> m_Image;
            std::optional<std::vector<std::shared_ptr<ShopifyVariantOption>>> m_SelectedOptions;
            std::optional<std::shared_ptr<ShopifyMoney>> m_UnitPrice;
            };

    /// <summary>
        /// Contains information necessary to integrate with a particular storefront
        /// on the Storefront API as well as associates that info to a Space.
        /// </summary>
    class ShopifyStorefrontDto : public csp::services::DtoBase
        {
        public:
            ShopifyStorefrontDto();
            virtual ~ShopifyStorefrontDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Id of the Record
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// Name of the store, not including the URL portion,
                    /// for instance 'magtesty' in 'magtesty.myshopify.com'
                    /// </summary>
                utility::string_t GetStoreName() const;
                void SetStoreName(const utility::string_t& Value);bool HasStoreName() const;
            
                /// <summary>
                    /// Unique identifier of the Olympus User who setup the store
                    /// </summary>
                utility::string_t GetSpaceOwnerId() const;
                bool HasSpaceOwnerId() const;
            
                /// <summary>
                    /// Unique identifier of the Olympus User who setup the store
                    /// </summary>
                utility::string_t GetSpaceId() const;
                bool HasSpaceId() const;
            
                /// <summary>
                    /// Whether or not the store integration is meant to be active
                    /// </summary>
                bool GetIsEcommerceActive() const;
                void SetIsEcommerceActive(const bool& Value);bool HasIsEcommerceActive() const;
            
                /// <summary>
                    /// The private access token for the storefront - stored as an encrypted value
                    /// </summary>
                utility::string_t GetPrivateAccessToken() const;
                void SetPrivateAccessToken(const utility::string_t& Value);bool HasPrivateAccessToken() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_StoreName;
            std::optional<utility::string_t> m_SpaceOwnerId;
            std::optional<utility::string_t> m_SpaceId;
            std::optional<bool> m_IsEcommerceActive;
            std::optional<utility::string_t> m_PrivateAccessToken;
            };

    class ShopifyStorefrontDtoDataPage : public csp::services::DtoBase
        {
        public:
            ShopifyStorefrontDtoDataPage();
            virtual ~ShopifyStorefrontDtoDataPage();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                const std::vector<std::shared_ptr<ShopifyStorefrontDto>>& GetItems() const;
                void SetItems(const std::vector<std::shared_ptr<ShopifyStorefrontDto>>& Value);bool HasItems() const;
            
                int32_t GetSkip() const;
                void SetSkip(int32_t Value);bool HasSkip() const;
            
                int32_t GetLimit() const;
                void SetLimit(int32_t Value);bool HasLimit() const;
            
                int32_t GetItemCount() const;
                void SetItemCount(int32_t Value);bool HasItemCount() const;
            
                int64_t GetItemTotalCount() const;
                void SetItemTotalCount(int64_t Value);bool HasItemTotalCount() const;
            

        protected:
            std::optional<std::vector<std::shared_ptr<ShopifyStorefrontDto>>> m_Items;
            std::optional<int32_t> m_Skip;
            std::optional<int32_t> m_Limit;
            std::optional<int32_t> m_ItemCount;
            std::optional<int64_t> m_ItemTotalCount;
            };

    /// <summary>
        /// Contains information to make a request on behalf of a storefront to validate a storename, token pair
        /// </summary>
    class ShopifyStorefrontValidationRequest : public csp::services::DtoBase
        {
        public:
            ShopifyStorefrontValidationRequest();
            virtual ~ShopifyStorefrontValidationRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Name of the store, not including the URL portion,
                    /// for instance 'magtesty' in 'magtesty.myshopify.com'
                    /// </summary>
                utility::string_t GetStoreName() const;
                void SetStoreName(const utility::string_t& Value);bool HasStoreName() const;
            
                /// <summary>
                    /// The private access token for the storefront - stored as an encrypted value
                    /// </summary>
                utility::string_t GetPrivateAccessToken() const;
                void SetPrivateAccessToken(const utility::string_t& Value);bool HasPrivateAccessToken() const;
            

        protected:
            std::optional<utility::string_t> m_StoreName;
            std::optional<utility::string_t> m_PrivateAccessToken;
            };

    /// <summary>
        /// An option of a product variant, such as size or color
        /// </summary>
    class ShopifyVariantOption : public csp::services::DtoBase
        {
        public:
            ShopifyVariantOption();
            virtual ~ShopifyVariantOption();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The name of the option, Such as Size
                    /// </summary>
                utility::string_t GetOptionName() const;
                bool HasOptionName() const;
            
                /// <summary>
                    /// The value of the option for this variant, such as Small
                    /// </summary>
                utility::string_t GetOptionValue() const;
                bool HasOptionValue() const;
            

        protected:
            std::optional<utility::string_t> m_OptionName;
            std::optional<utility::string_t> m_OptionValue;
            };

    /// <summary>
        /// Version info related to a named slice of functionality -
        /// could be a subsystem or a whole (hotspots [CSP feature], CSP [entire client platform], stripe [3rd party api])
        /// </summary>
    class SliceCompatibility : public csp::services::DtoBase
        {
        public:
            SliceCompatibility();
            virtual ~SliceCompatibility();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The minimum, lowest, oldest version this slice is compatible with -
                    /// ie, the first version to support this slice or the last breaking change.
                    /// A value of '*' indicates total compatibility, should that exist.
                    /// </summary>
                utility::string_t GetMinimumVersion() const;
                void SetMinimumVersion(const utility::string_t& Value);bool HasMinimumVersion() const;
            

        protected:
            std::optional<utility::string_t> m_MinimumVersion;
            };

    /// <summary>
        /// Object containing properties for space event details.
        /// </summary>
    class SpaceEventDto : public csp::services::DtoBase
        {
        public:
            SpaceEventDto();
            virtual ~SpaceEventDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Unique identifier
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// Unique identifier of space
                    /// </summary>
                utility::string_t GetSpaceId() const;
                bool HasSpaceId() const;
            
                /// <summary>
                    /// Unique identifier of space owner
                    /// </summary>
                utility::string_t GetSpaceOwnerId() const;
                bool HasSpaceOwnerId() const;
            
                /// <summary>
                    /// Unique identifier of event created with event ticket vendor
                    /// </summary>
                utility::string_t GetVendorEventId() const;
                void SetVendorEventId(const utility::string_t& Value);bool HasVendorEventId() const;
            
                /// <summary>
                    /// The name of event ticket vendor
                    /// </summary>
                utility::string_t GetVendorName() const;
                void SetVendorName(const utility::string_t& Value);bool HasVendorName() const;
            
                /// <summary>
                    /// The link to the event with the event ticket vendor
                    /// </summary>
                utility::string_t GetVendorEventUri() const;
                void SetVendorEventUri(const utility::string_t& Value);bool HasVendorEventUri() const;
            
                /// <summary>
                    /// Flag to indicate if space is currently ticketed
                    /// </summary>
                bool GetIsTicketingActive() const;
                void SetIsTicketingActive(const bool& Value);bool HasIsTicketingActive() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_SpaceId;
            std::optional<utility::string_t> m_SpaceOwnerId;
            std::optional<utility::string_t> m_VendorEventId;
            std::optional<utility::string_t> m_VendorName;
            std::optional<utility::string_t> m_VendorEventUri;
            std::optional<bool> m_IsTicketingActive;
            };

    class SpaceEventDtoDataPage : public csp::services::DtoBase
        {
        public:
            SpaceEventDtoDataPage();
            virtual ~SpaceEventDtoDataPage();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                const std::vector<std::shared_ptr<SpaceEventDto>>& GetItems() const;
                void SetItems(const std::vector<std::shared_ptr<SpaceEventDto>>& Value);bool HasItems() const;
            
                int32_t GetSkip() const;
                void SetSkip(int32_t Value);bool HasSkip() const;
            
                int32_t GetLimit() const;
                void SetLimit(int32_t Value);bool HasLimit() const;
            
                int32_t GetItemCount() const;
                void SetItemCount(int32_t Value);bool HasItemCount() const;
            
                int64_t GetItemTotalCount() const;
                void SetItemTotalCount(int64_t Value);bool HasItemTotalCount() const;
            

        protected:
            std::optional<std::vector<std::shared_ptr<SpaceEventDto>>> m_Items;
            std::optional<int32_t> m_Skip;
            std::optional<int32_t> m_Limit;
            std::optional<int32_t> m_ItemCount;
            std::optional<int64_t> m_ItemTotalCount;
            };

    /// <summary>
        /// Space Export data
        /// </summary>
    class SpaceExportDto : public csp::services::DtoBase
        {
        public:
            SpaceExportDto();
            virtual ~SpaceExportDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Id of the attempt to export a space
                    /// </summary>
                utility::string_t GetExportId() const;
                bool HasExportId() const;
            
                /// <summary>
                    /// Id of the space that was exported
                    /// </summary>
                utility::string_t GetSpaceId() const;
                bool HasSpaceId() const;
            
                /// <summary>
                    /// Tenant of the Space
                    /// </summary>
                utility::string_t GetTenantName() const;
                bool HasTenantName() const;
            
                /// <summary>
                    /// Run this as an async call
                    /// </summary>
                bool GetAsyncCall() const;
                void SetAsyncCall(const bool& Value);bool HasAsyncCall() const;
            
                /// <summary>
                    /// Id of the User who made the original request
                    /// </summary>
                utility::string_t GetRequestUserId() const;
                void SetRequestUserId(const utility::string_t& Value);bool HasRequestUserId() const;
            

        protected:
            std::optional<utility::string_t> m_ExportId;
            std::optional<utility::string_t> m_SpaceId;
            std::optional<utility::string_t> m_TenantName;
            std::optional<bool> m_AsyncCall;
            std::optional<utility::string_t> m_RequestUserId;
            };

    /// <summary>
        /// Space Export data
        /// </summary>
    class SpaceImportDto : public csp::services::DtoBase
        {
        public:
            SpaceImportDto();
            virtual ~SpaceImportDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Id of the export we are attempting to import
                    /// </summary>
                utility::string_t GetExportId() const;
                bool HasExportId() const;
            
                /// <summary>
                    /// Id of the space that was created
                    /// </summary>
                utility::string_t GetSpaceId() const;
                bool HasSpaceId() const;
            
                /// <summary>
                    /// Tenant of the Space
                    /// </summary>
                utility::string_t GetTenantName() const;
                bool HasTenantName() const;
            
                /// <summary>
                    /// Run this as an async call
                    /// </summary>
                bool GetAsyncCall() const;
                void SetAsyncCall(const bool& Value);bool HasAsyncCall() const;
            

        protected:
            std::optional<utility::string_t> m_ExportId;
            std::optional<utility::string_t> m_SpaceId;
            std::optional<utility::string_t> m_TenantName;
            std::optional<bool> m_AsyncCall;
            };

    /// <summary>
        /// Object containing properties for event ticket order details.
        /// </summary>
    class SpaceTicketDto : public csp::services::DtoBase
        {
        public:
            SpaceTicketDto();
            virtual ~SpaceTicketDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Unique identifier
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// Unique identifier of event created with event ticket vendor
                    /// </summary>
                utility::string_t GetVendorEventId() const;
                bool HasVendorEventId() const;
            
                /// <summary>
                    /// The name of event ticket vendor
                    /// </summary>
                utility::string_t GetVendorName() const;
                bool HasVendorName() const;
            
                /// <summary>
                    /// Order number of the ticket
                    /// </summary>
                utility::string_t GetVendorTicketId() const;
                bool HasVendorTicketId() const;
            
                /// <summary>
                    /// Unique identifier of space
                    /// </summary>
                utility::string_t GetSpaceId() const;
                bool HasSpaceId() const;
            
                std::shared_ptr<TicketStatus> GetTicketStatus() const;
                void SetTicketStatus(const std::shared_ptr<TicketStatus>& Value);bool HasTicketStatus() const;
            
                /// <summary>
                    /// Unique identifier of the user associated with the ticket
                    /// </summary>
                utility::string_t GetUserId() const;
                bool HasUserId() const;
            
                /// <summary>
                    /// Email address of the attendee in event ticket vendor
                    /// </summary>
                utility::string_t GetEmailLower() const;
                bool HasEmailLower() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_VendorEventId;
            std::optional<utility::string_t> m_VendorName;
            std::optional<utility::string_t> m_VendorTicketId;
            std::optional<utility::string_t> m_SpaceId;
            std::optional<std::shared_ptr<TicketStatus>> m_TicketStatus;
            std::optional<utility::string_t> m_UserId;
            std::optional<utility::string_t> m_EmailLower;
            };

    class StringDataPage : public csp::services::DtoBase
        {
        public:
            StringDataPage();
            virtual ~StringDataPage();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                const std::vector<utility::string_t>& GetItems() const;
                void SetItems(const std::vector<utility::string_t>& Value);bool HasItems() const;
            
                int32_t GetSkip() const;
                void SetSkip(int32_t Value);bool HasSkip() const;
            
                int32_t GetLimit() const;
                void SetLimit(int32_t Value);bool HasLimit() const;
            
                int32_t GetItemCount() const;
                void SetItemCount(int32_t Value);bool HasItemCount() const;
            
                int64_t GetItemTotalCount() const;
                void SetItemTotalCount(int64_t Value);bool HasItemTotalCount() const;
            

        protected:
            std::optional<std::vector<utility::string_t>> m_Items;
            std::optional<int32_t> m_Skip;
            std::optional<int32_t> m_Limit;
            std::optional<int32_t> m_ItemCount;
            std::optional<int64_t> m_ItemTotalCount;
            };

    /// <summary>
        /// The style(s) associated with the document
        /// </summary>
    class Style : public csp::services::DtoBase
        {
        public:
            Style();
            virtual ~Style();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The name of the style, to be referenced in the placemark
                    /// </summary>
                utility::string_t GetId() const;
                void SetId(const utility::string_t& Value);bool HasId() const;
            
                std::shared_ptr<IconStyle> GetIconStyle() const;
                void SetIconStyle(const std::shared_ptr<IconStyle>& Value);bool HasIconStyle() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<std::shared_ptr<IconStyle>> m_IconStyle;
            };

    /// <summary>
        /// Possible ticket status
        /// </summary>
    class TicketStatus : public csp::services::EnumBase
        {
        public:
            TicketStatus();
            virtual ~TicketStatus();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            enum class eTicketStatus
            {
                PURCHASED,
                REDEEMED
                
            };

            eTicketStatus GetValue() const;
            void SetValue(eTicketStatus const Value);

        protected:
            eTicketStatus Value = {};
        };

    /// <summary>
        /// Contains info related to the vendor as a provider
        /// </summary>
    class VendorProviderInfo : public csp::services::DtoBase
        {
        public:
            VendorProviderInfo();
            virtual ~VendorProviderInfo();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The name of the vendor provider
                    /// </summary>
                utility::string_t GetVendorName() const;
                void SetVendorName(const utility::string_t& Value);bool HasVendorName() const;
            
                /// <summary>
                    /// Application client ID with the vendor provider
                    /// </summary>
                utility::string_t GetClientId() const;
                void SetClientId(const utility::string_t& Value);bool HasClientId() const;
            
                /// <summary>
                    /// The base URL for the Eventbrite API
                    /// </summary>
                utility::string_t GetAuthorizeEndpoint() const;
                bool HasAuthorizeEndpoint() const;
            
                /// <summary>
                    /// The CHS hosted redirect URL for the Eventbrite oauth flow
                    /// </summary>
                utility::string_t GetOAuthRedirectUrl() const;
                bool HasOAuthRedirectUrl() const;
            

        protected:
            std::optional<utility::string_t> m_VendorName;
            std::optional<utility::string_t> m_ClientId;
            std::optional<utility::string_t> m_AuthorizeEndpoint;
            std::optional<utility::string_t> m_OAuthRedirectUrl;
            };

    /// <summary>
        /// map of features/products/skus
        /// </summary>
    class VersionMatrix : public csp::services::DtoBase
        {
        public:
            VersionMatrix();
            virtual ~VersionMatrix();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Current version of the service deployment
                    /// </summary>
                utility::string_t GetServiceVersion() const;
                void SetServiceVersion(const utility::string_t& Value);bool HasServiceVersion() const;
            
                /// <summary>
                    /// matrix of slice version compatibilities
                    /// </summary>
                const std::map<utility::string_t, std::shared_ptr<SliceCompatibility>>& GetMatrix() const;
                void SetMatrix(const std::map<utility::string_t, std::shared_ptr<SliceCompatibility>>& Value);bool HasMatrix() const;
            

        protected:
            std::optional<utility::string_t> m_ServiceVersion;
            std::optional<std::map<utility::string_t, std::shared_ptr<SliceCompatibility>>> m_Matrix;
            };


}   // namespace csp::services::aggregationservice