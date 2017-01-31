//
// Created by Jo on 19/12/2016.
//

#include "M1751.h"

M1751::M1751(const EventHandler &e) : Minion(e) {
    this->set_id(1751);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Flamme d’Azzinoth");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M1751::init() {
}