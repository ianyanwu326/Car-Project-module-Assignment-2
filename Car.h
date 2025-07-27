#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
  std::string body_type;

public:
  Car(std::string make, std::string model, int year, std::string body_type = "sedan");
  std::string getDescription() const override;
};

#endif