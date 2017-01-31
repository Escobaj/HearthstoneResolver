//
// Created by Jo on 19/12/2016.
//

#include "M1903.h"

M1903::M1903(const EventHandler &e) : Minion(e) {
    this->set_id(1903);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Garde de la Couronne de glace");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M1903::init() {
}