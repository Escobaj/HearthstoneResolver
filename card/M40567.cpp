//
// Created by Jo on 19/12/2016.
//

#include "M40567.h"

M40567::M40567(const EventHandler &e) : Minion(e) {
    this->set_id(40567);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Outilleur des Dessoudeurs");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M40567::init() {
}