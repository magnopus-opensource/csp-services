

#include "Api.h"

#include "CSP/CSPFoundation.h"
#include "Web/HttpAuth.h"
#include "Web/HttpPayload.h"


namespace csp::services::generated::spatialdataservice
{


AnchorsApi::AnchorsApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().SpatialDataServiceURI)
{
}

AnchorsApi::~AnchorsApi()
{
}



void AnchorsApi::apiV1AnchorsIdGet(const utility::string_t& id,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/anchors/{id}", {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void AnchorsApi::apiV1AnchorsIdPut(const utility::string_t& id,
								   const std::shared_ptr<AnchorDto>& RequestBody,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/anchors/{id}", {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void AnchorsApi::apiV1AnchorsIdDelete(const utility::string_t& id,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/anchors/{id}", {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void AnchorsApi::apiV1AnchorsPost(const std::shared_ptr<AnchorDto>& RequestBody,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/anchors", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}

void AnchorsApi::apiV1AnchorsDelete(const std::optional<std::vector<utility::string_t>>& ids,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/anchors", {});


	if (ids.has_value())
	{
		Uri.AddQueryParams("ids", ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}

void AnchorsApi::apiV1AnchorsGet(const std::optional<std::vector<utility::string_t>>& Keys,
								 const std::optional<std::vector<utility::string_t>>& Values,
								 const std::optional<double>& Coordinate_Longitude,
								 const std::optional<double>& Coordinate_Latitude,
								 const std::optional<double>& Coordinate_Radius,
								 const std::optional<std::vector<utility::string_t>>& Tags,
								 const std::optional<bool>& TagsAll,
								 const std::optional<std::vector<utility::string_t>>& ThirdPartyProviderNames,
								 const std::optional<std::vector<utility::string_t>>& ThirdPartyAnchorIds,
								 const std::optional<std::vector<utility::string_t>>& ReferenceIds,
								 const std::optional<std::vector<utility::string_t>>& AnchoredObjectIds,
								 const std::optional<int32_t>& Skip,
								 const std::optional<int32_t>& Limit,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/anchors", {});


	if (Keys.has_value())
	{
		Uri.AddQueryParams("Keys", Keys.value());
	}


	if (Values.has_value())
	{
		Uri.AddQueryParams("Values", Values.value());
	}


	if (Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Coordinate_Longitude.value());
	}


	if (Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Coordinate_Latitude.value());
	}


	if (Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Coordinate_Radius.value());
	}


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}


	if (ThirdPartyProviderNames.has_value())
	{
		Uri.AddQueryParams("ThirdPartyProviderNames", ThirdPartyProviderNames.value());
	}


	if (ThirdPartyAnchorIds.has_value())
	{
		Uri.AddQueryParams("ThirdPartyAnchorIds", ThirdPartyAnchorIds.value());
	}


	if (ReferenceIds.has_value())
	{
		Uri.AddQueryParams("ReferenceIds", ReferenceIds.value());
	}


	if (AnchoredObjectIds.has_value())
	{
		Uri.AddQueryParams("AnchoredObjectIds", AnchoredObjectIds.value());
	}


	if (Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Skip.value());
	}


	if (Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void AnchorsApi::apiV1AnchorResolutionsPost(const std::shared_ptr<AnchorResolutionDto>& RequestBody,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/anchor-resolutions", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}

void AnchorsApi::apiV1AnchorResolutionsGet(const std::optional<std::vector<utility::string_t>>& AnchorIds,
										   const std::optional<std::vector<utility::string_t>>& Tags,
										   const std::optional<bool>& TagsAll,
										   const std::optional<bool>& SuccessfullyResolved,
										   const std::optional<int32_t>& Skip,
										   const std::optional<int32_t>& Limit,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/anchor-resolutions", {});


	if (AnchorIds.has_value())
	{
		Uri.AddQueryParams("AnchorIds", AnchorIds.value());
	}


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}


	if (SuccessfullyResolved.has_value())
	{
		Uri.AddQueryParams("SuccessfullyResolved", SuccessfullyResolved.value());
	}


	if (Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Skip.value());
	}


	if (Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void AnchorsApi::apiV1AnchorResolutionsStatsGet(const std::optional<std::vector<utility::string_t>>& AnchorIds,
												const std::optional<std::vector<utility::string_t>>& Tags,
												const std::optional<bool>& TagsAll,
												const std::optional<bool>& SuccessfullyResolved,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/anchor-resolutions/stats", {});


	if (AnchorIds.has_value())
	{
		Uri.AddQueryParams("AnchorIds", AnchorIds.value());
	}


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}


	if (SuccessfullyResolved.has_value())
	{
		Uri.AddQueryParams("SuccessfullyResolved", SuccessfullyResolved.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



ConfigurationApi::ConfigurationApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().SpatialDataServiceURI)
{
}

ConfigurationApi::~ConfigurationApi()
{
}



void ConfigurationApi::appsettingsGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/appsettings", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::appsettingsReloadPost(csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/appsettings/reload", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::featureflagsGet(csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/featureflags", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



NtpApi::NtpApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().SpatialDataServiceURI)
{
}

NtpApi::~NtpApi()
{
}



void NtpApi::datetimeGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/datetime", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PersonalPointOfInterestApi::PersonalPointOfInterestApi(csp::web::WebClient* InWebClient)
	: ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().SpatialDataServiceURI)
{
}

PersonalPointOfInterestApi::~PersonalPointOfInterestApi()
{
}



void PersonalPointOfInterestApi::apiV1UsersUserIdPoiGet(const utility::string_t& userId,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/poi", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PersonalPointOfInterestApi::apiV1UsersUserIdPoiPoiIdPut(const utility::string_t& userId,
															 const utility::string_t& poiId,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/poi/{poiId}", {userId, poiId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void PersonalPointOfInterestApi::apiV1UsersUserIdPoiPoiIdDelete(const utility::string_t& userId,
																const utility::string_t& poiId,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/poi/{poiId}", {userId, poiId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



PingApi::PingApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().SpatialDataServiceURI)
{
}

PingApi::~PingApi()
{
}



void PingApi::pingGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/ping", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PointOfInterestApi::PointOfInterestApi(csp::web::WebClient* InWebClient)
	: ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().SpatialDataServiceURI)
{
}

PointOfInterestApi::~PointOfInterestApi()
{
}



void PointOfInterestApi::apiV1PoiIdGet(const utility::string_t& id,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/poi/{id}", {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void PointOfInterestApi::apiV1PoiIdPut(const utility::string_t& id,
									   const std::shared_ptr<PointOfInterestDto>& RequestBody,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/poi/{id}", {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void PointOfInterestApi::apiV1PoiIdDelete(const utility::string_t& id,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/poi/{id}", {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::apiV1PoiLiteGet(const std::optional<utility::string_t>& ppoiUserId,
										 const std::optional<std::vector<utility::string_t>>& Ids,
										 const std::optional<utility::string_t>& Type,
										 const std::optional<std::vector<utility::string_t>>& Types,
										 const std::optional<std::vector<utility::string_t>>& Tags,
										 const std::optional<bool>& TagsAll,
										 const std::optional<double>& Coordinate_Longitude,
										 const std::optional<double>& Coordinate_Latitude,
										 const std::optional<double>& Coordinate_Radius,
										 const std::optional<std::vector<std::shared_ptr<GeoCoord>>>& Geofence,
										 const std::optional<utility::string_t>& Name,
										 const std::optional<std::vector<utility::string_t>>& Names,
										 const std::optional<utility::string_t>& Title,
										 const std::optional<int32_t>& ZoomLevel,
										 const std::optional<utility::string_t>& EventStartTime,
										 const std::optional<utility::string_t>& EventEndTime,
										 const std::optional<std::vector<utility::string_t>>& ReferenceLookups,
										 const std::optional<bool>& IncludeHidden,
										 const std::optional<std::vector<std::shared_ptr<MediaType>>>& MediaTypes,
										 const std::optional<bool>& HasSchedule,
										 const std::optional<std::vector<utility::string_t>>& PrototypeNames,
										 const std::optional<std::vector<utility::string_t>>& PrototypeIds,
										 const std::optional<std::vector<utility::string_t>>& GroupIds,
										 const std::optional<int32_t>& Skip,
										 const std::optional<int32_t>& Limit,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/poi-lite", {});


	if (ppoiUserId.has_value())
	{
		Uri.AddQueryParams("ppoiUserId", ppoiUserId.value());
	}


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (Type.has_value())
	{
		Uri.AddQueryParams("Type", Type.value());
	}


	if (Types.has_value())
	{
		Uri.AddQueryParams("Types", Types.value());
	}


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}


	if (Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Coordinate_Longitude.value());
	}


	if (Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Coordinate_Latitude.value());
	}


	if (Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Coordinate_Radius.value());
	}


	if (Geofence.has_value())
	{
		Uri.AddQueryParams("Geofence", Geofence.value());
	}


	if (Name.has_value())
	{
		Uri.AddQueryParams("Name", Name.value());
	}


	if (Names.has_value())
	{
		Uri.AddQueryParams("Names", Names.value());
	}


	if (Title.has_value())
	{
		Uri.AddQueryParams("Title", Title.value());
	}


	if (ZoomLevel.has_value())
	{
		Uri.AddQueryParams("ZoomLevel", ZoomLevel.value());
	}


	if (EventStartTime.has_value())
	{
		Uri.AddQueryParams("EventStartTime", EventStartTime.value());
	}


	if (EventEndTime.has_value())
	{
		Uri.AddQueryParams("EventEndTime", EventEndTime.value());
	}


	if (ReferenceLookups.has_value())
	{
		Uri.AddQueryParams("ReferenceLookups", ReferenceLookups.value());
	}


	if (IncludeHidden.has_value())
	{
		Uri.AddQueryParams("IncludeHidden", IncludeHidden.value());
	}


	if (MediaTypes.has_value())
	{
		Uri.AddQueryParams("MediaTypes", MediaTypes.value());
	}


	if (HasSchedule.has_value())
	{
		Uri.AddQueryParams("HasSchedule", HasSchedule.value());
	}


	if (PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", PrototypeNames.value());
	}


	if (PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", PrototypeIds.value());
	}


	if (GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", GroupIds.value());
	}


	if (Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Skip.value());
	}


	if (Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::apiV1PoiIdGet(const std::optional<utility::string_t>& ppoiUserId,
									   const std::optional<std::vector<utility::string_t>>& Ids,
									   const std::optional<utility::string_t>& Type,
									   const std::optional<std::vector<utility::string_t>>& Types,
									   const std::optional<std::vector<utility::string_t>>& Tags,
									   const std::optional<bool>& TagsAll,
									   const std::optional<double>& Coordinate_Longitude,
									   const std::optional<double>& Coordinate_Latitude,
									   const std::optional<double>& Coordinate_Radius,
									   const std::optional<std::vector<std::shared_ptr<GeoCoord>>>& Geofence,
									   const std::optional<utility::string_t>& Name,
									   const std::optional<std::vector<utility::string_t>>& Names,
									   const std::optional<utility::string_t>& Title,
									   const std::optional<int32_t>& ZoomLevel,
									   const std::optional<utility::string_t>& EventStartTime,
									   const std::optional<utility::string_t>& EventEndTime,
									   const std::optional<std::vector<utility::string_t>>& ReferenceLookups,
									   const std::optional<bool>& IncludeHidden,
									   const std::optional<std::vector<std::shared_ptr<MediaType>>>& MediaTypes,
									   const std::optional<bool>& HasSchedule,
									   const std::optional<std::vector<utility::string_t>>& PrototypeNames,
									   const std::optional<std::vector<utility::string_t>>& PrototypeIds,
									   const std::optional<std::vector<utility::string_t>>& GroupIds,
									   const std::optional<int32_t>& Skip,
									   const std::optional<int32_t>& Limit,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/poi-id", {});


	if (ppoiUserId.has_value())
	{
		Uri.AddQueryParams("ppoiUserId", ppoiUserId.value());
	}


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (Type.has_value())
	{
		Uri.AddQueryParams("Type", Type.value());
	}


	if (Types.has_value())
	{
		Uri.AddQueryParams("Types", Types.value());
	}


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}


	if (Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Coordinate_Longitude.value());
	}


	if (Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Coordinate_Latitude.value());
	}


	if (Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Coordinate_Radius.value());
	}


	if (Geofence.has_value())
	{
		Uri.AddQueryParams("Geofence", Geofence.value());
	}


	if (Name.has_value())
	{
		Uri.AddQueryParams("Name", Name.value());
	}


	if (Names.has_value())
	{
		Uri.AddQueryParams("Names", Names.value());
	}


	if (Title.has_value())
	{
		Uri.AddQueryParams("Title", Title.value());
	}


	if (ZoomLevel.has_value())
	{
		Uri.AddQueryParams("ZoomLevel", ZoomLevel.value());
	}


	if (EventStartTime.has_value())
	{
		Uri.AddQueryParams("EventStartTime", EventStartTime.value());
	}


	if (EventEndTime.has_value())
	{
		Uri.AddQueryParams("EventEndTime", EventEndTime.value());
	}


	if (ReferenceLookups.has_value())
	{
		Uri.AddQueryParams("ReferenceLookups", ReferenceLookups.value());
	}


	if (IncludeHidden.has_value())
	{
		Uri.AddQueryParams("IncludeHidden", IncludeHidden.value());
	}


	if (MediaTypes.has_value())
	{
		Uri.AddQueryParams("MediaTypes", MediaTypes.value());
	}


	if (HasSchedule.has_value())
	{
		Uri.AddQueryParams("HasSchedule", HasSchedule.value());
	}


	if (PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", PrototypeNames.value());
	}


	if (PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", PrototypeIds.value());
	}


	if (GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", GroupIds.value());
	}


	if (Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Skip.value());
	}


	if (Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::apiV1PoiGet(const std::optional<utility::string_t>& ppoiUserId,
									 const std::optional<std::vector<utility::string_t>>& Ids,
									 const std::optional<utility::string_t>& Type,
									 const std::optional<std::vector<utility::string_t>>& Types,
									 const std::optional<std::vector<utility::string_t>>& Tags,
									 const std::optional<bool>& TagsAll,
									 const std::optional<double>& Coordinate_Longitude,
									 const std::optional<double>& Coordinate_Latitude,
									 const std::optional<double>& Coordinate_Radius,
									 const std::optional<std::vector<std::shared_ptr<GeoCoord>>>& Geofence,
									 const std::optional<utility::string_t>& Name,
									 const std::optional<std::vector<utility::string_t>>& Names,
									 const std::optional<utility::string_t>& Title,
									 const std::optional<int32_t>& ZoomLevel,
									 const std::optional<utility::string_t>& EventStartTime,
									 const std::optional<utility::string_t>& EventEndTime,
									 const std::optional<std::vector<utility::string_t>>& ReferenceLookups,
									 const std::optional<bool>& IncludeHidden,
									 const std::optional<std::vector<std::shared_ptr<MediaType>>>& MediaTypes,
									 const std::optional<bool>& HasSchedule,
									 const std::optional<std::vector<utility::string_t>>& PrototypeNames,
									 const std::optional<std::vector<utility::string_t>>& PrototypeIds,
									 const std::optional<std::vector<utility::string_t>>& GroupIds,
									 const std::optional<int32_t>& Skip,
									 const std::optional<int32_t>& Limit,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/poi", {});


	if (ppoiUserId.has_value())
	{
		Uri.AddQueryParams("ppoiUserId", ppoiUserId.value());
	}


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (Type.has_value())
	{
		Uri.AddQueryParams("Type", Type.value());
	}


	if (Types.has_value())
	{
		Uri.AddQueryParams("Types", Types.value());
	}


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}


	if (Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Coordinate_Longitude.value());
	}


	if (Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Coordinate_Latitude.value());
	}


	if (Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Coordinate_Radius.value());
	}


	if (Geofence.has_value())
	{
		Uri.AddQueryParams("Geofence", Geofence.value());
	}


	if (Name.has_value())
	{
		Uri.AddQueryParams("Name", Name.value());
	}


	if (Names.has_value())
	{
		Uri.AddQueryParams("Names", Names.value());
	}


	if (Title.has_value())
	{
		Uri.AddQueryParams("Title", Title.value());
	}


	if (ZoomLevel.has_value())
	{
		Uri.AddQueryParams("ZoomLevel", ZoomLevel.value());
	}


	if (EventStartTime.has_value())
	{
		Uri.AddQueryParams("EventStartTime", EventStartTime.value());
	}


	if (EventEndTime.has_value())
	{
		Uri.AddQueryParams("EventEndTime", EventEndTime.value());
	}


	if (ReferenceLookups.has_value())
	{
		Uri.AddQueryParams("ReferenceLookups", ReferenceLookups.value());
	}


	if (IncludeHidden.has_value())
	{
		Uri.AddQueryParams("IncludeHidden", IncludeHidden.value());
	}


	if (MediaTypes.has_value())
	{
		Uri.AddQueryParams("MediaTypes", MediaTypes.value());
	}


	if (HasSchedule.has_value())
	{
		Uri.AddQueryParams("HasSchedule", HasSchedule.value());
	}


	if (PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", PrototypeNames.value());
	}


	if (PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", PrototypeIds.value());
	}


	if (GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", GroupIds.value());
	}


	if (Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Skip.value());
	}


	if (Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void PointOfInterestApi::apiV1PoiPost(const std::shared_ptr<PointOfInterestDto>& RequestBody,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/poi", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}

void PointOfInterestApi::apiV1PoiDelete(const std::optional<std::vector<utility::string_t>>& ids,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/poi", {});


	if (ids.has_value())
	{
		Uri.AddQueryParams("ids", ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::apiV1PoiIdPartialUpdatePut(const utility::string_t& id,
													const std::shared_ptr<PoiPartialUpdate>& RequestBody,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/poi/{id}/partial-update", {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::apiV1PoiTagsGet(const std::optional<utility::string_t>& tagNameWith,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/poi/tags", {});


	if (tagNameWith.has_value())
	{
		Uri.AddQueryParams("tagNameWith", tagNameWith.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PositionApi::PositionApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().SpatialDataServiceURI)
{
}

PositionApi::~PositionApi()
{
}



void PositionApi::apiV1UsersUserIdPositionsGet(const utility::string_t& userId,
											   const std::optional<std::vector<utility::string_t>>& UserIds,
											   const std::optional<std::vector<utility::string_t>>& DeviceIds,
											   const std::optional<std::vector<utility::string_t>>& PositionIds,
											   const std::optional<utility::string_t>& StartTimestamp,
											   const std::optional<utility::string_t>& EndTimestamp,
											   const std::optional<double>& Coordinate_Longitude,
											   const std::optional<double>& Coordinate_Latitude,
											   const std::optional<double>& Coordinate_Radius,
											   const std::optional<bool>& FindUsersOutsideGeoSphere,
											   const std::optional<int32_t>& Skip,
											   const std::optional<int32_t>& Limit,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/positions", {userId});


	if (UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", UserIds.value());
	}


	if (DeviceIds.has_value())
	{
		Uri.AddQueryParams("DeviceIds", DeviceIds.value());
	}


	if (PositionIds.has_value())
	{
		Uri.AddQueryParams("PositionIds", PositionIds.value());
	}


	if (StartTimestamp.has_value())
	{
		Uri.AddQueryParams("StartTimestamp", StartTimestamp.value());
	}


	if (EndTimestamp.has_value())
	{
		Uri.AddQueryParams("EndTimestamp", EndTimestamp.value());
	}


	if (Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Coordinate_Longitude.value());
	}


	if (Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Coordinate_Latitude.value());
	}


	if (Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Coordinate_Radius.value());
	}


	if (FindUsersOutsideGeoSphere.has_value())
	{
		Uri.AddQueryParams("FindUsersOutsideGeoSphere", FindUsersOutsideGeoSphere.value());
	}


	if (Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Skip.value());
	}


	if (Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void PositionApi::apiV1UsersUserIdPositionsPost(const utility::string_t& userId,
												const std::shared_ptr<PositionDto>& RequestBody,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/positions", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::apiV1UsersPositionsLatestGet(const std::optional<std::vector<utility::string_t>>& UserIds,
											   const std::optional<std::vector<utility::string_t>>& DeviceIds,
											   const std::optional<std::vector<utility::string_t>>& PositionIds,
											   const std::optional<utility::string_t>& StartTimestamp,
											   const std::optional<utility::string_t>& EndTimestamp,
											   const std::optional<double>& Coordinate_Longitude,
											   const std::optional<double>& Coordinate_Latitude,
											   const std::optional<double>& Coordinate_Radius,
											   const std::optional<bool>& FindUsersOutsideGeoSphere,
											   const std::optional<int32_t>& Skip,
											   const std::optional<int32_t>& Limit,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/positions/latest", {});


	if (UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", UserIds.value());
	}


	if (DeviceIds.has_value())
	{
		Uri.AddQueryParams("DeviceIds", DeviceIds.value());
	}


	if (PositionIds.has_value())
	{
		Uri.AddQueryParams("PositionIds", PositionIds.value());
	}


	if (StartTimestamp.has_value())
	{
		Uri.AddQueryParams("StartTimestamp", StartTimestamp.value());
	}


	if (EndTimestamp.has_value())
	{
		Uri.AddQueryParams("EndTimestamp", EndTimestamp.value());
	}


	if (Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Coordinate_Longitude.value());
	}


	if (Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Coordinate_Latitude.value());
	}


	if (Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Coordinate_Radius.value());
	}


	if (FindUsersOutsideGeoSphere.has_value())
	{
		Uri.AddQueryParams("FindUsersOutsideGeoSphere", FindUsersOutsideGeoSphere.value());
	}


	if (Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Skip.value());
	}


	if (Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::apiV1UsersUserIdPositionsLatestGet(const utility::string_t& userId,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/positions/latest", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::apiV1UsersUserIdPositionsPositionIdGet(const utility::string_t& userId,
														 const utility::string_t& positionId,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/positions/{positionId}", {userId, positionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void PositionApi::apiV1UsersUserIdPositionsPositionIdDelete(const utility::string_t& userId,
															const utility::string_t& positionId,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/positions/{positionId}", {userId, positionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::apiV1GroupsGroupIdPositionsLatestGet(const utility::string_t& groupId,
													   const std::optional<std::vector<utility::string_t>>& UserIds,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/positions/latest", {groupId});


	if (UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", UserIds.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::apiV1GroupsPositionsLatestGet(const std::optional<std::vector<utility::string_t>>& groupIds,
												const std::optional<std::vector<utility::string_t>>& UserIds,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/positions/latest", {});


	if (groupIds.has_value())
	{
		Uri.AddQueryParams("groupIds", groupIds.value());
	}


	if (UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", UserIds.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::apiV1UsersPositionsGet(const std::optional<std::vector<utility::string_t>>& userIds,
										 const std::optional<std::vector<utility::string_t>>& UserIds,
										 const std::optional<std::vector<utility::string_t>>& DeviceIds,
										 const std::optional<std::vector<utility::string_t>>& PositionIds,
										 const std::optional<utility::string_t>& StartTimestamp,
										 const std::optional<utility::string_t>& EndTimestamp,
										 const std::optional<double>& Coordinate_Longitude,
										 const std::optional<double>& Coordinate_Latitude,
										 const std::optional<double>& Coordinate_Radius,
										 const std::optional<bool>& FindUsersOutsideGeoSphere,
										 const std::optional<bool>& onlyLatestPosition,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/positions", {});


	if (userIds.has_value())
	{
		Uri.AddQueryParams("userIds", userIds.value());
	}


	if (UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", UserIds.value());
	}


	if (DeviceIds.has_value())
	{
		Uri.AddQueryParams("DeviceIds", DeviceIds.value());
	}


	if (PositionIds.has_value())
	{
		Uri.AddQueryParams("PositionIds", PositionIds.value());
	}


	if (StartTimestamp.has_value())
	{
		Uri.AddQueryParams("StartTimestamp", StartTimestamp.value());
	}


	if (EndTimestamp.has_value())
	{
		Uri.AddQueryParams("EndTimestamp", EndTimestamp.value());
	}


	if (Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Coordinate_Longitude.value());
	}


	if (Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Coordinate_Latitude.value());
	}


	if (Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Coordinate_Radius.value());
	}


	if (FindUsersOutsideGeoSphere.has_value())
	{
		Uri.AddQueryParams("FindUsersOutsideGeoSphere", FindUsersOutsideGeoSphere.value());
	}


	if (onlyLatestPosition.has_value())
	{
		Uri.AddQueryParams("onlyLatestPosition", onlyLatestPosition.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PositionSpoofingApi::PositionSpoofingApi(csp::web::WebClient* InWebClient)
	: ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().SpatialDataServiceURI)
{
}

PositionSpoofingApi::~PositionSpoofingApi()
{
}



void PositionSpoofingApi::apiV1UsersUserIdPositionsSpoofPost(const utility::string_t& userId,
															 const std::optional<utility::string_t>& duration,
															 const std::shared_ptr<PositionDto>& RequestBody,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/positions/spoof", {userId});


	if (duration.has_value())
	{
		Uri.AddQueryParams("duration", duration.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}

void PositionSpoofingApi::apiV1UsersUserIdPositionsSpoofGet(const utility::string_t& userId,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/positions/spoof", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void PositionSpoofingApi::apiV1UsersUserIdPositionsSpoofDelete(const utility::string_t& userId,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/positions/spoof", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionSpoofingApi::apiV1PositionsSpoofUsersGet(csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/positions/spoof/users", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



SpaceTimeApi::SpaceTimeApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().SpatialDataServiceURI)
{
}

SpaceTimeApi::~SpaceTimeApi()
{
}



void SpaceTimeApi::apiV1UsersUserIdSpacetimeIdGet(const utility::string_t& userId,
												  const utility::string_t& id,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/spacetime/{id}", {userId, id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void SpaceTimeApi::apiV1UsersUserIdSpacetimeIdDelete(const utility::string_t& userId,
													 const utility::string_t& id,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/spacetime/{id}", {userId, id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}

void SpaceTimeApi::apiV1UsersUserIdSpacetimeIdPut(const utility::string_t& userId,
												  const utility::string_t& id,
												  const std::shared_ptr<SpaceTimeDto>& RequestBody,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/spacetime/{id}", {userId, id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceTimeApi::apiV1UsersUserIdSpacetimePost(const utility::string_t& userId,
												 const std::shared_ptr<SpaceTimeDto>& RequestBody,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/spacetime", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceTimeApi::apiV1SpacetimeGet(const std::optional<std::vector<utility::string_t>>& UserIds,
									 const std::optional<utility::string_t>& StartTimestamp,
									 const std::optional<utility::string_t>& EndTimestamp,
									 const std::optional<std::vector<utility::string_t>>& GroupIds,
									 const std::optional<double>& Coordinate_Longitude,
									 const std::optional<double>& Coordinate_Latitude,
									 const std::optional<double>& Coordinate_Radius,
									 const std::optional<std::vector<utility::string_t>>& PoiIds,
									 const std::optional<std::vector<utility::string_t>>& PrototypeIds,
									 const std::optional<int32_t>& Skip,
									 const std::optional<int32_t>& Limit,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/spacetime", {});


	if (UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", UserIds.value());
	}


	if (StartTimestamp.has_value())
	{
		Uri.AddQueryParams("StartTimestamp", StartTimestamp.value());
	}


	if (EndTimestamp.has_value())
	{
		Uri.AddQueryParams("EndTimestamp", EndTimestamp.value());
	}


	if (GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", GroupIds.value());
	}


	if (Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Coordinate_Longitude.value());
	}


	if (Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Coordinate_Latitude.value());
	}


	if (Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Coordinate_Radius.value());
	}


	if (PoiIds.has_value())
	{
		Uri.AddQueryParams("PoiIds", PoiIds.value());
	}


	if (PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", PrototypeIds.value());
	}


	if (Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Skip.value());
	}


	if (Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



} // namespace csp::services::generated::spatialdataservice