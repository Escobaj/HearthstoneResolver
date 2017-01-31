//
// Created by Jo on 19/12/2016.
//

#include "M38739.h"

M38739::M38739(const EventHandler &e) : Minion(e) {
    this->set_id(38739);
    this->set_attackMax(6);
    this->set_defaultCost(7);
    this->set_name("Malkorok");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(5);
}

void M38739::init() {
}