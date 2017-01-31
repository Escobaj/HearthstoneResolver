//
// Created by Jo on 19/12/2016.
//

#include "M2068.h"

M2068::M2068(const EventHandler &e) : Minion(e) {
    this->set_id(2068);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Guetteur flottant");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M2068::init() {
}