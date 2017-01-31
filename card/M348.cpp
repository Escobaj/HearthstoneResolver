//
// Created by Jo on 19/12/2016.
//

#include "M348.h"

M348::M348(const EventHandler &e) : Minion(e) {
    this->set_id(348);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Nain sombrefer");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M348::init() {
}