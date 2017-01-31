//
// Created by Jo on 19/12/2016.
//

#include "M1844.h"

M1844::M1844(const EventHandler &e) : Minion(e) {
    this->set_id(1844);
    this->set_attackMax(1);
    this->set_defaultCost(0);
    this->set_name("Murloc");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1844::init() {
}