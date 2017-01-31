//
// Created by Jo on 19/12/2016.
//

#include "M1915.h"

M1915::M1915(const EventHandler &e) : Minion(e) {
    this->set_id(1915);
    this->set_attackMax(1);
    this->set_defaultCost(4);
    this->set_name("Baron Vaillefendre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(7);
}

void M1915::init() {
}