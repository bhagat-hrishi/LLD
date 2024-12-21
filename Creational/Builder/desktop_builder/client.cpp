#include "hpdesktop_builder.hpp"
#include "delldesktop_builder.hpp"
#include "desktop_director.hpp"

int main()
{

    HpDesktopBuilder* hpDesktopBuilder = new HpDesktopBuilder();
    DellDesktopBuilder* dellDesktopBuilder = new DellDesktopBuilder();

    DesktopDirector* director1 = new DesktopDirector(hpDesktopBuilder);
    DesktopDirector* director2 = new DesktopDirector(dellDesktopBuilder);

    Desktop *desktop1 = director1->getDesktop();
    Desktop *desktop2 = director2->getDesktop();

    desktop1->showSpecs();
    desktop2->showSpecs();
    return 0;
}