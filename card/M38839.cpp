//
// Created by Jo on 19/12/2016.
//

#include "M38839.h"

M38839::M38839(const EventHandler &e) : Minion(e) {
    this->set_id(38839);
    this->set_attackMax(10);
    this->set_defaultCost(10);
    this->set_name("Aileron-Géant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M38839::init() {
}