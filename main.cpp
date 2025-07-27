#include <iostream>
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "Engine.h"
#include "Wheel.h"
#include "VehicleSystem.h"

int main() {
  // Create vehicle system
  VehicleSystem system;

  // Create some engines
  system.addEngine(new Engine("V8", 400, 8));
  system.addEngine(new Engine("Inline-4", 180, 4));
  system.addEngine(new Engine("V-Twin", 90, 2));

  // Create some wheels
  for (int i = 0; i < 10; i++) {
    system.addWheel(new Wheel(17, "all-season"));
  }
  for (int i = 0; i < 6; i++) {
    system.addWheel(new Wheel(22, "all-terrain"));
  }
  for (int i = 0; i < 4; i++) {
    system.addWheel(new Wheel(19, "sport"));
  }

  // Create vehicles
  system.addVehicle(new Car("Toyota", "Camry", 2022, "sedan"));
  system.addVehicle(new Truck("Ford", "F-150", 2020, 12000));
  system.addVehicle(new Motorcycle("Harley-Davidson", "Street 750", 2021, "cruiser"));

  // Install engines
  system.installEngine(0, 1);  // Sedan gets I4
  system.installEngine(1, 0);  // Truck gets V8
  system.installEngine(2, 2);  // Bike gets V-Twin

  // Install wheels
  for (int i = 0; i < 4; i++) system.installWheel(0, i);  // Sedan wheels
  for (int i = 0; i < 6; i++) system.installWheel(1, 10 + i); // Truck wheels
  for (int i = 0; i < 2; i++) system.installWheel(2, 16 + i); // Bike wheels

  // Demonstrate system
  std::cout << "\nAll Vehicles in System:\n";
  system.displayAllVehicles();

  std::cout << "\nStarting All Vehicles:\n";
  system.startAllVehicles();

  return 0;
}