//
// Created by Jo on 19/12/2016.
//

#include "M2753.h"

M2753::M2753(const EventHandler &e) : Minion(e) {
    this->set_id(2753);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Magnataure alpha");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(3);
}

void M2753::init() {
}