//
// Created by Jo on 19/12/2016.
//

#include "M411.h"

M411::M411(const EventHandler &e) : Minion(e) {
    this->set_id(411);
    this->set_attackMax(8);
    this->set_defaultCost(9);
    this->set_name("Nozdormu");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M411::init() {
}