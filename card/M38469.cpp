//
// Created by Jo on 19/12/2016.
//

#include "M38469.h"

M38469::M38469(const EventHandler &e) : Minion(e) {
    this->set_id(38469);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Avorton rusé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M38469::init() {
}