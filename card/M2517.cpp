//
// Created by Jo on 19/12/2016.
//

#include "M2517.h"

M2517::M2517(const EventHandler &e) : Minion(e) {
    this->set_id(2517);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Commandant du fief");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M2517::init() {
}