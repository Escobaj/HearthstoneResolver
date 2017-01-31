//
// Created by Jo on 19/12/2016.
//

#include "M39207.h"

M39207::M39207(const EventHandler &e) : Minion(e) {
    this->set_id(39207);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Araignée du garde-manger");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M39207::init() {
}