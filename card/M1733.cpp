//
// Created by Jo on 19/12/2016.
//

#include "M1733.h"

M1733::M1733(const EventHandler &e) : Minion(e) {
    this->set_id(1733);
    this->set_attackMax(1);
    this->set_defaultCost(0);
    this->set_name("Avatar de la pièce");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1733::init() {
}