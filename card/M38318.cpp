//
// Created by Jo on 19/12/2016.
//

#include "M38318.h"

M38318::M38318(const EventHandler &e) : Minion(e) {
    this->set_id(38318);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Fandral Forteramure");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M38318::init() {
}