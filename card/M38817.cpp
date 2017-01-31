//
// Created by Jo on 19/12/2016.
//

#include "M38817.h"

M38817::M38817(const EventHandler &e) : Minion(e) {
    this->set_id(38817);
    this->set_attackMax(10);
    this->set_defaultCost(10);
    this->set_name("Chef Scarvash");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M38817::init() {
}