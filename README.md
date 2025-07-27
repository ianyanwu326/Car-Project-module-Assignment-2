Project Overview

This project was created for my Computer Science 2 assignment to demonstrate object-oriented programming concepts in C++. The system models different types of vehicles (cars, trucks, and motorcycles) with their 
components like engines and wheels. A VehicleSystem class manages the collection of vehicles and demonstrates polymorphism in action.

System Purpose

The implementation showcases:
- Inheritance hierarchies (Vehicle -> Car/Truck/Motorcycle)
- Polymorphism through base class pointers
- Aggregation relationships (Vehicle has Engine/Wheel, VehicleSystem has Vehicles)
- Proper memory management
- Clean class organization and separation of concerns

Class Structure Overview
Core Components:
- Vehicle.h/.cpp- Abstract base class for all vehicles
- Car.h/.cpp - Derived class for passenger cars
- Truck.h/.cpp - Derived class for trucks
- Motorcycle.h/.cpp - Derived class for motorcycles

Vehicle Parts:
- Engine.h/.cpp - Manages engine specifications (type, horsepower, cylinders)
- Wheel.h/.cpp - Handles wheel/tire data (size, type, pressure)

management System:
- VehicleSystem.h/.cpp- Central class that aggregates and manages all vehicles
- main.cpp- Demonstration program that tests the system

How the System Works

Creating Vehicles:
   - i Initiated different vehicle types (Car, Truck, Motorcycle)
   - Each vehicle requires specific components (Engine, Wheels)

     The demonstration out put was
     I Complete inventory listing showing all vehicles and their components
     Each vehicle starting up with their unique startup sounds
      I created Proper wheel and engine configurations for each vehicle type

     The Special Features---
Polymorphic Behavior: All the vehicles are accessed through base class pointers
Memory Safety: VehicleSystem handles proper cleanup of all components
Type Safety: Each vehicle enforces correct wheel counts (2 for motorcycles, 4 for cars, etc.)
Extensible Design: Easy to add new vehicle types or components


In summary:--- The read me-----Follows--- 
the preferred structure and tone
Provides clear explanations of all major components
Includes code snippets to highlight key implementations
Explains the object-oriented concepts demonstrated
Gives an overview of how to interact with the system
Mentions the polymorphic behavior and aggregation relationships


Thank you and I hope you enjoy the Car System project!!!!
