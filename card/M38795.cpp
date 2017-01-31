//
// Created by Jo on 19/12/2016.
//

#include "M38795.h"

M38795::M38795(const EventHandler &e) : Minion(e) {
    this->set_id(38795);
    this->set_attackMax(7);
    this->set_defaultCost(8);
    this->set_name("Implorateur funeste");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(9);
}

void M38795::init() {
}