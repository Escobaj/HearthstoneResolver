//
// Created by Jo on 19/12/2016.
//

#include "M2621.h"

M2621::M2621(const EventHandler &e) : Minion(e) {
    this->set_id(2621);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Wilfred Flopboum");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M2621::init() {
}