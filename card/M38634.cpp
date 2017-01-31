//
// Created by Jo on 19/12/2016.
//

#include "M38634.h"

M38634::M38634(const EventHandler &e) : Minion(e) {
    this->set_id(38634);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Naga affamé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M38634::init() {
}