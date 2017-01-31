//
// Created by Jo on 19/12/2016.
//

#include "M959.h"

M959::M959(const EventHandler &e) : Minion(e) {
    this->set_id(959);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Misha");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M959::init() {
}