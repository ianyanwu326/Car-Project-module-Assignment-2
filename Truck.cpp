#include "Truck.h"

Truck::Truck(std::string make, std::string model, int year, int towing_capacity)
  : Vehicle(make, model, year), towing_capacity(towing_capacity) {
  wheel_count = 6; // Semi-truck with 6 wheels
}

std::string Truck::getDescription() const {
  return Vehicle::getDescription() + " (Towing: " + std::to_string(towing_capacity) + " lbs)";
}

