//
// Created by Jo on 19/12/2016.
//

#include "M40755.h"

M40755::M40755(const EventHandler &e) : Minion(e) {
    this->set_id(40755);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Fourchette");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M40755::init() {
}