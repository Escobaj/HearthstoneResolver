//
// Created by Jo on 19/12/2016.
//

#include "M38409.h"

M38409::M38409(const EventHandler &e) : Minion(e) {
    this->set_id(38409);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Mande-flamme du Crépuscule");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M38409::init() {
}