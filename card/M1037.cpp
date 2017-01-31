//
// Created by Jo on 19/12/2016.
//

#include "M1037.h"

M1037::M1037(const EventHandler &e) : Minion(e) {
    this->set_id(1037);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Drake du Crépuscule");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(4);
    this->set_maxHealth(1);
}

void M1037::init() {
}