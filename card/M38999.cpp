//
// Created by Jo on 19/12/2016.
//

#include "M38999.h"

M38999::M38999(const EventHandler &e) : Minion(e) {
    this->set_id(38999);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Destructeur sans-visage");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M38999::init() {
}