//
// Created by Jo on 19/12/2016.
//

#include "M915.h"

M915::M915(const EventHandler &e) : Minion(e) {
    this->set_id(915);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Mage ancien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(5);
}

void M915::init() {
}