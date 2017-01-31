//
// Created by Jo on 19/12/2016.
//

#include "M40757.h"

M40757::M40757(const EventHandler &e) : Minion(e) {
    this->set_id(40757);
    this->set_attackMax(5);
    this->set_defaultCost(3);
    this->set_name("Couteau");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M40757::init() {
}