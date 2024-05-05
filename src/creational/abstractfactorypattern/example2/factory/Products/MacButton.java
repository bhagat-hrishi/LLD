package creational.abstractfactorypattern.example2.factory.Products;

public class MacButton implements Button{
    @Override
    public void press() {
        System.out.println("Mac Button Press");
    }
}
