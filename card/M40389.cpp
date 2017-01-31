//
// Created by Jo on 19/12/2016.
//

#include "M40389.h"

M40389::M40389(const EventHandler &e) : Minion(e) {
    this->set_id(40389);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Âmefiel gangr’orc");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(7);
}

void M40389::init() {
}