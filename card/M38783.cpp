//
// Created by Jo on 19/12/2016.
//

#include "M38783.h"

M38783::M38783(const EventHandler &e) : Minion(e) {
    this->set_id(38783);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Gelée");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M38783::init() {
}