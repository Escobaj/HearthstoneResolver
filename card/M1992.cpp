//
// Created by Jo on 19/12/2016.
//

#include "M1992.h"

M1992::M1992(const EventHandler &e) : Minion(e) {
    this->set_id(1992);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Sensei de fer");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M1992::init() {
}