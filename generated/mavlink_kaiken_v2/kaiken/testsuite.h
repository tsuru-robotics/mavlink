/** @file
 *    @brief MAVLink comm protocol testsuite generated from kaiken.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef KAIKEN_TESTSUITE_H
#define KAIKEN_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_development(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_ardupilotmega(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_kaiken(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_development(system_id, component_id, last_msg);
    mavlink_test_ardupilotmega(system_id, component_id, last_msg);
    mavlink_test_kaiken(system_id, component_id, last_msg);
}
#endif

#include "../development/testsuite.h"
#include "../ardupilotmega/testsuite.h"


static void mavlink_test_fmu_tm(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FMU_TM >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_fmu_tm_t packet_in = {
        93372036854775807ULL,963497880,963498088,963498296,18275,18379,18483,211,22,89,156,223,34,101,168,235,46
    };
    mavlink_fmu_tm_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time = packet_in.time;
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.alt = packet_in.alt;
        packet1.hdg = packet_in.hdg;
        packet1.voltage_battery = packet_in.voltage_battery;
        packet1.current_battery = packet_in.current_battery;
        packet1.satellites_visible = packet_in.satellites_visible;
        packet1.fix_type = packet_in.fix_type;
        packet1.flight_state = packet_in.flight_state;
        packet1.rtcm_rate_wifi = packet_in.rtcm_rate_wifi;
        packet1.rtcm_rate_lora = packet_in.rtcm_rate_lora;
        packet1.flags = packet_in.flags;
        packet1.component_present = packet_in.component_present;
        packet1.component_health = packet_in.component_health;
        packet1.failsafe_flags = packet_in.failsafe_flags;
        packet1.battery_remaining = packet_in.battery_remaining;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FMU_TM_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FMU_TM_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fmu_tm_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_fmu_tm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fmu_tm_pack(system_id, component_id, &msg , packet1.time , packet1.satellites_visible , packet1.fix_type , packet1.hdg , packet1.lat , packet1.lon , packet1.alt , packet1.flight_state , packet1.rtcm_rate_wifi , packet1.rtcm_rate_lora , packet1.flags , packet1.component_present , packet1.component_health , packet1.failsafe_flags , packet1.voltage_battery , packet1.current_battery , packet1.battery_remaining );
    mavlink_msg_fmu_tm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fmu_tm_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time , packet1.satellites_visible , packet1.fix_type , packet1.hdg , packet1.lat , packet1.lon , packet1.alt , packet1.flight_state , packet1.rtcm_rate_wifi , packet1.rtcm_rate_lora , packet1.flags , packet1.component_present , packet1.component_health , packet1.failsafe_flags , packet1.voltage_battery , packet1.current_battery , packet1.battery_remaining );
    mavlink_msg_fmu_tm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_fmu_tm_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_fmu_tm_send(MAVLINK_COMM_1 , packet1.time , packet1.satellites_visible , packet1.fix_type , packet1.hdg , packet1.lat , packet1.lon , packet1.alt , packet1.flight_state , packet1.rtcm_rate_wifi , packet1.rtcm_rate_lora , packet1.flags , packet1.component_present , packet1.component_health , packet1.failsafe_flags , packet1.voltage_battery , packet1.current_battery , packet1.battery_remaining );
    mavlink_msg_fmu_tm_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FMU_TM") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FMU_TM) != NULL);
#endif
}

static void mavlink_test_rtk_tm(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RTK_TM >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_rtk_tm_t packet_in = {
        93372036854775807ULL,963497880,963498088,963498296,963498504,963498712,963498920,963499128,963499336,963499544,19523,19627,19731,19835,19939,20043,20147,20251,20355,20459,20563,20667,20771,20875,20979,99,166,233,44,111,178,245
    };
    mavlink_rtk_tm_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_unix = packet_in.timestamp_unix;
        packet1.timestamp = packet_in.timestamp;
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.alt = packet_in.alt;
        packet1.h_acc = packet_in.h_acc;
        packet1.v_acc = packet_in.v_acc;
        packet1.srvin_dur = packet_in.srvin_dur;
        packet1.srvin_mean_acc = packet_in.srvin_mean_acc;
        packet1.srvin_obs = packet_in.srvin_obs;
        packet1.pdop = packet_in.pdop;
        packet1.gnss_flags = packet_in.gnss_flags;
        packet1.device_status_flags = packet_in.device_status_flags;
        packet1.rtcm1005_cnt = packet_in.rtcm1005_cnt;
        packet1.rtcm1074_cnt = packet_in.rtcm1074_cnt;
        packet1.rtcm1084_cnt = packet_in.rtcm1084_cnt;
        packet1.rtcm1094_cnt = packet_in.rtcm1094_cnt;
        packet1.rtcm1124_cnt = packet_in.rtcm1124_cnt;
        packet1.rtcm1230_cnt = packet_in.rtcm1230_cnt;
        packet1.nav_pvt_cnt = packet_in.nav_pvt_cnt;
        packet1.nav_svin_cnt = packet_in.nav_svin_cnt;
        packet1.psup_voltage = packet_in.psup_voltage;
        packet1.psup_current = packet_in.psup_current;
        packet1.bat1_voltage = packet_in.bat1_voltage;
        packet1.bat2_voltage = packet_in.bat2_voltage;
        packet1.fix_type = packet_in.fix_type;
        packet1.num_satellites = packet_in.num_satellites;
        packet1.psup_type = packet_in.psup_type;
        packet1.bat1_soc = packet_in.bat1_soc;
        packet1.bat2_soc = packet_in.bat2_soc;
        packet1.bat1_flags = packet_in.bat1_flags;
        packet1.bat2_flags = packet_in.bat2_flags;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RTK_TM_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RTK_TM_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtk_tm_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_rtk_tm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtk_tm_pack(system_id, component_id, &msg , packet1.timestamp_unix , packet1.timestamp , packet1.lat , packet1.lon , packet1.alt , packet1.h_acc , packet1.v_acc , packet1.srvin_dur , packet1.srvin_mean_acc , packet1.srvin_obs , packet1.pdop , packet1.fix_type , packet1.num_satellites , packet1.gnss_flags , packet1.device_status_flags , packet1.rtcm1005_cnt , packet1.rtcm1074_cnt , packet1.rtcm1084_cnt , packet1.rtcm1094_cnt , packet1.rtcm1124_cnt , packet1.rtcm1230_cnt , packet1.nav_pvt_cnt , packet1.nav_svin_cnt , packet1.psup_type , packet1.psup_voltage , packet1.psup_current , packet1.bat1_voltage , packet1.bat2_voltage , packet1.bat1_soc , packet1.bat2_soc , packet1.bat1_flags , packet1.bat2_flags );
    mavlink_msg_rtk_tm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtk_tm_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_unix , packet1.timestamp , packet1.lat , packet1.lon , packet1.alt , packet1.h_acc , packet1.v_acc , packet1.srvin_dur , packet1.srvin_mean_acc , packet1.srvin_obs , packet1.pdop , packet1.fix_type , packet1.num_satellites , packet1.gnss_flags , packet1.device_status_flags , packet1.rtcm1005_cnt , packet1.rtcm1074_cnt , packet1.rtcm1084_cnt , packet1.rtcm1094_cnt , packet1.rtcm1124_cnt , packet1.rtcm1230_cnt , packet1.nav_pvt_cnt , packet1.nav_svin_cnt , packet1.psup_type , packet1.psup_voltage , packet1.psup_current , packet1.bat1_voltage , packet1.bat2_voltage , packet1.bat1_soc , packet1.bat2_soc , packet1.bat1_flags , packet1.bat2_flags );
    mavlink_msg_rtk_tm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_rtk_tm_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtk_tm_send(MAVLINK_COMM_1 , packet1.timestamp_unix , packet1.timestamp , packet1.lat , packet1.lon , packet1.alt , packet1.h_acc , packet1.v_acc , packet1.srvin_dur , packet1.srvin_mean_acc , packet1.srvin_obs , packet1.pdop , packet1.fix_type , packet1.num_satellites , packet1.gnss_flags , packet1.device_status_flags , packet1.rtcm1005_cnt , packet1.rtcm1074_cnt , packet1.rtcm1084_cnt , packet1.rtcm1094_cnt , packet1.rtcm1124_cnt , packet1.rtcm1230_cnt , packet1.nav_pvt_cnt , packet1.nav_svin_cnt , packet1.psup_type , packet1.psup_voltage , packet1.psup_current , packet1.bat1_voltage , packet1.bat2_voltage , packet1.bat1_soc , packet1.bat2_soc , packet1.bat1_flags , packet1.bat2_flags );
    mavlink_msg_rtk_tm_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RTK_TM") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RTK_TM) != NULL);
#endif
}

static void mavlink_test_kaiken(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_fmu_tm(system_id, component_id, last_msg);
    mavlink_test_rtk_tm(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // KAIKEN_TESTSUITE_H
