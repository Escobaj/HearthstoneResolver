//
// Created by Jo on 19/12/2016.
//

#include "M39426.h"

M39426::M39426(const EventHandler &e) : Minion(e) {
    this->set_id(39426);
    this->set_attackMax(8);
    this->set_defaultCost(12);
    this->set_name("Géant arcanique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M39426::init() {
}