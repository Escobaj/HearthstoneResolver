//
// Created by Jo on 19/12/2016.
//

#include "M38868.h"

M38868::M38868(const EventHandler &e) : Minion(e) {
    this->set_id(38868);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Ancien du Crépuscule");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M38868::init() {
}