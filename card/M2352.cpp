//
// Created by Jo on 19/12/2016.
//

#include "M2352.h"

M2352::M2352(const EventHandler &e) : Minion(e) {
    this->set_id(2352);
    this->set_attackMax(8);
    this->set_defaultCost(3);
    this->set_name("Gyth");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(8);
    this->set_maxHealth(4);
}

void M2352::init() {
}