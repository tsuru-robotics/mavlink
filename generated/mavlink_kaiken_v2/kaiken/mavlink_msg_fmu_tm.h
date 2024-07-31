#pragma once
// MESSAGE FMU_TM PACKING

#define MAVLINK_MSG_ID_FMU_TM 11103


typedef struct __mavlink_fmu_tm_t {
 uint64_t time; /*< [us] Time of applicability of position (microseconds since UNIX epoch).*/
 int32_t lat; /*< [degE7] Latitude, expressed*/
 int32_t lon; /*< [degE7] Longitude, expressed*/
 int32_t alt; /*< [mm] Altitude (MSL). Note that virtually all GPS modules provide both WGS84 and MSL.*/
 uint16_t hdg; /*< [cdeg] Vehicle heading (yaw angle), 0.0..359.99 degrees. If unknown, set to: UINT16_MAX.*/
 uint16_t voltage_battery; /*< [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot*/
 int16_t current_battery; /*< [cA] Battery current, -1: Current not sent by autopilot*/
 uint8_t satellites_visible; /*<  Number of satellites visible. If unknown, set to UINT8_MAX.*/
 uint8_t fix_type; /*<  GPS fix type.*/
 uint8_t flight_state; /*<  Flight state*/
 uint8_t rtcm_rate_wifi; /*< [HzE2] Rate of RTCM messages being received by WiFi*/
 uint8_t rtcm_rate_lora; /*< [HzE2] Rate of RTCM messages being received by LoRa*/
 uint8_t flags; /*<  Bitmap showing TM flags. Value of 0: not present. Value of 1: present.*/
 uint8_t component_present; /*<  Bitmap showing which onboard components are present. Value of 0: not present. Value of 1: present.*/
 uint8_t component_health; /*<  Bitmap showing which onboard components are operational. Value of 0: not present. Value of 1: present.*/
 uint8_t failsafe_flags; /*<  Bitmap specifies detected failsafe. Value of 0: not present. Value of 1: present.*/
 int8_t battery_remaining; /*< [%] Battery energy remaining, -1: Battery remaining energy not sent by autopilot*/
} mavlink_fmu_tm_t;

#define MAVLINK_MSG_ID_FMU_TM_LEN 36
#define MAVLINK_MSG_ID_FMU_TM_MIN_LEN 36
#define MAVLINK_MSG_ID_11103_LEN 36
#define MAVLINK_MSG_ID_11103_MIN_LEN 36

#define MAVLINK_MSG_ID_FMU_TM_CRC 0
#define MAVLINK_MSG_ID_11103_CRC 109



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FMU_TM { \
    11103, \
    "FMU_TM", \
    17, \
    {  { "time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_fmu_tm_t, time) }, \
         { "satellites_visible", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_fmu_tm_t, satellites_visible) }, \
         { "fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 27, offsetof(mavlink_fmu_tm_t, fix_type) }, \
         { "hdg", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_fmu_tm_t, hdg) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_fmu_tm_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_fmu_tm_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_fmu_tm_t, alt) }, \
         { "flight_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_fmu_tm_t, flight_state) }, \
         { "rtcm_rate_wifi", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_fmu_tm_t, rtcm_rate_wifi) }, \
         { "rtcm_rate_lora", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_fmu_tm_t, rtcm_rate_lora) }, \
         { "flags", "0x%04x", MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_fmu_tm_t, flags) }, \
         { "component_present", "0x%04x", MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_fmu_tm_t, component_present) }, \
         { "component_health", "0x%04x", MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_fmu_tm_t, component_health) }, \
         { "failsafe_flags", "0x%04x", MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_fmu_tm_t, failsafe_flags) }, \
         { "voltage_battery", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_fmu_tm_t, voltage_battery) }, \
         { "current_battery", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_fmu_tm_t, current_battery) }, \
         { "battery_remaining", NULL, MAVLINK_TYPE_INT8_T, 0, 35, offsetof(mavlink_fmu_tm_t, battery_remaining) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FMU_TM { \
    "FMU_TM", \
    17, \
    {  { "time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_fmu_tm_t, time) }, \
         { "satellites_visible", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_fmu_tm_t, satellites_visible) }, \
         { "fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 27, offsetof(mavlink_fmu_tm_t, fix_type) }, \
         { "hdg", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_fmu_tm_t, hdg) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_fmu_tm_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_fmu_tm_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_fmu_tm_t, alt) }, \
         { "flight_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_fmu_tm_t, flight_state) }, \
         { "rtcm_rate_wifi", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_fmu_tm_t, rtcm_rate_wifi) }, \
         { "rtcm_rate_lora", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_fmu_tm_t, rtcm_rate_lora) }, \
         { "flags", "0x%04x", MAVLINK_TYPE_UINT8_T, 0, 31, offsetof(mavlink_fmu_tm_t, flags) }, \
         { "component_present", "0x%04x", MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_fmu_tm_t, component_present) }, \
         { "component_health", "0x%04x", MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_fmu_tm_t, component_health) }, \
         { "failsafe_flags", "0x%04x", MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_fmu_tm_t, failsafe_flags) }, \
         { "voltage_battery", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_fmu_tm_t, voltage_battery) }, \
         { "current_battery", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_fmu_tm_t, current_battery) }, \
         { "battery_remaining", NULL, MAVLINK_TYPE_INT8_T, 0, 35, offsetof(mavlink_fmu_tm_t, battery_remaining) }, \
         } \
}
#endif

/**
 * @brief Pack a fmu_tm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time [us] Time of applicability of position (microseconds since UNIX epoch).
 * @param satellites_visible  Number of satellites visible. If unknown, set to UINT8_MAX.
 * @param fix_type  GPS fix type.
 * @param hdg [cdeg] Vehicle heading (yaw angle), 0.0..359.99 degrees. If unknown, set to: UINT16_MAX.
 * @param lat [degE7] Latitude, expressed
 * @param lon [degE7] Longitude, expressed
 * @param alt [mm] Altitude (MSL). Note that virtually all GPS modules provide both WGS84 and MSL.
 * @param flight_state  Flight state
 * @param rtcm_rate_wifi [HzE2] Rate of RTCM messages being received by WiFi
 * @param rtcm_rate_lora [HzE2] Rate of RTCM messages being received by LoRa
 * @param flags  Bitmap showing TM flags. Value of 0: not present. Value of 1: present.
 * @param component_present  Bitmap showing which onboard components are present. Value of 0: not present. Value of 1: present.
 * @param component_health  Bitmap showing which onboard components are operational. Value of 0: not present. Value of 1: present.
 * @param failsafe_flags  Bitmap specifies detected failsafe. Value of 0: not present. Value of 1: present.
 * @param voltage_battery [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot
 * @param current_battery [cA] Battery current, -1: Current not sent by autopilot
 * @param battery_remaining [%] Battery energy remaining, -1: Battery remaining energy not sent by autopilot
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fmu_tm_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time, uint8_t satellites_visible, uint8_t fix_type, uint16_t hdg, int32_t lat, int32_t lon, int32_t alt, uint8_t flight_state, uint8_t rtcm_rate_wifi, uint8_t rtcm_rate_lora, uint8_t flags, uint8_t component_present, uint8_t component_health, uint8_t failsafe_flags, uint16_t voltage_battery, int16_t current_battery, int8_t battery_remaining)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FMU_TM_LEN];
    _mav_put_uint64_t(buf, 0, time);
    _mav_put_int32_t(buf, 8, lat);
    _mav_put_int32_t(buf, 12, lon);
    _mav_put_int32_t(buf, 16, alt);
    _mav_put_uint16_t(buf, 20, hdg);
    _mav_put_uint16_t(buf, 22, voltage_battery);
    _mav_put_int16_t(buf, 24, current_battery);
    _mav_put_uint8_t(buf, 26, satellites_visible);
    _mav_put_uint8_t(buf, 27, fix_type);
    _mav_put_uint8_t(buf, 28, flight_state);
    _mav_put_uint8_t(buf, 29, rtcm_rate_wifi);
    _mav_put_uint8_t(buf, 30, rtcm_rate_lora);
    _mav_put_uint8_t(buf, 31, flags);
    _mav_put_uint8_t(buf, 32, component_present);
    _mav_put_uint8_t(buf, 33, component_health);
    _mav_put_uint8_t(buf, 34, failsafe_flags);
    _mav_put_int8_t(buf, 35, battery_remaining);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FMU_TM_LEN);
#else
    mavlink_fmu_tm_t packet;
    packet.time = time;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.hdg = hdg;
    packet.voltage_battery = voltage_battery;
    packet.current_battery = current_battery;
    packet.satellites_visible = satellites_visible;
    packet.fix_type = fix_type;
    packet.flight_state = flight_state;
    packet.rtcm_rate_wifi = rtcm_rate_wifi;
    packet.rtcm_rate_lora = rtcm_rate_lora;
    packet.flags = flags;
    packet.component_present = component_present;
    packet.component_health = component_health;
    packet.failsafe_flags = failsafe_flags;
    packet.battery_remaining = battery_remaining;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FMU_TM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FMU_TM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FMU_TM_MIN_LEN, MAVLINK_MSG_ID_FMU_TM_LEN, MAVLINK_MSG_ID_FMU_TM_CRC);
}

/**
 * @brief Pack a fmu_tm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time [us] Time of applicability of position (microseconds since UNIX epoch).
 * @param satellites_visible  Number of satellites visible. If unknown, set to UINT8_MAX.
 * @param fix_type  GPS fix type.
 * @param hdg [cdeg] Vehicle heading (yaw angle), 0.0..359.99 degrees. If unknown, set to: UINT16_MAX.
 * @param lat [degE7] Latitude, expressed
 * @param lon [degE7] Longitude, expressed
 * @param alt [mm] Altitude (MSL). Note that virtually all GPS modules provide both WGS84 and MSL.
 * @param flight_state  Flight state
 * @param rtcm_rate_wifi [HzE2] Rate of RTCM messages being received by WiFi
 * @param rtcm_rate_lora [HzE2] Rate of RTCM messages being received by LoRa
 * @param flags  Bitmap showing TM flags. Value of 0: not present. Value of 1: present.
 * @param component_present  Bitmap showing which onboard components are present. Value of 0: not present. Value of 1: present.
 * @param component_health  Bitmap showing which onboard components are operational. Value of 0: not present. Value of 1: present.
 * @param failsafe_flags  Bitmap specifies detected failsafe. Value of 0: not present. Value of 1: present.
 * @param voltage_battery [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot
 * @param current_battery [cA] Battery current, -1: Current not sent by autopilot
 * @param battery_remaining [%] Battery energy remaining, -1: Battery remaining energy not sent by autopilot
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fmu_tm_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time, uint8_t satellites_visible, uint8_t fix_type, uint16_t hdg, int32_t lat, int32_t lon, int32_t alt, uint8_t flight_state, uint8_t rtcm_rate_wifi, uint8_t rtcm_rate_lora, uint8_t flags, uint8_t component_present, uint8_t component_health, uint8_t failsafe_flags, uint16_t voltage_battery, int16_t current_battery, int8_t battery_remaining)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FMU_TM_LEN];
    _mav_put_uint64_t(buf, 0, time);
    _mav_put_int32_t(buf, 8, lat);
    _mav_put_int32_t(buf, 12, lon);
    _mav_put_int32_t(buf, 16, alt);
    _mav_put_uint16_t(buf, 20, hdg);
    _mav_put_uint16_t(buf, 22, voltage_battery);
    _mav_put_int16_t(buf, 24, current_battery);
    _mav_put_uint8_t(buf, 26, satellites_visible);
    _mav_put_uint8_t(buf, 27, fix_type);
    _mav_put_uint8_t(buf, 28, flight_state);
    _mav_put_uint8_t(buf, 29, rtcm_rate_wifi);
    _mav_put_uint8_t(buf, 30, rtcm_rate_lora);
    _mav_put_uint8_t(buf, 31, flags);
    _mav_put_uint8_t(buf, 32, component_present);
    _mav_put_uint8_t(buf, 33, component_health);
    _mav_put_uint8_t(buf, 34, failsafe_flags);
    _mav_put_int8_t(buf, 35, battery_remaining);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FMU_TM_LEN);
#else
    mavlink_fmu_tm_t packet;
    packet.time = time;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.hdg = hdg;
    packet.voltage_battery = voltage_battery;
    packet.current_battery = current_battery;
    packet.satellites_visible = satellites_visible;
    packet.fix_type = fix_type;
    packet.flight_state = flight_state;
    packet.rtcm_rate_wifi = rtcm_rate_wifi;
    packet.rtcm_rate_lora = rtcm_rate_lora;
    packet.flags = flags;
    packet.component_present = component_present;
    packet.component_health = component_health;
    packet.failsafe_flags = failsafe_flags;
    packet.battery_remaining = battery_remaining;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FMU_TM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FMU_TM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FMU_TM_MIN_LEN, MAVLINK_MSG_ID_FMU_TM_LEN, MAVLINK_MSG_ID_FMU_TM_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FMU_TM_MIN_LEN, MAVLINK_MSG_ID_FMU_TM_LEN);
#endif
}

/**
 * @brief Pack a fmu_tm message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time [us] Time of applicability of position (microseconds since UNIX epoch).
 * @param satellites_visible  Number of satellites visible. If unknown, set to UINT8_MAX.
 * @param fix_type  GPS fix type.
 * @param hdg [cdeg] Vehicle heading (yaw angle), 0.0..359.99 degrees. If unknown, set to: UINT16_MAX.
 * @param lat [degE7] Latitude, expressed
 * @param lon [degE7] Longitude, expressed
 * @param alt [mm] Altitude (MSL). Note that virtually all GPS modules provide both WGS84 and MSL.
 * @param flight_state  Flight state
 * @param rtcm_rate_wifi [HzE2] Rate of RTCM messages being received by WiFi
 * @param rtcm_rate_lora [HzE2] Rate of RTCM messages being received by LoRa
 * @param flags  Bitmap showing TM flags. Value of 0: not present. Value of 1: present.
 * @param component_present  Bitmap showing which onboard components are present. Value of 0: not present. Value of 1: present.
 * @param component_health  Bitmap showing which onboard components are operational. Value of 0: not present. Value of 1: present.
 * @param failsafe_flags  Bitmap specifies detected failsafe. Value of 0: not present. Value of 1: present.
 * @param voltage_battery [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot
 * @param current_battery [cA] Battery current, -1: Current not sent by autopilot
 * @param battery_remaining [%] Battery energy remaining, -1: Battery remaining energy not sent by autopilot
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fmu_tm_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time,uint8_t satellites_visible,uint8_t fix_type,uint16_t hdg,int32_t lat,int32_t lon,int32_t alt,uint8_t flight_state,uint8_t rtcm_rate_wifi,uint8_t rtcm_rate_lora,uint8_t flags,uint8_t component_present,uint8_t component_health,uint8_t failsafe_flags,uint16_t voltage_battery,int16_t current_battery,int8_t battery_remaining)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FMU_TM_LEN];
    _mav_put_uint64_t(buf, 0, time);
    _mav_put_int32_t(buf, 8, lat);
    _mav_put_int32_t(buf, 12, lon);
    _mav_put_int32_t(buf, 16, alt);
    _mav_put_uint16_t(buf, 20, hdg);
    _mav_put_uint16_t(buf, 22, voltage_battery);
    _mav_put_int16_t(buf, 24, current_battery);
    _mav_put_uint8_t(buf, 26, satellites_visible);
    _mav_put_uint8_t(buf, 27, fix_type);
    _mav_put_uint8_t(buf, 28, flight_state);
    _mav_put_uint8_t(buf, 29, rtcm_rate_wifi);
    _mav_put_uint8_t(buf, 30, rtcm_rate_lora);
    _mav_put_uint8_t(buf, 31, flags);
    _mav_put_uint8_t(buf, 32, component_present);
    _mav_put_uint8_t(buf, 33, component_health);
    _mav_put_uint8_t(buf, 34, failsafe_flags);
    _mav_put_int8_t(buf, 35, battery_remaining);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FMU_TM_LEN);
#else
    mavlink_fmu_tm_t packet;
    packet.time = time;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.hdg = hdg;
    packet.voltage_battery = voltage_battery;
    packet.current_battery = current_battery;
    packet.satellites_visible = satellites_visible;
    packet.fix_type = fix_type;
    packet.flight_state = flight_state;
    packet.rtcm_rate_wifi = rtcm_rate_wifi;
    packet.rtcm_rate_lora = rtcm_rate_lora;
    packet.flags = flags;
    packet.component_present = component_present;
    packet.component_health = component_health;
    packet.failsafe_flags = failsafe_flags;
    packet.battery_remaining = battery_remaining;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FMU_TM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FMU_TM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FMU_TM_MIN_LEN, MAVLINK_MSG_ID_FMU_TM_LEN, MAVLINK_MSG_ID_FMU_TM_CRC);
}

/**
 * @brief Encode a fmu_tm struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param fmu_tm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fmu_tm_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_fmu_tm_t* fmu_tm)
{
    return mavlink_msg_fmu_tm_pack(system_id, component_id, msg, fmu_tm->time, fmu_tm->satellites_visible, fmu_tm->fix_type, fmu_tm->hdg, fmu_tm->lat, fmu_tm->lon, fmu_tm->alt, fmu_tm->flight_state, fmu_tm->rtcm_rate_wifi, fmu_tm->rtcm_rate_lora, fmu_tm->flags, fmu_tm->component_present, fmu_tm->component_health, fmu_tm->failsafe_flags, fmu_tm->voltage_battery, fmu_tm->current_battery, fmu_tm->battery_remaining);
}

/**
 * @brief Encode a fmu_tm struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param fmu_tm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fmu_tm_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_fmu_tm_t* fmu_tm)
{
    return mavlink_msg_fmu_tm_pack_chan(system_id, component_id, chan, msg, fmu_tm->time, fmu_tm->satellites_visible, fmu_tm->fix_type, fmu_tm->hdg, fmu_tm->lat, fmu_tm->lon, fmu_tm->alt, fmu_tm->flight_state, fmu_tm->rtcm_rate_wifi, fmu_tm->rtcm_rate_lora, fmu_tm->flags, fmu_tm->component_present, fmu_tm->component_health, fmu_tm->failsafe_flags, fmu_tm->voltage_battery, fmu_tm->current_battery, fmu_tm->battery_remaining);
}

/**
 * @brief Encode a fmu_tm struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param fmu_tm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fmu_tm_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_fmu_tm_t* fmu_tm)
{
    return mavlink_msg_fmu_tm_pack_status(system_id, component_id, _status, msg,  fmu_tm->time, fmu_tm->satellites_visible, fmu_tm->fix_type, fmu_tm->hdg, fmu_tm->lat, fmu_tm->lon, fmu_tm->alt, fmu_tm->flight_state, fmu_tm->rtcm_rate_wifi, fmu_tm->rtcm_rate_lora, fmu_tm->flags, fmu_tm->component_present, fmu_tm->component_health, fmu_tm->failsafe_flags, fmu_tm->voltage_battery, fmu_tm->current_battery, fmu_tm->battery_remaining);
}

/**
 * @brief Send a fmu_tm message
 * @param chan MAVLink channel to send the message
 *
 * @param time [us] Time of applicability of position (microseconds since UNIX epoch).
 * @param satellites_visible  Number of satellites visible. If unknown, set to UINT8_MAX.
 * @param fix_type  GPS fix type.
 * @param hdg [cdeg] Vehicle heading (yaw angle), 0.0..359.99 degrees. If unknown, set to: UINT16_MAX.
 * @param lat [degE7] Latitude, expressed
 * @param lon [degE7] Longitude, expressed
 * @param alt [mm] Altitude (MSL). Note that virtually all GPS modules provide both WGS84 and MSL.
 * @param flight_state  Flight state
 * @param rtcm_rate_wifi [HzE2] Rate of RTCM messages being received by WiFi
 * @param rtcm_rate_lora [HzE2] Rate of RTCM messages being received by LoRa
 * @param flags  Bitmap showing TM flags. Value of 0: not present. Value of 1: present.
 * @param component_present  Bitmap showing which onboard components are present. Value of 0: not present. Value of 1: present.
 * @param component_health  Bitmap showing which onboard components are operational. Value of 0: not present. Value of 1: present.
 * @param failsafe_flags  Bitmap specifies detected failsafe. Value of 0: not present. Value of 1: present.
 * @param voltage_battery [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot
 * @param current_battery [cA] Battery current, -1: Current not sent by autopilot
 * @param battery_remaining [%] Battery energy remaining, -1: Battery remaining energy not sent by autopilot
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_fmu_tm_send(mavlink_channel_t chan, uint64_t time, uint8_t satellites_visible, uint8_t fix_type, uint16_t hdg, int32_t lat, int32_t lon, int32_t alt, uint8_t flight_state, uint8_t rtcm_rate_wifi, uint8_t rtcm_rate_lora, uint8_t flags, uint8_t component_present, uint8_t component_health, uint8_t failsafe_flags, uint16_t voltage_battery, int16_t current_battery, int8_t battery_remaining)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FMU_TM_LEN];
    _mav_put_uint64_t(buf, 0, time);
    _mav_put_int32_t(buf, 8, lat);
    _mav_put_int32_t(buf, 12, lon);
    _mav_put_int32_t(buf, 16, alt);
    _mav_put_uint16_t(buf, 20, hdg);
    _mav_put_uint16_t(buf, 22, voltage_battery);
    _mav_put_int16_t(buf, 24, current_battery);
    _mav_put_uint8_t(buf, 26, satellites_visible);
    _mav_put_uint8_t(buf, 27, fix_type);
    _mav_put_uint8_t(buf, 28, flight_state);
    _mav_put_uint8_t(buf, 29, rtcm_rate_wifi);
    _mav_put_uint8_t(buf, 30, rtcm_rate_lora);
    _mav_put_uint8_t(buf, 31, flags);
    _mav_put_uint8_t(buf, 32, component_present);
    _mav_put_uint8_t(buf, 33, component_health);
    _mav_put_uint8_t(buf, 34, failsafe_flags);
    _mav_put_int8_t(buf, 35, battery_remaining);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FMU_TM, buf, MAVLINK_MSG_ID_FMU_TM_MIN_LEN, MAVLINK_MSG_ID_FMU_TM_LEN, MAVLINK_MSG_ID_FMU_TM_CRC);
#else
    mavlink_fmu_tm_t packet;
    packet.time = time;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.hdg = hdg;
    packet.voltage_battery = voltage_battery;
    packet.current_battery = current_battery;
    packet.satellites_visible = satellites_visible;
    packet.fix_type = fix_type;
    packet.flight_state = flight_state;
    packet.rtcm_rate_wifi = rtcm_rate_wifi;
    packet.rtcm_rate_lora = rtcm_rate_lora;
    packet.flags = flags;
    packet.component_present = component_present;
    packet.component_health = component_health;
    packet.failsafe_flags = failsafe_flags;
    packet.battery_remaining = battery_remaining;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FMU_TM, (const char *)&packet, MAVLINK_MSG_ID_FMU_TM_MIN_LEN, MAVLINK_MSG_ID_FMU_TM_LEN, MAVLINK_MSG_ID_FMU_TM_CRC);
#endif
}

/**
 * @brief Send a fmu_tm message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_fmu_tm_send_struct(mavlink_channel_t chan, const mavlink_fmu_tm_t* fmu_tm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_fmu_tm_send(chan, fmu_tm->time, fmu_tm->satellites_visible, fmu_tm->fix_type, fmu_tm->hdg, fmu_tm->lat, fmu_tm->lon, fmu_tm->alt, fmu_tm->flight_state, fmu_tm->rtcm_rate_wifi, fmu_tm->rtcm_rate_lora, fmu_tm->flags, fmu_tm->component_present, fmu_tm->component_health, fmu_tm->failsafe_flags, fmu_tm->voltage_battery, fmu_tm->current_battery, fmu_tm->battery_remaining);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FMU_TM, (const char *)fmu_tm, MAVLINK_MSG_ID_FMU_TM_MIN_LEN, MAVLINK_MSG_ID_FMU_TM_LEN, MAVLINK_MSG_ID_FMU_TM_CRC);
#endif
}

#if MAVLINK_MSG_ID_FMU_TM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_fmu_tm_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time, uint8_t satellites_visible, uint8_t fix_type, uint16_t hdg, int32_t lat, int32_t lon, int32_t alt, uint8_t flight_state, uint8_t rtcm_rate_wifi, uint8_t rtcm_rate_lora, uint8_t flags, uint8_t component_present, uint8_t component_health, uint8_t failsafe_flags, uint16_t voltage_battery, int16_t current_battery, int8_t battery_remaining)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time);
    _mav_put_int32_t(buf, 8, lat);
    _mav_put_int32_t(buf, 12, lon);
    _mav_put_int32_t(buf, 16, alt);
    _mav_put_uint16_t(buf, 20, hdg);
    _mav_put_uint16_t(buf, 22, voltage_battery);
    _mav_put_int16_t(buf, 24, current_battery);
    _mav_put_uint8_t(buf, 26, satellites_visible);
    _mav_put_uint8_t(buf, 27, fix_type);
    _mav_put_uint8_t(buf, 28, flight_state);
    _mav_put_uint8_t(buf, 29, rtcm_rate_wifi);
    _mav_put_uint8_t(buf, 30, rtcm_rate_lora);
    _mav_put_uint8_t(buf, 31, flags);
    _mav_put_uint8_t(buf, 32, component_present);
    _mav_put_uint8_t(buf, 33, component_health);
    _mav_put_uint8_t(buf, 34, failsafe_flags);
    _mav_put_int8_t(buf, 35, battery_remaining);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FMU_TM, buf, MAVLINK_MSG_ID_FMU_TM_MIN_LEN, MAVLINK_MSG_ID_FMU_TM_LEN, MAVLINK_MSG_ID_FMU_TM_CRC);
#else
    mavlink_fmu_tm_t *packet = (mavlink_fmu_tm_t *)msgbuf;
    packet->time = time;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;
    packet->hdg = hdg;
    packet->voltage_battery = voltage_battery;
    packet->current_battery = current_battery;
    packet->satellites_visible = satellites_visible;
    packet->fix_type = fix_type;
    packet->flight_state = flight_state;
    packet->rtcm_rate_wifi = rtcm_rate_wifi;
    packet->rtcm_rate_lora = rtcm_rate_lora;
    packet->flags = flags;
    packet->component_present = component_present;
    packet->component_health = component_health;
    packet->failsafe_flags = failsafe_flags;
    packet->battery_remaining = battery_remaining;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FMU_TM, (const char *)packet, MAVLINK_MSG_ID_FMU_TM_MIN_LEN, MAVLINK_MSG_ID_FMU_TM_LEN, MAVLINK_MSG_ID_FMU_TM_CRC);
#endif
}
#endif

#endif

// MESSAGE FMU_TM UNPACKING


/**
 * @brief Get field time from fmu_tm message
 *
 * @return [us] Time of applicability of position (microseconds since UNIX epoch).
 */
static inline uint64_t mavlink_msg_fmu_tm_get_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field satellites_visible from fmu_tm message
 *
 * @return  Number of satellites visible. If unknown, set to UINT8_MAX.
 */
static inline uint8_t mavlink_msg_fmu_tm_get_satellites_visible(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  26);
}

/**
 * @brief Get field fix_type from fmu_tm message
 *
 * @return  GPS fix type.
 */
static inline uint8_t mavlink_msg_fmu_tm_get_fix_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  27);
}

/**
 * @brief Get field hdg from fmu_tm message
 *
 * @return [cdeg] Vehicle heading (yaw angle), 0.0..359.99 degrees. If unknown, set to: UINT16_MAX.
 */
static inline uint16_t mavlink_msg_fmu_tm_get_hdg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field lat from fmu_tm message
 *
 * @return [degE7] Latitude, expressed
 */
static inline int32_t mavlink_msg_fmu_tm_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field lon from fmu_tm message
 *
 * @return [degE7] Longitude, expressed
 */
static inline int32_t mavlink_msg_fmu_tm_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field alt from fmu_tm message
 *
 * @return [mm] Altitude (MSL). Note that virtually all GPS modules provide both WGS84 and MSL.
 */
static inline int32_t mavlink_msg_fmu_tm_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field flight_state from fmu_tm message
 *
 * @return  Flight state
 */
static inline uint8_t mavlink_msg_fmu_tm_get_flight_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Get field rtcm_rate_wifi from fmu_tm message
 *
 * @return [HzE2] Rate of RTCM messages being received by WiFi
 */
static inline uint8_t mavlink_msg_fmu_tm_get_rtcm_rate_wifi(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  29);
}

/**
 * @brief Get field rtcm_rate_lora from fmu_tm message
 *
 * @return [HzE2] Rate of RTCM messages being received by LoRa
 */
static inline uint8_t mavlink_msg_fmu_tm_get_rtcm_rate_lora(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  30);
}

/**
 * @brief Get field flags from fmu_tm message
 *
 * @return  Bitmap showing TM flags. Value of 0: not present. Value of 1: present.
 */
static inline uint8_t mavlink_msg_fmu_tm_get_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  31);
}

/**
 * @brief Get field component_present from fmu_tm message
 *
 * @return  Bitmap showing which onboard components are present. Value of 0: not present. Value of 1: present.
 */
static inline uint8_t mavlink_msg_fmu_tm_get_component_present(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field component_health from fmu_tm message
 *
 * @return  Bitmap showing which onboard components are operational. Value of 0: not present. Value of 1: present.
 */
static inline uint8_t mavlink_msg_fmu_tm_get_component_health(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field failsafe_flags from fmu_tm message
 *
 * @return  Bitmap specifies detected failsafe. Value of 0: not present. Value of 1: present.
 */
static inline uint8_t mavlink_msg_fmu_tm_get_failsafe_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field voltage_battery from fmu_tm message
 *
 * @return [mV] Battery voltage, UINT16_MAX: Voltage not sent by autopilot
 */
static inline uint16_t mavlink_msg_fmu_tm_get_voltage_battery(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field current_battery from fmu_tm message
 *
 * @return [cA] Battery current, -1: Current not sent by autopilot
 */
static inline int16_t mavlink_msg_fmu_tm_get_current_battery(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field battery_remaining from fmu_tm message
 *
 * @return [%] Battery energy remaining, -1: Battery remaining energy not sent by autopilot
 */
static inline int8_t mavlink_msg_fmu_tm_get_battery_remaining(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  35);
}

/**
 * @brief Decode a fmu_tm message into a struct
 *
 * @param msg The message to decode
 * @param fmu_tm C-struct to decode the message contents into
 */
static inline void mavlink_msg_fmu_tm_decode(const mavlink_message_t* msg, mavlink_fmu_tm_t* fmu_tm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    fmu_tm->time = mavlink_msg_fmu_tm_get_time(msg);
    fmu_tm->lat = mavlink_msg_fmu_tm_get_lat(msg);
    fmu_tm->lon = mavlink_msg_fmu_tm_get_lon(msg);
    fmu_tm->alt = mavlink_msg_fmu_tm_get_alt(msg);
    fmu_tm->hdg = mavlink_msg_fmu_tm_get_hdg(msg);
    fmu_tm->voltage_battery = mavlink_msg_fmu_tm_get_voltage_battery(msg);
    fmu_tm->current_battery = mavlink_msg_fmu_tm_get_current_battery(msg);
    fmu_tm->satellites_visible = mavlink_msg_fmu_tm_get_satellites_visible(msg);
    fmu_tm->fix_type = mavlink_msg_fmu_tm_get_fix_type(msg);
    fmu_tm->flight_state = mavlink_msg_fmu_tm_get_flight_state(msg);
    fmu_tm->rtcm_rate_wifi = mavlink_msg_fmu_tm_get_rtcm_rate_wifi(msg);
    fmu_tm->rtcm_rate_lora = mavlink_msg_fmu_tm_get_rtcm_rate_lora(msg);
    fmu_tm->flags = mavlink_msg_fmu_tm_get_flags(msg);
    fmu_tm->component_present = mavlink_msg_fmu_tm_get_component_present(msg);
    fmu_tm->component_health = mavlink_msg_fmu_tm_get_component_health(msg);
    fmu_tm->failsafe_flags = mavlink_msg_fmu_tm_get_failsafe_flags(msg);
    fmu_tm->battery_remaining = mavlink_msg_fmu_tm_get_battery_remaining(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FMU_TM_LEN? msg->len : MAVLINK_MSG_ID_FMU_TM_LEN;
        memset(fmu_tm, 0, MAVLINK_MSG_ID_FMU_TM_LEN);
    memcpy(fmu_tm, _MAV_PAYLOAD(msg), len);
#endif
}
