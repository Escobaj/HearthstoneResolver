//
// Created by Jo on 19/12/2016.
//

#include "M38747.h"

M38747::M38747(const EventHandler &e) : Minion(e) {
    this->set_id(38747);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Archer ondulant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M38747::init() {
}