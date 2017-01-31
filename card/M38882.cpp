//
// Created by Jo on 19/12/2016.
//

#include "M38882.h"

M38882::M38882(const EventHandler &e) : Minion(e) {
    this->set_id(38882);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Sombre arakkoa");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(7);
}

void M38882::init() {
}