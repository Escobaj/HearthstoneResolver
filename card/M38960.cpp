//
// Created by Jo on 19/12/2016.
//

#include "M38960.h"

M38960::M38960(const EventHandler &e) : Minion(e) {
    this->set_id(38960);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Pirate des flots noirs");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(2);
    this->set_maxHealth(5);
}

void M38960::init() {
}