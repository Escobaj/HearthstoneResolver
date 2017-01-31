//
// Created by Jo on 19/12/2016.
//

#include "M38916.h"

M38916::M38916(const EventHandler &e) : Minion(e) {
    this->set_id(38916);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Grizzly perturbé");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M38916::init() {
}