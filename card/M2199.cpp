//
// Created by Jo on 19/12/2016.
//

#include "M2199.h"

M2199::M2199(const EventHandler &e) : Minion(e) {
    this->set_id(2199);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Garde de la Couronne de glace");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M2199::init() {
}