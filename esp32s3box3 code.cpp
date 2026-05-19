#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#include "bsp/esp-box-3.h"
#include "esp_lvgl_port.h"
#include "lvgl.h"

#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

static const char *TAG="BOX3";

const char* ssid="kishor";
const char* pass="kishor547";

#define CH_ID "3233125"
#define READ_KEY "ADNQ1HIAX2L1O5ZB"

static lv_obj_t *label;

void readTS(void *arg){

  while(1){

    String url="https://api.thingspeak.com/channels/"
    CH_ID"/feeds/last.json?api_key="READ_KEY;

    HTTPClient http;
    http.begin(url);
    int code=http.GET();

    if(code>0){
      String data=http.getString();

      StaticJsonDocument<256> doc;
      deserializeJson(doc,data);

      int f1=doc["field1"];
      int f2=doc["field2"];
      int f3=doc["field3"];
      int f4=doc["field4"];

      char buf[80];
      sprintf(buf,
      "F1:%d\nF2:%d\nF3:%d\nF4:%d",
      f1,f2,f3,f4);

      lv_label_set_text(label,buf);
    }
    http.end();
    vTaskDelay(15000/portTICK_PERIOD_MS);
  }
}

void app_main(void){

  bsp_i2c_init();
  bsp_display_start();
  bsp_display_backlight_on();

  WiFi.begin(ssid,pass);
  while(WiFi.status()!=WL_CONNECTED)
    vTaskDelay(500/portTICK_PERIOD_MS);

  bsp_display_lock(0);
  label=lv_label_create(lv_scr_act());
  lv_label_set_text(label,"WAITING...");
  lv_obj_center(label);
  bsp_display_unlock();

  xTaskCreate(readTS,"read",4096,NULL,5,NULL);
}
