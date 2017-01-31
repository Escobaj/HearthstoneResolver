//
// Created by Jo on 19/12/2016.
//

#include "M2922.h"

M2922::M2922(const EventHandler &e) : Minion(e) {
    this->set_id(2922);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Raptor de monte");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M2922::init() {
}