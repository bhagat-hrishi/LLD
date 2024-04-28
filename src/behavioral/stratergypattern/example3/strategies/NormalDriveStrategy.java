package behavioral.stratergypattern.example3.strategies;

public class NormalDriveStrategy  implements  DriveStrategy{
    @Override
    public void drive() {
        System.out.println("normal drive capability");
    }
}
