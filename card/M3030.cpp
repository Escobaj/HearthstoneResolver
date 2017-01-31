//
// Created by Jo on 19/12/2016.
//

#include "M3030.h"

M3030::M3030(const EventHandler &e) : Minion(e) {
    this->set_id(3030);
    this->set_attackMax(2);
    this->set_defaultCost(7);
    this->set_name("JC Park");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M3030::init() {
}