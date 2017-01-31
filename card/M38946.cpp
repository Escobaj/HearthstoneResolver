//
// Created by Jo on 19/12/2016.
//

#include "M38946.h"

M38946::M38946(const EventHandler &e) : Minion(e) {
    this->set_id(38946);
    this->set_attackMax(4);
    this->set_defaultCost(7);
    this->set_name("Empereur jumeau Vek’nilash");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M38946::init() {
}