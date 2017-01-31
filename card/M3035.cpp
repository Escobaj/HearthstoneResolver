//
// Created by Jo on 19/12/2016.
//

#include "M3035.h"

M3035::M3035(const EventHandler &e) : Minion(e) {
    this->set_id(3035);
    this->set_attackMax(9);
    this->set_defaultCost(4);
    this->set_name("Max McCall");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(9);
    this->set_maxHealth(2);
}

void M3035::init() {
}