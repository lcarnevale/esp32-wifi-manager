# ESP32 WiFi Manager Component

This project includes the WiFi Manager component for ESP32.


## How to build it
Include it as an extra component within the project's ```CMakeLists.txt``` as follow:
```
...
set(EXTRA_COMPONENT_DIRS 
    /PATH-TO-COMPONENT/esp32-wifi-manager
)
...
``` 


## How to use it
Include the library within the main file as follow.
```
...
#include "wifi_manager.h"
...
```

Start the WiFi connection using the provided API.
```
...
start_wifi_connecting();
...
```

## Credits
This repository is the research result carried on by the FCRLab at University of Messina.