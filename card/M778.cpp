//
// Created by Jo on 19/12/2016.
//

#include "M778.h"

M778::M778(const EventHandler &e) : Minion(e) {
    this->set_id(778);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Golem des moissons");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M778::init() {
}