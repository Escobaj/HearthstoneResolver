//
// Created by Jo on 19/12/2016.
//

#include "M2259.h"

M2259::M2259(const EventHandler &e) : Minion(e) {
    this->set_id(2259);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Champion de la Lumière");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M2259::init() {
}