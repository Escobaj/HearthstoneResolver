//
// Created by Jo on 19/12/2016.
//

#include "M1671.h"

M1671::M1671(const EventHandler &e) : Minion(e) {
    this->set_id(1671);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Moine pandashan");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M1671::init() {
}