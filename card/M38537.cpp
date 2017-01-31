//
// Created by Jo on 19/12/2016.
//

#include "M38537.h"

M38537::M38537(const EventHandler &e) : Minion(e) {
    this->set_id(38537);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Limon");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38537::init() {
}