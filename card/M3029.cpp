//
// Created by Jo on 19/12/2016.
//

#include "M3029.h"

M3029::M3029(const EventHandler &e) : Minion(e) {
    this->set_id(3029);
    this->set_attackMax(6);
    this->set_defaultCost(5);
    this->set_name("Jason MacAllister");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(5);
}

void M3029::init() {
}