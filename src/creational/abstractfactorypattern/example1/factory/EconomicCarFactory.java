package creational.abstractfactorypattern.example1.factory;

import creational.abstractfactorypattern.example1.factory.Cars.Car;
import creational.abstractfactorypattern.example1.factory.Cars.EconomicCar1;
import creational.abstractfactorypattern.example1.factory.Cars.EconomicCar2;

public class EconomicCarFactory implements AbstractFactory{
    public Car getInstance(int price){
        if(price<=300000){
            return new EconomicCar1();
        }
        else if(price>300000){
            return new EconomicCar2();
        }
        return null;
    }
}
