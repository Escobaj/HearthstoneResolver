//
// Created by Jo on 19/12/2016.
//

#include "M40952.h"

M40952::M40952(const EventHandler &e) : Minion(e) {
    this->set_id(40952);
    this->set_attackMax(2);
    this->set_defaultCost(5);
    this->set_name("Experte en déminage");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M40952::init() {
}