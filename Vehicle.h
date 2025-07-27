#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <vector>
#include "Wheel.h"
#include "Engine.h"

// Base class for all vehicle types
class Vehicle {
protected:
  std::string make;       // Manufacturer of the vehicle
  std::string model;      // Model name
  int year;               // Manufacturing year
  Engine* engine;         // Pointer to the engine (aggregation)
  std::vector<Wheel*> wheels; // Collection of wheels (aggregation)
  int wheel_count;        // Required number of wheels for this vehicle

public:
  // Constructor
  Vehicle(std::string make, std::string model, int year);

  // Virtual destructor for proper cleanup of derived classes
  virtual ~Vehicle();

  // Virtual methods to be overridden by derived classes
  virtual std::string start();             // Start the vehicle
  virtual std::string getDescription() const; // Get vehicle description
  virtual void displayInfo() const;        // Display vehicle information

  // Wheel management
  bool addWheel(Wheel* wheel);             // Add a wheel to the vehicle

  // Engine management
  void setEngine(Engine* engine);          // Set the vehicle's engine

  // Getters
  std::string getMake() const { return make; }
  std::string getModel() const { return model; }
  int getYear() const { return year; }
};

#endif