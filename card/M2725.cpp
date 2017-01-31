//
// Created by Jo on 19/12/2016.
//

#include "M2725.h"

M2725::M2725(const EventHandler &e) : Minion(e) {
    this->set_id(2725);
    this->set_attackMax(10);
    this->set_defaultCost(9);
    this->set_name("Glace-Hurlante");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M2725::init() {
}