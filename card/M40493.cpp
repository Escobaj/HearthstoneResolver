//
// Created by Jo on 19/12/2016.
//

#include "M40493.h"

M40493::M40493(const EventHandler &e) : Minion(e) {
    this->set_id(40493);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Sniper souffle-branchie");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M40493::init() {
}