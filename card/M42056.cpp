//
// Created by Jo on 19/12/2016.
//

#include "M42056.h"

M42056::M42056(const EventHandler &e) : Minion(e) {
    this->set_id(42056);
    this->set_attackMax(10);
    this->set_defaultCost(10);
    this->set_name("Char de force OMÉGA MAX");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M42056::init() {
}