

#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>

#include "esp_system.h"
#include "nvs.h"
#include "nvs_flash.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "bt_spp.h"


void app_main_hid_ble(void *arg);

void app_main(void)
{
    

    
    xTaskCreate(app_main_spp_bt, "bluetooth", 4096, NULL, 10, NULL);
    vTaskDelay(1000 / portTICK_RATE_MS);
    xTaskCreate(app_main_hid_ble, "bluetooth_hid", 4096, NULL, 10, NULL);
    
    while (1)
    {
        vTaskDelay(1000 / portTICK_RATE_MS);
        
    }
    
    
}
