//
// Created by Jo on 19/12/2016.
//

#include "M38263.h"

M38263::M38263(const EventHandler &e) : Minion(e) {
    this->set_id(38263);
    this->set_attackMax(7);
    this->set_defaultCost(4);
    this->set_name("Sans-visage nimbé de flammes");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M38263::init() {
}