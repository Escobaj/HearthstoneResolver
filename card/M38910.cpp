//
// Created by Jo on 19/12/2016.
//

#include "M38910.h"

M38910::M38910(const EventHandler &e) : Minion(e) {
    this->set_id(38910);
    this->set_attackMax(6);
    this->set_defaultCost(5);
    this->set_name("Princesse Huhuran");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(6);
    this->set_maxHealth(5);
}

void M38910::init() {
}