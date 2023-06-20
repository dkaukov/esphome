#pragma once

#include "esphome/core/component.h"

namespace esphome {
namespace jjy {

class JJY : public Component {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
};


}  // namespace empty_component
}  // namespace esphome