//
// Created by Jo on 19/12/2016.
//

#include "M38864.h"

M38864::M38864(const EventHandler &e) : Minion(e) {
    this->set_id(38864);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Géomancienne du Crépuscule");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M38864::init() {
}