//
// Created by Jo on 19/12/2016.
//

#include "M2080.h"

M2080::M2080(const EventHandler &e) : Minion(e) {
    this->set_id(2080);
    this->set_attackMax(7);
    this->set_defaultCost(6);
    this->set_name("Mogor l’ogre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(6);
}

void M2080::init() {
}