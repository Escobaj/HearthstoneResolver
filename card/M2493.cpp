//
// Created by Jo on 19/12/2016.
//

#include "M2493.h"

M2493::M2493(const EventHandler &e) : Minion(e) {
    this->set_id(2493);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Maîtresse de cérémonie");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M2493::init() {
}