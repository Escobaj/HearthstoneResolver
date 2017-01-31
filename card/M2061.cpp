//
// Created by Jo on 19/12/2016.
//

#include "M2061.h"

M2061::M2061(const EventHandler &e) : Minion(e) {
    this->set_id(2061);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Cible leurre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(0);
    this->set_maxHealth(2);
}

void M2061::init() {
}