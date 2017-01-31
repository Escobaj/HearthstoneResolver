//
// Created by Jo on 19/12/2016.
//

#include "M11131.h"

M11131::M11131(const EventHandler &e) : Minion(e) {
    this->set_id(11131);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Walter Kong");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M11131::init() {
}