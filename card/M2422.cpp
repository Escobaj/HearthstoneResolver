//
// Created by Jo on 19/12/2016.
//

#include "M2422.h"

M2422::M2422(const EventHandler &e) : Minion(e) {
    this->set_id(2422);
    this->set_attackMax(10);
    this->set_defaultCost(5);
    this->set_name("Magmagueule");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(2);
}

void M2422::init() {
}