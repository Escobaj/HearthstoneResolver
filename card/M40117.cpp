//
// Created by Jo on 19/12/2016.
//

#include "M40117.h"

M40117::M40117(const EventHandler &e) : Minion(e) {
    this->set_id(40117);
    this->set_attackMax(7);
    this->set_defaultCost(0);
    this->set_name("Illidan Stormrage Cheat");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DEMON);
    this->set_attackMax(7);
    this->set_maxHealth(5);
}

void M40117::init() {
}