//
// Created by Jo on 19/12/2016.
//

#include "M38985.h"

M38985::M38985(const EventHandler &e) : Minion(e) {
    this->set_id(38985);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Larve putride");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(5);
}

void M38985::init() {
}