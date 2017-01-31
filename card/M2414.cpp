//
// Created by Jo on 19/12/2016.
//

#include "M2414.h"

M2414::M2414(const EventHandler &e) : Minion(e) {
    this->set_id(2414);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Écluseur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2414::init() {
}