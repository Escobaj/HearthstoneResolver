//
// Created by Jo on 19/12/2016.
//

#include "M40465.h"

M40465::M40465(const EventHandler &e) : Minion(e) {
    this->set_id(40465);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Neunœil le pirate");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M40465::init() {
}