//
// Created by Jo on 19/12/2016.
//

#include "M2192.h"

M2192::M2192(const EventHandler &e) : Minion(e) {
    this->set_id(2192);
    this->set_attackMax(1);
    this->set_defaultCost(0);
    this->set_name("AI Buddy - No Deck/Hand");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2192::init() {
}