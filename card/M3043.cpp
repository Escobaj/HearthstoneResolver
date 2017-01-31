//
// Created by Jo on 19/12/2016.
//

#include "M3043.h"

M3043::M3043(const EventHandler &e) : Minion(e) {
    this->set_id(3043);
    this->set_attackMax(6);
    this->set_defaultCost(3);
    this->set_name("Max Ma");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(3);
}

void M3043::init() {
}