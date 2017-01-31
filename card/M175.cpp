//
// Created by Jo on 19/12/2016.
//

#include "M175.h"

M175::M175(const EventHandler &e) : Minion(e) {
    this->set_id(175);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Mage de Dalaran");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M175::init() {
}