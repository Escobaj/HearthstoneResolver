//
// Created by Jo on 19/12/2016.
//

#include "M1780.h"

M1780::M1780(const EventHandler &e) : Minion(e) {
    this->set_id(1780);
    this->set_attackMax(5);
    this->set_defaultCost(0);
    this->set_name("Hand Swapper Minion");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M1780::init() {
}