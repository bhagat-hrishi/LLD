package behavioral.stratergypattern.example3;

public class Client {
    public static void main(String[] args) {
        Vehicle vehicle = new SportsVehicle();
        vehicle.drive();

        vehicle = new GoodVehicle();
        vehicle.drive();
    }
}
