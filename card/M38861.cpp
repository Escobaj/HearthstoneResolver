//
// Created by Jo on 19/12/2016.
//

#include "M38861.h"

M38861::M38861(const EventHandler &e) : Minion(e) {
    this->set_id(38861);
    this->set_attackMax(4);
    this->set_defaultCost(9);
    this->set_name("Lame de C’Thun");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M38861::init() {
}