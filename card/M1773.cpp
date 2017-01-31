//
// Created by Jo on 19/12/2016.
//

#include "M1773.h"

M1773::M1773(const EventHandler &e) : Minion(e) {
    this->set_id(1773);
    this->set_attackMax(10);
    this->set_defaultCost(10);
    this->set_name("Brian Schwab");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M1773::init() {
}