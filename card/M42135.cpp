//
// Created by Jo on 19/12/2016.
//

#include "M42135.h"

M42135::M42135(const EventHandler &e) : Minion(e) {
    this->set_id(42135);
    this->set_attackMax(27);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(27);
    this->set_maxHealth(27);
}

void M42135::init() {
}