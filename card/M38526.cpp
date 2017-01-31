//
// Created by Jo on 19/12/2016.
//

#include "M38526.h"

M38526::M38526(const EventHandler &e) : Minion(e) {
    this->set_id(38526);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Psych-o-tron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M38526::init() {
}