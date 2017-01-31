//
// Created by Jo on 19/12/2016.
//

#include "M38613.h"

M38613::M38613(const EventHandler &e) : Minion(e) {
    this->set_id(38613);
    this->set_attackMax(6);
    this->set_defaultCost(8);
    this->set_name("Garde du temple anubisath");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(15);
}

void M38613::init() {
}