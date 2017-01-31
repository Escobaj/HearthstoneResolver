//
// Created by Jo on 19/12/2016.
//

#include "M38534.h"

M38534::M38534(const EventHandler &e) : Minion(e) {
    this->set_id(38534);
    this->set_attackMax(6);
    this->set_defaultCost(7);
    this->set_name("Rampant des marais");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(8);
}

void M38534::init() {
}