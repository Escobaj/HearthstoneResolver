//
// Created by Jo on 19/12/2016.
//

#include "M38943.h"

M38943::M38943(const EventHandler &e) : Minion(e) {
    this->set_id(38943);
    this->set_attackMax(12);
    this->set_defaultCost(10);
    this->set_name("Seigneur Aile de mort");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(12);
    this->set_maxHealth(12);
}

void M38943::init() {
}