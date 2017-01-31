//
// Created by Jo on 19/12/2016.
//

#include "M1797.h"

M1797::M1797(const EventHandler &e) : Minion(e) {
    this->set_id(1797);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Feugen");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(7);
}

void M1797::init() {
}