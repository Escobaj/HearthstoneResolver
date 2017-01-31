//
// Created by Jo on 19/12/2016.
//

#include "M3021.h"

M3021::M3021(const EventHandler &e) : Minion(e) {
    this->set_id(3021);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Bryan Chang");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M3021::init() {
}