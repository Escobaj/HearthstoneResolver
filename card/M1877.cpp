//
// Created by Jo on 19/12/2016.
//

#include "M1877.h"

M1877::M1877(const EventHandler &e) : Minion(e) {
    this->set_id(1877);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Cavalier tenace");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(6);
}

void M1877::init() {
}