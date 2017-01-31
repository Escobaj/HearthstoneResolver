//
// Created by Jo on 19/12/2016.
//

#include "M38895.h"

M38895::M38895(const EventHandler &e) : Minion(e) {
    this->set_id(38895);
    this->set_attackMax(6);
    this->set_defaultCost(8);
    this->set_name("L’Épouvantueur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(7);
}

void M38895::init() {
}