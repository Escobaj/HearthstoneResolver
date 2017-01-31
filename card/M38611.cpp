//
// Created by Jo on 19/12/2016.
//

#include "M38611.h"

M38611::M38611(const EventHandler &e) : Minion(e) {
    this->set_id(38611);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Naga affamé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M38611::init() {
}