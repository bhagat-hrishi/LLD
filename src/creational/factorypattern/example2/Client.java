package creational.factorypattern.example2;

import creational.factorypattern.example2.factory.Vehicle;
import creational.factorypattern.example2.factory.VehicleFactory;

import java.util.Scanner;

public class Client {
    public static void main(String[] args) {
        String vehicleType;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter vehicle type (car/bike): ");
        vehicleType = scanner.nextLine();
        Vehicle vehicle = VehicleFactory.getVehicle(vehicleType);
        if (vehicle != null) {
            vehicle.createVehicle();
        } else {
            System.out.println("Invalid vehicle type.");
        }
        scanner.close();
    }
}
