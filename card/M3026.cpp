//
// Created by Jo on 19/12/2016.
//

#include "M3026.h"

M3026::M3026(const EventHandler &e) : Minion(e) {
    this->set_id(3026);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Eric Del Priore");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(6);
}

void M3026::init() {
}