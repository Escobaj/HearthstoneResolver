//
// Created by Jo on 19/12/2016.
//

#include "M3010.h"

M3010::M3010(const EventHandler &e) : Minion(e) {
    this->set_id(3010);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Nérubien");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M3010::init() {
}