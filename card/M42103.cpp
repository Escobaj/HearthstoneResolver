//
// Created by Jo on 19/12/2016.
//

#include "M42103.h"

M42103::M42103(const EventHandler &e) : Minion(e) {
    this->set_id(42103);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M42103::init() {
}