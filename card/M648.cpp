//
// Created by Jo on 19/12/2016.
//

#include "M648.h"

M648::M648(const EventHandler &e) : Minion(e) {
    this->set_id(648);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Sanglier brocheroc");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M648::init() {
}