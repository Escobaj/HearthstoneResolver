//
// Created by Jo on 19/12/2016.
//

#include "M1889.h"

M1889::M1889(const EventHandler &e) : Minion(e) {
    this->set_id(1889);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Gelée polluée");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M1889::init() {
}