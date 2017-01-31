//
// Created by Jo on 19/12/2016.
//

#include "M2261.h"

M2261::M2261(const EventHandler &e) : Minion(e) {
    this->set_id(2261);
    this->set_attackMax(8);
    this->set_defaultCost(9);
    this->set_name("Nefarian");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M2261::init() {
}