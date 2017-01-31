//
// Created by Jo on 19/12/2016.
//

#include "M2526.h"

M2526::M2526(const EventHandler &e) : Minion(e) {
    this->set_id(2526);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Orc de l’ancienne Horde");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M2526::init() {
}