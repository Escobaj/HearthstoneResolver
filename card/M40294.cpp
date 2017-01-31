//
// Created by Jo on 19/12/2016.
//

#include "M40294.h"

M40294::M40294(const EventHandler &e) : Minion(e) {
    this->set_id(40294);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Baron Boule-de-Gras");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M40294::init() {
}