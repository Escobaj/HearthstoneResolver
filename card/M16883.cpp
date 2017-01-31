//
// Created by Jo on 19/12/2016.
//

#include "M16883.h"

M16883::M16883(const EventHandler &e) : Minion(e) {
    this->set_id(16883);
    this->set_attackMax(10);
    this->set_defaultCost(7);
    this->set_name("Insecte géant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(3);
}

void M16883::init() {
}