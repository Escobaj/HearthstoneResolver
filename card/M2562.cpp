//
// Created by Jo on 19/12/2016.
//

#include "M2562.h"

M2562::M2562(const EventHandler &e) : Minion(e) {
    this->set_id(2562);
    this->set_attackMax(4);
    this->set_defaultCost(1);
    this->set_name("Assemblage d’os");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M2562::init() {
}