//
// Created by Jo on 19/12/2016.
//

#include "M38968.h"

M38968::M38968(const EventHandler &e) : Minion(e) {
    this->set_id(38968);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Gelée");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M38968::init() {
}