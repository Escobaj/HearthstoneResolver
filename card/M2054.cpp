//
// Created by Jo on 19/12/2016.
//

#include "M2054.h"

M2054::M2054(const EventHandler &e) : Minion(e) {
    this->set_id(2054);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Engin de siège");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M2054::init() {
}