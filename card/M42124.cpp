//
// Created by Jo on 19/12/2016.
//

#include "M42124.h"

M42124::M42124(const EventHandler &e) : Minion(e) {
    this->set_id(42124);
    this->set_attackMax(17);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(17);
    this->set_maxHealth(17);
}

void M42124::init() {
}