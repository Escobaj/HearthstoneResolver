//
// Created by Jo on 19/12/2016.
//

#include "M38738.h"

M38738::M38738(const EventHandler &e) : Minion(e) {
    this->set_id(38738);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Brave Sabot-de-Sang");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(6);
}

void M38738::init() {
}