//
// Created by Jo on 19/12/2016.
//

#include "M1677.h"

M1677::M1677(const EventHandler &e) : Minion(e) {
    this->set_id(1677);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Singe cinglé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M1677::init() {
}