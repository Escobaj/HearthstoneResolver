//
// Created by Jo on 19/12/2016.
//

#include "M42101.h"

M42101::M42101(const EventHandler &e) : Minion(e) {
    this->set_id(42101);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M42101::init() {
}