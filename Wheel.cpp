#include "Wheel.h"
#include <sstream>

Wheel::Wheel(int size, std::string tire_type, int pressure)
  : size(size), tire_type(tire_type), pressure(pressure) {
}

std::string Wheel::inflate(int psi) {
  pressure = psi;
  std::ostringstream oss;
  oss << "Wheel inflated to " << psi << " PSI";
  return oss.str();
}

std::string Wheel::toString() const {
  std::ostringstream oss;
  oss << size << "\" " << tire_type << " tire (" << pressure << " PSI)";
  return oss.str();
}