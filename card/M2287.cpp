//
// Created by Jo on 19/12/2016.
//

#include "M2287.h"

M2287::M2287(const EventHandler &e) : Minion(e) {
    this->set_id(2287);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Dragonnet");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2287::init() {
}