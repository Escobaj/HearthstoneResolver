//
// Created by Jo on 19/12/2016.
//

#include "M42132.h"

M42132::M42132(const EventHandler &e) : Minion(e) {
    this->set_id(42132);
    this->set_attackMax(24);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(24);
    this->set_maxHealth(24);
}

void M42132::init() {
}