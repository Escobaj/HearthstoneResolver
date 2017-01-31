//
// Created by Jo on 19/12/2016.
//

#include "M38340.h"

M38340::M38340(const EventHandler &e) : Minion(e) {
    this->set_id(38340);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Ancien frappé d’interdit");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38340::init() {
}