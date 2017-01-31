//
// Created by Jo on 19/12/2016.
//

#include "M1014.h"

M1014::M1014(const EventHandler &e) : Minion(e) {
    this->set_id(1014);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Pyromancien sauvage");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M1014::init() {
}