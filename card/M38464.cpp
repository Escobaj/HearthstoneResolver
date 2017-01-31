//
// Created by Jo on 19/12/2016.
//

#include "M38464.h"

M38464::M38464(const EventHandler &e) : Minion(e) {
    this->set_id(38464);
    this->set_attackMax(7);
    this->set_defaultCost(7);
    this->set_name("Cho’gall");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M38464::init() {
}