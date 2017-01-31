//
// Created by Jo on 19/12/2016.
//

#include "M38470.h"

M38470::M38470(const EventHandler &e) : Minion(e) {
    this->set_id(38470);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Avorton grognon");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M38470::init() {
}