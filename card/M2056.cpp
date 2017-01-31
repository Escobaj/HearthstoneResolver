//
// Created by Jo on 19/12/2016.
//

#include "M2056.h"

M2056::M2056(const EventHandler &e) : Minion(e) {
    this->set_id(2056);
    this->set_attackMax(6);
    this->set_defaultCost(5);
    this->set_name("Ninja ogre");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M2056::init() {
}