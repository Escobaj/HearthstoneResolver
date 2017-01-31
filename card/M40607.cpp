//
// Created by Jo on 19/12/2016.
//

#include "M40607.h"

M40607::M40607(const EventHandler &e) : Minion(e) {
    this->set_id(40607);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Genzo, le Requin");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M40607::init() {
}