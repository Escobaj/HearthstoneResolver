//
// Created by Jo on 19/12/2016.
//

#include "M38635.h"

M38635::M38635(const EventHandler &e) : Minion(e) {
    this->set_id(38635);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Naga affamé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38635::init() {
}