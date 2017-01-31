//
// Created by Jo on 19/12/2016.
//

#include "M2434.h"

M2434::M2434(const EventHandler &e) : Minion(e) {
    this->set_id(2434);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Assemblage d’os");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M2434::init() {
}