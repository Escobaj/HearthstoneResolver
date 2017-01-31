//
// Created by Jo on 19/12/2016.
//

#include "M42129.h"

M42129::M42129(const EventHandler &e) : Minion(e) {
    this->set_id(42129);
    this->set_attackMax(21);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(21);
    this->set_maxHealth(21);
}

void M42129::init() {
}