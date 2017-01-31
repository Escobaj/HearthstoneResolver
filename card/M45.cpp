//
// Created by Jo on 19/12/2016.
//

#include "M45.h"

M45::M45(const EventHandler &e) : Minion(e) {
    this->set_id(45);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Guerrier tauren");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M45::init() {
}