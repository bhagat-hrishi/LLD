package behavioral.stratergypattern.example3;

import behavioral.stratergypattern.example3.strategies.SportsDriveStrategy;

public class OffRoadVehicle extends Vehicle {

    OffRoadVehicle(){
        super(new SportsDriveStrategy());
    }
}
