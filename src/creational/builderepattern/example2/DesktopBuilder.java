package creational.builderepattern.example2;

public abstract class DesktopBuilder {

    protected  Desktop desktop;//desktop product should be accessible to concreted builder so made protected

    DesktopBuilder(){
       //as soon as builder is created we are creating product for it
       desktop = new Desktop();
    }
   public abstract  void buildMonitor();
   public abstract void buildKeyboard();
   public  abstract  void buildMouse();
   public abstract  void buildSpeaker();
   public abstract void buildRam();
   public abstract  void buildProcessor();
   public abstract void  buildMotherBoard();

   /*
   as we are creating Desktop product in both cases we can have getter here.
   but for example if have to create car and scooter in such case we have should have getter inside there
   CarConcreteBuilder Class and ScooterConcteteBuilder class
   */
   public Desktop getDesktop(){
      return this.desktop;
   }
}
