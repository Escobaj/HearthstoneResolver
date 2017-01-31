//
// Created by Jo on 19/12/2016.
//

#include "M2028.h"

M2028::M2028(const EventHandler &e) : Minion(e) {
    this->set_id(2028);
    this->set_attackMax(2);
    this->set_defaultCost(5);
    this->set_name("Intendant");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(5);
}

void M2028::init() {
}