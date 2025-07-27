#include "Engine.h"
#include <sstream>

Engine::Engine(std::string engine_type, int horsepower, int cylinders)
  : engine_type(engine_type), horsepower(horsepower), cylinders(cylinders) {
}

std::string Engine::ignite() const {
  std::ostringstream oss;
  oss << engine_type << " engine roaring with " << horsepower << " HP";
  return oss.str();
}

std::string Engine::toString() const {
  std::ostringstream oss;
  oss << engine_type << ", " << horsepower << " HP, " << cylinders << " cyl";
  return oss.str();
}