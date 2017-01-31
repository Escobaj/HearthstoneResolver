//
// Created by Jo on 19/12/2016.
//

#include "M995.h"

M995::M995(const EventHandler &e) : Minion(e) {
    this->set_id(995);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Ogre-magi");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M995::init() {
}