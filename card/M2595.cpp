//
// Created by Jo on 19/12/2016.
//

#include "M2595.h"

M2595::M2595(const EventHandler &e) : Minion(e) {
    this->set_id(2595);
    this->set_attackMax(3);
    this->set_defaultCost(6);
    this->set_name("Bolf Bélier-Frondeur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(9);
}

void M2595::init() {
}