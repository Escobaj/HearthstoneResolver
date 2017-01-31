//
// Created by Jo on 19/12/2016.
//

#include "M1715.h"

M1715::M1715(const EventHandler &e) : Minion(e) {
    this->set_id(1715);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Chien");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1715::init() {
}