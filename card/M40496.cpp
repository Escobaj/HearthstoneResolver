//
// Created by Jo on 19/12/2016.
//

#include "M40496.h"

M40496::M40496(const EventHandler &e) : Minion(e) {
    this->set_id(40496);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Messagère de la Kabale");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M40496::init() {
}