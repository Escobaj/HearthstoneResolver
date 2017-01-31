//
// Created by Jo on 19/12/2016.
//

#include "M40756.h"

M40756::M40756(const EventHandler &e) : Minion(e) {
    this->set_id(40756);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Tasse");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M40756::init() {
}