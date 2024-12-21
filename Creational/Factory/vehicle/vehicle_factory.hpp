#include <iostream>
#include "car.hpp"
#include "bike.hpp"
using namespace std;

class VehicleFactory{
    public:
        static Vehicle* getVehicle(const std::string& type);
};