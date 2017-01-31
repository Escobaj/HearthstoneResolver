//
// Created by Jo on 19/12/2016.
//

#include "M670.h"

M670::M670(const EventHandler &e) : Minion(e) {
    this->set_id(670);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Lamenuit");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M670::init() {
}