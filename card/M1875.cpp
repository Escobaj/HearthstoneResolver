//
// Created by Jo on 19/12/2016.
//

#include "M1875.h"

M1875::M1875(const EventHandler &e) : Minion(e) {
    this->set_id(1875);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Guerrier tenace");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M1875::init() {
}