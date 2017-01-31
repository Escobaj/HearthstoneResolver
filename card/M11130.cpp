//
// Created by Jo on 19/12/2016.
//

#include "M11130.h"

M11130::M11130(const EventHandler &e) : Minion(e) {
    this->set_id(11130);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Jon Bankard");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M11130::init() {
}