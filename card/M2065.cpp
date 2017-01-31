//
// Created by Jo on 19/12/2016.
//

#include "M2065.h"

M2065::M2065(const EventHandler &e) : Minion(e) {
    this->set_id(2065);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Mini exorciste");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M2065::init() {
}