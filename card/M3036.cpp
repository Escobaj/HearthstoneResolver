//
// Created by Jo on 19/12/2016.
//

#include "M3036.h"

M3036::M3036(const EventHandler &e) : Minion(e) {
    this->set_id(3036);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Mike Donais");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(8);
}

void M3036::init() {
}