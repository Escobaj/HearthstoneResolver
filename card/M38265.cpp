//
// Created by Jo on 19/12/2016.
//

#include "M38265.h"

M38265::M38265(const EventHandler &e) : Minion(e) {
    this->set_id(38265);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Sentinelle éternelle");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M38265::init() {
}