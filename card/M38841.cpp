//
// Created by Jo on 19/12/2016.
//

#include "M38841.h"

M38841::M38841(const EventHandler &e) : Minion(e) {
    this->set_id(38841);
    this->set_attackMax(10);
    this->set_defaultCost(10);
    this->set_name("Squeletosaurus Hex");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M38841::init() {
}