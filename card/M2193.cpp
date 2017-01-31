//
// Created by Jo on 19/12/2016.
//

#include "M2193.h"

M2193::M2193(const EventHandler &e) : Minion(e) {
    this->set_id(2193);
    this->set_attackMax(1);
    this->set_defaultCost(0);
    this->set_name("AI Buddy - Destroy Minions");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2193::init() {
}