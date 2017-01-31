//
// Created by Jo on 19/12/2016.
//

#include "M38541.h"

M38541::M38541(const EventHandler &e) : Minion(e) {
    this->set_id(38541);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Initié zélé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38541::init() {
}