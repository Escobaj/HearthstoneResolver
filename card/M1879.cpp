//
// Created by Jo on 19/12/2016.
//

#include "M1879.h"

M1879::M1879(const EventHandler &e) : Minion(e) {
    this->set_id(1879);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Dame Blaumeux");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(7);
}

void M1879::init() {
}