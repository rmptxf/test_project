#include "led_driver.h"

/**@brief Function for initializing leds.
 *
 */
void leds_init(void)
{
    ret_code_t err_code;

    err_code = bsp_init(BSP_INIT_LEDS, NULL);
    APP_ERROR_CHECK(err_code);

    NRF_LOG_INFO("LEDs initialized.");
}
