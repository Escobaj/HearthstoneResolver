//
// Created by Jo on 19/12/2016.
//

#include "M38522.h"

M38522::M38522(const EventHandler &e) : Minion(e) {
    this->set_id(38522);
    this->set_attackMax(6);
    this->set_defaultCost(8);
    this->set_name("Horreur indicible");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(10);
}

void M38522::init() {
}