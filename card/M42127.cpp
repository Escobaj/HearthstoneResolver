//
// Created by Jo on 19/12/2016.
//

#include "M42127.h"

M42127::M42127(const EventHandler &e) : Minion(e) {
    this->set_id(42127);
    this->set_attackMax(19);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(19);
    this->set_maxHealth(19);
}

void M42127::init() {
}