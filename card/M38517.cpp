//
// Created by Jo on 19/12/2016.
//

#include "M38517.h"

M38517::M38517(const EventHandler &e) : Minion(e) {
    this->set_id(38517);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Prophète nérubien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M38517::init() {
}