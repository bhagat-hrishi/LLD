package creational.abstractfactorypattern.example2.factory;

import creational.abstractfactorypattern.example2.factory.Products.Button;
import creational.abstractfactorypattern.example2.factory.Products.TextBox;

public interface IFactory {
    public Button createButton();
    public TextBox createTextBox();
}
