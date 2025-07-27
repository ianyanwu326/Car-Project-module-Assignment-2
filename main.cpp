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

  