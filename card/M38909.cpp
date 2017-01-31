//
// Created by Jo on 19/12/2016.
//

#include "M38909.h"

M38909::M38909(const EventHandler &e) : Minion(e) {
    this->set_id(38909);
    this->set_attackMax(8);
    this->set_defaultCost(8);
    this->set_name("Ver des sables géant");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M38909::init() {
}