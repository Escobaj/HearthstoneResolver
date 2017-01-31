//
// Created by Jo on 19/12/2016.
//

#include "M38718.h"

M38718::M38718(const EventHandler &e) : Minion(e) {
    this->set_id(38718);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Gardien du bourbier");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M38718::init() {
}