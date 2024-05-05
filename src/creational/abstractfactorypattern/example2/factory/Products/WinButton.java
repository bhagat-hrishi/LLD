package creational.abstractfactorypattern.example2.factory.Products;

public class WinButton implements Button{
    @Override
    public void press() {
        System.out.println("Win Button Press");
    }
}
