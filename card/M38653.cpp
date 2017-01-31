//
// Created by Jo on 19/12/2016.
//

#include "M38653.h"

M38653::M38653(const EventHandler &e) : Minion(e) {
    this->set_id(38653);
    this->set_attackMax(1);
    this->set_defaultCost(0);
    this->set_name("Feu follet");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38653::init() {
}