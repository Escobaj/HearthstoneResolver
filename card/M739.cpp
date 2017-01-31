//
// Created by Jo on 19/12/2016.
//

#include "M739.h"

M739::M739(const EventHandler &e) : Minion(e) {
    this->set_id(739);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Guerrier branchie-bleue");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M739::init() {
}