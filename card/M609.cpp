//
// Created by Jo on 19/12/2016.
//

#include "M609.h"

M609::M609(const EventHandler &e) : Minion(e) {
    this->set_id(609);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Dragon féerique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M609::init() {
}