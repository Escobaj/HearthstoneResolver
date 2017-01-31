//
// Created by Jo on 19/12/2016.
//

#include "M40495.h"

M40495::M40495(const EventHandler &e) : Minion(e) {
    this->set_id(40495);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Associé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M40495::init() {
}