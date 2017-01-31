//
// Created by Jo on 19/12/2016.
//

#include "M38876.h"

M38876::M38876(const EventHandler &e) : Minion(e) {
    this->set_id(38876);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Exhalombre");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M38876::init() {
}