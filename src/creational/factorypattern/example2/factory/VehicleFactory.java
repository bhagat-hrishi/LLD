package creational.factorypattern.example2.factory;

public class VehicleFactory {
    public static Vehicle getVehicle(String vehicleType){
        Vehicle vehicle;
        if (vehicleType.equals("car")) {
            vehicle = new Car();
        } else if (vehicleType.equals("bike")) {
            vehicle = new Bike();
        } else {
            vehicle = null;
        }
        return vehicle;
    }
}
