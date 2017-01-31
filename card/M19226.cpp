//
// Created by Jo on 19/12/2016.
//

#include "M19226.h"

M19226::M19226(const EventHandler &e) : Minion(e) {
    this->set_id(19226);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Tank débutant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M19226::init() {
}