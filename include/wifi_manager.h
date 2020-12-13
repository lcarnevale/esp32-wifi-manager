#include "esp_err.h"
#include "esp_event.h"


void start_wifi_connecting();

void wifi_event_handler(
    void *arg, 
    esp_event_base_t event_base, 
    int32_t event_id, 
    void *event_data
);
