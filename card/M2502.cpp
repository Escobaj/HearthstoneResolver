//
// Created by Jo on 19/12/2016.
//

#include "M2502.h"

M2502::M2502(const EventHandler &e) : Minion(e) {
    this->set_id(2502);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Kvaldir blessé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M2502::init() {
}