#pragma once

#include <ESP8266WiFi.h>

namespace HomieInternals {
  const char HOMIE_VERSION[] = "2.0.0";
  const char HOMIE_ESP8266_VERSION[] = "2.0.0";

  const IPAddress ACCESS_POINT_IP(192, 168, 123, 1);

  const uint16_t DEFAULT_MQTT_PORT = 1883;
  const char DEFAULT_MQTT_BASE_TOPIC[] = "homie/";

  const uint8_t DEFAULT_RESET_PIN = 0;  // == D3 on nodeMCU
  const uint8_t DEFAULT_RESET_STATE = LOW;
  const uint16_t DEFAULT_RESET_TIME = 5 * 1000;

  const char DEFAULT_BRAND[] = "Homie";

  const uint16_t CONFIG_SCAN_INTERVAL = 20 * 1000;
  const uint32_t STATS_SEND_INTERVAL = 1 * 60 * 1000;
  const uint32_t MQTT_RECONNECT_STEP_INTERVAL = 250;
  const uint32_t MQTT_RECONNECT_MAX_INTERVAL = 60000;

  const float LED_WIFI_DELAY = 1;
  const float LED_MQTT_DELAY = 0.2;

  const char CONFIG_UI_BUNDLE_PATH[] = "/homie/ui_bundle.gz";
  const char CONFIG_NEXT_BOOT_MODE_FILE_PATH[] = "/homie/NEXTMODE";
  const char CONFIG_FILE_PATH[] = "/homie/config.json";

  enum class HomieBootMode : uint8_t {
    UNDEFINED = 0,
    STANDALONE = 1,
    CONFIG = 2,
    NORMAL = 3
  };
}  // namespace HomieInternals
