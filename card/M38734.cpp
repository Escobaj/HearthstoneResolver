//
// Created by Jo on 19/12/2016.
//

#include "M38734.h"

M38734::M38734(const EventHandler &e) : Minion(e) {
    this->set_id(38734);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Loup contaminé");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M38734::init() {
}