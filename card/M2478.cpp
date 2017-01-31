//
// Created by Jo on 19/12/2016.
//

#include "M2478.h"

M2478::M2478(const EventHandler &e) : Minion(e) {
    this->set_id(2478);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Acolyte attise-flammes");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M2478::init() {
}