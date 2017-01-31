//
// Created by Jo on 19/12/2016.
//

#include "M38842.h"

M38842::M38842(const EventHandler &e) : Minion(e) {
    this->set_id(38842);
    this->set_attackMax(10);
    this->set_defaultCost(10);
    this->set_name("La sentinelle d’acier");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M38842::init() {
}