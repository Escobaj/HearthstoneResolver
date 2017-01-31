//
// Created by Jo on 19/12/2016.
//

#include "M38463.h"

M38463::M38463(const EventHandler &e) : Minion(e) {
    this->set_id(38463);
    this->set_attackMax(8);
    this->set_defaultCost(8);
    this->set_name("Anomalus");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(8);
    this->set_maxHealth(6);
}

void M38463::init() {
}