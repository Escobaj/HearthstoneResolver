//
// Created by Jo on 19/12/2016.
//

#include "M2234.h"

M2234::M2234(const EventHandler &e) : Minion(e) {
    this->set_id(2234);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Mini stoppe-sort");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(5);
}

void M2234::init() {
}