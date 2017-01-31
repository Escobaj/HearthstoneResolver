//
// Created by Jo on 19/12/2016.
//

#include "M38319.h"

M38319::M38319(const EventHandler &e) : Minion(e) {
    this->set_id(38319);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Druide de la Griffe");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M38319::init() {
}