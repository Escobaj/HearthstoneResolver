//
// Created by Jo on 19/12/2016.
//

#include "M2077.h"

M2077::M2077(const EventHandler &e) : Minion(e) {
    this->set_id(2077);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Mini-mage");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(1);
}

void M2077::init() {
}