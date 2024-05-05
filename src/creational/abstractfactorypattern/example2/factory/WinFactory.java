package creational.abstractfactorypattern.example2.factory;

import creational.abstractfactorypattern.example2.factory.Products.Button;
import creational.abstractfactorypattern.example2.factory.Products.TextBox;
import creational.abstractfactorypattern.example2.factory.Products.WinButton;
import creational.abstractfactorypattern.example2.factory.Products.WinTextBox;

public class WinFactory implements IFactory{

    @Override
    public Button createButton() {
        return new WinButton();
    }

    @Override
    public TextBox createTextBox() {
        return new WinTextBox();
    }

}
