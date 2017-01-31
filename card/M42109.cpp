//
// Created by Jo on 19/12/2016.
//

#include "M42109.h"

M42109::M42109(const EventHandler &e) : Minion(e) {
    this->set_id(42109);
    this->set_attackMax(12);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(12);
    this->set_maxHealth(12);
}

void M42109::init() {
}