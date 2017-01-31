//
// Created by Jo on 19/12/2016.
//

#include "M38958.h"

M38958::M38958(const EventHandler &e) : Minion(e) {
    this->set_id(38958);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Adorateur fanatisé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M38958::init() {
}