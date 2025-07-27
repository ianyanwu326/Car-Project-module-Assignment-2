#ifndef ENGINE_H
#define ENGINE_H

#include <string>

class Engine {
private:
  std::string engine_type;
  int horsepower;
  int cylinders;

public:
  Engine(std::string engine_type, int horsepower, int cylinders);
  std::string ignite() const;
  std::string toString() const;
};

#endif