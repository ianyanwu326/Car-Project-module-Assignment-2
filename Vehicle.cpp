#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string make, std::string model, int year)
  : make(make), model(model), year(year), engine(nullptr), wheel_count(0) {
}

Vehicle::~Vehicle() {
  // Clean up dynamically allocated members if needed
}

std::string Vehicle::start() {
  if (engine) {
    return getDescription() + " is starting: " + engine->ignite();
  }
  return "No engine installed";
}

std::string Vehicle::getDescription() const {
  return std::to_string(year) + " " + make + " " + model;
}

void Vehicle::displayInfo() const {
  std::cout << "Vehicle: " << getDescription() << std::endl;
  if (engine) {
    std::cout << "Engine: " << engine->toString() << std::endl;
  }
  else {
    std::cout << "No engine" << std::endl;
  }
  std::cout << "Wheels: " << wheels.size() << "/" << wheel_count << std::endl;
}

bool Vehicle::addWheel(Wheel* wheel) {
  if (wheels.size() < static_cast<size_t>(wheel_count)) {
    wheels.push_back(wheel);
    return true;
  }
  return false;
}

void Vehicle::setEngine(Engine* engine) {
  this->engine = engine;
}