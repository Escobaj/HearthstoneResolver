//
// Created by Jo on 19/12/2016.
//

#include "M724.h"

M724::M724(const EventHandler &e) : Minion(e) {
    this->set_id(724);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Matelot des mers du Sud");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M724::init() {
}