//
// Created by Jo on 19/12/2016.
//

#include "M42120.h"

M42120::M42120(const EventHandler &e) : Minion(e) {
    this->set_id(42120);
    this->set_attackMax(13);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(13);
    this->set_maxHealth(13);
}

void M42120::init() {
}