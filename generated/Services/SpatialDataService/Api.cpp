

#include "Api.h"

#include "CSP/CSPFoundation.h"
#include "Common/Web/HttpAuth.h"
#include "Common/Web/HttpPayload.h"

#include <fmt/format.h>
#include <string>


namespace csp::services::generated::spatialdataservice
{


AnalyticsApi::AnalyticsApi(csp::web::WebClient* InWebClient) : IAnalyticsApiBase(InWebClient)
{
}

AnalyticsApi::~AnalyticsApi()
{
}



void AnalyticsApi::analyticsBulkPost([[maybe_unused]] const analyticsBulkPostParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/analytics/bulk").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AnalyticsApi::analyticsStreamPost([[maybe_unused]] const analyticsStreamPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/analytics/stream").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AnalyticsApi::analyticsStream_urlPost([[maybe_unused]] const analyticsStream_urlPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/analytics/stream-url").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



AnchorsApi::AnchorsApi(csp::web::WebClient* InWebClient) : IAnchorsApiBase(InWebClient)
{
}

AnchorsApi::~AnchorsApi()
{
}



void AnchorsApi::anchorsIdGet([[maybe_unused]] const anchorsIdGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void AnchorsApi::anchorsIdPut([[maybe_unused]] const anchorsIdPutParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void AnchorsApi::anchorsIdDelete([[maybe_unused]] const anchorsIdDeleteParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void AnchorsApi::anchorsPost([[maybe_unused]] const anchorsPostParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void AnchorsApi::anchorsDelete([[maybe_unused]] const anchorsDeleteParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors").c_str(), {});


	if (Params.ids.has_value())
	{
		Uri.AddQueryParams("ids", Params.ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}


void AnchorsApi::anchorsGet([[maybe_unused]] const anchorsGetParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchors").c_str(), {});


	if (Params.Keys.has_value())
	{
		Uri.AddQueryParams("Keys", Params.Keys.value());
	}


	if (Params.Values.has_value())
	{
		Uri.AddQueryParams("Values", Params.Values.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.ThirdPartyProviderNames.has_value())
	{
		Uri.AddQueryParams("ThirdPartyProviderNames", Params.ThirdPartyProviderNames.value());
	}


	if (Params.ThirdPartyAnchorIds.has_value())
	{
		Uri.AddQueryParams("ThirdPartyAnchorIds", Params.ThirdPartyAnchorIds.value());
	}


	if (Params.ReferenceIds.has_value())
	{
		Uri.AddQueryParams("ReferenceIds", Params.ReferenceIds.value());
	}


	if (Params.AnchoredObjectIds.has_value())
	{
		Uri.AddQueryParams("AnchoredObjectIds", Params.AnchoredObjectIds.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void AnchorsApi::anchor_resolutionsPost([[maybe_unused]] const anchor_resolutionsPostParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchor-resolutions").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void AnchorsApi::anchor_resolutionsGet([[maybe_unused]] const anchor_resolutionsGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchor-resolutions").c_str(),
		{});


	if (Params.AnchorIds.has_value())
	{
		Uri.AddQueryParams("AnchorIds", Params.AnchorIds.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.SuccessfullyResolved.has_value())
	{
		Uri.AddQueryParams("SuccessfullyResolved", Params.SuccessfullyResolved.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void AnchorsApi::anchor_resolutionsStatsGet([[maybe_unused]] const anchor_resolutionsStatsGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/anchor-resolutions/stats").c_str(),
		{});


	if (Params.AnchorIds.has_value())
	{
		Uri.AddQueryParams("AnchorIds", Params.AnchorIds.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.SuccessfullyResolved.has_value())
	{
		Uri.AddQueryParams("SuccessfullyResolved", Params.SuccessfullyResolved.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



CacheApi::CacheApi(csp::web::WebClient* InWebClient) : ICacheApiBase(InWebClient)
{
}

CacheApi::~CacheApi()
{
}



void CacheApi::cache_keysGet([[maybe_unused]] const cache_keysGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/cache-keys").c_str(), {});


	if (Params.pattern.has_value())
	{
		Uri.AddQueryParams("pattern", Params.pattern.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void CacheApi::cache_keysDelete([[maybe_unused]] const cache_keysDeleteParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/cache-keys").c_str(), {});


	if (Params.pattern.has_value())
	{
		Uri.AddQueryParams("pattern", Params.pattern.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



ConfigurationApi::ConfigurationApi(csp::web::WebClient* InWebClient) : IConfigurationApiBase(InWebClient)
{
}

ConfigurationApi::~ConfigurationApi()
{
}



void ConfigurationApi::appsettingsGet([[maybe_unused]] const appsettingsGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/appsettings").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::appsettingsReloadPost([[maybe_unused]] const appsettingsReloadPostParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/appsettings/reload").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::featureflagsGet([[maybe_unused]] const featureflagsGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/featureflags").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



NtpApi::NtpApi(csp::web::WebClient* InWebClient) : INtpApiBase(InWebClient)
{
}

NtpApi::~NtpApi()
{
}



void NtpApi::datetimeGet([[maybe_unused]] const datetimeGetParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/datetime").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PersonalPointOfInterestApi::PersonalPointOfInterestApi(csp::web::WebClient* InWebClient) : IPersonalPointOfInterestApiBase(InWebClient)
{
}

PersonalPointOfInterestApi::~PersonalPointOfInterestApi()
{
}



void PersonalPointOfInterestApi::usersUserIdPoiGet([[maybe_unused]] const usersUserIdPoiGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/poi").c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PersonalPointOfInterestApi::usersUserIdPoiPoiIdPut([[maybe_unused]] const usersUserIdPoiPoiIdPutParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/poi/{poiId}").c_str(),
		{Params.userId, Params.poiId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void PersonalPointOfInterestApi::usersUserIdPoiPoiIdDelete([[maybe_unused]] const usersUserIdPoiPoiIdDeleteParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/poi/{poiId}").c_str(),
		{Params.userId, Params.poiId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



PingApi::PingApi(csp::web::WebClient* InWebClient) : IPingApiBase(InWebClient)
{
}

PingApi::~PingApi()
{
}



void PingApi::pingGet([[maybe_unused]] const pingGetParams& Params,
					  csp::services::ApiResponseHandlerBase* ResponseHandler,
					  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/ping").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PointOfInterestApi::PointOfInterestApi(csp::web::WebClient* InWebClient) : IPointOfInterestApiBase(InWebClient)
{
}

PointOfInterestApi::~PointOfInterestApi()
{
}



void PointOfInterestApi::poiIdGet([[maybe_unused]] const poiIdGetParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void PointOfInterestApi::poiIdPut([[maybe_unused]] const poiIdPutParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void PointOfInterestApi::poiIdDelete([[maybe_unused]] const poiIdDeleteParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::poi_liteGet([[maybe_unused]] const poi_liteGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi-lite").c_str(), {});


	if (Params.ppoiUserId.has_value())
	{
		Uri.AddQueryParams("ppoiUserId", Params.ppoiUserId.value());
	}


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.Type.has_value())
	{
		Uri.AddQueryParams("Type", Params.Type.value());
	}


	if (Params.Types.has_value())
	{
		Uri.AddQueryParams("Types", Params.Types.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.Geofence.has_value())
	{
		Uri.AddQueryParams("Geofence", Params.Geofence.value());
	}


	if (Params.Name.has_value())
	{
		Uri.AddQueryParams("Name", Params.Name.value());
	}


	if (Params.Names.has_value())
	{
		Uri.AddQueryParams("Names", Params.Names.value());
	}


	if (Params.Title.has_value())
	{
		Uri.AddQueryParams("Title", Params.Title.value());
	}


	if (Params.ZoomLevel.has_value())
	{
		Uri.AddQueryParams("ZoomLevel", Params.ZoomLevel.value());
	}


	if (Params.EventStartTime.has_value())
	{
		Uri.AddQueryParams("EventStartTime", Params.EventStartTime.value());
	}


	if (Params.EventEndTime.has_value())
	{
		Uri.AddQueryParams("EventEndTime", Params.EventEndTime.value());
	}


	if (Params.ReferenceLookups.has_value())
	{
		Uri.AddQueryParams("ReferenceLookups", Params.ReferenceLookups.value());
	}


	if (Params.IncludeHidden.has_value())
	{
		Uri.AddQueryParams("IncludeHidden", Params.IncludeHidden.value());
	}


	if (Params.MediaTypes.has_value())
	{
		Uri.AddQueryParams("MediaTypes", Params.MediaTypes.value());
	}


	if (Params.HasSchedule.has_value())
	{
		Uri.AddQueryParams("HasSchedule", Params.HasSchedule.value());
	}


	if (Params.PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", Params.PrototypeNames.value());
	}


	if (Params.PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", Params.PrototypeIds.value());
	}


	if (Params.GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", Params.GroupIds.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::poi_idGet([[maybe_unused]] const poi_idGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi-id").c_str(), {});


	if (Params.ppoiUserId.has_value())
	{
		Uri.AddQueryParams("ppoiUserId", Params.ppoiUserId.value());
	}


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.Type.has_value())
	{
		Uri.AddQueryParams("Type", Params.Type.value());
	}


	if (Params.Types.has_value())
	{
		Uri.AddQueryParams("Types", Params.Types.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.Geofence.has_value())
	{
		Uri.AddQueryParams("Geofence", Params.Geofence.value());
	}


	if (Params.Name.has_value())
	{
		Uri.AddQueryParams("Name", Params.Name.value());
	}


	if (Params.Names.has_value())
	{
		Uri.AddQueryParams("Names", Params.Names.value());
	}


	if (Params.Title.has_value())
	{
		Uri.AddQueryParams("Title", Params.Title.value());
	}


	if (Params.ZoomLevel.has_value())
	{
		Uri.AddQueryParams("ZoomLevel", Params.ZoomLevel.value());
	}


	if (Params.EventStartTime.has_value())
	{
		Uri.AddQueryParams("EventStartTime", Params.EventStartTime.value());
	}


	if (Params.EventEndTime.has_value())
	{
		Uri.AddQueryParams("EventEndTime", Params.EventEndTime.value());
	}


	if (Params.ReferenceLookups.has_value())
	{
		Uri.AddQueryParams("ReferenceLookups", Params.ReferenceLookups.value());
	}


	if (Params.IncludeHidden.has_value())
	{
		Uri.AddQueryParams("IncludeHidden", Params.IncludeHidden.value());
	}


	if (Params.MediaTypes.has_value())
	{
		Uri.AddQueryParams("MediaTypes", Params.MediaTypes.value());
	}


	if (Params.HasSchedule.has_value())
	{
		Uri.AddQueryParams("HasSchedule", Params.HasSchedule.value());
	}


	if (Params.PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", Params.PrototypeNames.value());
	}


	if (Params.PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", Params.PrototypeIds.value());
	}


	if (Params.GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", Params.GroupIds.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::poiGet([[maybe_unused]] const poiGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi").c_str(), {});


	if (Params.ppoiUserId.has_value())
	{
		Uri.AddQueryParams("ppoiUserId", Params.ppoiUserId.value());
	}


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.Type.has_value())
	{
		Uri.AddQueryParams("Type", Params.Type.value());
	}


	if (Params.Types.has_value())
	{
		Uri.AddQueryParams("Types", Params.Types.value());
	}


	if (Params.Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Params.Tags.value());
	}


	if (Params.TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", Params.TagsAll.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.Geofence.has_value())
	{
		Uri.AddQueryParams("Geofence", Params.Geofence.value());
	}


	if (Params.Name.has_value())
	{
		Uri.AddQueryParams("Name", Params.Name.value());
	}


	if (Params.Names.has_value())
	{
		Uri.AddQueryParams("Names", Params.Names.value());
	}


	if (Params.Title.has_value())
	{
		Uri.AddQueryParams("Title", Params.Title.value());
	}


	if (Params.ZoomLevel.has_value())
	{
		Uri.AddQueryParams("ZoomLevel", Params.ZoomLevel.value());
	}


	if (Params.EventStartTime.has_value())
	{
		Uri.AddQueryParams("EventStartTime", Params.EventStartTime.value());
	}


	if (Params.EventEndTime.has_value())
	{
		Uri.AddQueryParams("EventEndTime", Params.EventEndTime.value());
	}


	if (Params.ReferenceLookups.has_value())
	{
		Uri.AddQueryParams("ReferenceLookups", Params.ReferenceLookups.value());
	}


	if (Params.IncludeHidden.has_value())
	{
		Uri.AddQueryParams("IncludeHidden", Params.IncludeHidden.value());
	}


	if (Params.MediaTypes.has_value())
	{
		Uri.AddQueryParams("MediaTypes", Params.MediaTypes.value());
	}


	if (Params.HasSchedule.has_value())
	{
		Uri.AddQueryParams("HasSchedule", Params.HasSchedule.value());
	}


	if (Params.PrototypeNames.has_value())
	{
		Uri.AddQueryParams("PrototypeNames", Params.PrototypeNames.value());
	}


	if (Params.PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", Params.PrototypeIds.value());
	}


	if (Params.GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", Params.GroupIds.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void PointOfInterestApi::poiPost([[maybe_unused]] const poiPostParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void PointOfInterestApi::poiPut([[maybe_unused]] const poiPutParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void PointOfInterestApi::poiDelete([[maybe_unused]] const poiDeleteParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi").c_str(), {});


	if (Params.ids.has_value())
	{
		Uri.AddQueryParams("ids", Params.ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::poiBulkPut([[maybe_unused]] const poiBulkPutParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/bulk").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::poiIdPartial_updatePut([[maybe_unused]] const poiIdPartial_updatePutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/{id}/partial-update").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void PointOfInterestApi::poiTagsGet([[maybe_unused]] const poiTagsGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/poi/tags").c_str(), {});


	if (Params.tagNameWith.has_value())
	{
		Uri.AddQueryParams("tagNameWith", Params.tagNameWith.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PositionApi::PositionApi(csp::web::WebClient* InWebClient) : IPositionApiBase(InWebClient)
{
}

PositionApi::~PositionApi()
{
}



void PositionApi::usersUserIdPositionsGet([[maybe_unused]] const usersUserIdPositionsGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions").c_str(),
		{Params.userId});


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}


	if (Params.DeviceIds.has_value())
	{
		Uri.AddQueryParams("DeviceIds", Params.DeviceIds.value());
	}


	if (Params.PositionIds.has_value())
	{
		Uri.AddQueryParams("PositionIds", Params.PositionIds.value());
	}


	if (Params.StartTimestamp.has_value())
	{
		Uri.AddQueryParams("StartTimestamp", Params.StartTimestamp.value());
	}


	if (Params.EndTimestamp.has_value())
	{
		Uri.AddQueryParams("EndTimestamp", Params.EndTimestamp.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.FindUsersOutsideGeoSphere.has_value())
	{
		Uri.AddQueryParams("FindUsersOutsideGeoSphere", Params.FindUsersOutsideGeoSphere.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void PositionApi::usersUserIdPositionsPost([[maybe_unused]] const usersUserIdPositionsPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions").c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::usersPositionsLatestGet([[maybe_unused]] const usersPositionsLatestGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/positions/latest").c_str(),
		{});


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}


	if (Params.DeviceIds.has_value())
	{
		Uri.AddQueryParams("DeviceIds", Params.DeviceIds.value());
	}


	if (Params.PositionIds.has_value())
	{
		Uri.AddQueryParams("PositionIds", Params.PositionIds.value());
	}


	if (Params.StartTimestamp.has_value())
	{
		Uri.AddQueryParams("StartTimestamp", Params.StartTimestamp.value());
	}


	if (Params.EndTimestamp.has_value())
	{
		Uri.AddQueryParams("EndTimestamp", Params.EndTimestamp.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.FindUsersOutsideGeoSphere.has_value())
	{
		Uri.AddQueryParams("FindUsersOutsideGeoSphere", Params.FindUsersOutsideGeoSphere.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::usersUserIdPositionsLatestGet([[maybe_unused]] const usersUserIdPositionsLatestGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/latest")
			.c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::usersUserIdPositionsPositionIdGet([[maybe_unused]] const usersUserIdPositionsPositionIdGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/{positionId}")
			.c_str(),
		{Params.userId, Params.positionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void PositionApi::usersUserIdPositionsPositionIdDelete([[maybe_unused]] const usersUserIdPositionsPositionIdDeleteParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/{positionId}")
			.c_str(),
		{Params.userId, Params.positionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::groupsGroupIdPositionsLatestGet([[maybe_unused]] const groupsGroupIdPositionsLatestGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/positions/latest")
			.c_str(),
		{Params.groupId});


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::groupsPositionsLatestGet([[maybe_unused]] const groupsPositionsLatestGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/positions/latest").c_str(),
		{});


	if (Params.groupIds.has_value())
	{
		Uri.AddQueryParams("groupIds", Params.groupIds.value());
	}


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionApi::usersPositionsGet([[maybe_unused]] const usersPositionsGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/positions").c_str(),
					  {});


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}


	if (Params.DeviceIds.has_value())
	{
		Uri.AddQueryParams("DeviceIds", Params.DeviceIds.value());
	}


	if (Params.PositionIds.has_value())
	{
		Uri.AddQueryParams("PositionIds", Params.PositionIds.value());
	}


	if (Params.StartTimestamp.has_value())
	{
		Uri.AddQueryParams("StartTimestamp", Params.StartTimestamp.value());
	}


	if (Params.EndTimestamp.has_value())
	{
		Uri.AddQueryParams("EndTimestamp", Params.EndTimestamp.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.FindUsersOutsideGeoSphere.has_value())
	{
		Uri.AddQueryParams("FindUsersOutsideGeoSphere", Params.FindUsersOutsideGeoSphere.value());
	}


	if (Params.onlyLatestPosition.has_value())
	{
		Uri.AddQueryParams("onlyLatestPosition", Params.onlyLatestPosition.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



PositionSpoofingApi::PositionSpoofingApi(csp::web::WebClient* InWebClient) : IPositionSpoofingApiBase(InWebClient)
{
}

PositionSpoofingApi::~PositionSpoofingApi()
{
}



void PositionSpoofingApi::usersUserIdPositionsSpoofPost([[maybe_unused]] const usersUserIdPositionsSpoofPostParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/spoof").c_str(),
		{Params.userId});


	if (Params.duration.has_value())
	{
		Uri.AddQueryParams("duration", Params.duration.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void PositionSpoofingApi::usersUserIdPositionsSpoofGet([[maybe_unused]] const usersUserIdPositionsSpoofGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/spoof").c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void PositionSpoofingApi::usersUserIdPositionsSpoofDelete([[maybe_unused]] const usersUserIdPositionsSpoofDeleteParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/positions/spoof").c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void PositionSpoofingApi::positionsSpoofUsersGet([[maybe_unused]] const positionsSpoofUsersGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
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



SpaceTimeApi::SpaceTimeApi(csp::web::WebClient* InWebClient) : ISpaceTimeApiBase(InWebClient)
{
}

SpaceTimeApi::~SpaceTimeApi()
{
}



void SpaceTimeApi::usersUserIdSpacetimeIdGet([[maybe_unused]] const usersUserIdSpacetimeIdGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/spacetime/{id}").c_str(),
		{Params.userId, Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void SpaceTimeApi::usersUserIdSpacetimeIdDelete([[maybe_unused]] const usersUserIdSpacetimeIdDeleteParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/spacetime/{id}").c_str(),
		{Params.userId, Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}


void SpaceTimeApi::usersUserIdSpacetimeIdPut([[maybe_unused]] const usersUserIdSpacetimeIdPutParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/spacetime/{id}").c_str(),
		{Params.userId, Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceTimeApi::usersUserIdSpacetimePost([[maybe_unused]] const usersUserIdSpacetimePostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/spacetime").c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceTimeApi::spacetimeGet([[maybe_unused]] const spacetimeGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spacetime").c_str(), {});


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}


	if (Params.StartTimestamp.has_value())
	{
		Uri.AddQueryParams("StartTimestamp", Params.StartTimestamp.value());
	}


	if (Params.EndTimestamp.has_value())
	{
		Uri.AddQueryParams("EndTimestamp", Params.EndTimestamp.value());
	}


	if (Params.GroupIds.has_value())
	{
		Uri.AddQueryParams("GroupIds", Params.GroupIds.value());
	}


	if (Params.Coordinate_Longitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Longitude", Params.Coordinate_Longitude.value());
	}


	if (Params.Coordinate_Latitude.has_value())
	{
		Uri.AddQueryParams("Coordinate.Latitude", Params.Coordinate_Latitude.value());
	}


	if (Params.Coordinate_Radius.has_value())
	{
		Uri.AddQueryParams("Coordinate.Radius", Params.Coordinate_Radius.value());
	}


	if (Params.PoiIds.has_value())
	{
		Uri.AddQueryParams("PoiIds", Params.PoiIds.value());
	}


	if (Params.PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", Params.PrototypeIds.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



VersionsApi::VersionsApi(csp::web::WebClient* InWebClient) : IVersionsApiBase(InWebClient)
{
}

VersionsApi::~VersionsApi()
{
}



void VersionsApi::rsionsGet([[maybe_unused]] const rsionsGetParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "rsions").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



} // namespace csp::services::generated::spatialdataservice