//
// Created by Jo on 19/12/2016.
//

#include "M999.h"

M999::M999(const EventHandler &e) : Minion(e) {
    this->set_id(999);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Mousse de la Voile sanglante");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M999::init() {
}