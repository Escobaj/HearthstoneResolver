//
// Created by Jo on 19/12/2016.
//

#include "M40568.h"

M40568::M40568(const EventHandler &e) : Minion(e) {
    this->set_id(40568);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Gadgétiseur des Dessoudeurs");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M40568::init() {
}