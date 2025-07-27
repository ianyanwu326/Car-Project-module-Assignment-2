#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
  int towing_capacity;

public:
  Truck(std::string make, std::string model, int year, int towing_capacity);
  std::string getDescription() const override;
};

#endif