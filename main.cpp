#include <iostream>
#include "Emulator/Core/Event/EventHandler.h"
#include "Emulator/test/Weapon1.h"

int main() {
    EventHandler e;
    Weapon1      weapon1(e);
    Weapon1      weapon2(e);
    Weapon1      weapon3(e);
    Weapon1      weapon4(e);

    std::vector<ACard *> v;

    v.push_back(&weapon1);
    v.push_back(&weapon2);
    v.push_back(&weapon3);
    v.push_back(&weapon4);

    std::cout << v[0]->get_defaultCost() << std::endl;

    Weapon       *tmp = dynamic_cast<Weapon *>(v[0]);

    if (tmp != NULL) {
        tmp->set_attackMax(5);
        std::cout << tmp->get_attackMax() << std::endl;
    }

    v[1]->type;
    if (){
        dynamic_cast<...>(v[1]);

    }

    std::cout << v[0]->get_defaultCost() << std::endl;
    return 0;
}