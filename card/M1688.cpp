//
// Created by Jo on 19/12/2016.
//

#include "M1688.h"

M1688::M1688(const EventHandler &e) : Minion(e) {
    this->set_id(1688);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Poulet furieux");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1688::init() {
}