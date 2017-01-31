//
// Created by Jo on 19/12/2016.
//

#include "M59.h"

M59::M59(const EventHandler &e) : Minion(e) {
    this->set_id(59);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Petit dragon mécanique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M59::init() {
}