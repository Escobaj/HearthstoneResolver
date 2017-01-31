//
// Created by Jo on 19/12/2016.
//

#include "M2949.h"

M2949::M2949(const EventHandler &e) : Minion(e) {
    this->set_id(2949);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Brann Barbe-de-Bronze");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M2949::init() {
}