#include <iostream>
#include <memory> // For smart pointers

using namespace std;

// Interface for drive strategies
class IDriveStrategy {
public:
    virtual void drive() const = 0;
    virtual ~IDriveStrategy() = default; // Virtual destructor for interface
};

// Normal drive strategy implementation
class NormalDriveStrategy : public IDriveStrategy {
public:
    void drive() const override {
        cout << "Normal Drive Strategy" << endl;
    }
};

// Sports drive strategy implementation
class SportsDriveStrategy : public IDriveStrategy {
public:
    void drive() const override {
        cout << "Sports Drive Strategy" << endl;
    }
};

// Vehicle base class
class Vehicle {
private:
    unique_ptr<IDriveStrategy> driveObject; // Use smart pointer for strategy

public:
    explicit Vehicle(unique_ptr<IDriveStrategy> strategy)
        : driveObject(move(strategy)) {}

    void drive() const {
        driveObject->drive();
    }

    virtual ~Vehicle() = default; // Virtual destructor for base class
};

// Off-road vehicle with a sports drive strategy
class OffRoadVehicle : public Vehicle {
public:
    OffRoadVehicle()
        : Vehicle(make_unique<SportsDriveStrategy>()) {}
};

// Sports vehicle with a sports drive strategy
class SportsVehicle : public Vehicle {
public:
    SportsVehicle()
        : Vehicle(make_unique<SportsDriveStrategy>()) {}
};

// Goods vehicle with a normal drive strategy
class GoodsVehicle : public Vehicle {
public:
    GoodsVehicle()
        : Vehicle(make_unique<NormalDriveStrategy>()) {}
};

int main() {
    // Create and use vehicles
    unique_ptr<Vehicle> vehicle = make_unique<SportsVehicle>();
    vehicle->drive();

    vehicle = make_unique<GoodsVehicle>();
    vehicle->drive();

    return 0;
}
