//
// Created by Jo on 19/12/2016.
//

#include "M466.h"

M466::M466(const EventHandler &e) : Minion(e) {
    this->set_id(466);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Golem arcanique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M466::init() {
}