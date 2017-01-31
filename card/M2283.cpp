//
// Created by Jo on 19/12/2016.
//

#include "M2283.h"

M2283::M2283(const EventHandler &e) : Minion(e) {
    this->set_id(2283);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Dragon affamé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(5);
    this->set_maxHealth(6);
}

void M2283::init() {
}