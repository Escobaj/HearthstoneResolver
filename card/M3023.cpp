//
// Created by Jo on 19/12/2016.
//

#include "M3023.h"

M3023::M3023(const EventHandler &e) : Minion(e) {
    this->set_id(3023);
    this->set_attackMax(6);
    this->set_defaultCost(4);
    this->set_name("Christopher Yim");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(5);
}

void M3023::init() {
}