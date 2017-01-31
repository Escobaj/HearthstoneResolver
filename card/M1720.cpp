//
// Created by Jo on 19/12/2016.
//

#include "M1720.h"

M1720::M1720(const EventHandler &e) : Minion(e) {
    this->set_id(1720);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Ombre du néant");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(1);
}

void M1720::init() {
}