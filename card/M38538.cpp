//
// Created by Jo on 19/12/2016.
//

#include "M38538.h"

M38538::M38538(const EventHandler &e) : Minion(e) {
    this->set_id(38538);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Murloc aileron-bilieux");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M38538::init() {
}