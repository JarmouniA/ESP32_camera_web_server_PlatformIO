#include <stdint.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_log.h"
#include "esp_spi_flash.h"

#include "app_camera.h"
#include "app_wifi.h"
#include "app_httpd.h"
#include "app_mdns.h"

static const char *TAG = "APP_Main";

void app_main()
{
  ESP_LOGI(TAG, "Starting main application");

  app_camera_main();
  app_wifi_main();
  app_httpd_main();
  app_mdns_main();
  
  while(true)
  {
    vTaskDelay(10 / portTICK_PERIOD_MS);
  }
  ESP_LOGI(TAG, "Main application execution has completed.");
}