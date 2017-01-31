//
// Created by Jo on 19/12/2016.
//

#include "M39118.h"

M39118::M39118(const EventHandler &e) : Minion(e) {
    this->set_id(39118);
    this->set_attackMax(7);
    this->set_defaultCost(6);
    this->set_name("Sectateur Skeram");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(6);
}

void M39118::init() {
}