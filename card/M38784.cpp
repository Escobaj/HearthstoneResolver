//
// Created by Jo on 19/12/2016.
//

#include "M38784.h"

M38784::M38784(const EventHandler &e) : Minion(e) {
    this->set_id(38784);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Tauren contaminé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M38784::init() {
}