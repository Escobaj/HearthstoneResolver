//
// Created by Jo on 19/12/2016.
//

#include "M2033.h"

M2033::M2033(const EventHandler &e) : Minion(e) {
    this->set_id(2033);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Brute ogre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M2033::init() {
}