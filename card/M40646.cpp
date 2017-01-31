//
// Created by Jo on 19/12/2016.
//

#include "M40646.h"

M40646::M40646(const EventHandler &e) : Minion(e) {
    this->set_id(40646);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Mark Marchelune");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M40646::init() {
}