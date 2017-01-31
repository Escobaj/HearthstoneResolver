//
// Created by Jo on 19/12/2016.
//

#include "M40682.h"

M40682::M40682(const EventHandler &e) : Minion(e) {
    this->set_id(40682);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Piranha");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M40682::init() {
}