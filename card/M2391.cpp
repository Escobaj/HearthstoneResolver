//
// Created by Jo on 19/12/2016.
//

#include "M2391.h"

M2391::M2391(const EventHandler &e) : Minion(e) {
    this->set_id(2391);
    this->set_attackMax(3);
    this->set_defaultCost(1);
    this->set_name("Toxitron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M2391::init() {
}