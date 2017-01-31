//
// Created by Jo on 19/12/2016.
//

#include "M42107.h"

M42107::M42107(const EventHandler &e) : Minion(e) {
    this->set_id(42107);
    this->set_attackMax(10);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M42107::init() {
}