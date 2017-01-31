//
// Created by Jo on 19/12/2016.
//

#include "M38547.h"

M38547::M38547(const EventHandler &e) : Minion(e) {
    this->set_id(38547);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Disciple de C’Thun");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M38547::init() {
}