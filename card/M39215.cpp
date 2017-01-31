//
// Created by Jo on 19/12/2016.
//

#include "M39215.h"

M39215::M39215(const EventHandler &e) : Minion(e) {
    this->set_id(39215);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Anomalie arcanique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M39215::init() {
}