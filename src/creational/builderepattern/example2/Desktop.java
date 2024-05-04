package creational.builderepattern.example2;

public class Desktop {

    //setters for desktop
    public void setMonitor(String monitor) {
        this.monitor = monitor;
    }

    public void setKeyboard(String keyboard) {
        this.keyboard = keyboard;
    }

    public void setMouse(String mouse) {
        this.mouse = mouse;
    }

    public void setSpeaker(String speaker) {
        this.speaker = speaker;
    }

    public void setRam(String ram) {
        this.ram = ram;
    }

    public void setProcessor(String processor) {
        this.processor = processor;
    }

    public void setMotherBoard(String motherBoard) {
        this.motherBoard = motherBoard;
    }

    public  void  showSpecs(){
        System.out.println("\n____________________________" +
                "\nMonitor "+monitor +
                "\nKeyBoard "+keyboard +
                "\nMouse "+mouse +
                "\nSpeaker "+speaker +
                "\nRAM "+ram +
                "\nProcessor "+processor +
                "\nMotherBoard "+motherBoard +
                "\n____________________________"
        );
    }
    private String monitor;
    private String keyboard;
    private String mouse;
    private String speaker;
    private String ram;
    private String processor;
    private String motherBoard;



}
