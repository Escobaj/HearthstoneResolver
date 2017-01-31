//
// Created by Jo on 19/12/2016.
//

#include "M38873.h"

M38873::M38873(const EventHandler &e) : Minion(e) {
    this->set_id(38873);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Ancien héraut");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M38873::init() {
}