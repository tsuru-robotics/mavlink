#pragma once
// MESSAGE RTK_TM PACKING

#define MAVLINK_MSG_ID_RTK_TM 11200


typedef struct __mavlink_rtk_tm_t {
 uint64_t timestamp_unix; /*< [us] Timestamp (microseconds since UNIX epoch).*/
 uint32_t timestamp; /*< [ms] Timestamp (milliseconds since system boot).*/
 int32_t lat; /*< [degE7] Latitude.*/
 int32_t lon; /*< [degE7] Longitude.*/
 int32_t alt; /*< [mm] Altitude (MSL).*/
 uint32_t h_acc; /*< [mm] Horizontal position uncertainty (standard deviation).*/
 uint32_t v_acc; /*< [mm] Altitude uncertainty (standard deviation).*/
 uint32_t srvin_dur; /*< [s] Passed survey-in observation time.*/
 uint32_t srvin_mean_acc; /*< [0.1 mm] Current survey-in mean position accuracy.*/
 uint32_t srvin_obs; /*<  Number of position observations used during survey-in.*/
 uint16_t pdop; /*< [0.01] Position dilution of precision.*/
 uint16_t gnss_flags; /*<  Bitmap showing GNSS status flags.*/
 uint16_t device_status_flags; /*<  Bitmap showing device status flags.*/
 uint16_t rtcm1005_cnt; /*<  RTCM1005 message count.*/
 uint16_t rtcm1074_cnt; /*<  RTCM1074 message count.*/
 uint16_t rtcm1084_cnt; /*<  RTCM1084 message count.*/
 uint16_t rtcm1094_cnt; /*<  RTCM1094 message count.*/
 uint16_t rtcm1124_cnt; /*<  RTCM1124 message count.*/
 uint16_t rtcm1230_cnt; /*<  RTCM1230 message count.*/
 uint16_t nav_pvt_cnt; /*<  NAV-PVT message count.*/
 uint16_t nav_svin_cnt; /*<  NAV-SVIN message count.*/
 uint16_t psup_voltage; /*< [mV] Power supply budget voltage.*/
 uint16_t psup_current; /*< [mA] Power supply budget current.*/
 uint16_t bat1_voltage; /*< [mV] Battery 1 voltage.*/
 uint16_t bat2_voltage; /*< [mV] Battery 2 voltage.*/
 uint8_t fix_type; /*<  GPS fix type.*/
 uint8_t num_satellites; /*<  Number of satellites used in Nav Solution.*/
 uint8_t psup_type; /*<  Power supply type.*/
 uint8_t bat1_soc; /*< [%] Battery 1 state of charge.*/
 uint8_t bat2_soc; /*< [%] Battery 2 state of charge.*/
 uint8_t bat1_flags; /*<  Bitmap showing battery 1 status flags.*/
 uint8_t bat2_flags; /*<  Bitmap showing battery 2 status flags.*/
} mavlink_rtk_tm_t;

#define MAVLINK_MSG_ID_RTK_TM_LEN 81
#define MAVLINK_MSG_ID_RTK_TM_MIN_LEN 81
#define MAVLINK_MSG_ID_11200_LEN 81
#define MAVLINK_MSG_ID_11200_MIN_LEN 81

#define MAVLINK_MSG_ID_RTK_TM_CRC 196
#define MAVLINK_MSG_ID_11200_CRC 196



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RTK_TM { \
    11200, \
    "RTK_TM", \
    32, \
    {  { "timestamp_unix", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_rtk_tm_t, timestamp_unix) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_rtk_tm_t, timestamp) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_rtk_tm_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_rtk_tm_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_rtk_tm_t, alt) }, \
         { "h_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_rtk_tm_t, h_acc) }, \
         { "v_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_rtk_tm_t, v_acc) }, \
         { "srvin_dur", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_rtk_tm_t, srvin_dur) }, \
         { "srvin_mean_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 36, offsetof(mavlink_rtk_tm_t, srvin_mean_acc) }, \
         { "srvin_obs", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_rtk_tm_t, srvin_obs) }, \
         { "pdop", NULL, MAVLINK_TYPE_UINT16_T, 0, 44, offsetof(mavlink_rtk_tm_t, pdop) }, \
         { "fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 74, offsetof(mavlink_rtk_tm_t, fix_type) }, \
         { "num_satellites", NULL, MAVLINK_TYPE_UINT8_T, 0, 75, offsetof(mavlink_rtk_tm_t, num_satellites) }, \
         { "gnss_flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 46, offsetof(mavlink_rtk_tm_t, gnss_flags) }, \
         { "device_status_flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_rtk_tm_t, device_status_flags) }, \
         { "rtcm1005_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 50, offsetof(mavlink_rtk_tm_t, rtcm1005_cnt) }, \
         { "rtcm1074_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 52, offsetof(mavlink_rtk_tm_t, rtcm1074_cnt) }, \
         { "rtcm1084_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 54, offsetof(mavlink_rtk_tm_t, rtcm1084_cnt) }, \
         { "rtcm1094_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 56, offsetof(mavlink_rtk_tm_t, rtcm1094_cnt) }, \
         { "rtcm1124_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 58, offsetof(mavlink_rtk_tm_t, rtcm1124_cnt) }, \
         { "rtcm1230_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 60, offsetof(mavlink_rtk_tm_t, rtcm1230_cnt) }, \
         { "nav_pvt_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 62, offsetof(mavlink_rtk_tm_t, nav_pvt_cnt) }, \
         { "nav_svin_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 64, offsetof(mavlink_rtk_tm_t, nav_svin_cnt) }, \
         { "psup_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 76, offsetof(mavlink_rtk_tm_t, psup_type) }, \
         { "psup_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 66, offsetof(mavlink_rtk_tm_t, psup_voltage) }, \
         { "psup_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 68, offsetof(mavlink_rtk_tm_t, psup_current) }, \
         { "bat1_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 70, offsetof(mavlink_rtk_tm_t, bat1_voltage) }, \
         { "bat2_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 72, offsetof(mavlink_rtk_tm_t, bat2_voltage) }, \
         { "bat1_soc", NULL, MAVLINK_TYPE_UINT8_T, 0, 77, offsetof(mavlink_rtk_tm_t, bat1_soc) }, \
         { "bat2_soc", NULL, MAVLINK_TYPE_UINT8_T, 0, 78, offsetof(mavlink_rtk_tm_t, bat2_soc) }, \
         { "bat1_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 79, offsetof(mavlink_rtk_tm_t, bat1_flags) }, \
         { "bat2_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 80, offsetof(mavlink_rtk_tm_t, bat2_flags) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RTK_TM { \
    "RTK_TM", \
    32, \
    {  { "timestamp_unix", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_rtk_tm_t, timestamp_unix) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_rtk_tm_t, timestamp) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_rtk_tm_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_rtk_tm_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_rtk_tm_t, alt) }, \
         { "h_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_rtk_tm_t, h_acc) }, \
         { "v_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_rtk_tm_t, v_acc) }, \
         { "srvin_dur", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_rtk_tm_t, srvin_dur) }, \
         { "srvin_mean_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 36, offsetof(mavlink_rtk_tm_t, srvin_mean_acc) }, \
         { "srvin_obs", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_rtk_tm_t, srvin_obs) }, \
         { "pdop", NULL, MAVLINK_TYPE_UINT16_T, 0, 44, offsetof(mavlink_rtk_tm_t, pdop) }, \
         { "fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 74, offsetof(mavlink_rtk_tm_t, fix_type) }, \
         { "num_satellites", NULL, MAVLINK_TYPE_UINT8_T, 0, 75, offsetof(mavlink_rtk_tm_t, num_satellites) }, \
         { "gnss_flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 46, offsetof(mavlink_rtk_tm_t, gnss_flags) }, \
         { "device_status_flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 48, offsetof(mavlink_rtk_tm_t, device_status_flags) }, \
         { "rtcm1005_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 50, offsetof(mavlink_rtk_tm_t, rtcm1005_cnt) }, \
         { "rtcm1074_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 52, offsetof(mavlink_rtk_tm_t, rtcm1074_cnt) }, \
         { "rtcm1084_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 54, offsetof(mavlink_rtk_tm_t, rtcm1084_cnt) }, \
         { "rtcm1094_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 56, offsetof(mavlink_rtk_tm_t, rtcm1094_cnt) }, \
         { "rtcm1124_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 58, offsetof(mavlink_rtk_tm_t, rtcm1124_cnt) }, \
         { "rtcm1230_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 60, offsetof(mavlink_rtk_tm_t, rtcm1230_cnt) }, \
         { "nav_pvt_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 62, offsetof(mavlink_rtk_tm_t, nav_pvt_cnt) }, \
         { "nav_svin_cnt", NULL, MAVLINK_TYPE_UINT16_T, 0, 64, offsetof(mavlink_rtk_tm_t, nav_svin_cnt) }, \
         { "psup_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 76, offsetof(mavlink_rtk_tm_t, psup_type) }, \
         { "psup_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 66, offsetof(mavlink_rtk_tm_t, psup_voltage) }, \
         { "psup_current", NULL, MAVLINK_TYPE_UINT16_T, 0, 68, offsetof(mavlink_rtk_tm_t, psup_current) }, \
         { "bat1_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 70, offsetof(mavlink_rtk_tm_t, bat1_voltage) }, \
         { "bat2_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 72, offsetof(mavlink_rtk_tm_t, bat2_voltage) }, \
         { "bat1_soc", NULL, MAVLINK_TYPE_UINT8_T, 0, 77, offsetof(mavlink_rtk_tm_t, bat1_soc) }, \
         { "bat2_soc", NULL, MAVLINK_TYPE_UINT8_T, 0, 78, offsetof(mavlink_rtk_tm_t, bat2_soc) }, \
         { "bat1_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 79, offsetof(mavlink_rtk_tm_t, bat1_flags) }, \
         { "bat2_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 80, offsetof(mavlink_rtk_tm_t, bat2_flags) }, \
         } \
}
#endif

/**
 * @brief Pack a rtk_tm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_unix [us] Timestamp (microseconds since UNIX epoch).
 * @param timestamp [ms] Timestamp (milliseconds since system boot).
 * @param lat [degE7] Latitude.
 * @param lon [degE7] Longitude.
 * @param alt [mm] Altitude (MSL).
 * @param h_acc [mm] Horizontal position uncertainty (standard deviation).
 * @param v_acc [mm] Altitude uncertainty (standard deviation).
 * @param srvin_dur [s] Passed survey-in observation time.
 * @param srvin_mean_acc [0.1 mm] Current survey-in mean position accuracy.
 * @param srvin_obs  Number of position observations used during survey-in.
 * @param pdop [0.01] Position dilution of precision.
 * @param fix_type  GPS fix type.
 * @param num_satellites  Number of satellites used in Nav Solution.
 * @param gnss_flags  Bitmap showing GNSS status flags.
 * @param device_status_flags  Bitmap showing device status flags.
 * @param rtcm1005_cnt  RTCM1005 message count.
 * @param rtcm1074_cnt  RTCM1074 message count.
 * @param rtcm1084_cnt  RTCM1084 message count.
 * @param rtcm1094_cnt  RTCM1094 message count.
 * @param rtcm1124_cnt  RTCM1124 message count.
 * @param rtcm1230_cnt  RTCM1230 message count.
 * @param nav_pvt_cnt  NAV-PVT message count.
 * @param nav_svin_cnt  NAV-SVIN message count.
 * @param psup_type  Power supply type.
 * @param psup_voltage [mV] Power supply budget voltage.
 * @param psup_current [mA] Power supply budget current.
 * @param bat1_voltage [mV] Battery 1 voltage.
 * @param bat2_voltage [mV] Battery 2 voltage.
 * @param bat1_soc [%] Battery 1 state of charge.
 * @param bat2_soc [%] Battery 2 state of charge.
 * @param bat1_flags  Bitmap showing battery 1 status flags.
 * @param bat2_flags  Bitmap showing battery 2 status flags.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtk_tm_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_unix, uint32_t timestamp, int32_t lat, int32_t lon, int32_t alt, uint32_t h_acc, uint32_t v_acc, uint32_t srvin_dur, uint32_t srvin_mean_acc, uint32_t srvin_obs, uint16_t pdop, uint8_t fix_type, uint8_t num_satellites, uint16_t gnss_flags, uint16_t device_status_flags, uint16_t rtcm1005_cnt, uint16_t rtcm1074_cnt, uint16_t rtcm1084_cnt, uint16_t rtcm1094_cnt, uint16_t rtcm1124_cnt, uint16_t rtcm1230_cnt, uint16_t nav_pvt_cnt, uint16_t nav_svin_cnt, uint8_t psup_type, uint16_t psup_voltage, uint16_t psup_current, uint16_t bat1_voltage, uint16_t bat2_voltage, uint8_t bat1_soc, uint8_t bat2_soc, uint8_t bat1_flags, uint8_t bat2_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTK_TM_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_unix);
    _mav_put_uint32_t(buf, 8, timestamp);
    _mav_put_int32_t(buf, 12, lat);
    _mav_put_int32_t(buf, 16, lon);
    _mav_put_int32_t(buf, 20, alt);
    _mav_put_uint32_t(buf, 24, h_acc);
    _mav_put_uint32_t(buf, 28, v_acc);
    _mav_put_uint32_t(buf, 32, srvin_dur);
    _mav_put_uint32_t(buf, 36, srvin_mean_acc);
    _mav_put_uint32_t(buf, 40, srvin_obs);
    _mav_put_uint16_t(buf, 44, pdop);
    _mav_put_uint16_t(buf, 46, gnss_flags);
    _mav_put_uint16_t(buf, 48, device_status_flags);
    _mav_put_uint16_t(buf, 50, rtcm1005_cnt);
    _mav_put_uint16_t(buf, 52, rtcm1074_cnt);
    _mav_put_uint16_t(buf, 54, rtcm1084_cnt);
    _mav_put_uint16_t(buf, 56, rtcm1094_cnt);
    _mav_put_uint16_t(buf, 58, rtcm1124_cnt);
    _mav_put_uint16_t(buf, 60, rtcm1230_cnt);
    _mav_put_uint16_t(buf, 62, nav_pvt_cnt);
    _mav_put_uint16_t(buf, 64, nav_svin_cnt);
    _mav_put_uint16_t(buf, 66, psup_voltage);
    _mav_put_uint16_t(buf, 68, psup_current);
    _mav_put_uint16_t(buf, 70, bat1_voltage);
    _mav_put_uint16_t(buf, 72, bat2_voltage);
    _mav_put_uint8_t(buf, 74, fix_type);
    _mav_put_uint8_t(buf, 75, num_satellites);
    _mav_put_uint8_t(buf, 76, psup_type);
    _mav_put_uint8_t(buf, 77, bat1_soc);
    _mav_put_uint8_t(buf, 78, bat2_soc);
    _mav_put_uint8_t(buf, 79, bat1_flags);
    _mav_put_uint8_t(buf, 80, bat2_flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTK_TM_LEN);
#else
    mavlink_rtk_tm_t packet;
    packet.timestamp_unix = timestamp_unix;
    packet.timestamp = timestamp;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.h_acc = h_acc;
    packet.v_acc = v_acc;
    packet.srvin_dur = srvin_dur;
    packet.srvin_mean_acc = srvin_mean_acc;
    packet.srvin_obs = srvin_obs;
    packet.pdop = pdop;
    packet.gnss_flags = gnss_flags;
    packet.device_status_flags = device_status_flags;
    packet.rtcm1005_cnt = rtcm1005_cnt;
    packet.rtcm1074_cnt = rtcm1074_cnt;
    packet.rtcm1084_cnt = rtcm1084_cnt;
    packet.rtcm1094_cnt = rtcm1094_cnt;
    packet.rtcm1124_cnt = rtcm1124_cnt;
    packet.rtcm1230_cnt = rtcm1230_cnt;
    packet.nav_pvt_cnt = nav_pvt_cnt;
    packet.nav_svin_cnt = nav_svin_cnt;
    packet.psup_voltage = psup_voltage;
    packet.psup_current = psup_current;
    packet.bat1_voltage = bat1_voltage;
    packet.bat2_voltage = bat2_voltage;
    packet.fix_type = fix_type;
    packet.num_satellites = num_satellites;
    packet.psup_type = psup_type;
    packet.bat1_soc = bat1_soc;
    packet.bat2_soc = bat2_soc;
    packet.bat1_flags = bat1_flags;
    packet.bat2_flags = bat2_flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTK_TM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTK_TM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RTK_TM_MIN_LEN, MAVLINK_MSG_ID_RTK_TM_LEN, MAVLINK_MSG_ID_RTK_TM_CRC);
}

/**
 * @brief Pack a rtk_tm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_unix [us] Timestamp (microseconds since UNIX epoch).
 * @param timestamp [ms] Timestamp (milliseconds since system boot).
 * @param lat [degE7] Latitude.
 * @param lon [degE7] Longitude.
 * @param alt [mm] Altitude (MSL).
 * @param h_acc [mm] Horizontal position uncertainty (standard deviation).
 * @param v_acc [mm] Altitude uncertainty (standard deviation).
 * @param srvin_dur [s] Passed survey-in observation time.
 * @param srvin_mean_acc [0.1 mm] Current survey-in mean position accuracy.
 * @param srvin_obs  Number of position observations used during survey-in.
 * @param pdop [0.01] Position dilution of precision.
 * @param fix_type  GPS fix type.
 * @param num_satellites  Number of satellites used in Nav Solution.
 * @param gnss_flags  Bitmap showing GNSS status flags.
 * @param device_status_flags  Bitmap showing device status flags.
 * @param rtcm1005_cnt  RTCM1005 message count.
 * @param rtcm1074_cnt  RTCM1074 message count.
 * @param rtcm1084_cnt  RTCM1084 message count.
 * @param rtcm1094_cnt  RTCM1094 message count.
 * @param rtcm1124_cnt  RTCM1124 message count.
 * @param rtcm1230_cnt  RTCM1230 message count.
 * @param nav_pvt_cnt  NAV-PVT message count.
 * @param nav_svin_cnt  NAV-SVIN message count.
 * @param psup_type  Power supply type.
 * @param psup_voltage [mV] Power supply budget voltage.
 * @param psup_current [mA] Power supply budget current.
 * @param bat1_voltage [mV] Battery 1 voltage.
 * @param bat2_voltage [mV] Battery 2 voltage.
 * @param bat1_soc [%] Battery 1 state of charge.
 * @param bat2_soc [%] Battery 2 state of charge.
 * @param bat1_flags  Bitmap showing battery 1 status flags.
 * @param bat2_flags  Bitmap showing battery 2 status flags.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtk_tm_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_unix, uint32_t timestamp, int32_t lat, int32_t lon, int32_t alt, uint32_t h_acc, uint32_t v_acc, uint32_t srvin_dur, uint32_t srvin_mean_acc, uint32_t srvin_obs, uint16_t pdop, uint8_t fix_type, uint8_t num_satellites, uint16_t gnss_flags, uint16_t device_status_flags, uint16_t rtcm1005_cnt, uint16_t rtcm1074_cnt, uint16_t rtcm1084_cnt, uint16_t rtcm1094_cnt, uint16_t rtcm1124_cnt, uint16_t rtcm1230_cnt, uint16_t nav_pvt_cnt, uint16_t nav_svin_cnt, uint8_t psup_type, uint16_t psup_voltage, uint16_t psup_current, uint16_t bat1_voltage, uint16_t bat2_voltage, uint8_t bat1_soc, uint8_t bat2_soc, uint8_t bat1_flags, uint8_t bat2_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTK_TM_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_unix);
    _mav_put_uint32_t(buf, 8, timestamp);
    _mav_put_int32_t(buf, 12, lat);
    _mav_put_int32_t(buf, 16, lon);
    _mav_put_int32_t(buf, 20, alt);
    _mav_put_uint32_t(buf, 24, h_acc);
    _mav_put_uint32_t(buf, 28, v_acc);
    _mav_put_uint32_t(buf, 32, srvin_dur);
    _mav_put_uint32_t(buf, 36, srvin_mean_acc);
    _mav_put_uint32_t(buf, 40, srvin_obs);
    _mav_put_uint16_t(buf, 44, pdop);
    _mav_put_uint16_t(buf, 46, gnss_flags);
    _mav_put_uint16_t(buf, 48, device_status_flags);
    _mav_put_uint16_t(buf, 50, rtcm1005_cnt);
    _mav_put_uint16_t(buf, 52, rtcm1074_cnt);
    _mav_put_uint16_t(buf, 54, rtcm1084_cnt);
    _mav_put_uint16_t(buf, 56, rtcm1094_cnt);
    _mav_put_uint16_t(buf, 58, rtcm1124_cnt);
    _mav_put_uint16_t(buf, 60, rtcm1230_cnt);
    _mav_put_uint16_t(buf, 62, nav_pvt_cnt);
    _mav_put_uint16_t(buf, 64, nav_svin_cnt);
    _mav_put_uint16_t(buf, 66, psup_voltage);
    _mav_put_uint16_t(buf, 68, psup_current);
    _mav_put_uint16_t(buf, 70, bat1_voltage);
    _mav_put_uint16_t(buf, 72, bat2_voltage);
    _mav_put_uint8_t(buf, 74, fix_type);
    _mav_put_uint8_t(buf, 75, num_satellites);
    _mav_put_uint8_t(buf, 76, psup_type);
    _mav_put_uint8_t(buf, 77, bat1_soc);
    _mav_put_uint8_t(buf, 78, bat2_soc);
    _mav_put_uint8_t(buf, 79, bat1_flags);
    _mav_put_uint8_t(buf, 80, bat2_flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTK_TM_LEN);
#else
    mavlink_rtk_tm_t packet;
    packet.timestamp_unix = timestamp_unix;
    packet.timestamp = timestamp;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.h_acc = h_acc;
    packet.v_acc = v_acc;
    packet.srvin_dur = srvin_dur;
    packet.srvin_mean_acc = srvin_mean_acc;
    packet.srvin_obs = srvin_obs;
    packet.pdop = pdop;
    packet.gnss_flags = gnss_flags;
    packet.device_status_flags = device_status_flags;
    packet.rtcm1005_cnt = rtcm1005_cnt;
    packet.rtcm1074_cnt = rtcm1074_cnt;
    packet.rtcm1084_cnt = rtcm1084_cnt;
    packet.rtcm1094_cnt = rtcm1094_cnt;
    packet.rtcm1124_cnt = rtcm1124_cnt;
    packet.rtcm1230_cnt = rtcm1230_cnt;
    packet.nav_pvt_cnt = nav_pvt_cnt;
    packet.nav_svin_cnt = nav_svin_cnt;
    packet.psup_voltage = psup_voltage;
    packet.psup_current = psup_current;
    packet.bat1_voltage = bat1_voltage;
    packet.bat2_voltage = bat2_voltage;
    packet.fix_type = fix_type;
    packet.num_satellites = num_satellites;
    packet.psup_type = psup_type;
    packet.bat1_soc = bat1_soc;
    packet.bat2_soc = bat2_soc;
    packet.bat1_flags = bat1_flags;
    packet.bat2_flags = bat2_flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTK_TM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTK_TM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RTK_TM_MIN_LEN, MAVLINK_MSG_ID_RTK_TM_LEN, MAVLINK_MSG_ID_RTK_TM_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RTK_TM_MIN_LEN, MAVLINK_MSG_ID_RTK_TM_LEN);
#endif
}

/**
 * @brief Pack a rtk_tm message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_unix [us] Timestamp (microseconds since UNIX epoch).
 * @param timestamp [ms] Timestamp (milliseconds since system boot).
 * @param lat [degE7] Latitude.
 * @param lon [degE7] Longitude.
 * @param alt [mm] Altitude (MSL).
 * @param h_acc [mm] Horizontal position uncertainty (standard deviation).
 * @param v_acc [mm] Altitude uncertainty (standard deviation).
 * @param srvin_dur [s] Passed survey-in observation time.
 * @param srvin_mean_acc [0.1 mm] Current survey-in mean position accuracy.
 * @param srvin_obs  Number of position observations used during survey-in.
 * @param pdop [0.01] Position dilution of precision.
 * @param fix_type  GPS fix type.
 * @param num_satellites  Number of satellites used in Nav Solution.
 * @param gnss_flags  Bitmap showing GNSS status flags.
 * @param device_status_flags  Bitmap showing device status flags.
 * @param rtcm1005_cnt  RTCM1005 message count.
 * @param rtcm1074_cnt  RTCM1074 message count.
 * @param rtcm1084_cnt  RTCM1084 message count.
 * @param rtcm1094_cnt  RTCM1094 message count.
 * @param rtcm1124_cnt  RTCM1124 message count.
 * @param rtcm1230_cnt  RTCM1230 message count.
 * @param nav_pvt_cnt  NAV-PVT message count.
 * @param nav_svin_cnt  NAV-SVIN message count.
 * @param psup_type  Power supply type.
 * @param psup_voltage [mV] Power supply budget voltage.
 * @param psup_current [mA] Power supply budget current.
 * @param bat1_voltage [mV] Battery 1 voltage.
 * @param bat2_voltage [mV] Battery 2 voltage.
 * @param bat1_soc [%] Battery 1 state of charge.
 * @param bat2_soc [%] Battery 2 state of charge.
 * @param bat1_flags  Bitmap showing battery 1 status flags.
 * @param bat2_flags  Bitmap showing battery 2 status flags.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtk_tm_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_unix,uint32_t timestamp,int32_t lat,int32_t lon,int32_t alt,uint32_t h_acc,uint32_t v_acc,uint32_t srvin_dur,uint32_t srvin_mean_acc,uint32_t srvin_obs,uint16_t pdop,uint8_t fix_type,uint8_t num_satellites,uint16_t gnss_flags,uint16_t device_status_flags,uint16_t rtcm1005_cnt,uint16_t rtcm1074_cnt,uint16_t rtcm1084_cnt,uint16_t rtcm1094_cnt,uint16_t rtcm1124_cnt,uint16_t rtcm1230_cnt,uint16_t nav_pvt_cnt,uint16_t nav_svin_cnt,uint8_t psup_type,uint16_t psup_voltage,uint16_t psup_current,uint16_t bat1_voltage,uint16_t bat2_voltage,uint8_t bat1_soc,uint8_t bat2_soc,uint8_t bat1_flags,uint8_t bat2_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTK_TM_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_unix);
    _mav_put_uint32_t(buf, 8, timestamp);
    _mav_put_int32_t(buf, 12, lat);
    _mav_put_int32_t(buf, 16, lon);
    _mav_put_int32_t(buf, 20, alt);
    _mav_put_uint32_t(buf, 24, h_acc);
    _mav_put_uint32_t(buf, 28, v_acc);
    _mav_put_uint32_t(buf, 32, srvin_dur);
    _mav_put_uint32_t(buf, 36, srvin_mean_acc);
    _mav_put_uint32_t(buf, 40, srvin_obs);
    _mav_put_uint16_t(buf, 44, pdop);
    _mav_put_uint16_t(buf, 46, gnss_flags);
    _mav_put_uint16_t(buf, 48, device_status_flags);
    _mav_put_uint16_t(buf, 50, rtcm1005_cnt);
    _mav_put_uint16_t(buf, 52, rtcm1074_cnt);
    _mav_put_uint16_t(buf, 54, rtcm1084_cnt);
    _mav_put_uint16_t(buf, 56, rtcm1094_cnt);
    _mav_put_uint16_t(buf, 58, rtcm1124_cnt);
    _mav_put_uint16_t(buf, 60, rtcm1230_cnt);
    _mav_put_uint16_t(buf, 62, nav_pvt_cnt);
    _mav_put_uint16_t(buf, 64, nav_svin_cnt);
    _mav_put_uint16_t(buf, 66, psup_voltage);
    _mav_put_uint16_t(buf, 68, psup_current);
    _mav_put_uint16_t(buf, 70, bat1_voltage);
    _mav_put_uint16_t(buf, 72, bat2_voltage);
    _mav_put_uint8_t(buf, 74, fix_type);
    _mav_put_uint8_t(buf, 75, num_satellites);
    _mav_put_uint8_t(buf, 76, psup_type);
    _mav_put_uint8_t(buf, 77, bat1_soc);
    _mav_put_uint8_t(buf, 78, bat2_soc);
    _mav_put_uint8_t(buf, 79, bat1_flags);
    _mav_put_uint8_t(buf, 80, bat2_flags);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTK_TM_LEN);
#else
    mavlink_rtk_tm_t packet;
    packet.timestamp_unix = timestamp_unix;
    packet.timestamp = timestamp;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.h_acc = h_acc;
    packet.v_acc = v_acc;
    packet.srvin_dur = srvin_dur;
    packet.srvin_mean_acc = srvin_mean_acc;
    packet.srvin_obs = srvin_obs;
    packet.pdop = pdop;
    packet.gnss_flags = gnss_flags;
    packet.device_status_flags = device_status_flags;
    packet.rtcm1005_cnt = rtcm1005_cnt;
    packet.rtcm1074_cnt = rtcm1074_cnt;
    packet.rtcm1084_cnt = rtcm1084_cnt;
    packet.rtcm1094_cnt = rtcm1094_cnt;
    packet.rtcm1124_cnt = rtcm1124_cnt;
    packet.rtcm1230_cnt = rtcm1230_cnt;
    packet.nav_pvt_cnt = nav_pvt_cnt;
    packet.nav_svin_cnt = nav_svin_cnt;
    packet.psup_voltage = psup_voltage;
    packet.psup_current = psup_current;
    packet.bat1_voltage = bat1_voltage;
    packet.bat2_voltage = bat2_voltage;
    packet.fix_type = fix_type;
    packet.num_satellites = num_satellites;
    packet.psup_type = psup_type;
    packet.bat1_soc = bat1_soc;
    packet.bat2_soc = bat2_soc;
    packet.bat1_flags = bat1_flags;
    packet.bat2_flags = bat2_flags;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTK_TM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTK_TM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RTK_TM_MIN_LEN, MAVLINK_MSG_ID_RTK_TM_LEN, MAVLINK_MSG_ID_RTK_TM_CRC);
}

/**
 * @brief Encode a rtk_tm struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rtk_tm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtk_tm_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rtk_tm_t* rtk_tm)
{
    return mavlink_msg_rtk_tm_pack(system_id, component_id, msg, rtk_tm->timestamp_unix, rtk_tm->timestamp, rtk_tm->lat, rtk_tm->lon, rtk_tm->alt, rtk_tm->h_acc, rtk_tm->v_acc, rtk_tm->srvin_dur, rtk_tm->srvin_mean_acc, rtk_tm->srvin_obs, rtk_tm->pdop, rtk_tm->fix_type, rtk_tm->num_satellites, rtk_tm->gnss_flags, rtk_tm->device_status_flags, rtk_tm->rtcm1005_cnt, rtk_tm->rtcm1074_cnt, rtk_tm->rtcm1084_cnt, rtk_tm->rtcm1094_cnt, rtk_tm->rtcm1124_cnt, rtk_tm->rtcm1230_cnt, rtk_tm->nav_pvt_cnt, rtk_tm->nav_svin_cnt, rtk_tm->psup_type, rtk_tm->psup_voltage, rtk_tm->psup_current, rtk_tm->bat1_voltage, rtk_tm->bat2_voltage, rtk_tm->bat1_soc, rtk_tm->bat2_soc, rtk_tm->bat1_flags, rtk_tm->bat2_flags);
}

/**
 * @brief Encode a rtk_tm struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rtk_tm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtk_tm_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rtk_tm_t* rtk_tm)
{
    return mavlink_msg_rtk_tm_pack_chan(system_id, component_id, chan, msg, rtk_tm->timestamp_unix, rtk_tm->timestamp, rtk_tm->lat, rtk_tm->lon, rtk_tm->alt, rtk_tm->h_acc, rtk_tm->v_acc, rtk_tm->srvin_dur, rtk_tm->srvin_mean_acc, rtk_tm->srvin_obs, rtk_tm->pdop, rtk_tm->fix_type, rtk_tm->num_satellites, rtk_tm->gnss_flags, rtk_tm->device_status_flags, rtk_tm->rtcm1005_cnt, rtk_tm->rtcm1074_cnt, rtk_tm->rtcm1084_cnt, rtk_tm->rtcm1094_cnt, rtk_tm->rtcm1124_cnt, rtk_tm->rtcm1230_cnt, rtk_tm->nav_pvt_cnt, rtk_tm->nav_svin_cnt, rtk_tm->psup_type, rtk_tm->psup_voltage, rtk_tm->psup_current, rtk_tm->bat1_voltage, rtk_tm->bat2_voltage, rtk_tm->bat1_soc, rtk_tm->bat2_soc, rtk_tm->bat1_flags, rtk_tm->bat2_flags);
}

/**
 * @brief Encode a rtk_tm struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param rtk_tm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtk_tm_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_rtk_tm_t* rtk_tm)
{
    return mavlink_msg_rtk_tm_pack_status(system_id, component_id, _status, msg,  rtk_tm->timestamp_unix, rtk_tm->timestamp, rtk_tm->lat, rtk_tm->lon, rtk_tm->alt, rtk_tm->h_acc, rtk_tm->v_acc, rtk_tm->srvin_dur, rtk_tm->srvin_mean_acc, rtk_tm->srvin_obs, rtk_tm->pdop, rtk_tm->fix_type, rtk_tm->num_satellites, rtk_tm->gnss_flags, rtk_tm->device_status_flags, rtk_tm->rtcm1005_cnt, rtk_tm->rtcm1074_cnt, rtk_tm->rtcm1084_cnt, rtk_tm->rtcm1094_cnt, rtk_tm->rtcm1124_cnt, rtk_tm->rtcm1230_cnt, rtk_tm->nav_pvt_cnt, rtk_tm->nav_svin_cnt, rtk_tm->psup_type, rtk_tm->psup_voltage, rtk_tm->psup_current, rtk_tm->bat1_voltage, rtk_tm->bat2_voltage, rtk_tm->bat1_soc, rtk_tm->bat2_soc, rtk_tm->bat1_flags, rtk_tm->bat2_flags);
}

/**
 * @brief Send a rtk_tm message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_unix [us] Timestamp (microseconds since UNIX epoch).
 * @param timestamp [ms] Timestamp (milliseconds since system boot).
 * @param lat [degE7] Latitude.
 * @param lon [degE7] Longitude.
 * @param alt [mm] Altitude (MSL).
 * @param h_acc [mm] Horizontal position uncertainty (standard deviation).
 * @param v_acc [mm] Altitude uncertainty (standard deviation).
 * @param srvin_dur [s] Passed survey-in observation time.
 * @param srvin_mean_acc [0.1 mm] Current survey-in mean position accuracy.
 * @param srvin_obs  Number of position observations used during survey-in.
 * @param pdop [0.01] Position dilution of precision.
 * @param fix_type  GPS fix type.
 * @param num_satellites  Number of satellites used in Nav Solution.
 * @param gnss_flags  Bitmap showing GNSS status flags.
 * @param device_status_flags  Bitmap showing device status flags.
 * @param rtcm1005_cnt  RTCM1005 message count.
 * @param rtcm1074_cnt  RTCM1074 message count.
 * @param rtcm1084_cnt  RTCM1084 message count.
 * @param rtcm1094_cnt  RTCM1094 message count.
 * @param rtcm1124_cnt  RTCM1124 message count.
 * @param rtcm1230_cnt  RTCM1230 message count.
 * @param nav_pvt_cnt  NAV-PVT message count.
 * @param nav_svin_cnt  NAV-SVIN message count.
 * @param psup_type  Power supply type.
 * @param psup_voltage [mV] Power supply budget voltage.
 * @param psup_current [mA] Power supply budget current.
 * @param bat1_voltage [mV] Battery 1 voltage.
 * @param bat2_voltage [mV] Battery 2 voltage.
 * @param bat1_soc [%] Battery 1 state of charge.
 * @param bat2_soc [%] Battery 2 state of charge.
 * @param bat1_flags  Bitmap showing battery 1 status flags.
 * @param bat2_flags  Bitmap showing battery 2 status flags.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rtk_tm_send(mavlink_channel_t chan, uint64_t timestamp_unix, uint32_t timestamp, int32_t lat, int32_t lon, int32_t alt, uint32_t h_acc, uint32_t v_acc, uint32_t srvin_dur, uint32_t srvin_mean_acc, uint32_t srvin_obs, uint16_t pdop, uint8_t fix_type, uint8_t num_satellites, uint16_t gnss_flags, uint16_t device_status_flags, uint16_t rtcm1005_cnt, uint16_t rtcm1074_cnt, uint16_t rtcm1084_cnt, uint16_t rtcm1094_cnt, uint16_t rtcm1124_cnt, uint16_t rtcm1230_cnt, uint16_t nav_pvt_cnt, uint16_t nav_svin_cnt, uint8_t psup_type, uint16_t psup_voltage, uint16_t psup_current, uint16_t bat1_voltage, uint16_t bat2_voltage, uint8_t bat1_soc, uint8_t bat2_soc, uint8_t bat1_flags, uint8_t bat2_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTK_TM_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_unix);
    _mav_put_uint32_t(buf, 8, timestamp);
    _mav_put_int32_t(buf, 12, lat);
    _mav_put_int32_t(buf, 16, lon);
    _mav_put_int32_t(buf, 20, alt);
    _mav_put_uint32_t(buf, 24, h_acc);
    _mav_put_uint32_t(buf, 28, v_acc);
    _mav_put_uint32_t(buf, 32, srvin_dur);
    _mav_put_uint32_t(buf, 36, srvin_mean_acc);
    _mav_put_uint32_t(buf, 40, srvin_obs);
    _mav_put_uint16_t(buf, 44, pdop);
    _mav_put_uint16_t(buf, 46, gnss_flags);
    _mav_put_uint16_t(buf, 48, device_status_flags);
    _mav_put_uint16_t(buf, 50, rtcm1005_cnt);
    _mav_put_uint16_t(buf, 52, rtcm1074_cnt);
    _mav_put_uint16_t(buf, 54, rtcm1084_cnt);
    _mav_put_uint16_t(buf, 56, rtcm1094_cnt);
    _mav_put_uint16_t(buf, 58, rtcm1124_cnt);
    _mav_put_uint16_t(buf, 60, rtcm1230_cnt);
    _mav_put_uint16_t(buf, 62, nav_pvt_cnt);
    _mav_put_uint16_t(buf, 64, nav_svin_cnt);
    _mav_put_uint16_t(buf, 66, psup_voltage);
    _mav_put_uint16_t(buf, 68, psup_current);
    _mav_put_uint16_t(buf, 70, bat1_voltage);
    _mav_put_uint16_t(buf, 72, bat2_voltage);
    _mav_put_uint8_t(buf, 74, fix_type);
    _mav_put_uint8_t(buf, 75, num_satellites);
    _mav_put_uint8_t(buf, 76, psup_type);
    _mav_put_uint8_t(buf, 77, bat1_soc);
    _mav_put_uint8_t(buf, 78, bat2_soc);
    _mav_put_uint8_t(buf, 79, bat1_flags);
    _mav_put_uint8_t(buf, 80, bat2_flags);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTK_TM, buf, MAVLINK_MSG_ID_RTK_TM_MIN_LEN, MAVLINK_MSG_ID_RTK_TM_LEN, MAVLINK_MSG_ID_RTK_TM_CRC);
#else
    mavlink_rtk_tm_t packet;
    packet.timestamp_unix = timestamp_unix;
    packet.timestamp = timestamp;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.h_acc = h_acc;
    packet.v_acc = v_acc;
    packet.srvin_dur = srvin_dur;
    packet.srvin_mean_acc = srvin_mean_acc;
    packet.srvin_obs = srvin_obs;
    packet.pdop = pdop;
    packet.gnss_flags = gnss_flags;
    packet.device_status_flags = device_status_flags;
    packet.rtcm1005_cnt = rtcm1005_cnt;
    packet.rtcm1074_cnt = rtcm1074_cnt;
    packet.rtcm1084_cnt = rtcm1084_cnt;
    packet.rtcm1094_cnt = rtcm1094_cnt;
    packet.rtcm1124_cnt = rtcm1124_cnt;
    packet.rtcm1230_cnt = rtcm1230_cnt;
    packet.nav_pvt_cnt = nav_pvt_cnt;
    packet.nav_svin_cnt = nav_svin_cnt;
    packet.psup_voltage = psup_voltage;
    packet.psup_current = psup_current;
    packet.bat1_voltage = bat1_voltage;
    packet.bat2_voltage = bat2_voltage;
    packet.fix_type = fix_type;
    packet.num_satellites = num_satellites;
    packet.psup_type = psup_type;
    packet.bat1_soc = bat1_soc;
    packet.bat2_soc = bat2_soc;
    packet.bat1_flags = bat1_flags;
    packet.bat2_flags = bat2_flags;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTK_TM, (const char *)&packet, MAVLINK_MSG_ID_RTK_TM_MIN_LEN, MAVLINK_MSG_ID_RTK_TM_LEN, MAVLINK_MSG_ID_RTK_TM_CRC);
#endif
}

/**
 * @brief Send a rtk_tm message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rtk_tm_send_struct(mavlink_channel_t chan, const mavlink_rtk_tm_t* rtk_tm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rtk_tm_send(chan, rtk_tm->timestamp_unix, rtk_tm->timestamp, rtk_tm->lat, rtk_tm->lon, rtk_tm->alt, rtk_tm->h_acc, rtk_tm->v_acc, rtk_tm->srvin_dur, rtk_tm->srvin_mean_acc, rtk_tm->srvin_obs, rtk_tm->pdop, rtk_tm->fix_type, rtk_tm->num_satellites, rtk_tm->gnss_flags, rtk_tm->device_status_flags, rtk_tm->rtcm1005_cnt, rtk_tm->rtcm1074_cnt, rtk_tm->rtcm1084_cnt, rtk_tm->rtcm1094_cnt, rtk_tm->rtcm1124_cnt, rtk_tm->rtcm1230_cnt, rtk_tm->nav_pvt_cnt, rtk_tm->nav_svin_cnt, rtk_tm->psup_type, rtk_tm->psup_voltage, rtk_tm->psup_current, rtk_tm->bat1_voltage, rtk_tm->bat2_voltage, rtk_tm->bat1_soc, rtk_tm->bat2_soc, rtk_tm->bat1_flags, rtk_tm->bat2_flags);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTK_TM, (const char *)rtk_tm, MAVLINK_MSG_ID_RTK_TM_MIN_LEN, MAVLINK_MSG_ID_RTK_TM_LEN, MAVLINK_MSG_ID_RTK_TM_CRC);
#endif
}

#if MAVLINK_MSG_ID_RTK_TM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rtk_tm_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_unix, uint32_t timestamp, int32_t lat, int32_t lon, int32_t alt, uint32_t h_acc, uint32_t v_acc, uint32_t srvin_dur, uint32_t srvin_mean_acc, uint32_t srvin_obs, uint16_t pdop, uint8_t fix_type, uint8_t num_satellites, uint16_t gnss_flags, uint16_t device_status_flags, uint16_t rtcm1005_cnt, uint16_t rtcm1074_cnt, uint16_t rtcm1084_cnt, uint16_t rtcm1094_cnt, uint16_t rtcm1124_cnt, uint16_t rtcm1230_cnt, uint16_t nav_pvt_cnt, uint16_t nav_svin_cnt, uint8_t psup_type, uint16_t psup_voltage, uint16_t psup_current, uint16_t bat1_voltage, uint16_t bat2_voltage, uint8_t bat1_soc, uint8_t bat2_soc, uint8_t bat1_flags, uint8_t bat2_flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_unix);
    _mav_put_uint32_t(buf, 8, timestamp);
    _mav_put_int32_t(buf, 12, lat);
    _mav_put_int32_t(buf, 16, lon);
    _mav_put_int32_t(buf, 20, alt);
    _mav_put_uint32_t(buf, 24, h_acc);
    _mav_put_uint32_t(buf, 28, v_acc);
    _mav_put_uint32_t(buf, 32, srvin_dur);
    _mav_put_uint32_t(buf, 36, srvin_mean_acc);
    _mav_put_uint32_t(buf, 40, srvin_obs);
    _mav_put_uint16_t(buf, 44, pdop);
    _mav_put_uint16_t(buf, 46, gnss_flags);
    _mav_put_uint16_t(buf, 48, device_status_flags);
    _mav_put_uint16_t(buf, 50, rtcm1005_cnt);
    _mav_put_uint16_t(buf, 52, rtcm1074_cnt);
    _mav_put_uint16_t(buf, 54, rtcm1084_cnt);
    _mav_put_uint16_t(buf, 56, rtcm1094_cnt);
    _mav_put_uint16_t(buf, 58, rtcm1124_cnt);
    _mav_put_uint16_t(buf, 60, rtcm1230_cnt);
    _mav_put_uint16_t(buf, 62, nav_pvt_cnt);
    _mav_put_uint16_t(buf, 64, nav_svin_cnt);
    _mav_put_uint16_t(buf, 66, psup_voltage);
    _mav_put_uint16_t(buf, 68, psup_current);
    _mav_put_uint16_t(buf, 70, bat1_voltage);
    _mav_put_uint16_t(buf, 72, bat2_voltage);
    _mav_put_uint8_t(buf, 74, fix_type);
    _mav_put_uint8_t(buf, 75, num_satellites);
    _mav_put_uint8_t(buf, 76, psup_type);
    _mav_put_uint8_t(buf, 77, bat1_soc);
    _mav_put_uint8_t(buf, 78, bat2_soc);
    _mav_put_uint8_t(buf, 79, bat1_flags);
    _mav_put_uint8_t(buf, 80, bat2_flags);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTK_TM, buf, MAVLINK_MSG_ID_RTK_TM_MIN_LEN, MAVLINK_MSG_ID_RTK_TM_LEN, MAVLINK_MSG_ID_RTK_TM_CRC);
#else
    mavlink_rtk_tm_t *packet = (mavlink_rtk_tm_t *)msgbuf;
    packet->timestamp_unix = timestamp_unix;
    packet->timestamp = timestamp;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;
    packet->h_acc = h_acc;
    packet->v_acc = v_acc;
    packet->srvin_dur = srvin_dur;
    packet->srvin_mean_acc = srvin_mean_acc;
    packet->srvin_obs = srvin_obs;
    packet->pdop = pdop;
    packet->gnss_flags = gnss_flags;
    packet->device_status_flags = device_status_flags;
    packet->rtcm1005_cnt = rtcm1005_cnt;
    packet->rtcm1074_cnt = rtcm1074_cnt;
    packet->rtcm1084_cnt = rtcm1084_cnt;
    packet->rtcm1094_cnt = rtcm1094_cnt;
    packet->rtcm1124_cnt = rtcm1124_cnt;
    packet->rtcm1230_cnt = rtcm1230_cnt;
    packet->nav_pvt_cnt = nav_pvt_cnt;
    packet->nav_svin_cnt = nav_svin_cnt;
    packet->psup_voltage = psup_voltage;
    packet->psup_current = psup_current;
    packet->bat1_voltage = bat1_voltage;
    packet->bat2_voltage = bat2_voltage;
    packet->fix_type = fix_type;
    packet->num_satellites = num_satellites;
    packet->psup_type = psup_type;
    packet->bat1_soc = bat1_soc;
    packet->bat2_soc = bat2_soc;
    packet->bat1_flags = bat1_flags;
    packet->bat2_flags = bat2_flags;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTK_TM, (const char *)packet, MAVLINK_MSG_ID_RTK_TM_MIN_LEN, MAVLINK_MSG_ID_RTK_TM_LEN, MAVLINK_MSG_ID_RTK_TM_CRC);
#endif
}
#endif

#endif

// MESSAGE RTK_TM UNPACKING


/**
 * @brief Get field timestamp_unix from rtk_tm message
 *
 * @return [us] Timestamp (microseconds since UNIX epoch).
 */
static inline uint64_t mavlink_msg_rtk_tm_get_timestamp_unix(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field timestamp from rtk_tm message
 *
 * @return [ms] Timestamp (milliseconds since system boot).
 */
static inline uint32_t mavlink_msg_rtk_tm_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field lat from rtk_tm message
 *
 * @return [degE7] Latitude.
 */
static inline int32_t mavlink_msg_rtk_tm_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field lon from rtk_tm message
 *
 * @return [degE7] Longitude.
 */
static inline int32_t mavlink_msg_rtk_tm_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field alt from rtk_tm message
 *
 * @return [mm] Altitude (MSL).
 */
static inline int32_t mavlink_msg_rtk_tm_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field h_acc from rtk_tm message
 *
 * @return [mm] Horizontal position uncertainty (standard deviation).
 */
static inline uint32_t mavlink_msg_rtk_tm_get_h_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  24);
}

/**
 * @brief Get field v_acc from rtk_tm message
 *
 * @return [mm] Altitude uncertainty (standard deviation).
 */
static inline uint32_t mavlink_msg_rtk_tm_get_v_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  28);
}

/**
 * @brief Get field srvin_dur from rtk_tm message
 *
 * @return [s] Passed survey-in observation time.
 */
static inline uint32_t mavlink_msg_rtk_tm_get_srvin_dur(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  32);
}

/**
 * @brief Get field srvin_mean_acc from rtk_tm message
 *
 * @return [0.1 mm] Current survey-in mean position accuracy.
 */
static inline uint32_t mavlink_msg_rtk_tm_get_srvin_mean_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  36);
}

/**
 * @brief Get field srvin_obs from rtk_tm message
 *
 * @return  Number of position observations used during survey-in.
 */
static inline uint32_t mavlink_msg_rtk_tm_get_srvin_obs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  40);
}

/**
 * @brief Get field pdop from rtk_tm message
 *
 * @return [0.01] Position dilution of precision.
 */
static inline uint16_t mavlink_msg_rtk_tm_get_pdop(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  44);
}

/**
 * @brief Get field fix_type from rtk_tm message
 *
 * @return  GPS fix type.
 */
static inline uint8_t mavlink_msg_rtk_tm_get_fix_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  74);
}

/**
 * @brief Get field num_satellites from rtk_tm message
 *
 * @return  Number of satellites used in Nav Solution.
 */
static inline uint8_t mavlink_msg_rtk_tm_get_num_satellites(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  75);
}

/**
 * @brief Get field gnss_flags from rtk_tm message
 *
 * @return  Bitmap showing GNSS status flags.
 */
static inline uint16_t mavlink_msg_rtk_tm_get_gnss_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  46);
}

/**
 * @brief Get field device_status_flags from rtk_tm message
 *
 * @return  Bitmap showing device status flags.
 */
static inline uint16_t mavlink_msg_rtk_tm_get_device_status_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  48);
}

/**
 * @brief Get field rtcm1005_cnt from rtk_tm message
 *
 * @return  RTCM1005 message count.
 */
static inline uint16_t mavlink_msg_rtk_tm_get_rtcm1005_cnt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  50);
}

/**
 * @brief Get field rtcm1074_cnt from rtk_tm message
 *
 * @return  RTCM1074 message count.
 */
static inline uint16_t mavlink_msg_rtk_tm_get_rtcm1074_cnt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  52);
}

/**
 * @brief Get field rtcm1084_cnt from rtk_tm message
 *
 * @return  RTCM1084 message count.
 */
static inline uint16_t mavlink_msg_rtk_tm_get_rtcm1084_cnt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  54);
}

/**
 * @brief Get field rtcm1094_cnt from rtk_tm message
 *
 * @return  RTCM1094 message count.
 */
static inline uint16_t mavlink_msg_rtk_tm_get_rtcm1094_cnt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  56);
}

/**
 * @brief Get field rtcm1124_cnt from rtk_tm message
 *
 * @return  RTCM1124 message count.
 */
static inline uint16_t mavlink_msg_rtk_tm_get_rtcm1124_cnt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  58);
}

/**
 * @brief Get field rtcm1230_cnt from rtk_tm message
 *
 * @return  RTCM1230 message count.
 */
static inline uint16_t mavlink_msg_rtk_tm_get_rtcm1230_cnt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  60);
}

/**
 * @brief Get field nav_pvt_cnt from rtk_tm message
 *
 * @return  NAV-PVT message count.
 */
static inline uint16_t mavlink_msg_rtk_tm_get_nav_pvt_cnt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  62);
}

/**
 * @brief Get field nav_svin_cnt from rtk_tm message
 *
 * @return  NAV-SVIN message count.
 */
static inline uint16_t mavlink_msg_rtk_tm_get_nav_svin_cnt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  64);
}

/**
 * @brief Get field psup_type from rtk_tm message
 *
 * @return  Power supply type.
 */
static inline uint8_t mavlink_msg_rtk_tm_get_psup_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  76);
}

/**
 * @brief Get field psup_voltage from rtk_tm message
 *
 * @return [mV] Power supply budget voltage.
 */
static inline uint16_t mavlink_msg_rtk_tm_get_psup_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  66);
}

/**
 * @brief Get field psup_current from rtk_tm message
 *
 * @return [mA] Power supply budget current.
 */
static inline uint16_t mavlink_msg_rtk_tm_get_psup_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  68);
}

/**
 * @brief Get field bat1_voltage from rtk_tm message
 *
 * @return [mV] Battery 1 voltage.
 */
static inline uint16_t mavlink_msg_rtk_tm_get_bat1_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  70);
}

/**
 * @brief Get field bat2_voltage from rtk_tm message
 *
 * @return [mV] Battery 2 voltage.
 */
static inline uint16_t mavlink_msg_rtk_tm_get_bat2_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  72);
}

/**
 * @brief Get field bat1_soc from rtk_tm message
 *
 * @return [%] Battery 1 state of charge.
 */
static inline uint8_t mavlink_msg_rtk_tm_get_bat1_soc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  77);
}

/**
 * @brief Get field bat2_soc from rtk_tm message
 *
 * @return [%] Battery 2 state of charge.
 */
static inline uint8_t mavlink_msg_rtk_tm_get_bat2_soc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  78);
}

/**
 * @brief Get field bat1_flags from rtk_tm message
 *
 * @return  Bitmap showing battery 1 status flags.
 */
static inline uint8_t mavlink_msg_rtk_tm_get_bat1_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  79);
}

/**
 * @brief Get field bat2_flags from rtk_tm message
 *
 * @return  Bitmap showing battery 2 status flags.
 */
static inline uint8_t mavlink_msg_rtk_tm_get_bat2_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  80);
}

/**
 * @brief Decode a rtk_tm message into a struct
 *
 * @param msg The message to decode
 * @param rtk_tm C-struct to decode the message contents into
 */
static inline void mavlink_msg_rtk_tm_decode(const mavlink_message_t* msg, mavlink_rtk_tm_t* rtk_tm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rtk_tm->timestamp_unix = mavlink_msg_rtk_tm_get_timestamp_unix(msg);
    rtk_tm->timestamp = mavlink_msg_rtk_tm_get_timestamp(msg);
    rtk_tm->lat = mavlink_msg_rtk_tm_get_lat(msg);
    rtk_tm->lon = mavlink_msg_rtk_tm_get_lon(msg);
    rtk_tm->alt = mavlink_msg_rtk_tm_get_alt(msg);
    rtk_tm->h_acc = mavlink_msg_rtk_tm_get_h_acc(msg);
    rtk_tm->v_acc = mavlink_msg_rtk_tm_get_v_acc(msg);
    rtk_tm->srvin_dur = mavlink_msg_rtk_tm_get_srvin_dur(msg);
    rtk_tm->srvin_mean_acc = mavlink_msg_rtk_tm_get_srvin_mean_acc(msg);
    rtk_tm->srvin_obs = mavlink_msg_rtk_tm_get_srvin_obs(msg);
    rtk_tm->pdop = mavlink_msg_rtk_tm_get_pdop(msg);
    rtk_tm->gnss_flags = mavlink_msg_rtk_tm_get_gnss_flags(msg);
    rtk_tm->device_status_flags = mavlink_msg_rtk_tm_get_device_status_flags(msg);
    rtk_tm->rtcm1005_cnt = mavlink_msg_rtk_tm_get_rtcm1005_cnt(msg);
    rtk_tm->rtcm1074_cnt = mavlink_msg_rtk_tm_get_rtcm1074_cnt(msg);
    rtk_tm->rtcm1084_cnt = mavlink_msg_rtk_tm_get_rtcm1084_cnt(msg);
    rtk_tm->rtcm1094_cnt = mavlink_msg_rtk_tm_get_rtcm1094_cnt(msg);
    rtk_tm->rtcm1124_cnt = mavlink_msg_rtk_tm_get_rtcm1124_cnt(msg);
    rtk_tm->rtcm1230_cnt = mavlink_msg_rtk_tm_get_rtcm1230_cnt(msg);
    rtk_tm->nav_pvt_cnt = mavlink_msg_rtk_tm_get_nav_pvt_cnt(msg);
    rtk_tm->nav_svin_cnt = mavlink_msg_rtk_tm_get_nav_svin_cnt(msg);
    rtk_tm->psup_voltage = mavlink_msg_rtk_tm_get_psup_voltage(msg);
    rtk_tm->psup_current = mavlink_msg_rtk_tm_get_psup_current(msg);
    rtk_tm->bat1_voltage = mavlink_msg_rtk_tm_get_bat1_voltage(msg);
    rtk_tm->bat2_voltage = mavlink_msg_rtk_tm_get_bat2_voltage(msg);
    rtk_tm->fix_type = mavlink_msg_rtk_tm_get_fix_type(msg);
    rtk_tm->num_satellites = mavlink_msg_rtk_tm_get_num_satellites(msg);
    rtk_tm->psup_type = mavlink_msg_rtk_tm_get_psup_type(msg);
    rtk_tm->bat1_soc = mavlink_msg_rtk_tm_get_bat1_soc(msg);
    rtk_tm->bat2_soc = mavlink_msg_rtk_tm_get_bat2_soc(msg);
    rtk_tm->bat1_flags = mavlink_msg_rtk_tm_get_bat1_flags(msg);
    rtk_tm->bat2_flags = mavlink_msg_rtk_tm_get_bat2_flags(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RTK_TM_LEN? msg->len : MAVLINK_MSG_ID_RTK_TM_LEN;
        memset(rtk_tm, 0, MAVLINK_MSG_ID_RTK_TM_LEN);
    memcpy(rtk_tm, _MAV_PAYLOAD(msg), len);
#endif
}
