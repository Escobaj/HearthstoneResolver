//
// Created by Jo on 19/12/2016.
//

#include "M2532.h"

M2532::M2532(const EventHandler &e) : Minion(e) {
    this->set_id(2532);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Frigbold algide");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(6);
}

void M2532::init() {
}