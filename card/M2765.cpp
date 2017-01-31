//
// Created by Jo on 19/12/2016.
//

#include "M2765.h"

M2765::M2765(const EventHandler &e) : Minion(e) {
    this->set_id(2765);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Chevaucheur pandashan");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(7);
}

void M2765::init() {
}