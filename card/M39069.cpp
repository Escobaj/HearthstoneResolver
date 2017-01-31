//
// Created by Jo on 19/12/2016.
//

#include "M39069.h"

M39069::M39069(const EventHandler &e) : Minion(e) {
    this->set_id(39069);
    this->set_attackMax(0);
    this->set_defaultCost(4);
    this->set_name("Grande veuve Faerlina");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(5);
}

void M39069::init() {
}