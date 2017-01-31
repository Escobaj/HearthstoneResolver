//
// Created by Jo on 19/12/2016.
//

#include "M38921.h"

M38921::M38921(const EventHandler &e) : Minion(e) {
    this->set_id(38921);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Gelée");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M38921::init() {
}