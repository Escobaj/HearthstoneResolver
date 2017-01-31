//
// Created by Jo on 19/12/2016.
//

#include "M1990.h"

M1990::M1990(const EventHandler &e) : Minion(e) {
    this->set_id(1990);
    this->set_attackMax(4);
    this->set_defaultCost(2);
    this->set_name("Tricheur borgne");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(4);
    this->set_maxHealth(1);
}

void M1990::init() {
}