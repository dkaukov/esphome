#include "esphome/core/log.h"
#include "empty_component.h"

namespace esphome {
namespace jjy {

static const char *TAG = "jjy.component";

void JJY::setup() {

}

void JJY::loop() {

}

void JJY::dump_config(){
    ESP_LOGCONFIG(TAG, "JJY component");
}


}  // namespace empty_component
}  // namespace esphome