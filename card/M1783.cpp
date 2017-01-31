//
// Created by Jo on 19/12/2016.
//

#include "M1783.h"

M1783::M1783(const EventHandler &e) : Minion(e) {
    this->set_id(1783);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Savant fou");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M1783::init() {
}