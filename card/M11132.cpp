//
// Created by Jo on 19/12/2016.
//

#include "M11132.h"

M11132::M11132(const EventHandler &e) : Minion(e) {
    this->set_id(11132);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Jonas Laster");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M11132::init() {
}