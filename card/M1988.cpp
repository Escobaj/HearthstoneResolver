//
// Created by Jo on 19/12/2016.
//

#include "M1988.h"

M1988::M1988(const EventHandler &e) : Minion(e) {
    this->set_id(1988);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Robot barbier gobelin");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M1988::init() {
}