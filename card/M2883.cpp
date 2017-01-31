//
// Created by Jo on 19/12/2016.
//

#include "M2883.h"

M2883::M2883(const EventHandler &e) : Minion(e) {
    this->set_id(2883);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Reno Jackson");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M2883::init() {
}