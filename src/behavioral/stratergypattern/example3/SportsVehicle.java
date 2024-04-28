package behavioral.stratergypattern.example3;


import behavioral.stratergypattern.example3.strategies.SportsDriveStrategy;

public class SportsVehicle extends Vehicle {

    SportsVehicle(){
        super(new SportsDriveStrategy());
    }
}
