//
// Created by Jo on 19/12/2016.
//

#include "M1914.h"

M1914::M1914(const EventHandler &e) : Minion(e) {
    this->set_id(1914);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Horreb");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M1914::init() {
}