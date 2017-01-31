//
// Created by Jo on 19/12/2016.
//

#include "M1501.h"

M1501::M1501(const EventHandler &e) : Minion(e) {
    this->set_id(1501);
    this->set_attackMax(10);
    this->set_defaultCost(6);
    this->set_name("Grand frère de Mukla");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M1501::init() {
}