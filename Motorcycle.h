#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

class Motorcycle : public Vehicle {
private:
  std::string bike_type;

public:
  Motorcycle(std::string make, std::string model, int year, std::string bike_type = "standard");
  std::string start() override;
  std::string getDescription() const override;
};

#endif  