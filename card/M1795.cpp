//
// Created by Jo on 19/12/2016.
//

#include "M1795.h"

M1795::M1795(const EventHandler &e) : Minion(e) {
    this->set_id(1795);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Gelée");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M1795::init() {
}