//
// Created by Jo on 19/12/2016.
//

#include "M38681.h"

M38681::M38681(const EventHandler &e) : Minion(e) {
    this->set_id(38681);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("La sentinelle d’acier");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M38681::init() {
}