//
// Created by Jo on 19/12/2016.
//

#include "M38391.h"

M38391::M38391(const EventHandler &e) : Minion(e) {
    this->set_id(38391);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Sectateur de la Lame");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M38391::init() {
}