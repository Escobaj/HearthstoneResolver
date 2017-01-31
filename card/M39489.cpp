//
// Created by Jo on 19/12/2016.
//

#include "M39489.h"

M39489::M39489(const EventHandler &e) : Minion(e) {
    this->set_id(39489);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Gardien aviaire");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M39489::init() {
}