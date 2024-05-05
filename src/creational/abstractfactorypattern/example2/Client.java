package creational.abstractfactorypattern.example2;

import creational.abstractfactorypattern.example2.factory.GUIAbstractFactory;
import creational.abstractfactorypattern.example2.factory.IFactory;
import creational.abstractfactorypattern.example2.factory.Products.Button;
import creational.abstractfactorypattern.example2.factory.Products.TextBox;

import java.util.Scanner;

public class Client {
    public static void main(String[] args) {
        /* Create a button or textbox based on type of Os (either win or mac) */
        String osType;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter os type (mac/windows): ");
        osType = scanner.nextLine();

        /*Instead of returning original object like factory pattern this will return factory*/
        IFactory factory = GUIAbstractFactory.createFactory(osType);

        /*once you get respective factory you do your work*/
        if (factory != null) {
            Button btn = factory.createButton();
            btn.press();

            TextBox textBox = factory.createTextBox();
            textBox.showText();
        } else {
            System.out.println("Invalid vehicle type.");
        }

        scanner.close();
    }
}
