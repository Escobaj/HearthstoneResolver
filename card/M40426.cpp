//
// Created by Jo on 19/12/2016.
//

#include "M40426.h"

M40426::M40426(const EventHandler &e) : Minion(e) {
    this->set_id(40426);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Chat de gouttière");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M40426::init() {
}