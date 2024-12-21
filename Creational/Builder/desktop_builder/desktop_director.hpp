
#ifndef DESKTOP_DIRECTOR
#define DESKTOP_DIRECTOR

#include "desktop_builder.hpp"
/**
 * builder has product , director has builder which is used to build product
 Builder will be send to director and director will use builder to create product
 main work of director - it tells the process by which our product will be build
*/
class DesktopDirector
{
    private:
        DesktopBuilder* desktopBuilder;
    public:
        DesktopDirector(DesktopBuilder* pDesktopBuilder)
        {
            desktopBuilder = pDesktopBuilder;    
        }

        Desktop* getDesktop(){
            return desktopBuilder->getDesktop();
        }

        Desktop* buildDesktop(){
            desktopBuilder->buildMonitor();
            desktopBuilder->buildMouse();
            desktopBuilder->buildRam();
            desktopBuilder->buildProcessor();
            desktopBuilder->buildKeyBoard();
            desktopBuilder->buildSpeaker();
            desktopBuilder->buildMotherBoard();
            return desktopBuilder->getDesktop();
        }
};

#endif