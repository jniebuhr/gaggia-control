#include <HTTPClient.h>
#include <HTTPUpdate.h>
#include <WiFiClientSecure.h>

#include "common.h"
#include "semver.h"
#include "semver_extensions.h"
#include <ArduinoJson.h>

String get_updated_base_url_via_redirect(WiFiClientSecure& wifi_client, String& release_url) {
    const char *TAG = "get_updated_base_url_via_redirect";

    String location = get_redirect_location(wifi_client, release_url);
    ESP_LOGV(TAG, "location: %s\n", location.c_str());

    if (location.length() <= 0) {
        ESP_LOGE(TAG, "[HTTPS] No redirect url\n");
        return "";
    }

    String base_url = "";
    base_url = location + "/";
    base_url.replace("tag", "download");

    ESP_LOGV(TAG, "returns: %s\n", base_url.c_str());
    return base_url;
}

String get_redirect_location(WiFiClientSecure& wifi_client, String& initial_url) {
    const char *TAG = "get_redirect_location";
    ESP_LOGV(TAG, "initial_url: %s\n", initial_url.c_str());

    HTTPClient https;
    https.setFollowRedirects(HTTPC_DISABLE_FOLLOW_REDIRECTS);

    if (!https.begin(wifi_client, initial_url)) {
        ESP_LOGE(TAG, "[HTTPS] Unable to connect\n");
        return "";
    }

    int httpCode = https.GET();
    if (httpCode != HTTP_CODE_FOUND) {
        ESP_LOGE(TAG, "[HTTPS] GET... failed, No redirect\n");
        char errorText[128];
        int errCode = wifi_client.lastError(errorText, sizeof(errorText));
        ESP_LOGV(TAG, "httpCode: %d, errorCode %d: %s\n", httpCode, errCode, errorText);
    }

    String redirect_url = https.getLocation();
    https.end();

    ESP_LOGV(TAG, "returns: %s\n", redirect_url.c_str());
    return redirect_url;
}

void print_update_result(Updater updater, HTTPUpdateResult result, const char *TAG) {
    switch (result) {
    case HTTP_UPDATE_FAILED:
        ESP_LOGI(TAG, "HTTP_UPDATE_FAILED Error (%d): %s\n", updater.getLastError(), updater.getLastErrorString().c_str());
        break;
    case HTTP_UPDATE_NO_UPDATES:
        ESP_LOGI(TAG, "HTTP_UPDATE_NO_UPDATES\n");
        break;
    case HTTP_UPDATE_OK:
        ESP_LOGI(TAG, "HTTP_UPDATE_OK\n");
        break;
    }
}

bool update_required(semver_t _new_version, semver_t _current_version) { return _new_version > _current_version; }

void update_started() { ESP_LOGI("update_started", "HTTP update process started\n"); }

void update_finished() { ESP_LOGI("update_finished", "HTTP update process finished\n"); }

void update_progress(int currentlyReceiced, int totalBytes) {
    ESP_LOGI("update_progress", "Data received, Progress: %.2f %%\r", 100.0 * currentlyReceiced / totalBytes);
}

void update_error(int err) { ESP_LOGI("update_error", "HTTP update fatal error code %d\n", err); }

const char *ca_certificate PROGMEM = R"CERT(
-----BEGIN CERTIFICATE-----
MIICjzCCAhWgAwIBAgIQXIuZxVqUxdJxVt7NiYDMJjAKBggqhkjOPQQDAzCBiDEL
MAkGA1UEBhMCVVMxEzARBgNVBAgTCk5ldyBKZXJzZXkxFDASBgNVBAcTC0plcnNl
eSBDaXR5MR4wHAYDVQQKExVUaGUgVVNFUlRSVVNUIE5ldHdvcmsxLjAsBgNVBAMT
JVVTRVJUcnVzdCBFQ0MgQ2VydGlmaWNhdGlvbiBBdXRob3JpdHkwHhcNMTAwMjAx
MDAwMDAwWhcNMzgwMTE4MjM1OTU5WjCBiDELMAkGA1UEBhMCVVMxEzARBgNVBAgT
Ck5ldyBKZXJzZXkxFDASBgNVBAcTC0plcnNleSBDaXR5MR4wHAYDVQQKExVUaGUg
VVNFUlRSVVNUIE5ldHdvcmsxLjAsBgNVBAMTJVVTRVJUcnVzdCBFQ0MgQ2VydGlm
aWNhdGlvbiBBdXRob3JpdHkwdjAQBgcqhkjOPQIBBgUrgQQAIgNiAAQarFRaqflo
I+d61SRvU8Za2EurxtW20eZzca7dnNYMYf3boIkDuAUU7FfO7l0/4iGzzvfUinng
o4N+LZfQYcTxmdwlkWOrfzCjtHDix6EznPO/LlxTsV+zfTJ/ijTjeXmjQjBAMB0G
A1UdDgQWBBQ64QmG1M8ZwpZ2dEl23OA1xmNjmjAOBgNVHQ8BAf8EBAMCAQYwDwYD
VR0TAQH/BAUwAwEB/zAKBggqhkjOPQQDAwNoADBlAjA2Z6EWCNzklwBBHU6+4WMB
zzuqQhFkoJ2UOQIReVx7Hfpkue4WQrO/isIJxOzksU0CMQDpKmFHjFJKS04YcPbW
RNZu9YO6bVi9JNlWSOrvxKJGgYhqOkbRqZtNyWHa0V1Xahg=
-----END CERTIFICATE-----

)CERT";
