#ifndef WHEEL_H
#define WHEEL_H

#include <string>

class Wheel {
private:
  int size;
  std::string tire_type;
  int pressure;

public:
  Wheel(int size, std::string tire_type, int pressure = 32);
  std::string inflate(int psi);
  std::string toString() const;
};


#endif