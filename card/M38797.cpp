//
// Created by Jo on 19/12/2016.
//

#include "M38797.h"

M38797::M38797(const EventHandler &e) : Minion(e) {
    this->set_id(38797);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Rejeton de N’Zoth");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M38797::init() {
}