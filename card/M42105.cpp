//
// Created by Jo on 19/12/2016.
//

#include "M42105.h"

M42105::M42105(const EventHandler &e) : Minion(e) {
    this->set_id(42105);
    this->set_attackMax(8);
    this->set_defaultCost(8);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M42105::init() {
}