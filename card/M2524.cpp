//
// Created by Jo on 19/12/2016.
//

#include "M2524.h"

M2524::M2524(const EventHandler &e) : Minion(e) {
    this->set_id(2524);
    this->set_attackMax(5);
    this->set_defaultCost(1);
    this->set_name("Draconien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M2524::init() {
}