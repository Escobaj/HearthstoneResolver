//
// Created by Jo on 19/12/2016.
//

#include "M40648.h"

M40648::M40648(const EventHandler &e) : Minion(e) {
    this->set_id(40648);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Chaperon Rouge");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M40648::init() {
}