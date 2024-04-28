package behavioral.stratergypattern.example3.strategies;

public class SportsDriveStrategy implements  DriveStrategy{
    @Override
    public void drive() {
        System.out.println("Sports Drive Capability");
    }
}
