//
// Created by Jo on 19/12/2016.
//

#include "M39433.h"

M39433::M39433(const EventHandler &e) : Minion(e) {
    this->set_id(39433);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Œuf runique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(2);
}

void M39433::init() {
}