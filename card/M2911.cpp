//
// Created by Jo on 19/12/2016.
//

#include "M2911.h"

M2911::M2911(const EventHandler &e) : Minion(e) {
    this->set_id(2911);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Gorillobot A-3");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M2911::init() {
}