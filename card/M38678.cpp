//
// Created by Jo on 19/12/2016.
//

#include "M38678.h"

M38678::M38678(const EventHandler &e) : Minion(e) {
    this->set_id(38678);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Zinaar");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M38678::init() {
}