//
// Created by Jo on 19/12/2016.
//

#include "M1673.h"

M1673::M1673(const EventHandler &e) : Minion(e) {
    this->set_id(1673);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Maître brasseur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M1673::init() {
}