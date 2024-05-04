package creational.builderepattern.example2;

public class HpDesktopBuilder extends DesktopBuilder {

    @Override
    public void buildMonitor() {
        /* Configure hp monitor here */
        desktop.setMonitor("Hp Monitor");
    }

    @Override
    public void buildKeyboard() {
        desktop.setKeyboard("Hp Keyboard");
    }

    @Override
    public void buildMouse() {
        desktop.setMouse("Hp Mouse");
    }

    @Override
    public void buildSpeaker() {
        desktop.setSpeaker("Hp Speaker");
    }

    @Override
    public void buildRam() {
        desktop.setRam("Hp Ram");
    }

    @Override
    public void buildProcessor() {
        desktop.setProcessor("Hp Processor");
    }

    @Override
    public void buildMotherBoard() {
        desktop.setMotherBoard("Hp MotherBoard");
    }
}
