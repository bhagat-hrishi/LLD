package behavioral.stratergypattern.example3;

import behavioral.stratergypattern.example3.strategies.NormalDriveStrategy;

public class GoodVehicle extends Vehicle{
    GoodVehicle(){
        super(new NormalDriveStrategy());
    }
}
