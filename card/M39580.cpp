//
// Created by Jo on 19/12/2016.
//

#include "M39580.h"

M39580::M39580(const EventHandler &e) : Minion(e) {
    this->set_id(39580);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Fourchette");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(1);
}

void M39580::init() {
}