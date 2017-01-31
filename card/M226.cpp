//
// Created by Jo on 19/12/2016.
//

#include "M226.h"

M226::M226(const EventHandler &e) : Minion(e) {
    this->set_id(226);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Leokk");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M226::init() {
}