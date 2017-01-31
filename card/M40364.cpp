//
// Created by Jo on 19/12/2016.
//

#include "M40364.h"

M40364::M40364(const EventHandler &e) : Minion(e) {
    this->set_id(40364);
    this->set_attackMax(0);
    this->set_defaultCost(2);
    this->set_name("Avocat commis d’office");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(7);
}

void M40364::init() {
}