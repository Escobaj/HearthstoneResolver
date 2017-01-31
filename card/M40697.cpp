//
// Created by Jo on 19/12/2016.
//

#include "M40697.h"

M40697::M40697(const EventHandler &e) : Minion(e) {
    this->set_id(40697);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Grouillant de jade");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M40697::init() {
}