//
// Created by Jo on 19/12/2016.
//

#include "M39374.h"

M39374::M39374(const EventHandler &e) : Minion(e) {
    this->set_id(39374);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Fou en onyx");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M39374::init() {
}