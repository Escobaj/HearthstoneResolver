//
// Created by Jo on 19/12/2016.
//

#include "M2609.h"

M2609::M2609(const EventHandler &e) : Minion(e) {
    this->set_id(2609);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Œuf corrompu");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(3);
}

void M2609::init() {
}