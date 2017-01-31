//
// Created by Jo on 19/12/2016.
//

#include "M38914.h"

M38914::M38914(const EventHandler &e) : Minion(e) {
    this->set_id(38914);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Second de N’Zoth");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38914::init() {
}