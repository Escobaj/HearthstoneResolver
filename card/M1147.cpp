//
// Created by Jo on 19/12/2016.
//

#include "M1147.h"

M1147::M1147(const EventHandler &e) : Minion(e) {
    this->set_id(1147);
    this->set_attackMax(0);
    this->set_defaultCost(2);
    this->set_name("Nat Pagle");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(4);
}

void M1147::init() {
}