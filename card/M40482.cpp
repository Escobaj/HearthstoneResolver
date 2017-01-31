//
// Created by Jo on 19/12/2016.
//

#include "M40482.h"

M40482::M40482(const EventHandler &e) : Minion(e) {
    this->set_id(40482);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Hobart Martelutte");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M40482::init() {
}