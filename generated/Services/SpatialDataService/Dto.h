

#pragma once

#include "Services/DtoBase/DtoBase.h"

#include <optional>


namespace csp::services::generated::spatialdataservice
{

class AltitudeMode;
class AnchorDto;
class AnchorDtoDataPage;
class AnchorPosition;
class AnchorResolutionDto;
class AnchorResolutionDtoDataPage;
class AnchorRotation;
class AnchorStatsDto;
class CalendarItemDto;
class CalendarItemDtoArrayPartialUpdate;
class GeoCoord;
class GeoCoordArrayPartialUpdate;
class GeoCoordPartialUpdate;
class Icon;
class IconStyle;
class Kml;
class LineString;
class LocalizedString;
class LookAt;
class MediaType;
class Model;
class ModelLink;
class ModelLocation;
class ModelOrientation;
class ModelScale;
class PersonalPointOfInterestDto;
class Placemark;
class PoiPartialUpdate;
class Point;
class PointOfInterestDto;
class PointOfInterestDtoDataPage;
class PointOfInterestLiteDto;
class PointOfInterestLiteDtoDataPage;
class PositionDto;
class PositionDtoDataPage;
class PositionKml;
class Rotation;
class Scale;
class SpaceTimeDto;
class SpaceTimeDtoDataPage;
class SpaceTimeType;
class StringDataPage;
class Style;
class Transform;
class Translation;



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
/// Spatial data transform object
/// </summary>
class AnchorDto : public csp::services::DtoBase
{
public:
	AnchorDto();
	virtual ~AnchorDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique identifier for an anchor
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Unique auto generated bson identifier for an anchor
	/// </summary>
	utility::string_t GetMgsId() const;
	bool HasMgsId() const;

	/// <summary>
	/// Unique identifier for an anchor from third party
	/// </summary>
	utility::string_t GetThirdPartyAnchorId() const;
	void SetThirdPartyAnchorId(const utility::string_t& Value);
	bool HasThirdPartyAnchorId() const;

	/// <summary>
	/// Third party provider name
	/// </summary>
	utility::string_t GetThirdPartyProviderName() const;
	void SetThirdPartyProviderName(const utility::string_t& Value);
	bool HasThirdPartyProviderName() const;

	/// <summary>
	/// Unique identifier of another high-level domain object to which this anchor and other anchors are associated
	/// </summary>
	utility::string_t GetReferenceId() const;
	void SetReferenceId(const utility::string_t& Value);
	bool HasReferenceId() const;

	/// <summary>
	/// Unique identifier of another prototype object to which this anchor is oriented/attached
	/// </summary>
	utility::string_t GetAnchoredPrototypeId() const;
	void SetAnchoredPrototypeId(const utility::string_t& Value);
	bool HasAnchoredPrototypeId() const;

	/// <summary>
	/// Unique identifier of the specific multiplayer object to which this anchor is oriented/attached
	/// </summary>
	int32_t GetAnchoredMultiplayerObjectId() const;
	void SetAnchoredMultiplayerObjectId(int32_t Value);
	bool HasAnchoredMultiplayerObjectId() const;

	/// <summary>
	/// The Spatial Anchor key value data
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetSpatialKeyValue() const;
	void SetSpatialKeyValue(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasSpatialKeyValue() const;

	std::shared_ptr<GeoCoord> GetLocation() const;
	void SetLocation(const std::shared_ptr<GeoCoord>& Value);
	bool HasLocation() const;

	std::shared_ptr<AnchorPosition> GetPosition() const;
	void SetPosition(const std::shared_ptr<AnchorPosition>& Value);
	bool HasPosition() const;

	std::shared_ptr<AnchorRotation> GetRotation() const;
	void SetRotation(const std::shared_ptr<AnchorRotation>& Value);
	bool HasRotation() const;

	/// <summary>
	/// Tags for the anchor
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// Anchor Hosting Timestamp
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	/// <summary>
	/// Anchor Hosting User
	/// </summary>
	utility::string_t GetCreatedBy() const;
	bool HasCreatedBy() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_MgsId;
	std::optional<utility::string_t> m_ThirdPartyAnchorId;
	std::optional<utility::string_t> m_ThirdPartyProviderName;
	std::optional<utility::string_t> m_ReferenceId;
	std::optional<utility::string_t> m_AnchoredPrototypeId;
	std::optional<int32_t> m_AnchoredMultiplayerObjectId;
	std::optional<std::map<utility::string_t, utility::string_t>> m_SpatialKeyValue;
	std::optional<std::shared_ptr<GeoCoord>> m_Location;
	std::optional<std::shared_ptr<AnchorPosition>> m_Position;
	std::optional<std::shared_ptr<AnchorRotation>> m_Rotation;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_CreatedBy;
};

class AnchorDtoDataPage : public csp::services::DtoBase
{
public:
	AnchorDtoDataPage();
	virtual ~AnchorDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<AnchorDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<AnchorDto>>& Value);
	bool HasItems() const;

	int32_t GetSkip() const;
	void SetSkip(int32_t Value);
	bool HasSkip() const;

	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	int32_t GetItemCount() const;
	void SetItemCount(int32_t Value);
	bool HasItemCount() const;

	int64_t GetItemTotalCount() const;
	void SetItemTotalCount(int64_t Value);
	bool HasItemTotalCount() const;


protected:
	std::optional<std::vector<std::shared_ptr<AnchorDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Position in Cartesian coordinates of an anchor
/// </summary>
class AnchorPosition : public csp::services::DtoBase
{
public:
	AnchorPosition();
	virtual ~AnchorPosition();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// X value of the position vector
	/// </summary>
	double GetX() const;
	void SetX(double Value);
	bool HasX() const;

	/// <summary>
	/// Y value of the position vector
	/// </summary>
	double GetY() const;
	void SetY(double Value);
	bool HasY() const;

	/// <summary>
	/// Z value of the position vector
	/// </summary>
	double GetZ() const;
	void SetZ(double Value);
	bool HasZ() const;


protected:
	std::optional<double> m_X;
	std::optional<double> m_Y;
	std::optional<double> m_Z;
};

/// <summary>
/// Anchor resolution transform object
/// </summary>
class AnchorResolutionDto : public csp::services::DtoBase
{
public:
	AnchorResolutionDto();
	virtual ~AnchorResolutionDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The unique identifier for this instance
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// Unique Identifier of anchor
	/// </summary>
	utility::string_t GetAnchorId() const;
	void SetAnchorId(const utility::string_t& Value);
	bool HasAnchorId() const;

	/// <summary>
	/// Successfully resolved value for an anchor
	/// </summary>
	bool GetSuccessfullyResolved() const;
	void SetSuccessfullyResolved(const bool& Value);
	bool HasSuccessfullyResolved() const;

	/// <summary>
	/// Number of resolve attemped for an anchor
	/// </summary>
	int32_t GetResolveAttempted() const;
	void SetResolveAttempted(int32_t Value);
	bool HasResolveAttempted() const;

	/// <summary>
	/// Resolve time of anchor in seconds
	/// </summary>
	double GetResolveTime() const;
	void SetResolveTime(double Value);
	bool HasResolveTime() const;

	/// <summary>
	/// Tags for the anchor
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_AnchorId;
	std::optional<bool> m_SuccessfullyResolved;
	std::optional<int32_t> m_ResolveAttempted;
	std::optional<double> m_ResolveTime;
	std::optional<std::vector<utility::string_t>> m_Tags;
};

class AnchorResolutionDtoDataPage : public csp::services::DtoBase
{
public:
	AnchorResolutionDtoDataPage();
	virtual ~AnchorResolutionDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<AnchorResolutionDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<AnchorResolutionDto>>& Value);
	bool HasItems() const;

	int32_t GetSkip() const;
	void SetSkip(int32_t Value);
	bool HasSkip() const;

	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	int32_t GetItemCount() const;
	void SetItemCount(int32_t Value);
	bool HasItemCount() const;

	int64_t GetItemTotalCount() const;
	void SetItemTotalCount(int64_t Value);
	bool HasItemTotalCount() const;


protected:
	std::optional<std::vector<std::shared_ptr<AnchorResolutionDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Rotation in Cartesian coordinates of an anchor
/// </summary>
class AnchorRotation : public csp::services::DtoBase
{
public:
	AnchorRotation();
	virtual ~AnchorRotation();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// X value of the Quaternion
	/// </summary>
	double GetX() const;
	void SetX(double Value);
	bool HasX() const;

	/// <summary>
	/// Y value of the Quaternion
	/// </summary>
	double GetY() const;
	void SetY(double Value);
	bool HasY() const;

	/// <summary>
	/// Z value of the Quaternion
	/// </summary>
	double GetZ() const;
	void SetZ(double Value);
	bool HasZ() const;

	/// <summary>
	/// W value of the Quaternion
	/// </summary>
	double GetW() const;
	void SetW(double Value);
	bool HasW() const;


protected:
	std::optional<double> m_X;
	std::optional<double> m_Y;
	std::optional<double> m_Z;
	std::optional<double> m_W;
};

/// <summary>
/// Anchor resolution stats transform object
/// </summary>
class AnchorStatsDto : public csp::services::DtoBase
{
public:
	AnchorStatsDto();
	virtual ~AnchorStatsDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique identifier of anchor
	/// </summary>
	utility::string_t GetAnchorId() const;
	void SetAnchorId(const utility::string_t& Value);
	bool HasAnchorId() const;

	/// <summary>
	/// Resolve time of anchor over time in seconds
	/// </summary>
	double GetAverageResolveTime() const;
	bool HasAverageResolveTime() const;

	/// <summary>
	/// Successfully resolved average of anchor over time
	/// </summary>
	double GetAverageSuccessfullyResolved() const;
	bool HasAverageSuccessfullyResolved() const;

	/// <summary>
	/// Resolve attempted average of anchor over time
	/// </summary>
	double GetAverageResolveAttempted() const;
	bool HasAverageResolveAttempted() const;


protected:
	std::optional<utility::string_t> m_AnchorId;
	std::optional<double> m_AverageResolveTime;
	std::optional<double> m_AverageSuccessfullyResolved;
	std::optional<double> m_AverageResolveAttempted;
};

/// <summary>
/// Calendar item / event transfer object
/// </summary>
class CalendarItemDto : public csp::services::DtoBase
{
public:
	CalendarItemDto();
	virtual ~CalendarItemDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The start time of the event
	/// </summary>
	utility::string_t GetEventStart() const;
	void SetEventStart(const utility::string_t& Value);
	bool HasEventStart() const;

	/// <summary>
	/// The end time of the event
	/// </summary>
	utility::string_t GetEventEnd() const;
	void SetEventEnd(const utility::string_t& Value);
	bool HasEventEnd() const;


protected:
	std::optional<utility::string_t> m_EventStart;
	std::optional<utility::string_t> m_EventEnd;
};

class CalendarItemDtoArrayPartialUpdate : public csp::services::DtoBase
{
public:
	CalendarItemDtoArrayPartialUpdate();
	virtual ~CalendarItemDtoArrayPartialUpdate();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<CalendarItemDto>>& GetValue() const;
	void SetValue(const std::vector<std::shared_ptr<CalendarItemDto>>& Value);
	bool HasValue() const;


protected:
	std::optional<std::vector<std::shared_ptr<CalendarItemDto>>> m_Value;
};

/// <summary>
/// Geographical coordinate transfer object
/// </summary>
class GeoCoord : public csp::services::DtoBase
{
public:
	GeoCoord();
	virtual ~GeoCoord();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Longitude of the coordinate
	/// </summary>
	double GetLongitude() const;
	void SetLongitude(double Value);
	bool HasLongitude() const;

	/// <summary>
	/// Latitude of the coordinate
	/// </summary>
	double GetLatitude() const;
	void SetLatitude(double Value);
	bool HasLatitude() const;


protected:
	std::optional<double> m_Longitude;
	std::optional<double> m_Latitude;
};

class GeoCoordArrayPartialUpdate : public csp::services::DtoBase
{
public:
	GeoCoordArrayPartialUpdate();
	virtual ~GeoCoordArrayPartialUpdate();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<GeoCoord>>& GetValue() const;
	void SetValue(const std::vector<std::shared_ptr<GeoCoord>>& Value);
	bool HasValue() const;


protected:
	std::optional<std::vector<std::shared_ptr<GeoCoord>>> m_Value;
};

class GeoCoordPartialUpdate : public csp::services::DtoBase
{
public:
	GeoCoordPartialUpdate();
	virtual ~GeoCoordPartialUpdate();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	std::shared_ptr<GeoCoord> GetValue() const;
	void SetValue(const std::shared_ptr<GeoCoord>& Value);
	bool HasValue() const;


protected:
	std::optional<std::shared_ptr<GeoCoord>> m_Value;
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
	void SetHref(const utility::string_t& Value);
	bool HasHref() const;


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
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The hexBinary color definition for the icon
	/// the first two letters are the opacity, from 00 (transparent) to ff (fully opaque)
	/// https://developers.google.com/kml/documentation/kmlreference#colorstyle
	/// </summary>
	utility::string_t GetColor() const;
	void SetColor(const utility::string_t& Value);
	bool HasColor() const;

	/// <summary>
	/// Normal or Random Color Mode
	/// </summary>
	utility::string_t GetColorMode() const;
	void SetColorMode(const utility::string_t& Value);
	bool HasColorMode() const;

	/// <summary>
	/// The scale of the icon. 1.0f is normal, you can define
	/// highlighted styles that are larger.
	/// </summary>
	float GetScale() const;
	void SetScale(float Value);
	bool HasScale() const;

	std::shared_ptr<Icon> GetIcon() const;
	void SetIcon(const std::shared_ptr<Icon>& Value);
	bool HasIcon() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Color;
	std::optional<utility::string_t> m_ColorMode;
	std::optional<float> m_Scale;
	std::optional<std::shared_ptr<Icon>> m_Icon;
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
	void SetDocument(const std::shared_ptr<PositionKml>& Value);
	bool HasDocument() const;


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
	void SetExtrude(const bool& Value);
	bool HasExtrude() const;

	/// <summary>
	/// Tessellate breaks the line up into smaller chunks
	/// </summary>
	bool GetTessellate() const;
	void SetTessellate(const bool& Value);
	bool HasTessellate() const;

	std::shared_ptr<AltitudeMode> GetAltitudeMode() const;
	void SetAltitudeMode(const std::shared_ptr<AltitudeMode>& Value);
	bool HasAltitudeMode() const;

	/// <summary>
	/// The coordinates for this linestring
	/// </summary>
	utility::string_t GetCoordinates() const;
	void SetCoordinates(const utility::string_t& Value);
	bool HasCoordinates() const;


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
	void SetLanguageCode(const utility::string_t& Value);
	bool HasLanguageCode() const;

	utility::string_t GetValue() const;
	void SetValue(const utility::string_t& Value);
	bool HasValue() const;


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
	void SetLongitude(double Value);
	bool HasLongitude() const;

	/// <summary>
	/// The Latitude
	/// </summary>
	double GetLatitude() const;
	void SetLatitude(double Value);
	bool HasLatitude() const;

	/// <summary>
	/// The Altitude
	/// </summary>
	int32_t GetAltitude() const;
	void SetAltitude(int32_t Value);
	bool HasAltitude() const;

	/// <summary>
	/// The Range
	/// </summary>
	double GetRange() const;
	void SetRange(double Value);
	bool HasRange() const;

	/// <summary>
	/// The Tilt
	/// </summary>
	double GetTilt() const;
	void SetTilt(double Value);
	bool HasTilt() const;

	/// <summary>
	/// The Heading
	/// </summary>
	double GetHeading() const;
	void SetHeading(double Value);
	bool HasHeading() const;


protected:
	std::optional<double> m_Longitude;
	std::optional<double> m_Latitude;
	std::optional<int32_t> m_Altitude;
	std::optional<double> m_Range;
	std::optional<double> m_Tilt;
	std::optional<double> m_Heading;
};

class MediaType : public csp::services::EnumBase
{
public:
	MediaType();
	virtual ~MediaType();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;

	enum class eMediaType
	{
		VERBALTOUR,
		NARRATIVEAUDIO,
		VISUALAUDIO,
		MAPSYMBOL,
		ARART,
		VRART,
		QUESTART,
		PRIMARYIMAGE,
		OTHERIMAGE,
		THUMBNAIL,
		VIDEO,
		REFERENCEVIDEO,
		REFERENCEAUDIO,
		REFERENCEIMAGE,
		REFERENCEDOCUMENT,
		REFERENCEWEB,
		REFERENCEJSON

	};

	eMediaType GetValue() const;
	void SetValue(eMediaType const Value);

protected:
	eMediaType Value = {};
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
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	std::shared_ptr<AltitudeMode> GetAltitudeMode() const;
	void SetAltitudeMode(const std::shared_ptr<AltitudeMode>& Value);
	bool HasAltitudeMode() const;

	std::shared_ptr<ModelLocation> GetLocation() const;
	void SetLocation(const std::shared_ptr<ModelLocation>& Value);
	bool HasLocation() const;

	std::shared_ptr<ModelOrientation> GetOrientation() const;
	void SetOrientation(const std::shared_ptr<ModelOrientation>& Value);
	bool HasOrientation() const;

	std::shared_ptr<ModelScale> GetScale() const;
	void SetScale(const std::shared_ptr<ModelScale>& Value);
	bool HasScale() const;

	std::shared_ptr<ModelLink> GetLink() const;
	void SetLink(const std::shared_ptr<ModelLink>& Value);
	bool HasLink() const;


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
	void SetHref(const utility::string_t& Value);
	bool HasHref() const;


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
	void SetLongitude(double Value);
	bool HasLongitude() const;

	/// <summary>
	/// The Latitude of the 3d object
	/// </summary>
	double GetLatitude() const;
	void SetLatitude(double Value);
	bool HasLatitude() const;

	/// <summary>
	/// The Altitude of the 3d object
	/// </summary>
	int32_t GetAltitude() const;
	void SetAltitude(int32_t Value);
	bool HasAltitude() const;


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
	void SetHeading(float Value);
	bool HasHeading() const;

	/// <summary>
	/// The tilt of the object
	/// </summary>
	float GetTilt() const;
	void SetTilt(float Value);
	bool HasTilt() const;

	/// <summary>
	/// The roll of the object
	/// </summary>
	int32_t GetRoll() const;
	void SetRoll(int32_t Value);
	bool HasRoll() const;


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
	void SetX(int32_t Value);
	bool HasX() const;

	/// <summary>
	/// The Y scale
	/// </summary>
	int32_t GetY() const;
	void SetY(int32_t Value);
	bool HasY() const;

	/// <summary>
	/// The Z scale
	/// </summary>
	int32_t GetZ() const;
	void SetZ(int32_t Value);
	bool HasZ() const;


protected:
	std::optional<int32_t> m_X;
	std::optional<int32_t> m_Y;
	std::optional<int32_t> m_Z;
};

/// <summary>
/// Personal Point of Interest transform object
/// </summary>
class PersonalPointOfInterestDto : public csp::services::DtoBase
{
public:
	PersonalPointOfInterestDto();
	virtual ~PersonalPointOfInterestDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique identifier for the user
	/// </summary>
	utility::string_t GetUserId() const;
	bool HasUserId() const;

	/// <summary>
	/// Unique identifier for the associated POI
	/// </summary>
	utility::string_t GetPoiId() const;
	bool HasPoiId() const;


protected:
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_PoiId;
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
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The name of the placemark
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The style associated with this placemark, defined by the
	/// Style on the root level of the document. If the root style name is
	/// "MyStyle", this would reference it with a string "#MyStyle"
	/// </summary>
	utility::string_t GetStyleUrl() const;
	void SetStyleUrl(const utility::string_t& Value);
	bool HasStyleUrl() const;

	/// <summary>
	/// The description of the placemark. This will show up on google earth
	/// as a description to the user
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	std::shared_ptr<LineString> GetLineString() const;
	void SetLineString(const std::shared_ptr<LineString>& Value);
	bool HasLineString() const;

	std::shared_ptr<Point> GetPoint() const;
	void SetPoint(const std::shared_ptr<Point>& Value);
	bool HasPoint() const;

	std::shared_ptr<Model> GetModel() const;
	void SetModel(const std::shared_ptr<Model>& Value);
	bool HasModel() const;

	std::shared_ptr<LookAt> GetLookAt() const;
	void SetLookAt(const std::shared_ptr<LookAt>& Value);
	bool HasLookAt() const;


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
/// An object that describes values to update on a Magnopus.Service.SpatialData.Dtos.PointOfInterestDto.
/// </summary>
class PoiPartialUpdate : public csp::services::DtoBase
{
public:
	PoiPartialUpdate();
	virtual ~PoiPartialUpdate();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	std::shared_ptr<GeoCoordPartialUpdate> GetLocation() const;
	void SetLocation(const std::shared_ptr<GeoCoordPartialUpdate>& Value);
	bool HasLocation() const;

	std::shared_ptr<GeoCoordArrayPartialUpdate> GetGeofence() const;
	void SetGeofence(const std::shared_ptr<GeoCoordArrayPartialUpdate>& Value);
	bool HasGeofence() const;

	std::shared_ptr<CalendarItemDtoArrayPartialUpdate> GetScheduledEvents() const;
	void SetScheduledEvents(const std::shared_ptr<CalendarItemDtoArrayPartialUpdate>& Value);
	bool HasScheduledEvents() const;


protected:
	std::optional<std::shared_ptr<GeoCoordPartialUpdate>> m_Location;
	std::optional<std::shared_ptr<GeoCoordArrayPartialUpdate>> m_Geofence;
	std::optional<std::shared_ptr<CalendarItemDtoArrayPartialUpdate>> m_ScheduledEvents;
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
	void SetTessellate(const bool& Value);
	bool HasTessellate() const;

	std::shared_ptr<AltitudeMode> GetAltitudeMode() const;
	void SetAltitudeMode(const std::shared_ptr<AltitudeMode>& Value);
	bool HasAltitudeMode() const;

	/// <summary>
	/// The coordinates for this linestring
	/// </summary>
	utility::string_t GetCoordinates() const;
	void SetCoordinates(const utility::string_t& Value);
	bool HasCoordinates() const;


protected:
	std::optional<bool> m_Tessellate;
	std::optional<std::shared_ptr<AltitudeMode>> m_AltitudeMode;
	std::optional<utility::string_t> m_Coordinates;
};

/// <summary>
/// Point of Interest transform object
/// </summary>
class PointOfInterestDto : public csp::services::DtoBase
{
public:
	PointOfInterestDto();
	virtual ~PointOfInterestDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique identifier for an POI
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// User id that created to the POI
	/// </summary>
	utility::string_t GetCreatedBy() const;
	bool HasCreatedBy() const;

	/// <summary>
	/// User id most that most recently updated the POI
	/// </summary>
	utility::string_t GetUpdatedBy() const;
	bool HasUpdatedBy() const;

	/// <summary>
	/// DateTime at which the POI was created
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	/// <summary>
	/// DateTime of the POI's most recent update
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	bool HasUpdatedAt() const;

	/// <summary>
	/// Title for the POI
	/// </summary>
	const std::vector<std::shared_ptr<LocalizedString>>& GetTitle() const;
	void SetTitle(const std::vector<std::shared_ptr<LocalizedString>>& Value);
	bool HasTitle() const;

	/// <summary>
	/// Description of the POI
	/// </summary>
	const std::vector<std::shared_ptr<LocalizedString>>& GetDescription() const;
	void SetDescription(const std::vector<std::shared_ptr<LocalizedString>>& Value);
	bool HasDescription() const;

	/// <summary>
	/// Collection of translations stored per key meant to be shown in localized user interfaces.
	/// </summary>
	const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& GetUiStrings() const;
	void SetUiStrings(const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value);
	bool HasUiStrings() const;

	/// <summary>
	/// Type of the POI
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// Zoom level priority
	/// </summary>
	int32_t GetZoomLevel() const;
	void SetZoomLevel(int32_t Value);
	bool HasZoomLevel() const;

	/// <summary>
	/// List of Tags for the POI
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// Uri link to the thumbnail image blob
	/// </summary>
	utility::string_t GetThumbnailUri() const;
	void SetThumbnailUri(const utility::string_t& Value);
	bool HasThumbnailUri() const;

	/// <summary>
	/// Media type (MIME type)
	/// </summary>
	utility::string_t GetThumbnailMimeType() const;
	void SetThumbnailMimeType(const utility::string_t& Value);
	bool HasThumbnailMimeType() const;

	/// <summary>
	/// Unique non-localized name for the POI
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Responsible party for the POI
	/// </summary>
	utility::string_t GetOwner() const;
	void SetOwner(const utility::string_t& Value);
	bool HasOwner() const;

	std::shared_ptr<GeoCoord> GetLocation() const;
	void SetLocation(const std::shared_ptr<GeoCoord>& Value);
	bool HasLocation() const;

	/// <summary>
	/// Calendar list of start and end times for the POI
	/// </summary>
	const std::vector<std::shared_ptr<CalendarItemDto>>& GetSchedule() const;
	void SetSchedule(const std::vector<std::shared_ptr<CalendarItemDto>>& Value);
	bool HasSchedule() const;

	/// <summary>
	/// Calendar list of start and end times auto generated by events for the POI
	/// </summary>
	const std::vector<std::shared_ptr<CalendarItemDto>>& GetGeneratedSchedule() const;
	bool HasGeneratedSchedule() const;

	/// <summary>
	/// Expo Event Id for the POI, if schedule is not sufficient to contain the event details
	/// </summary>
	utility::string_t GetEventId() const;
	void SetEventId(const utility::string_t& Value);
	bool HasEventId() const;

	/// <summary>
	/// Parent POI Id for the POI if one exists
	/// </summary>
	utility::string_t GetParentId() const;
	void SetParentId(const utility::string_t& Value);
	bool HasParentId() const;

	/// <summary>
	/// The ID of the User Group associated with this POI
	/// </summary>
	utility::string_t GetGroupId() const;
	void SetGroupId(const utility::string_t& Value);
	bool HasGroupId() const;

	/// <summary>
	/// True if hidden on a map view.
	/// When true, the PoI should not be visible, however, it may still have an active role in the experience.
	/// </summary>
	bool GetHidden() const;
	void SetHidden(const bool& Value);
	bool HasHidden() const;

	/// <summary>
	/// Longitude and Latitude of geojson polygon vertices
	/// </summary>
	const std::vector<std::shared_ptr<GeoCoord>>& GetGeofence() const;
	void SetGeofence(const std::vector<std::shared_ptr<GeoCoord>>& Value);
	bool HasGeofence() const;

	/// <summary>
	/// Sets whether a space is private or public
	/// </summary>
	bool GetPrivate() const;
	void SetPrivate(const bool& Value);
	bool HasPrivate() const;

	/// <summary>
	/// Expo POI content management system ID
	/// </summary>
	utility::string_t GetCmsId() const;
	void SetCmsId(const utility::string_t& Value);
	bool HasCmsId() const;

	/// <summary>
	/// Prototype that is referenced by the POI to be used by clients for instantiation of objects
	/// </summary>
	utility::string_t GetPrototypeId() const;
	void SetPrototypeId(const utility::string_t& Value);
	bool HasPrototypeId() const;

	/// <summary>
	/// Prototype that is referenced by the POI to be used by clients for instantiation of objects
	/// </summary>
	[[deprecated("'prototypeName' has been deprecated!")]]
	utility::string_t GetPrototypeName() const;
	[[deprecated("'prototypeName' has been deprecated!")]]
	void SetPrototypeName(const utility::string_t& Value);
	bool HasPrototypeName() const;

	/// <summary>
	/// Sets if action is required for activation
	/// </summary>
	bool GetRequireAction() const;
	void SetRequireAction(const bool& Value);
	bool HasRequireAction() const;

	/// <summary>
	/// Marks a POI as a Debug or in development POI which should not be migrated.
	/// </summary>
	bool GetIsDebug() const;
	void SetIsDebug(const bool& Value);
	bool HasIsDebug() const;

	/// <summary>
	/// Used to make sure that a POI is facing the correct direction when it spawns
	/// </summary>
	float GetOrientation() const;
	void SetOrientation(float Value);
	bool HasOrientation() const;

	std::shared_ptr<Transform> GetPrototypeTransform() const;
	void SetPrototypeTransform(const std::shared_ptr<Transform>& Value);
	bool HasPrototypeTransform() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_CreatedBy;
	std::optional<utility::string_t> m_UpdatedBy;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<std::vector<std::shared_ptr<LocalizedString>>> m_Title;
	std::optional<std::vector<std::shared_ptr<LocalizedString>>> m_Description;
	std::optional<std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>> m_UiStrings;
	std::optional<utility::string_t> m_Type;
	std::optional<int32_t> m_ZoomLevel;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_ThumbnailUri;
	std::optional<utility::string_t> m_ThumbnailMimeType;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Owner;
	std::optional<std::shared_ptr<GeoCoord>> m_Location;
	std::optional<std::vector<std::shared_ptr<CalendarItemDto>>> m_Schedule;
	std::optional<std::vector<std::shared_ptr<CalendarItemDto>>> m_GeneratedSchedule;
	std::optional<utility::string_t> m_EventId;
	std::optional<utility::string_t> m_ParentId;
	std::optional<utility::string_t> m_GroupId;
	std::optional<bool> m_Hidden;
	std::optional<std::vector<std::shared_ptr<GeoCoord>>> m_Geofence;
	std::optional<bool> m_Private;
	std::optional<utility::string_t> m_CmsId;
	std::optional<utility::string_t> m_PrototypeId;
	std::optional<utility::string_t> m_PrototypeName;
	std::optional<bool> m_RequireAction;
	std::optional<bool> m_IsDebug;
	std::optional<float> m_Orientation;
	std::optional<std::shared_ptr<Transform>> m_PrototypeTransform;
};

class PointOfInterestDtoDataPage : public csp::services::DtoBase
{
public:
	PointOfInterestDtoDataPage();
	virtual ~PointOfInterestDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<PointOfInterestDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<PointOfInterestDto>>& Value);
	bool HasItems() const;

	int32_t GetSkip() const;
	void SetSkip(int32_t Value);
	bool HasSkip() const;

	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	int32_t GetItemCount() const;
	void SetItemCount(int32_t Value);
	bool HasItemCount() const;

	int64_t GetItemTotalCount() const;
	void SetItemTotalCount(int64_t Value);
	bool HasItemTotalCount() const;


protected:
	std::optional<std::vector<std::shared_ptr<PointOfInterestDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Point of Interest transform object with only the necessary fields
/// </summary>
class PointOfInterestLiteDto : public csp::services::DtoBase
{
public:
	PointOfInterestLiteDto();
	virtual ~PointOfInterestLiteDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique identifier for an POI
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// Unique non-localized name for the POI
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Title translation stored per key meant to be shown in localized user interfaces.
	/// </summary>
	const std::vector<std::shared_ptr<LocalizedString>>& GetTitle() const;
	void SetTitle(const std::vector<std::shared_ptr<LocalizedString>>& Value);
	bool HasTitle() const;

	/// <summary>
	/// Description translation stored per key meant to be shown in localized user interfaces.
	/// </summary>
	const std::vector<std::shared_ptr<LocalizedString>>& GetDescription() const;
	void SetDescription(const std::vector<std::shared_ptr<LocalizedString>>& Value);
	bool HasDescription() const;

	/// <summary>
	/// Collection of translations stored per key meant to be shown in localized user interfaces.
	/// </summary>
	const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& GetUiStrings() const;
	void SetUiStrings(const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value);
	bool HasUiStrings() const;

	/// <summary>
	/// Type of the POI
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// List of Tags for the POI
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// Uri link to the thumbnail image blob
	/// </summary>
	utility::string_t GetThumbnailUri() const;
	void SetThumbnailUri(const utility::string_t& Value);
	bool HasThumbnailUri() const;

	/// <summary>
	/// Media type (MIME type)
	/// </summary>
	utility::string_t GetThumbnailMimeType() const;
	void SetThumbnailMimeType(const utility::string_t& Value);
	bool HasThumbnailMimeType() const;

	std::shared_ptr<GeoCoord> GetLocation() const;
	void SetLocation(const std::shared_ptr<GeoCoord>& Value);
	bool HasLocation() const;

	/// <summary>
	/// True if hidden on a map view.
	/// When true, the PoI should not be visible, however, it may still have an active role in the experience.
	/// </summary>
	bool GetHidden() const;
	void SetHidden(const bool& Value);
	bool HasHidden() const;

	/// <summary>
	/// Longitude and Latitude of geojson polygon vertices
	/// </summary>
	const std::vector<std::shared_ptr<GeoCoord>>& GetGeofence() const;
	void SetGeofence(const std::vector<std::shared_ptr<GeoCoord>>& Value);
	bool HasGeofence() const;

	/// <summary>
	/// Prototype that is referenced by the POI to be used by clients for instantiation of objects
	/// </summary>
	[[deprecated("'prototypeName' has been deprecated!")]]
	utility::string_t GetPrototypeName() const;
	[[deprecated("'prototypeName' has been deprecated!")]]
	void SetPrototypeName(const utility::string_t& Value);
	bool HasPrototypeName() const;

	/// <summary>
	/// Prototype Id that is referenced by the POI to be used by clients for instantiation of objects
	/// </summary>
	utility::string_t GetPrototypeId() const;
	void SetPrototypeId(const utility::string_t& Value);
	bool HasPrototypeId() const;

	/// <summary>
	/// Used to make sure that a POI is facing the correct direction when it spawns
	/// </summary>
	float GetOrientation() const;
	void SetOrientation(float Value);
	bool HasOrientation() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<std::vector<std::shared_ptr<LocalizedString>>> m_Title;
	std::optional<std::vector<std::shared_ptr<LocalizedString>>> m_Description;
	std::optional<std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>> m_UiStrings;
	std::optional<utility::string_t> m_Type;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_ThumbnailUri;
	std::optional<utility::string_t> m_ThumbnailMimeType;
	std::optional<std::shared_ptr<GeoCoord>> m_Location;
	std::optional<bool> m_Hidden;
	std::optional<std::vector<std::shared_ptr<GeoCoord>>> m_Geofence;
	std::optional<utility::string_t> m_PrototypeName;
	std::optional<utility::string_t> m_PrototypeId;
	std::optional<float> m_Orientation;
};

class PointOfInterestLiteDtoDataPage : public csp::services::DtoBase
{
public:
	PointOfInterestLiteDtoDataPage();
	virtual ~PointOfInterestLiteDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<PointOfInterestLiteDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<PointOfInterestLiteDto>>& Value);
	bool HasItems() const;

	int32_t GetSkip() const;
	void SetSkip(int32_t Value);
	bool HasSkip() const;

	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	int32_t GetItemCount() const;
	void SetItemCount(int32_t Value);
	bool HasItemCount() const;

	int64_t GetItemTotalCount() const;
	void SetItemTotalCount(int64_t Value);
	bool HasItemTotalCount() const;


protected:
	std::optional<std::vector<std::shared_ptr<PointOfInterestLiteDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// User position data transform object
/// </summary>
class PositionDto : public csp::services::DtoBase
{
public:
	PositionDto();
	virtual ~PositionDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The unique identifier for the position update for this user
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// The user unique id associated with the position
	/// </summary>
	utility::string_t GetUserId() const;
	bool HasUserId() const;

	std::shared_ptr<GeoCoord> GetPosition() const;
	void SetPosition(const std::shared_ptr<GeoCoord>& Value);
	bool HasPosition() const;

	/// <summary>
	/// Indicates whether the user is off-site
	/// from the designated area where tracking is allowed
	/// </summary>
	bool GetOffsite() const;
	void SetOffsite(const bool& Value);
	bool HasOffsite() const;

	/// <summary>
	/// The device the user is using which updated the position
	/// </summary>
	utility::string_t GetDeviceId() const;
	void SetDeviceId(const utility::string_t& Value);
	bool HasDeviceId() const;

	/// <summary>
	/// The date and time this position was reported
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	/// <summary>
	/// The radius for the next geofence search upon after a user position has been created
	/// </summary>
	double GetGeofenceSearchRadius() const;
	bool HasGeofenceSearchRadius() const;

	/// <summary>
	/// True if the user is a spectator
	/// </summary>
	bool GetSpectator() const;
	void SetSpectator(const bool& Value);
	bool HasSpectator() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_UserId;
	std::optional<std::shared_ptr<GeoCoord>> m_Position;
	std::optional<bool> m_Offsite;
	std::optional<utility::string_t> m_DeviceId;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<double> m_GeofenceSearchRadius;
	std::optional<bool> m_Spectator;
};

class PositionDtoDataPage : public csp::services::DtoBase
{
public:
	PositionDtoDataPage();
	virtual ~PositionDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<PositionDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<PositionDto>>& Value);
	bool HasItems() const;

	int32_t GetSkip() const;
	void SetSkip(int32_t Value);
	bool HasSkip() const;

	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	int32_t GetItemCount() const;
	void SetItemCount(int32_t Value);
	bool HasItemCount() const;

	int64_t GetItemTotalCount() const;
	void SetItemTotalCount(int64_t Value);
	bool HasItemTotalCount() const;


protected:
	std::optional<std::vector<std::shared_ptr<PositionDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
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
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The style definition of the kml elements. These are used to define each point or set of points
	/// and how they are shown on a map (color, pin style, size, etc)
	/// </summary>
	const std::vector<std::shared_ptr<Style>>& GetStyle() const;
	void SetStyle(const std::vector<std::shared_ptr<Style>>& Value);
	bool HasStyle() const;

	/// <summary>
	/// The visibility of the structure, should usually be true
	/// </summary>
	bool GetVisibility() const;
	void SetVisibility(const bool& Value);
	bool HasVisibility() const;

	/// <summary>
	/// Camera operator - i believe
	/// </summary>
	bool GetOpen() const;
	void SetOpen(const bool& Value);
	bool HasOpen() const;

	/// <summary>
	/// The placemark, defines a point or a line on a map
	/// </summary>
	const std::vector<std::shared_ptr<Placemark>>& GetPlacemark() const;
	void SetPlacemark(const std::vector<std::shared_ptr<Placemark>>& Value);
	bool HasPlacemark() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<std::vector<std::shared_ptr<Style>>> m_Style;
	std::optional<bool> m_Visibility;
	std::optional<bool> m_Open;
	std::optional<std::vector<std::shared_ptr<Placemark>>> m_Placemark;
};

/// <summary>
/// Quaternions used to represent the rotation of a prototype.
/// </summary>
class Rotation : public csp::services::DtoBase
{
public:
	Rotation();
	virtual ~Rotation();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// X component of the Quaternion
	/// </summary>
	float GetX() const;
	void SetX(float Value);
	bool HasX() const;

	/// <summary>
	/// Y component of the Quaternion
	/// </summary>
	float GetY() const;
	void SetY(float Value);
	bool HasY() const;

	/// <summary>
	/// Z component of the Quaternion
	/// </summary>
	float GetZ() const;
	void SetZ(float Value);
	bool HasZ() const;

	/// <summary>
	/// W component of the Quaternion
	/// </summary>
	float GetW() const;
	void SetW(float Value);
	bool HasW() const;


protected:
	std::optional<float> m_X;
	std::optional<float> m_Y;
	std::optional<float> m_Z;
	std::optional<float> m_W;
};

/// <summary>
/// The scale for an applied transform
/// </summary>
class Scale : public csp::services::DtoBase
{
public:
	Scale();
	virtual ~Scale();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The X coordinate
	/// </summary>
	float GetX() const;
	void SetX(float Value);
	bool HasX() const;

	/// <summary>
	/// The Y coordinate
	/// </summary>
	float GetY() const;
	void SetY(float Value);
	bool HasY() const;

	/// <summary>
	/// The Z coordinate
	/// </summary>
	float GetZ() const;
	void SetZ(float Value);
	bool HasZ() const;


protected:
	std::optional<float> m_X;
	std::optional<float> m_Y;
	std::optional<float> m_Z;
};

/// <summary>
/// SpaceTime Data Transfer Object
/// </summary>
class SpaceTimeDto : public csp::services::DtoBase
{
public:
	SpaceTimeDto();
	virtual ~SpaceTimeDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique identifier for a SpaceTime event
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// DateTime at which the SpaceTime event was created
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	std::shared_ptr<SpaceTimeType> GetSpaceTimeType() const;
	void SetSpaceTimeType(const std::shared_ptr<SpaceTimeType>& Value);
	bool HasSpaceTimeType() const;

	/// <summary>
	/// The ID of the User Group associated with this SpaceTime event
	/// </summary>
	utility::string_t GetGroupId() const;
	void SetGroupId(const utility::string_t& Value);
	bool HasGroupId() const;

	/// <summary>
	/// UserId associated with this SpaceTime event
	/// </summary>
	utility::string_t GetUserId() const;
	bool HasUserId() const;

	std::shared_ptr<GeoCoord> GetLocation() const;
	void SetLocation(const std::shared_ptr<GeoCoord>& Value);
	bool HasLocation() const;

	/// <summary>
	/// Indicates whether the user is off-site
	/// from the designated area where tracking is allowed
	/// </summary>
	bool GetOffsite() const;
	void SetOffsite(const bool& Value);
	bool HasOffsite() const;

	/// <summary>
	/// Point of Interest Id associated with this SpaceTime event
	/// </summary>
	utility::string_t GetPoiId() const;
	void SetPoiId(const utility::string_t& Value);
	bool HasPoiId() const;

	/// <summary>
	/// Prototype Id associated with this SpaceTime event
	/// </summary>
	utility::string_t GetPrototypeId() const;
	void SetPrototypeId(const utility::string_t& Value);
	bool HasPrototypeId() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<std::shared_ptr<SpaceTimeType>> m_SpaceTimeType;
	std::optional<utility::string_t> m_GroupId;
	std::optional<utility::string_t> m_UserId;
	std::optional<std::shared_ptr<GeoCoord>> m_Location;
	std::optional<bool> m_Offsite;
	std::optional<utility::string_t> m_PoiId;
	std::optional<utility::string_t> m_PrototypeId;
};

class SpaceTimeDtoDataPage : public csp::services::DtoBase
{
public:
	SpaceTimeDtoDataPage();
	virtual ~SpaceTimeDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<SpaceTimeDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<SpaceTimeDto>>& Value);
	bool HasItems() const;

	int32_t GetSkip() const;
	void SetSkip(int32_t Value);
	bool HasSkip() const;

	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	int32_t GetItemCount() const;
	void SetItemCount(int32_t Value);
	bool HasItemCount() const;

	int64_t GetItemTotalCount() const;
	void SetItemTotalCount(int64_t Value);
	bool HasItemTotalCount() const;


protected:
	std::optional<std::vector<std::shared_ptr<SpaceTimeDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Enum describing SpaceTimeTypes
/// </summary>
class SpaceTimeType : public csp::services::EnumBase
{
public:
	SpaceTimeType();
	virtual ~SpaceTimeType();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;

	enum class eSpaceTimeType
	{
		EVENT,
		POSITION

	};

	eSpaceTimeType GetValue() const;
	void SetValue(eSpaceTimeType const Value);

protected:
	eSpaceTimeType Value = {};
};

class StringDataPage : public csp::services::DtoBase
{
public:
	StringDataPage();
	virtual ~StringDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<utility::string_t>& GetItems() const;
	void SetItems(const std::vector<utility::string_t>& Value);
	bool HasItems() const;

	int32_t GetSkip() const;
	void SetSkip(int32_t Value);
	bool HasSkip() const;

	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	int32_t GetItemCount() const;
	void SetItemCount(int32_t Value);
	bool HasItemCount() const;

	int64_t GetItemTotalCount() const;
	void SetItemTotalCount(int64_t Value);
	bool HasItemTotalCount() const;


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
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	std::shared_ptr<IconStyle> GetIconStyle() const;
	void SetIconStyle(const std::shared_ptr<IconStyle>& Value);
	bool HasIconStyle() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<std::shared_ptr<IconStyle>> m_IconStyle;
};

/// <summary>
/// A transform matrix that stores Scale, Translation and Rotation for an object.
/// The object is stored in Y-Up Right Handed fashion.
/// Each value on this matrix is required and there are no defaults, however the full matrix itself can be null provided you did not pass
/// the object to the controller.
/// </summary>
class Transform : public csp::services::DtoBase
{
public:
	Transform();
	virtual ~Transform();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	std::shared_ptr<Scale> GetScale() const;
	void SetScale(const std::shared_ptr<Scale>& Value);
	bool HasScale() const;

	std::shared_ptr<Translation> GetTranslation() const;
	void SetTranslation(const std::shared_ptr<Translation>& Value);
	bool HasTranslation() const;

	std::shared_ptr<Rotation> GetRotation() const;
	void SetRotation(const std::shared_ptr<Rotation>& Value);
	bool HasRotation() const;


protected:
	std::optional<std::shared_ptr<Scale>> m_Scale;
	std::optional<std::shared_ptr<Translation>> m_Translation;
	std::optional<std::shared_ptr<Rotation>> m_Rotation;
};

/// <summary>
/// The triple for an applied transform
/// </summary>
class Translation : public csp::services::DtoBase
{
public:
	Translation();
	virtual ~Translation();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The X coordinate for the triple vector
	/// </summary>
	float GetX() const;
	void SetX(float Value);
	bool HasX() const;

	/// <summary>
	/// The Y coordinate for the triple vector
	/// </summary>
	float GetY() const;
	void SetY(float Value);
	bool HasY() const;

	/// <summary>
	/// The Z coordinate for the triple vector
	/// </summary>
	float GetZ() const;
	void SetZ(float Value);
	bool HasZ() const;


protected:
	std::optional<float> m_X;
	std::optional<float> m_Y;
	std::optional<float> m_Z;
};


} // namespace csp::services::generated::spatialdataservice