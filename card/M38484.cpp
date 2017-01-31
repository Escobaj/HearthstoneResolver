//
// Created by Jo on 19/12/2016.
//

#include "M38484.h"

M38484::M38484(const EventHandler &e) : Minion(e) {
    this->set_id(38484);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Baguette du Soleil");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(5);
}

void M38484::init() {
}