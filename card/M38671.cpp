//
// Created by Jo on 19/12/2016.
//

#include "M38671.h"

M38671::M38671(const EventHandler &e) : Minion(e) {
    this->set_id(38671);
    this->set_attackMax(10);
    this->set_defaultCost(10);
    this->set_name("Statue animée");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M38671::init() {
}