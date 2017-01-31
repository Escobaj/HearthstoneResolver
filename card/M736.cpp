//
// Created by Jo on 19/12/2016.
//

#include "M736.h"

M736::M736(const EventHandler &e) : Minion(e) {
    this->set_id(736);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Vieux Troublœil");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M736::init() {
}