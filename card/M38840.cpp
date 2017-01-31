//
// Created by Jo on 19/12/2016.
//

#include "M38840.h"

M38840::M38840(const EventHandler &e) : Minion(e) {
    this->set_id(38840);
    this->set_attackMax(10);
    this->set_defaultCost(10);
    this->set_name("Dame Naz’jar");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M38840::init() {
}