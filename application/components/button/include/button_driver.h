#ifndef BUTTON_DRIVER_H__
#define BUTTON_DRIVER_H__

#include "bsp_btn_ble.h"
#include "bluetooth_driver.h"
#include "log_driver.h"

#ifdef __cplusplus
extern "C" {
#endif

void buttons_init(bool * p_erase_bonds);

#ifdef __cplusplus
}
#endif

#endif // BUTTON_DRIVER_H__