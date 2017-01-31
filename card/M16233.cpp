//
// Created by Jo on 19/12/2016.
//

#include "M16233.h"

M16233::M16233(const EventHandler &e) : Minion(e) {
    this->set_id(16233);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Trogg en chasse");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(6);
}

void M16233::init() {
}