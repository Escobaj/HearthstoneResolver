//
// Created by Jo on 19/12/2016.
//

#include "M38838.h"

M38838::M38838(const EventHandler &e) : Minion(e) {
    this->set_id(38838);
    this->set_attackMax(10);
    this->set_defaultCost(10);
    this->set_name("Seigneur Ondulance");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M38838::init() {
}