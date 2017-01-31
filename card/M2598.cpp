//
// Created by Jo on 19/12/2016.
//

#include "M2598.h"

M2598::M2598(const EventHandler &e) : Minion(e) {
    this->set_id(2598);
    this->set_attackMax(3);
    this->set_defaultCost(6);
    this->set_name("Chevaucheuse de kodo");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M2598::init() {
}