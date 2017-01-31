//
// Created by Jo on 19/12/2016.
//

#include "M2076.h"

M2076::M2076(const EventHandler &e) : Minion(e) {
    this->set_id(2076);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Recombobulateur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M2076::init() {
}