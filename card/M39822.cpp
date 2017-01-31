//
// Created by Jo on 19/12/2016.
//

#include "M39822.h"

M39822::M39822(const EventHandler &e) : Minion(e) {
    this->set_id(39822);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Fourchette mortelle");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M39822::init() {
}