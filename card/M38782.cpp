//
// Created by Jo on 19/12/2016.
//

#include "M38782.h"

M38782::M38782(const EventHandler &e) : Minion(e) {
    this->set_id(38782);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Enragé am’gam");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(5);
}

void M38782::init() {
}