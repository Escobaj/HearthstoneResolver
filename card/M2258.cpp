//
// Created by Jo on 19/12/2016.
//

#include "M2258.h"

M2258::M2258(const EventHandler &e) : Minion(e) {
    this->set_id(2258);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Drake volcanique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(6);
    this->set_maxHealth(4);
}

void M2258::init() {
}