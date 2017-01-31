//
// Created by Jo on 19/12/2016.
//

#include "M38304.h"

M38304::M38304(const EventHandler &e) : Minion(e) {
    this->set_id(38304);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Grouillant silithide");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M38304::init() {
}