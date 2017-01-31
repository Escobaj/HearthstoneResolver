//
// Created by Jo on 19/12/2016.
//

#include "M38875.h"

M38875::M38875(const EventHandler &e) : Minion(e) {
    this->set_id(38875);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Traqueur lugubre");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M38875::init() {
}