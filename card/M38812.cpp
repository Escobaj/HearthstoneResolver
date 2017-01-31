//
// Created by Jo on 19/12/2016.
//

#include "M38812.h"

M38812::M38812(const EventHandler &e) : Minion(e) {
    this->set_id(38812);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Raptor d’os");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M38812::init() {
}