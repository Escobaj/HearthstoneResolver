//
// Created by Jo on 19/12/2016.
//

#include "M211.h"

M211::M211(const EventHandler &e) : Minion(e) {
    this->set_id(211);
    this->set_attackMax(8);
    this->set_defaultCost(10);
    this->set_name("Géant des mers");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M211::init() {
}