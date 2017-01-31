//
// Created by Jo on 19/12/2016.
//

#include "M38267.h"

M38267::M38267(const EventHandler &e) : Minion(e) {
    this->set_id(38267);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Chose venue d’en bas");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M38267::init() {
}