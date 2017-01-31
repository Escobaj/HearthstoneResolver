//
// Created by Jo on 19/12/2016.
//

#include "M523.h"

M523::M523(const EventHandler &e) : Minion(e) {
    this->set_id(523);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Mécano de petit dragon");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M523::init() {
}