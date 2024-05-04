package creational.builderepattern.example2;

import sun.security.krb5.internal.crypto.Des;


public class DesktopDirector {

    private  DesktopBuilder desktopBuilder;

    /*
        Builder will be sent to director and director will use builder to create our product
    */
    DesktopDirector(DesktopBuilder desktopBuilderObj){
        this.desktopBuilder=desktopBuilderObj;
    }

    public Desktop getDesktop(){
        return desktopBuilder.getDesktop();
    }
    /*
    Main Function of director - tells the process by which our product will be build
    * */
    public  void buildDesktop(){
        desktopBuilder.buildMonitor();
        desktopBuilder.buildKeyboard();
        desktopBuilder.buildMouse();
        desktopBuilder.buildProcessor();
        desktopBuilder.buildRam();
        desktopBuilder.buildSpeaker();
    }
}
