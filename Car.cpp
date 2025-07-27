#include "Car.h"

Car::Car(std::string make, std::string model, int year, std::string body_type)
  : Vehicle(make, model, year), body_type(body_type) {
  wheel_count = 4;
}

std::string Car::getDescription() const {
  return Vehicle::getDescription() + " (" + body_type + ")";
} 