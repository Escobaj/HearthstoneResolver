//
// Created by Jo on 19/12/2016.
//

#include "M40603.h"

M40603::M40603(const EventHandler &e) : Minion(e) {
    this->set_id(40603);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Irion");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M40603::init() {
}