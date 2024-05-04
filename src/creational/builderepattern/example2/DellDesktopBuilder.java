package creational.builderepattern.example2;

public class DellDesktopBuilder extends DesktopBuilder {

    @Override
    public void buildMonitor() {
        /* Configure dell monitor here */
        desktop.setMonitor("Dell Monitor");
    }

    @Override
    public void buildKeyboard() {
        desktop.setKeyboard("Dell Keyboard");
    }

    @Override
    public void buildMouse() {
        desktop.setMouse("Dell Mouse");
    }

    @Override
    public void buildSpeaker() {
        desktop.setSpeaker("Dell Speaker");
    }

    @Override
    public void buildRam() {
        desktop.setRam("Dell Ram");
    }

    @Override
    public void buildProcessor() {
        desktop.setProcessor("Dell Processor");
    }

    @Override
    public void buildMotherBoard() {
        desktop.setMotherBoard("Dell MotherBoard");
    }
}
