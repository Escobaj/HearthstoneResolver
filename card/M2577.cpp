//
// Created by Jo on 19/12/2016.
//

#include "M2577.h"

M2577::M2577(const EventHandler &e) : Minion(e) {
    this->set_id(2577);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Porte-lance");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M2577::init() {
}