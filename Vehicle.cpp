#include "Vehicle.h"
#include <iostream>

// Constructor implementation
Vehicle::Vehicle(std::string make, std::string model, int year)
  : make(make), model(model), year(year), engine(nullptr), wheel_count(0) {
}

// Destructor - clean up resources
Vehicle::~Vehicle() {
  // Note: In a complete implementation, we might delete engine and wheels here
  // But in our system, VehicleSystem owns these resources
}

// Start the vehicle
std::string Vehicle::start() {
  if (engine) {
    // If engine is installed, return startup message
    return getDescription() + " is starting: " + engine->ignite();
  }
  return "No engine installed";
}

// Get basic vehicle description
std::string Vehicle::getDescription() const {
  return std::to_string(year) + " " + make + " " + model;
}

// Display complete vehicle information
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

// Add a wheel to the vehicle
bool Vehicle::addWheel(Wheel* wheel) {
  // Check if we can add more wheels
  if (wheels.size() < static_cast<size_t>(wheel_count)) {
    wheels.push_back(wheel);
    return true;
  }
  return false;  // Already has maximum wheels
}

// Set the vehicle's engine
void Vehicle::setEngine(Engine* engine) {
  this->engine = engine;
}