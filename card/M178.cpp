//
// Created by Jo on 19/12/2016.
//

#include "M178.h"

M178::M178(const EventHandler &e) : Minion(e) {
    this->set_id(178);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Parlevent");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M178::init() {
}