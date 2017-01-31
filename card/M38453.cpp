//
// Created by Jo on 19/12/2016.
//

#include "M38453.h"

M38453::M38453(const EventHandler &e) : Minion(e) {
    this->set_id(38453);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Tentacule gluant");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38453::init() {
}