//
// Created by Jo on 19/12/2016.
//

#include "M1371.h"

M1371::M1371(const EventHandler &e) : Minion(e) {
    this->set_id(1371);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Kodo déchaîné");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M1371::init() {
}