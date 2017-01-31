//
// Created by Jo on 19/12/2016.
//

#include "M38820.h"

M38820::M38820(const EventHandler &e) : Minion(e) {
    this->set_id(38820);
    this->set_attackMax(10);
    this->set_defaultCost(10);
    this->set_name("Archaedas");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M38820::init() {
}