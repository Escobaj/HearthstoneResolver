//
// Created by Jo on 19/12/2016.
//

#include "M1912.h"

M1912::M1912(const EventHandler &e) : Minion(e) {
    this->set_id(1912);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Dragonnet");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1912::init() {
}