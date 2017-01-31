//
// Created by Jo on 19/12/2016.
//

#include "M1008.h"

M1008::M1008(const EventHandler &e) : Minion(e) {
    this->set_id(1008);
    this->set_attackMax(0);
    this->set_defaultCost(2);
    this->set_name("Totem Langue de feu");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::TOTEM);
    this->set_attackMax(0);
    this->set_maxHealth(3);
}

void M1008::init() {
}