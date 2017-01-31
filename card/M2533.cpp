//
// Created by Jo on 19/12/2016.
//

#include "M2533.h"

M2533::M2533(const EventHandler &e) : Minion(e) {
    this->set_id(2533);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Chevaucheur de faucon-dragon");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M2533::init() {
}