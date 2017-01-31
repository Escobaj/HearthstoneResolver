//
// Created by Jo on 19/12/2016.
//

#include "M445.h"

M445::M445(const EventHandler &e) : Minion(e) {
    this->set_id(445);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Missilière téméraire");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(2);
}

void M445::init() {
}