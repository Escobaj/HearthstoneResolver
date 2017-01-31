//
// Created by Jo on 19/12/2016.
//

#include "M1186.h"

M1186::M1186(const EventHandler &e) : Minion(e) {
    this->set_id(1186);
    this->set_attackMax(4);
    this->set_defaultCost(9);
    this->set_name("Ysera");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(4);
    this->set_maxHealth(12);
}

void M1186::init() {
}