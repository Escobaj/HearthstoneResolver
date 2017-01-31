//
// Created by Jo on 19/12/2016.
//

#include "M40407.h"

M40407::M40407(const EventHandler &e) : Minion(e) {
    this->set_id(40407);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Chimiste de la Kabale");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M40407::init() {
}