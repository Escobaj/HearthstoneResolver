//
// Created by Jo on 19/12/2016.
//

#include "M38900.h"

M38900::M38900(const EventHandler &e) : Minion(e) {
    this->set_id(38900);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Ensorceleuse du culte");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M38900::init() {
}