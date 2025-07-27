#include "Motorcycle.h"

Motorcycle::Motorcycle(std::string make, std::string model, int year, std::string bike_type)
  : Vehicle(make, model, year), bike_type(bike_type) {
  wheel_count = 2;
}

std::string Motorcycle::start() {
  return "VROOM! " + Vehicle::start();
}

std::string Motorcycle::getDescription() const {
  return Vehicle::getDescription() + " (" + bike_type + ")";
}
