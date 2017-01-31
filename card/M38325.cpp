//
// Created by Jo on 19/12/2016.
//

#include "M38325.h"

M38325::M38325(const EventHandler &e) : Minion(e) {
    this->set_id(38325);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Scarabée");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38325::init() {
}