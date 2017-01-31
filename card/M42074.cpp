//
// Created by Jo on 19/12/2016.
//

#include "M42074.h"

M42074::M42074(const EventHandler &e) : Minion(e) {
    this->set_id(42074);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Ennuy-o-p-tron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M42074::init() {
}