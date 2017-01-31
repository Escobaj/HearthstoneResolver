//
// Created by Jo on 19/12/2016.
//

#include "M39206.h"

M39206::M39206(const EventHandler &e) : Minion(e) {
    this->set_id(39206);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Araignée de la cave");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M39206::init() {
}