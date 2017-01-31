//
// Created by Jo on 19/12/2016.
//

#include "M2948.h"

M2948::M2948(const EventHandler &e) : Minion(e) {
    this->set_id(2948);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Sir Finley Mrrgglton");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M2948::init() {
}