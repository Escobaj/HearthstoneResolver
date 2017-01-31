//
// Created by Jo on 19/12/2016.
//

#include "M39941.h"

M39941::M39941(const EventHandler &e) : Minion(e) {
    this->set_id(39941);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Barnes");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M39941::init() {
}