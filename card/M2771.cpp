//
// Created by Jo on 19/12/2016.
//

#include "M2771.h"

M2771::M2771(const EventHandler &e) : Minion(e) {
    this->set_id(2771);
    this->set_attackMax(4);
    this->set_defaultCost(2);
    this->set_name("Cendres tourbillonnantes");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M2771::init() {
}