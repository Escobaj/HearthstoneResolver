//
// Created by Jo on 19/12/2016.
//

#include "M2279.h"

M2279::M2279(const EventHandler &e) : Minion(e) {
    this->set_id(2279);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Client sinistre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M2279::init() {
}