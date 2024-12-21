#include "vehicle_factory.hpp"

Vehicle* VehicleFactory::getVehicle(const std::string& vehicleType)
{
    Vehicle* Vehicle = nullptr;
    if(vehicleType=="car")
    {
        Vehicle = new Car();
    }
    else if(vehicleType == "bike")
    {
        Vehicle = new Bike();
    }
    return Vehicle;
}