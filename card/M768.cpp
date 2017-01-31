//
// Created by Jo on 19/12/2016.
//

#include "M768.h"

M768::M768(const EventHandler &e) : Minion(e) {
    this->set_id(768);
    this->set_attackMax(2);
    this->set_defaultCost(5);
    this->set_name("Berserker gurubashi");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(7);
}

void M768::init() {
}