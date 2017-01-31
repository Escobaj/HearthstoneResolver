//
// Created by Jo on 19/12/2016.
//

#include "M1790.h"

M1790::M1790(const EventHandler &e) : Minion(e) {
    this->set_id(1790);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Seigneur de la mort");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(8);
}

void M1790::init() {
}