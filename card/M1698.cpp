//
// Created by Jo on 19/12/2016.
//

#include "M1698.h"

M1698::M1698(const EventHandler &e) : Minion(e) {
    this->set_id(1698);
    this->set_attackMax(3);
    this->set_defaultCost(0);
    this->set_name("Damage Reflector");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(10);
}

void M1698::init() {
}