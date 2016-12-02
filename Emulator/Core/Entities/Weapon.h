//
// Created by escoba_j on 30/11/2016.
//

#ifndef HEARTHSTONERESOLVER_AWEAPON_H
#define HEARTHSTONERESOLVER_AWEAPON_H

#include "ADamager.h"

class Weapon : public ADamager{
private:
    unsigned int _defaultDurability;
    unsigned int _currentDurability;
public:
    Weapon(const EventHandler &e);

    State play(unsigned int order);


    unsigned int get_defaultDurability() const;

    void set_defaultDurability(unsigned int _defaultDurability);

    unsigned int get_currentDurability() const;

    void set_currentDurability(unsigned int _currentDurability);
};


#endif //HEARTHSTONERESOLVER_AWEAPON_H
