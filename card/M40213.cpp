//
// Created by Jo on 19/12/2016.
//

#include "M40213.h"

M40213::M40213(const EventHandler &e) : Minion(e) {
    this->set_id(40213);
    this->set_attackMax(0);
    this->set_defaultCost(3);
    this->set_name("Entourloupeur des bas-fonds");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DEMON);
    this->set_attackMax(0);
    this->set_maxHealth(7);
}

void M40213::init() {
}