//
// Created by Jo on 19/12/2016.
//

#include "M38412.h"

M38412::M38412(const EventHandler &e) : Minion(e) {
    this->set_id(38412);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Mande-givre dément");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M38412::init() {
}