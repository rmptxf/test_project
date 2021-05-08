#ifndef BLUETOOTH_DRIVER_H__
#define BLUETOOTH_DRIVER_H__

#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "nordic_common.h"
#include "nrf.h"
#include "app_error.h"
#include "ble.h"
#include "ble_hci.h"
#include "ble_srv_common.h"
#include "ble_advdata.h"
#include "ble_advertising.h"
#include "ble_conn_params.h"
#include "nrf_sdh.h"
#include "nrf_sdh_soc.h"
#include "nrf_sdh_ble.h"
#include "app_timer.h"
#include "fds.h"
#include "peer_manager.h"
#include "peer_manager_handler.h"
#include "bsp_btn_ble.h"
#include "sensorsim.h"
#include "ble_conn_state.h"
#include "nrf_ble_gatt.h"
#include "nrf_ble_qwr.h"
#include "nrf_pwr_mgmt.h"

#include "log_driver.h"
#include "ble_nus.h"


#ifdef __cplusplus
extern "C" {
#endif

void bluetooth_init(void);
void timers_init(void);
void power_management_init(void);
void idle_state_handle(void);
void advertising_start(bool erase_bonds);
void disconnect(void);
void restart_adv_without_whitelist(void);
void sleep_mode_enter(void);

#ifdef __cplusplus
}
#endif

#endif // BLUETOOTH_DRIVER_H__