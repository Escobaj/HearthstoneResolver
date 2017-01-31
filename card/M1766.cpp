//
// Created by Jo on 19/12/2016.
//

#include "M1766.h"

M1766::M1766(const EventHandler &e) : Minion(e) {
    this->set_id(1766);
    this->set_attackMax(3);
    this->set_defaultCost(1);
    this->set_name("Derek Sakamoto");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(1);
}

void M1766::init() {
}