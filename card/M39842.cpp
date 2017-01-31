//
// Created by Jo on 19/12/2016.
//

#include "M39842.h"

M39842::M39842(const EventHandler &e) : Minion(e) {
    this->set_id(39842);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Gnoll");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M39842::init() {
}