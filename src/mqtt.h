#pragma once

// MQTT topics
static const char* MQTT_CMND_TOPIC  = "fireplace/cmnd";
static const char* MQTT_STATE_TOPIC = "fireplace/state";

// Discovery topics
static const char* HA_DISCOVERY_LEFT_TOPIC =
  "homeassistant/button/esp32_fireplace_left/config";
static const char* HA_DISCOVERY_RIGHT_TOPIC =
  "homeassistant/button/esp32_fireplace_right/config";
static const char* HA_DISCOVERY_FLAME_EFFECT_TOPIC =
  "homeassistant/button/esp32_fireplace_flame_effect/config";
static const char* HA_DISCOVERY_SOUND_TOPIC =
  "homeassistant/button/esp32_fireplace_sound/config";
static const char* HA_DISCOVERY_PLUS_TOPIC =
  "homeassistant/button/esp32_fireplace_plus/config";
static const char* HA_DISCOVERY_MINUS_TOPIC =
  "homeassistant/button/esp32_fireplace_minus/config";

// Home Assistant MQTT discovery topic
static const char* HA_DISCOVERY_TOPIC =
  "homeassistant/switch/esp32_fireplace_switch/config";

// Switch (ON/OFF)
static const char discovery_payload[] = R"({
  "name": "Fireplace",
  "unique_id": "esp32_fireplace_switch",
  "command_topic": "home/fireplace/cmnd",
  "state_topic": "home/fireplace/state",
  "payload_on": "ON",
  "payload_off": "OFF",
  "state_on": "ON",
  "state_off": "OFF",
  "device": {
    "identifiers": ["esp32_fireplace"],
    "name": "ESP32 Fireplace Controller",
    "manufacturer": "Custom",
    "model": "ESP32 + CC1101 FSK"
  }
})";

// Left Button
static const char left_payload_discovery[] = R"({
  "name": "Fireplace Left",
  "unique_id": "esp32_fireplace_left",
  "command_topic": "home/fireplace/cmnd",
  "payload_press": "LEFT",
  "device": {
    "identifiers": ["esp32_fireplace"]
  }
})";

// Right Button
static const char right_payload_discovery[] = R"({
  "name": "Fireplace Right",
  "unique_id": "esp32_fireplace_right",
  "command_topic": "home/fireplace/cmnd",
  "payload_press": "RIGHT",
  "device": {
    "identifiers": ["esp32_fireplace"]
  }
})";


// Flame Effect Button
static const char flame_effect_payload_discovery[] = R"({
  "name": "Fireplace Flame Effect",
  "unique_id": "esp32_fireplace_flame_effect",
  "command_topic": "home/fireplace/cmnd",
  "payload_press": "FLAME",
  "device": {
    "identifiers": ["esp32_fireplace"]
  }
})";


// Sound Button
static const char sound_payload_discovery[] = R"({
  "name": "Fireplace Sound",
  "unique_id": "esp32_fireplace_sound",
  "command_topic": "home/fireplace/cmnd",
  "payload_press": "SOUND",
  "device": {
    "identifiers": ["esp32_fireplace"]
  }
})";

// Plus Button
static const char plus_payload_discovery[] = R"({
  "name": "Fireplace Plus",
  "unique_id": "esp32_fireplace_plus",
  "command_topic": "home/fireplace/cmnd",
  "payload_press": "PLUS",
  "device": {
    "identifiers": ["esp32_fireplace"]
  }
})";

// Minus Button
static const char minus_payload_discovery[] = R"({
  "name": "Fireplace Minus",
  "unique_id": "esp32_fireplace_minus",
  "command_topic": "home/fireplace/cmnd",
  "payload_press": "MINUS",
  "device": {
    "identifiers": ["esp32_fireplace"]
  }
})";
