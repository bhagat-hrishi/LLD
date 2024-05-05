package creational.abstractfactorypattern.example1.factory;

import creational.abstractfactorypattern.example1.factory.Cars.Car;
import creational.abstractfactorypattern.example1.factory.Cars.LuxuryCar1;
import creational.abstractfactorypattern.example1.factory.Cars.LuxuryCar2;

public class LuxuryCarFactory implements AbstractFactory{
    public Car getInstance(int price){
        if(price>=1000000 && price<=2000000){
            return new LuxuryCar1();
        }
        if(price>2000000){
            return  new LuxuryCar2();
        }
        return null;
    }
}
