//
// Created by Jo on 19/12/2016.
//

#include "M38735.h"

M38735::M38735(const EventHandler &e) : Minion(e) {
    this->set_id(38735);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Araignée");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38735::init() {
}