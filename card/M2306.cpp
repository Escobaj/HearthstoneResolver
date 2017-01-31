//
// Created by Jo on 19/12/2016.
//

#include "M2306.h"

M2306::M2306(const EventHandler &e) : Minion(e) {
    this->set_id(2306);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Sorcier draconien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M2306::init() {
}