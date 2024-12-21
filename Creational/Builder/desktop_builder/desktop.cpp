
#include <iostream>
#include "deskop.hpp"


void Desktop :: setMonitor(string pMonitor) {   
    monitor = pMonitor;
}

void Desktop :: setKeyBoard(string pKeyBoard) {
    keyboard = pKeyBoard;
}

void Desktop :: setMouse(string pMouse) {
    mouse = pMouse;
}
void Desktop :: setSpeaker(string pSpeaker) {
    speaker = pSpeaker;
}

void Desktop :: setRam(string pRam) {
    ram = pRam;
}
void Desktop :: setProcessor(string pProcessor) {
    processor = pProcessor;
}
void Desktop :: setMotherBoard(string pMotherBoard){
    motherBoard = pMotherBoard;
}
void Desktop:: showSpecs() {
    cout << "--------------------------------------";
    cout << "Monitor " << monitor << endl;
    cout << "KeyBoard " << keyboard << endl;
    cout << "Mouse " << mouse << endl;
    cout << "Speaker " << speaker << endl;
    cout << "RAM " << ram << endl;
    cout << "Processor "<<processor << endl;
    cout << "--------------------------------------";
}