//
// Created by Jo on 19/12/2016.
//

#include "M1878.h"

M1878::M1878(const EventHandler &e) : Minion(e) {
    this->set_id(1878);
    this->set_attackMax(0);
    this->set_defaultCost(5);
    this->set_name("Cavalier spectral");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(6);
}

void M1878::init() {
}