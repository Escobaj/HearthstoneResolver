//
// Created by Jo on 19/12/2016.
//

#include "M38686.h"

M38686::M38686(const EventHandler &e) : Minion(e) {
    this->set_id(38686);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Archaedas");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M38686::init() {
}