//
// Created by Jo on 19/12/2016.
//

#include "M1803.h"

M1803::M1803(const EventHandler &e) : Minion(e) {
    this->set_id(1803);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Tréant");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M1803::init() {
}