#ifndef LOG_DRIVER_H__
#define LOG_DRIVER_H__

#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

#ifdef __cplusplus
extern "C" {
#endif


void log_init(void);

#ifdef __cplusplus
}
#endif

#endif // LOG_DRIVER_H__