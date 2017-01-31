//
// Created by Jo on 19/12/2016.
//

#include "M1135.h"

M1135::M1135(const EventHandler &e) : Minion(e) {
    this->set_id(1135);
    this->set_attackMax(0);
    this->set_defaultCost(2);
    this->set_name("Chroniqueur Cho");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(4);
}

void M1135::init() {
}