//
// Created by Jo on 19/12/2016.
//

#include "M1769.h"

M1769::M1769(const EventHandler &e) : Minion(e) {
    this->set_id(1769);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Ben Thompson");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(7);
}

void M1769::init() {
}