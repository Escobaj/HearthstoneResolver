//
// Created by Jo on 19/12/2016.
//

#include "M2069.h"

M2069::M2069(const EventHandler &e) : Minion(e) {
    this->set_id(2069);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Purificateur écarlate");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M2069::init() {
}