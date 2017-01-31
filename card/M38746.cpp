//
// Created by Jo on 19/12/2016.
//

#include "M38746.h"

M38746::M38746(const EventHandler &e) : Minion(e) {
    this->set_id(38746);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Garde ondulant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(7);
}

void M38746::init() {
}