//
// Created by Jo on 19/12/2016.
//

#include "M38406.h"

M38406::M38406(const EventHandler &e) : Minion(e) {
    this->set_id(38406);
    this->set_attackMax(9);
    this->set_defaultCost(10);
    this->set_name("Mécazod surchargé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(9);
    this->set_maxHealth(80);
}

void M38406::init() {
}