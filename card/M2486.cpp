//
// Created by Jo on 19/12/2016.
//

#include "M2486.h"

M2486::M2486(const EventHandler &e) : Minion(e) {
    this->set_id(2486);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Modeste écuyer");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M2486::init() {
}