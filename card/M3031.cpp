//
// Created by Jo on 19/12/2016.
//

#include "M3031.h"

M3031::M3031(const EventHandler &e) : Minion(e) {
    this->set_id(3031);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Jeremy Cranford");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M3031::init() {
}