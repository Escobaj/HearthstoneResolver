//
// Created by Jo on 19/12/2016.
//

#include "M38897.h"

M38897::M38897(const EventHandler &e) : Minion(e) {
    this->set_id(38897);
    this->set_attackMax(6);
    this->set_defaultCost(7);
    this->set_name("Ancienne porte-bouclier");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M38897::init() {
}