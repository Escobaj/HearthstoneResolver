//
// Created by Jo on 19/12/2016.
//

#include "M37.h"

M37::M37(const EventHandler &e) : Minion(e) {
    this->set_id(37);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Minuscule invocatrice");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M37::init() {
}