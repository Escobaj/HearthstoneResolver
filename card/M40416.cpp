//
// Created by Jo on 19/12/2016.
//

#include "M40416.h"

M40416::M40416(const EventHandler &e) : Minion(e) {
    this->set_id(40416);
    this->set_attackMax(7);
    this->set_defaultCost(10);
    this->set_name("Kun, le roi oublié");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M40416::init() {
}