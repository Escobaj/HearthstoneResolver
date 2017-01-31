//
// Created by Jo on 19/12/2016.
//

#include "M994.h"

M994::M994(const EventHandler &e) : Minion(e) {
    this->set_id(994);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Infiltrateur worgen");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M994::init() {
}