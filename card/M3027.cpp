//
// Created by Jo on 19/12/2016.
//

#include "M3027.h"

M3027::M3027(const EventHandler &e) : Minion(e) {
    this->set_id(3027);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Henry Ho");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M3027::init() {
}