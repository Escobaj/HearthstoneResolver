//
// Created by Jo on 19/12/2016.
//

#include "M38863.h"

M38863::M38863(const EventHandler &e) : Minion(e) {
    this->set_id(38863);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Élue de C’Thun");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M38863::init() {
}