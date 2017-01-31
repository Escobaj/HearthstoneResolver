//
// Created by Jo on 19/12/2016.
//

#include "M38740.h"

M38740::M38740(const EventHandler &e) : Minion(e) {
    this->set_id(38740);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Héroïne altruiste");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M38740::init() {
}