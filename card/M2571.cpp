//
// Created by Jo on 19/12/2016.
//

#include "M2571.h"

M2571::M2571(const EventHandler &e) : Minion(e) {
    this->set_id(2571);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Jette-sorts");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M2571::init() {
}