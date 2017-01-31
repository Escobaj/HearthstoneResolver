//
// Created by Jo on 19/12/2016.
//

#include "M38829.h"

M38829::M38829(const EventHandler &e) : Minion(e) {
    this->set_id(38829);
    this->set_attackMax(7);
    this->set_defaultCost(8);
    this->set_name("Soldat nérubien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M38829::init() {
}