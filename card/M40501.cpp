//
// Created by Jo on 19/12/2016.
//

#include "M40501.h"

M40501::M40501(const EventHandler &e) : Minion(e) {
    this->set_id(40501);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Pion");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M40501::init() {
}