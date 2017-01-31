//
// Created by Jo on 19/12/2016.
//

#include "M2509.h"

M2509::M2509(const EventHandler &e) : Minion(e) {
    this->set_id(2509);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Recruteur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M2509::init() {
}