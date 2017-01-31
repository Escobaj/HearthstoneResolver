//
// Created by Jo on 19/12/2016.
//

#include "M39161.h"

M39161::M39161(const EventHandler &e) : Minion(e) {
    this->set_id(39161);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Grand Méchant Loup");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M39161::init() {
}