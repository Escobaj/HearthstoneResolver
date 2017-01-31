//
// Created by Jo on 19/12/2016.
//

#include "M38888.h"

M38888::M38888(const EventHandler &e) : Minion(e) {
    this->set_id(38888);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Apothicaire du culte");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M38888::init() {
}