//
// Created by Jo on 19/12/2016.
//

#include "M39687.h"

M39687::M39687(const EventHandler &e) : Minion(e) {
    this->set_id(39687);
    this->set_attackMax(0);
    this->set_defaultCost(11);
    this->set_name("Portail rouge");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(1);
}

void M39687::init() {
}