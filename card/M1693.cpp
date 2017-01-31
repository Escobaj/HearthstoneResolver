//
// Created by Jo on 19/12/2016.
//

#include "M1693.h"

M1693::M1693(const EventHandler &e) : Minion(e) {
    this->set_id(1693);
    this->set_attackMax(5);
    this->set_defaultCost(3);
    this->set_name("Roi Mukla");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M1693::init() {
}