

#include "Api.h"

#include "CSP/CSPFoundation.h"
#include "Common/Web/HttpAuth.h"
#include "Common/Web/HttpPayload.h"

#include <fmt/format.h>
#include <string>


namespace csp::services::generated::spatialdataservice
{


AnchorsApi::AnchorsApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
{
}

AnchorsApi::~AnchorsApi()
{
}



void AnchorsApi::anchorsIdGet(const utility::string_t& id,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors/{id}").c_str(),
					  {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void AnchorsApi::anchorsIdPut(const utility::string_t& id,
							  const std::shared_ptr<AnchorDto>& RequestBody,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors/{id}").c_str(),
					  {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void AnchorsApi::anchorsIdDelete(const utility::string_t& id,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors/{id}").c_str(),
					  {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void AnchorsApi::anchorsPost(const std::shared_ptr<AnchorDto>& RequestBody,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void AnchorsApi::anchorsDelete(const std::optional<std::vector<utility::string_t>>& ids,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors").c_str(), {});


	if (ids.has_value())
	{
		Uri.AddQueryParams("ids", ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}


void AnchorsApi::anchorsGet(const std::optional<std::vector<utility::string_t>>& Keys,
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
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors").c_str(), {});


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



void AnchorsApi::anchorResolutionsPost(const std::shared_ptr<AnchorResolutionDto>& RequestBody,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchor-resolutions").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void AnchorsApi::anchorResolutionsGet(const std::optional<std::vector<utility::string_t>>& AnchorIds,
									  const std::optional<std::vector<utility::string_t>>& Tags,
									  const std::optional<bool>& TagsAll,
									  const std::optional<bool>& SuccessfullyResolved,
									  const std::optional<int32_t>& Skip,
									  const std::optional<int32_t>& Limit,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchor-resolutions").c_str(),
		{});


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



void AnchorsApi::anchorResolutionsStatsGet(const std::optional<std::vector<utility::string_t>>& AnchorIds,
										   const std::optional<std::vector<utility::string_t>>& Tags,
										   const std::optional<bool>& TagsAll,
										   const std::optional<bool>& SuccessfullyResolved,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchor-resolutions/stats").c_str(),
		{});


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



ConfigurationApi::ConfigurationApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
{
}

ConfigurationApi::~ConfigurationApi()
{
}



void ConfigurationApi::appsettingsGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/appsettings").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::appsettingsReloadPost(csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/appsettings/reload").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::featureflagsGet(csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/featureflags").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



NtpApi::NtpApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
{
}

NtpApi::~NtpApi()
{
}



void NtpApi::datetimeGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/datetime").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PersonalPointOfInterestApi::PersonalPointOfInterestApi(csp::web::WebClient* InWebClient)
	: ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
{
}

PersonalPointOfInterestApi::~PersonalPointOfInterestApi()
{
}



void PersonalPointOfInterestApi::usersUserIdPoiGet(const utility::string_t& userId,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/poi").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PersonalPointOfInterestApi::usersUserIdPoiPoiIdPut(const utility::string_t& userId,
														const utility::string_t& poiId,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/poi/{poiId}").c_str(),
		{userId, poiId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void PersonalPointOfInterestApi::usersUserIdPoiPoiIdDelete(const utility::string_t& userId,
														   const utility::string_t& poiId,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/poi/{poiId}").c_str(),
		{userId, poiId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



PingApi::PingApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
{
}

PingApi::~PingApi()
{
}



void PingApi::pingGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/ping").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PointOfInterestApi::PointOfInterestApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
{
}

PointOfInterestApi::~PointOfInterestApi()
{
}



void PointOfInterestApi::poiIdGet(const utility::string_t& id,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/{id}").c_str(), {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void PointOfInterestApi::poiIdPut(const utility::string_t& id,
								  const std::shared_ptr<PointOfInterestDto>& RequestBody,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/{id}").c_str(), {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void PointOfInterestApi::poiIdDelete(const utility::string_t& id,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/{id}").c_str(), {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::poiLiteGet(const std::optional<utility::string_t>& ppoiUserId,
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
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi-lite").c_str(), {});


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



void PointOfInterestApi::poiIdGet(const std::optional<utility::string_t>& ppoiUserId,
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
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi-id").c_str(), {});


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



void PointOfInterestApi::poiGet(const std::optional<utility::string_t>& ppoiUserId,
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
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi").c_str(), {});


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


void PointOfInterestApi::poiPost(const std::shared_ptr<PointOfInterestDto>& RequestBody,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void PointOfInterestApi::poiDelete(const std::optional<std::vector<utility::string_t>>& ids,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi").c_str(), {});


	if (ids.has_value())
	{
		Uri.AddQueryParams("ids", ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::poiIdPartialUpdatePut(const utility::string_t& id,
											   const std::shared_ptr<PoiPartialUpdate>& RequestBody,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/{id}/partial-update").c_str(),
		{id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::poiTagsGet(const std::optional<utility::string_t>& tagNameWith,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/tags").c_str(), {});


	if (tagNameWith.has_value())
	{
		Uri.AddQueryParams("tagNameWith", tagNameWith.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PositionApi::PositionApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
{
}

PositionApi::~PositionApi()
{
}



void PositionApi::usersUserIdPositionsGet(const utility::string_t& userId,
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
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions").c_str(),
		{userId});


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


void PositionApi::usersUserIdPositionsPost(const utility::string_t& userId,
										   const std::shared_ptr<PositionDto>& RequestBody,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::usersPositionsLatestGet(const std::optional<std::vector<utility::string_t>>& UserIds,
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
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/positions/latest").c_str(),
		{});


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



void PositionApi::usersUserIdPositionsLatestGet(const utility::string_t& userId,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/latest")
			.c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::usersUserIdPositionsPositionIdGet(const utility::string_t& userId,
													const utility::string_t& positionId,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/{positionId}")
			.c_str(),
		{userId, positionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void PositionApi::usersUserIdPositionsPositionIdDelete(const utility::string_t& userId,
													   const utility::string_t& positionId,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/{positionId}")
			.c_str(),
		{userId, positionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::groupsGroupIdPositionsLatestGet(const utility::string_t& groupId,
												  const std::optional<std::vector<utility::string_t>>& UserIds,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/positions/latest")
			.c_str(),
		{groupId});


	if (UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", UserIds.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::groupsPositionsLatestGet(const std::optional<std::vector<utility::string_t>>& groupIds,
										   const std::optional<std::vector<utility::string_t>>& UserIds,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/positions/latest").c_str(),
		{});


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



void PositionApi::usersPositionsGet(const std::optional<std::vector<utility::string_t>>& userIds,
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
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/positions").c_str(),
					  {});


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
	: ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
{
}

PositionSpoofingApi::~PositionSpoofingApi()
{
}



void PositionSpoofingApi::usersUserIdPositionsSpoofPost(const utility::string_t& userId,
														const std::optional<utility::string_t>& duration,
														const std::shared_ptr<PositionDto>& RequestBody,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/spoof").c_str(),
		{userId});


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


void PositionSpoofingApi::usersUserIdPositionsSpoofGet(const utility::string_t& userId,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/spoof").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void PositionSpoofingApi::usersUserIdPositionsSpoofDelete(const utility::string_t& userId,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/spoof").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionSpoofingApi::positionsSpoofUsersGet(csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/positions/spoof/users").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



SpaceTimeApi::SpaceTimeApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
{
}

SpaceTimeApi::~SpaceTimeApi()
{
}



void SpaceTimeApi::usersUserIdSpacetimeIdGet(const utility::string_t& userId,
											 const utility::string_t& id,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/spacetime/{id}").c_str(),
		{userId, id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void SpaceTimeApi::usersUserIdSpacetimeIdDelete(const utility::string_t& userId,
												const utility::string_t& id,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/spacetime/{id}").c_str(),
		{userId, id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}


void SpaceTimeApi::usersUserIdSpacetimeIdPut(const utility::string_t& userId,
											 const utility::string_t& id,
											 const std::shared_ptr<SpaceTimeDto>& RequestBody,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/spacetime/{id}").c_str(),
		{userId, id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceTimeApi::usersUserIdSpacetimePost(const utility::string_t& userId,
											const std::shared_ptr<SpaceTimeDto>& RequestBody,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/spacetime").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceTimeApi::spacetimeGet(const std::optional<std::vector<utility::string_t>>& UserIds,
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
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spacetime").c_str(), {});


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