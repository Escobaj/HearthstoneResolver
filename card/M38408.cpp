//
// Created by Jo on 19/12/2016.
//

#include "M38408.h"

M38408::M38408(const EventHandler &e) : Minion(e) {
    this->set_id(38408);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Kobold évolué");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M38408::init() {
}