//
// Created by Jo on 19/12/2016.
//

#include "M39700.h"

M39700::M39700(const EventHandler &e) : Minion(e) {
    this->set_id(39700);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Colporteur éthérien");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(6);
}

void M39700::init() {
}