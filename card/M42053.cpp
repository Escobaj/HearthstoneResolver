//
// Created by Jo on 19/12/2016.
//

#include "M42053.h"

M42053::M42053(const EventHandler &e) : Minion(e) {
    this->set_id(42053);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Cristal");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M42053::init() {
}