//
// Created by Jo on 19/12/2016.
//

#include "M39071.h"

M39071::M39071(const EventHandler &e) : Minion(e) {
    this->set_id(39071);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Heigan l’Impur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M39071::init() {
}