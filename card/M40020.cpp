//
// Created by Jo on 19/12/2016.
//

#include "M40020.h"

M40020::M40020(const EventHandler &e) : Minion(e) {
    this->set_id(40020);
    this->set_attackMax(7);
    this->set_defaultCost(0);
    this->set_name("Yogg-Saron Test (Auto)");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(5);
}

void M40020::init() {
}