//
// Created by Jo on 19/12/2016.
//

#include "M40520.h"

M40520::M40520(const EventHandler &e) : Minion(e) {
    this->set_id(40520);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Tank principal");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M40520::init() {
}