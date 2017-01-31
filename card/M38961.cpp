//
// Created by Jo on 19/12/2016.
//

#include "M38961.h"

M38961::M38961(const EventHandler &e) : Minion(e) {
    this->set_id(38961);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Amasseur vicié");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M38961::init() {
}