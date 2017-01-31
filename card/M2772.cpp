//
// Created by Jo on 19/12/2016.
//

#include "M2772.h"

M2772::M2772(const EventHandler &e) : Minion(e) {
    this->set_id(2772);
    this->set_attackMax(6);
    this->set_defaultCost(2);
    this->set_name("Lave vivante");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M2772::init() {
}