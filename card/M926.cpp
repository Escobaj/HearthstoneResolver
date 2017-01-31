//
// Created by Jo on 19/12/2016.
//

#include "M926.h"

M926::M926(const EventHandler &e) : Minion(e) {
    this->set_id(926);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Maître des diablotins");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(5);
}

void M926::init() {
}