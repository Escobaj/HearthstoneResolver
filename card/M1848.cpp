//
// Created by Jo on 19/12/2016.
//

#include "M1848.h"

M1848::M1848(const EventHandler &e) : Minion(e) {
    this->set_id(1848);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Squelette");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1848::init() {
}