//
// Created by Jo on 19/12/2016.
//

#include "M38833.h"

M38833::M38833(const EventHandler &e) : Minion(e) {
    this->set_id(38833);
    this->set_attackMax(1);
    this->set_defaultCost(4);
    this->set_name("Invocateur du Crépuscule");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38833::init() {
}