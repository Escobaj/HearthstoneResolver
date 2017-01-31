//
// Created by Jo on 19/12/2016.
//

#include "M38725.h"

M38725::M38725(const EventHandler &e) : Minion(e) {
    this->set_id(38725);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Invocateur sans-visage");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M38725::init() {
}