//
// Created by Jo on 19/12/2016.
//

#include "M146.h"

M146::M146(const EventHandler &e) : Minion(e) {
    this->set_id(146);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Pouletisateur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(0);
    this->set_maxHealth(3);
}

void M146::init() {
}