//
// Created by Jo on 19/12/2016.
//

#include "M38641.h"

M38641::M38641(const EventHandler &e) : Minion(e) {
    this->set_id(38641);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Naga affamé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M38641::init() {
}