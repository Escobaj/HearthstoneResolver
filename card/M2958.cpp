//
// Created by Jo on 19/12/2016.
//

#include "M2958.h"

M2958::M2958(const EventHandler &e) : Minion(e) {
    this->set_id(2958);
    this->set_attackMax(0);
    this->set_defaultCost(5);
    this->set_name("Pierre d’invocation");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(6);
}

void M2958::init() {
}