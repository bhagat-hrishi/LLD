package creational.abstractfactorypattern.example1.factory;
import creational.abstractfactorypattern.example1.factory.Cars.Car;
public interface AbstractFactory {
    public Car getInstance(int price);
}
