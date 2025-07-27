#ifndef VEHICLESYSTEM_H
#define VEHICLESYSTEM_H

#include <vector>
#include "Vehicle.h"
#include "Engine.h"
#include "Wheel.h"

class VehicleSystem {
private:
  std::vector<Vehicle*> vehicles;
  std::vector<Engine*> engines;
  std::vector<Wheel*> wheels;

public:
  ~VehicleSystem();

  void addVehicle(Vehicle* vehicle);
  void addEngine(Engine* engine);
  void addWheel(Wheel* wheel);

  bool installEngine(int vehicle_index, int engine_index);
  bool installWheel(int vehicle_index, int wheel_index);

  void displayAllVehicles() const;
  void startAllVehicles() const;
};

#endif