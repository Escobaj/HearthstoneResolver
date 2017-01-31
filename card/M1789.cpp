//
// Created by Jo on 19/12/2016.
//

#include "M1789.h"

M1789::M1789(const EventHandler &e) : Minion(e) {
    this->set_id(1789);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Chevalier spectral");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M1789::init() {
}