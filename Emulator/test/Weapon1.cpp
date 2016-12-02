//
// Created by escoba_j on 30/11/2016.
//

#include "Weapon1.h"

Weapon1::Weapon1(const EventHandler &e) : Weapon(e) {
    this->set_attackMax(1);
    this->set_defaultCost(6);
    this->set_name("Weapon 1");
    this->set_membership(Class::WARRIOR);
    this->set_id(1);
}

void Weapon1::init() {
}
