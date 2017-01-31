//
// Created by Jo on 19/12/2016.
//

#include "M2348.h"

M2348::M2348(const EventHandler &e) : Minion(e) {
    this->set_id(2348);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Orc de l’ancienne Horde");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M2348::init() {
}