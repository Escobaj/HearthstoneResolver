//
// Created by Jo on 19/12/2016.
//

#include "M40906.h"

M40906::M40906(const EventHandler &e) : Minion(e) {
    this->set_id(40906);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Cogneur médiocre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M40906::init() {
}