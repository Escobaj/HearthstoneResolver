//
// Created by Jo on 19/12/2016.
//

#include "M39386.h"

M39386::M39386(const EventHandler &e) : Minion(e) {
    this->set_id(39386);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Tour blanche");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(6);
}

void M39386::init() {
}