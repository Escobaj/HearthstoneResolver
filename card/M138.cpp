//
// Created by Jo on 19/12/2016.
//

#include "M138.h"

M138::M138(const EventHandler &e) : Minion(e) {
    this->set_id(138);
    this->set_attackMax(0);
    this->set_defaultCost(2);
    this->set_name("Auspice funeste");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(7);
}

void M138::init() {
}