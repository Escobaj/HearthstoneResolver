//
// Created by Jo on 19/12/2016.
//

#include "M2383.h"

M2383::M2383(const EventHandler &e) : Minion(e) {
    this->set_id(2383);
    this->set_attackMax(6);
    this->set_defaultCost(0);
    this->set_name("Lave vivante");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M2383::init() {
}