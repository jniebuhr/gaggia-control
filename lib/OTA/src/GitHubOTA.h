#ifndef ESP_GITHUB_OTA_H
#define ESP_GITHUB_OTA_H

#include <HTTPUpdate.h>
#include <WiFiClientSecure.h>

#include "semver.h"

class GitHubOTA {
  public:
    GitHubOTA(const String &version, const String &release_url, const String &firmware_name = "firmware.bin",
              const String &filesystem_name = "filesystem.bin");

    void checkForUpdates();
    bool isUpdateAvailable() const;
    String getCurrentVersion() const;
    void update();
    void setReleaseUrl(const String& release_url);

  private:
    HTTPUpdate Updater;

    HTTPUpdateResult update_filesystem(const String &url);
    HTTPUpdateResult update_firmware(const String &url);

    semver_t _version;
    semver_t _latest_version = {0, 0, 0, nullptr, nullptr};
    String _release_url;
    String _latest_url;
    String _firmware_name;
    String _filesystem_name;
    WiFiClientSecure _wifi_client;
};

#endif
