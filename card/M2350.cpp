//
// Created by Jo on 19/12/2016.
//

#include "M2350.h"

M2350::M2350(const EventHandler &e) : Minion(e) {
    this->set_id(2350);
    this->set_attackMax(3);
    this->set_defaultCost(1);
    this->set_name("Draconien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(3);
    this->set_maxHealth(1);
}

void M2350::init() {
}