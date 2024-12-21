#ifndef DELLDESKTOP_BUILDER
#define DELLDESKTOP_BUILDER

#include "desktop_builder.hpp"

class DellDesktopBuilder : public DesktopBuilder
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