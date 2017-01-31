//
// Created by Jo on 19/12/2016.
//

#include "M38436.h"

M38436::M38436(const EventHandler &e) : Minion(e) {
    this->set_id(38436);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Sombre orateur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M38436::init() {
}