//
// Created by Jo on 19/12/2016.
//

#include "M40344.h"

M40344::M40344(const EventHandler &e) : Minion(e) {
    this->set_id(40344);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Soigneur hozen");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(6);
}

void M40344::init() {
}