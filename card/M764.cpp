//
// Created by Jo on 19/12/2016.
//

#include "M764.h"

M764::M764(const EventHandler &e) : Minion(e) {
    this->set_id(764);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Totem de soins");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::TOTEM);
    this->set_attackMax(0);
    this->set_maxHealth(2);
}

void M764::init() {
}