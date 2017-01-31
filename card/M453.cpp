//
// Created by Jo on 19/12/2016.
//

#include "M453.h"

M453::M453(const EventHandler &e) : Minion(e) {
    this->set_id(453);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Voyant froide-lumière");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M453::init() {
}