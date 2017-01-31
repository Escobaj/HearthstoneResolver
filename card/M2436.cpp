//
// Created by Jo on 19/12/2016.
//

#include "M2436.h"

M2436::M2436(const EventHandler &e) : Minion(e) {
    this->set_id(2436);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Dragonnet noir");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M2436::init() {
}