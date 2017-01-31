//
// Created by Jo on 19/12/2016.
//

#include "M38773.h"

M38773::M38773(const EventHandler &e) : Minion(e) {
    this->set_id(38773);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Ombrebête");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38773::init() {
}