//
// Created by Jo on 19/12/2016.
//

#include "M1916.h"

M1916::M1916(const EventHandler &e) : Minion(e) {
    this->set_id(1916);
    this->set_attackMax(1);
    this->set_defaultCost(0);
    this->set_name("AI Helper Buddy");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1916::init() {
}