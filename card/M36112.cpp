//
// Created by Jo on 19/12/2016.
//

#include "M36112.h"

M36112::M36112(const EventHandler &e) : Minion(e) {
    this->set_id(36112);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Fan de méca");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M36112::init() {
}