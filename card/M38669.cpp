//
// Created by Jo on 19/12/2016.
//

#include "M38669.h"

M38669::M38669(const EventHandler &e) : Minion(e) {
    this->set_id(38669);
    this->set_attackMax(0);
    this->set_defaultCost(5);
    this->set_name("Auspice funeste confirmé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(7);
}

void M38669::init() {
}