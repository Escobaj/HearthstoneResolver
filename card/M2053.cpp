//
// Created by Jo on 19/12/2016.
//

#include "M2053.h"

M2053::M2053(const EventHandler &e) : Minion(e) {
    this->set_id(2053);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Ennuy-o-tron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M2053::init() {
}