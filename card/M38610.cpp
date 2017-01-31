//
// Created by Jo on 19/12/2016.
//

#include "M38610.h"

M38610::M38610(const EventHandler &e) : Minion(e) {
    this->set_id(38610);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Chaudron");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(10);
}

void M38610::init() {
}