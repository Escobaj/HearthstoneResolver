//
// Created by Jo on 19/12/2016.
//

#include "M765.h"

M765::M765(const EventHandler &e) : Minion(e) {
    this->set_id(765);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Long-voyant de Thrallmar");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M765::init() {
}