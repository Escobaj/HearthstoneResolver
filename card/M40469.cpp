//
// Created by Jo on 19/12/2016.
//

#include "M40469.h"

M40469::M40469(const EventHandler &e) : Minion(e) {
    this->set_id(40469);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Massacreur des Dessoudeurs");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M40469::init() {
}