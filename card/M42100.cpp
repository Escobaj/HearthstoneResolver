//
// Created by Jo on 19/12/2016.
//

#include "M42100.h"

M42100::M42100(const EventHandler &e) : Minion(e) {
    this->set_id(42100);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M42100::init() {
}