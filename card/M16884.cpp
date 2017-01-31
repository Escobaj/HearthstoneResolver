//
// Created by Jo on 19/12/2016.
//

#include "M16884.h"

M16884::M16884(const EventHandler &e) : Minion(e) {
    this->set_id(16884);
    this->set_attackMax(5);
    this->set_defaultCost(8);
    this->set_name("Garde du temple anubisath");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(10);
}

void M16884::init() {
}