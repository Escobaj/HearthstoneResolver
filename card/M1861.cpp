//
// Created by Jo on 19/12/2016.
//

#include "M1861.h"

M1861::M1861(const EventHandler &e) : Minion(e) {
    this->set_id(1861);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Gargouille peau-de-pierre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M1861::init() {
}