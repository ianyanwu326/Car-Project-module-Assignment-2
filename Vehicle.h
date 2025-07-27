#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <vector>
#include "Wheel.h"
#include "Engine.h"

class Vehicle {
protected:
  std::string make;
  std::string model;
  int year;
  Engine* engine;
  std::vector<Wheel*> wheels;
  int wheel_count;

public:
  Vehicle(std::string make, std::string model, int year);
  virtual ~Vehicle();

  virtual std::string start();
  virtual std::string getDescription() const;
  virtual void displayInfo() const;

  bool addWheel(Wheel* wheel);
  void setEngine(Engine* engine);

  // Getters
  std::string getMake() const { return make; }
  std::string getModel() const { return model; }
  int getYear() const { return year; }
};

#endif