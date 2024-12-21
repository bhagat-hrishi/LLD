#include <iostream>
#include <string>
#include "vehicle_factory.hpp"
using namespace std;


int main()
{
    cout<<"Enter vehicle type (car or bike) :\n";
    string vehicleType;
    cin>>vehicleType;

    Vehicle* vehicle = VehicleFactory::getVehicle(vehicleType);
    if(vehicle!=nullptr)
        vehicle->createVehicle();
    else 
        cout<<"\nInvalid Input provided: ";
    return 0;
}