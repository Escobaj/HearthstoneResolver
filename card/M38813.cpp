//
// Created by Jo on 19/12/2016.
//

#include "M38813.h"

M38813::M38813(const EventHandler &e) : Minion(e) {
    this->set_id(38813);
    this->set_attackMax(10);
    this->set_defaultCost(10);
    this->set_name("Zinaar");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M38813::init() {
}