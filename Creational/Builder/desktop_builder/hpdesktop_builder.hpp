#ifndef HPDESKTOP_BUILDER
#define HPDESKTOP_BUILDER

#include "desktop_builder.hpp"

class HpDesktopBuilder : public DesktopBuilder
{
    void buildMonitor();
    void buildKeyBoard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};

#endif