//
// Created by Jo on 19/12/2016.
//

#include "M801.h"

M801::M801(const EventHandler &e) : Minion(e) {
    this->set_id(801);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Alchimiste dément");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M801::init() {
}