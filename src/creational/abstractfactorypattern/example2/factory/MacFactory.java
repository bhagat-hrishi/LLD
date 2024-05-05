package creational.abstractfactorypattern.example2.factory;

import creational.abstractfactorypattern.example2.factory.Products.Button;
import creational.abstractfactorypattern.example2.factory.Products.MacButton;
import creational.abstractfactorypattern.example2.factory.Products.MacTextBox;
import creational.abstractfactorypattern.example2.factory.Products.TextBox;

public class MacFactory implements IFactory{

    @Override
    public Button createButton() {
        return new MacButton();
    }

    @Override
    public TextBox createTextBox() {
        return new MacTextBox();
    }
}
