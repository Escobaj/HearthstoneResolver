//
// Created by Jo on 19/12/2016.
//

#include "M39068.h"

M39068::M39068(const EventHandler &e) : Minion(e) {
    this->set_id(39068);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Gothik le Moissonneur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M39068::init() {
}