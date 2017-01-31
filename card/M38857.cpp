//
// Created by Jo on 19/12/2016.
//

#include "M38857.h"

M38857::M38857(const EventHandler &e) : Minion(e) {
    this->set_id(38857);
    this->set_attackMax(6);
    this->set_defaultCost(10);
    this->set_name("C’Thun");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M38857::init() {
}