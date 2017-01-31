//
// Created by Jo on 19/12/2016.
//

#include "M38530.h"

M38530::M38530(const EventHandler &e) : Minion(e) {
    this->set_id(38530);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Goule ravageuse");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M38530::init() {
}