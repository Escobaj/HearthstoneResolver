//
// Created by Jo on 19/12/2016.
//

#include "M1686.h"

M1686::M1686(const EventHandler &e) : Minion(e) {
    this->set_id(1686);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Ogre rochepoing");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(7);
}

void M1686::init() {
}