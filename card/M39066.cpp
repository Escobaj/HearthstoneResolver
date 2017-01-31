//
// Created by Jo on 19/12/2016.
//

#include "M39066.h"

M39066::M39066(const EventHandler &e) : Minion(e) {
    this->set_id(39066);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Dame Blaumeux");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(7);
}

void M39066::init() {
}