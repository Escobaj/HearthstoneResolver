//
// Created by Jo on 19/12/2016.
//

#include "M38621.h"

M38621::M38621(const EventHandler &e) : Minion(e) {
    this->set_id(38621);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Tisse-ambre klaxxi");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M38621::init() {
}