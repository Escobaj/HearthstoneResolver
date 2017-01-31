//
// Created by Jo on 19/12/2016.
//

#include "M38566.h"

M38566::M38566(const EventHandler &e) : Minion(e) {
    this->set_id(38566);
    this->set_attackMax(30);
    this->set_defaultCost(9);
    this->set_name("L’Ancien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(30);
    this->set_maxHealth(30);
}

void M38566::init() {
}