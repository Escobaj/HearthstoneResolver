//
// Created by Jo on 19/12/2016.
//

#include "M42106.h"

M42106::M42106(const EventHandler &e) : Minion(e) {
    this->set_id(42106);
    this->set_attackMax(9);
    this->set_defaultCost(9);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(9);
    this->set_maxHealth(9);
}

void M42106::init() {
}