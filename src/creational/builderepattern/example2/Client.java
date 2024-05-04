package creational.builderepattern.example2;

public class Client {
    public static void main(String[] args) {
        //2 types of builders
        HpDesktopBuilder hpDesktopBuilder = new HpDesktopBuilder();
        DellDesktopBuilder dellDesktopBuilder = new DellDesktopBuilder();

        //director for hp and pass hpdesktopbuilder
        DesktopDirector hpDesktopDirector = new DesktopDirector(hpDesktopBuilder);
        //directors for dell and pass delldesktopbuilder
        DesktopDirector dellDesktopDirector = new DesktopDirector(dellDesktopBuilder);

        //hp director building hp desktop
        hpDesktopDirector.buildDesktop();
        //get hp desktop
        Desktop createdHpDesktop = hpDesktopDirector.getDesktop();
        //show final hp desktop
        createdHpDesktop.showSpecs();

        //dell director building dell desktop
        dellDesktopDirector.buildDesktop();
        //get dell desktop
        Desktop createdDellDesktop = dellDesktopDirector.getDesktop();
        //show final dell desktop
        createdDellDesktop.showSpecs();
    }
}
