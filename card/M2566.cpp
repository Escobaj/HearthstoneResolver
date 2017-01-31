//
// Created by Jo on 19/12/2016.
//

#include "M2566.h"

M2566::M2566(const EventHandler &e) : Minion(e) {
    this->set_id(2566);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Ombrefiel");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M2566::init() {
}