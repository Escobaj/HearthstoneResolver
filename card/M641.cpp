//
// Created by Jo on 19/12/2016.
//

#include "M641.h"

M641::M641(const EventHandler &e) : Minion(e) {
    this->set_id(641);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Jeune faucon-dragon");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M641::init() {
}