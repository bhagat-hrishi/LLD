package creational.abstractfactorypattern.example1.client;
import creational.abstractfactorypattern.example1.factory.AbstractFactory;
import creational.abstractfactorypattern.example1.factory.AbstractFactoryProducer;
import creational.abstractfactorypattern.example1.factory.Cars.Car;

public class Demo {
    public static void main(String[] args) {
        AbstractFactoryProducer abstractFactoryProducerOb = new AbstractFactoryProducer();
        /*Instead of returning original object like factory pattern this will return factory*/
        AbstractFactory abstractFactoryOb = abstractFactoryProducerOb.getFactoryInstance("Premium");
        /*once you get respective factory you do your work*/
        Car carObj = abstractFactoryOb.getInstance(5000000);
        System.out.println(carObj.getTopSpeed());
    }
}