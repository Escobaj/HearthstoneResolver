//
// Created by escoba_j on 30/11/2016.
//

#ifndef HEARTHSTONERESOLVER_WEAPON1_H
#define HEARTHSTONERESOLVER_WEAPON1_H


#include "../Core/Entities/Weapon.h"

class Weapon1 : public Weapon {
protected:
    void init();

public:
    Weapon1(const EventHandler &e);
};

#endif //HEARTHSTONERESOLVER_WEAPON1_H
