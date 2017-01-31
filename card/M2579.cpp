//
// Created by Jo on 19/12/2016.
//

#include "M2579.h"

M2579::M2579(const EventHandler &e) : Minion(e) {
    this->set_id(2579);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Chevalier silencieux");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M2579::init() {
}