//
// Created by Jo on 19/12/2016.
//

#include "M38832.h"

M38832::M38832(const EventHandler &e) : Minion(e) {
    this->set_id(38832);
    this->set_attackMax(2);
    this->set_defaultCost(6);
    this->set_name("Cauchemar écailleux");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(2);
    this->set_maxHealth(8);
}

void M38832::init() {
}