//
// Created by Jo on 19/12/2016.
//

#include "M38781.h"

M38781::M38781(const EventHandler &e) : Minion(e) {
    this->set_id(38781);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Worgen corrompu");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(1);
}

void M38781::init() {
}