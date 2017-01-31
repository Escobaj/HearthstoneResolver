//
// Created by Jo on 19/12/2016.
//

#include "M1764.h"

M1764::M1764(const EventHandler &e) : Minion(e) {
    this->set_id(1764);
    this->set_attackMax(3);
    this->set_defaultCost(1);
    this->set_name("Steven Gabriel");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M1764::init() {
}