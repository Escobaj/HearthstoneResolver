//
// Created by Jo on 19/12/2016.
//

#include "M912.h"

M912::M912(const EventHandler &e) : Minion(e) {
    this->set_id(912);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Harrison Jones");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M912::init() {
}