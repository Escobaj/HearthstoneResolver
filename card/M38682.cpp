//
// Created by Jo on 19/12/2016.
//

#include "M38682.h"

M38682::M38682(const EventHandler &e) : Minion(e) {
    this->set_id(38682);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Squeletosaurus Hex");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M38682::init() {
}