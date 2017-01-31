//
// Created by Jo on 19/12/2016.
//

#include "M38614.h"

M38614::M38614(const EventHandler &e) : Minion(e) {
    this->set_id(38614);
    this->set_attackMax(5);
    this->set_defaultCost(8);
    this->set_name("Statue vengeresse");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(9);
}

void M38614::init() {
}