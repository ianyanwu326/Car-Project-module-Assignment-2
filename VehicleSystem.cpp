#include "VehicleSystem.h"
#include <iostream>

VehicleSystem::~VehicleSystem() {
  // Clean up dynamically allocated objects
  for (auto v : vehicles) delete v;
  for (auto e : engines) delete e;
  for (auto w : wheels) delete w;
}

void VehicleSystem::addVehicle(Vehicle* vehicle) {
  vehicles.push_back(vehicle);
}

void VehicleSystem::addEngine(Engine* engine) {
  engines.push_back(engine);
}

void VehicleSystem::addWheel(Wheel* wheel) {
  wheels.push_back(wheel);
}

bool VehicleSystem::installEngine(int vehicle_index, int engine_index) {
  if (vehicle_index >= 0 && vehicle_index < vehicles.size() &&
    engine_index >= 0 && engine_index < engines.size()) {
    vehicles[vehicle_index]->setEngine(engines[engine_index]);
    return true;
  }
  return false;
}

bool VehicleSystem::installWheel(int vehicle_index, int wheel_index) {
  if (vehicle_index >= 0 && vehicle_index < vehicles.size() &&
    wheel_index >= 0 && wheel_index < wheels.size()) {
    return vehicles[vehicle_index]->addWheel(wheels[wheel_index]);
  }
  return false;
}

void VehicleSystem::displayAllVehicles() const {
  for (const auto& vehicle : vehicles) {
    vehicle->displayInfo();
    std::cout << "----------------------------------------" << std::endl;
  }
}

void VehicleSystem::startAllVehicles() const {
  for (const auto& vehicle : vehicles) {
    std::cout << vehicle->start() << std::endl;
  }
} 
