package creational.abstractfactorypattern.example2.factory.Products;

public class MacTextBox implements TextBox{

    @Override
    public void showText() {
        System.out.println("Show Mac TextBox");
    }
}
