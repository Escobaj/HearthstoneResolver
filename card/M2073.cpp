//
// Created by Jo on 19/12/2016.
//

#include "M2073.h"

M2073::M2073(const EventHandler &e) : Minion(e) {
    this->set_id(2073);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Golem céleste piloté");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(6);
    this->set_maxHealth(4);
}

void M2073::init() {
}