//
// Created by Jo on 19/12/2016.
//

#include "M3028.h"

M3028::M3028(const EventHandler &e) : Minion(e) {
    this->set_id(3028);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("He-Rim Woo");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M3028::init() {
}