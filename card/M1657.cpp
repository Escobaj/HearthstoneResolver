//
// Created by Jo on 19/12/2016.
//

#include "M1657.h"

M1657::M1657(const EventHandler &e) : Minion(e) {
    this->set_id(1657);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Chasseur de gros gibier");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M1657::init() {
}