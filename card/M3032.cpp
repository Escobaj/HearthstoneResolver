//
// Created by Jo on 19/12/2016.
//

#include "M3032.h"

M3032::M3032(const EventHandler &e) : Minion(e) {
    this->set_id(3032);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Jerry Mascho");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M3032::init() {
}