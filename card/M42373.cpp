//
// Created by Jo on 19/12/2016.
//

#include "M42373.h"

M42373::M42373(const EventHandler &e) : Minion(e) {
    this->set_id(42373);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Armure abandonnée");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(4);
}

void M42373::init() {
}