//
// Created by Jo on 19/12/2016.
//

#include "M2044.h"

M2044::M2044(const EventHandler &e) : Minion(e) {
    this->set_id(2044);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Mouton explosif");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2044::init() {
}