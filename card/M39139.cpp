//
// Created by Jo on 19/12/2016.
//

#include "M39139.h"

M39139::M39139(const EventHandler &e) : Minion(e) {
    this->set_id(39139);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Épéiste");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M39139::init() {
}