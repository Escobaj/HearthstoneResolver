//
// Created by Jo on 19/12/2016.
//

#include "M2682.h"

M2682::M2682(const EventHandler &e) : Minion(e) {
    this->set_id(2682);
    this->set_attackMax(6);
    this->set_defaultCost(7);
    this->set_name("Frissegueule");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M2682::init() {
}