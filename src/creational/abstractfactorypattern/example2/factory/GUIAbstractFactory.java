package creational.abstractfactorypattern.example2.factory;

public class GUIAbstractFactory {
    public  static IFactory createFactory(String osType){
        if(osType.equals("windows")){
            return new WinFactory();
        }
        else if(osType.equals("mac")){
            return new MacFactory();
        }
        return null;
    }
}
