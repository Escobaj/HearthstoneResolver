//
// Created by Jo on 19/12/2016.
//

#include "M38679.h"

M38679::M38679(const EventHandler &e) : Minion(e) {
    this->set_id(38679);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Dame Naz’jar");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M38679::init() {
}