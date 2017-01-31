//
// Created by Jo on 19/12/2016.
//

#include "M42072.h"

M42072::M42072(const EventHandler &e) : Minion(e) {
    this->set_id(42072);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Mouton");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M42072::init() {
}