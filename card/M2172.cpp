//
// Created by Jo on 19/12/2016.
//

#include "M2172.h"

M2172::M2172(const EventHandler &e) : Minion(e) {
    this->set_id(2172);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Maîtresse de Douleur");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M2172::init() {
}