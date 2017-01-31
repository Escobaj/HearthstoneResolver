//
// Created by Jo on 19/12/2016.
//

#include "M2925.h"

M2925::M2925(const EventHandler &e) : Minion(e) {
    this->set_id(2925);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Djinn des zéphirs");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M2925::init() {
}