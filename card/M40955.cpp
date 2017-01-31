//
// Created by Jo on 19/12/2016.
//

#include "M40955.h"

M40955::M40955(const EventHandler &e) : Minion(e) {
    this->set_id(40955);
    this->set_attackMax(5);
    this->set_defaultCost(9);
    this->set_name("Maire Brouillecaboche");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M40955::init() {
}