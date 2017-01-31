//
// Created by Jo on 19/12/2016.
//

#include "M2072.h"

M2072::M2072(const EventHandler &e) : Minion(e) {
    this->set_id(2072);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Hobgobelin");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M2072::init() {
}