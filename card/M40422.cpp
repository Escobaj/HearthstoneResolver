//
// Created by Jo on 19/12/2016.
//

#include "M40422.h"

M40422::M40422(const EventHandler &e) : Minion(e) {
    this->set_id(40422);
    this->set_attackMax(5);
    this->set_defaultCost(7);
    this->set_name("Chef de jade");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M40422::init() {
}