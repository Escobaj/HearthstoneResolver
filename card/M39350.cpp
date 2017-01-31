//
// Created by Jo on 19/12/2016.
//

#include "M39350.h"

M39350::M39350(const EventHandler &e) : Minion(e) {
    this->set_id(39350);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Corbeau enchanté");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M39350::init() {
}