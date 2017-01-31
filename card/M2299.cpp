//
// Created by Jo on 19/12/2016.
//

#include "M2299.h"

M2299::M2299(const EventHandler &e) : Minion(e) {
    this->set_id(2299);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Dragon consort");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M2299::init() {
}