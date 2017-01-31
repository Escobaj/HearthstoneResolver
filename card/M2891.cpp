//
// Created by Jo on 19/12/2016.
//

#include "M2891.h"

M2891::M2891(const EventHandler &e) : Minion(e) {
    this->set_id(2891);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Raptor déterré");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M2891::init() {
}