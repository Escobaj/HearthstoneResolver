//
// Created by Jo on 19/12/2016.
//

#include "M2123.h"

M2123::M2123(const EventHandler &e) : Minion(e) {
    this->set_id(2123);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Dame Blaumeux");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(7);
}

void M2123::init() {
}