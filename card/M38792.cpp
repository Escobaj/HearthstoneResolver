//
// Created by Jo on 19/12/2016.
//

#include "M38792.h"

M38792::M38792(const EventHandler &e) : Minion(e) {
    this->set_id(38792);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Mange-secrets");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M38792::init() {
}