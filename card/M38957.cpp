//
// Created by Jo on 19/12/2016.
//

#include "M38957.h"

M38957::M38957(const EventHandler &e) : Minion(e) {
    this->set_id(38957);
    this->set_attackMax(1);
    this->set_defaultCost(4);
    this->set_name("Drake de minuit");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M38957::init() {
}