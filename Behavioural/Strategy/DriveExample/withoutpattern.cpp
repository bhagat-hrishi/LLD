#include <iostream>
using namespace std;

class Vehicle
{
    public:
        void drive(){
            cout<<"Normal drive capability";
        }
};

class SportsVechicle : public Vehicle
{
    public:
        //different drive logic
        void drive(){
            cout<<"Sports drive capability";
        }
};

class Passanger : public Vehicle
{

};

class OffRoadVechicle : public Vehicle
{
    public:
        //different drive logic
        void drive(){
            cout<<"Sports drive capability";
        }
};


int main()
{

}