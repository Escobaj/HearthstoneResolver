//
// Created by Jo on 19/12/2016.
//

#include "M38504.h"

M38504::M38504(const EventHandler &e) : Minion(e) {
    this->set_id(38504);
    this->set_attackMax(5);
    this->set_defaultCost(3);
    this->set_name("Hoplite tol’vir");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M38504::init() {
}