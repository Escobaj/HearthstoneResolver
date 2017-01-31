//
// Created by Jo on 19/12/2016.
//

#include "M2036.h"

M2036::M2036(const EventHandler &e) : Minion(e) {
    this->set_id(2036);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Trogg mâcheroc mastoc");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M2036::init() {
}