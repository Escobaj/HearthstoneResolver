//
// Created by Jo on 19/12/2016.
//

#include "M40911.h"

M40911::M40911(const EventHandler &e) : Minion(e) {
    this->set_id(40911);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Flingueur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M40911::init() {
}