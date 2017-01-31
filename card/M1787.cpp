//
// Created by Jo on 19/12/2016.
//

#include "M1787.h"

M1787::M1787(const EventHandler &e) : Minion(e) {
    this->set_id(1787);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Nérubien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M1787::init() {
}