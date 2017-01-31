//
// Created by Jo on 19/12/2016.
//

#include "M1723.h"

M1723::M1723(const EventHandler &e) : Minion(e) {
    this->set_id(1723);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Diablotin sans valeur");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1723::init() {
}