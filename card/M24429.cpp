//
// Created by Jo on 19/12/2016.
//

#include "M24429.h"

M24429::M24429(const EventHandler &e) : Minion(e) {
    this->set_id(24429);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Naga affamé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M24429::init() {
}