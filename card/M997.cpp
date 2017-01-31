//
// Created by Jo on 19/12/2016.
//

#include "M997.h"

M997::M997(const EventHandler &e) : Minion(e) {
    this->set_id(997);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Forban de la Voile sanglante");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M997::init() {
}