//
// Created by Jo on 19/12/2016.
//

#include "M102.h"

M102::M102(const EventHandler &e) : Minion(e) {
    this->set_id(102);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Défenseur");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M102::init() {
}