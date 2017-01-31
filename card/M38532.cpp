//
// Created by Jo on 19/12/2016.
//

#include "M38532.h"

M38532::M38532(const EventHandler &e) : Minion(e) {
    this->set_id(38532);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Tentacule de N’Zoth");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38532::init() {
}