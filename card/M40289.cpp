//
// Created by Jo on 19/12/2016.
//

#include "M40289.h"

M40289::M40289(const EventHandler &e) : Minion(e) {
    this->set_id(40289);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Chimiste fou");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M40289::init() {
}