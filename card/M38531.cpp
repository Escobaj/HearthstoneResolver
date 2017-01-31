//
// Created by Jo on 19/12/2016.
//

#include "M38531.h"

M38531::M38531(const EventHandler &e) : Minion(e) {
    this->set_id(38531);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Berserker aberrant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M38531::init() {
}