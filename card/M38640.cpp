//
// Created by Jo on 19/12/2016.
//

#include "M38640.h"

M38640::M38640(const EventHandler &e) : Minion(e) {
    this->set_id(38640);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Naga affamé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(1);
}

void M38640::init() {
}