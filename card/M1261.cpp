//
// Created by Jo on 19/12/2016.
//

#include "M1261.h"

M1261::M1261(const EventHandler &e) : Minion(e) {
    this->set_id(1261);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Grande crinière des savanes");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(6);
    this->set_maxHealth(5);
}

void M1261::init() {
}