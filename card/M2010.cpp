//
// Created by Jo on 19/12/2016.
//

#include "M2010.h"

M2010::M2010(const EventHandler &e) : Minion(e) {
    this->set_id(2010);
    this->set_attackMax(7);
    this->set_defaultCost(7);
    this->set_name("Neptulon");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M2010::init() {
}