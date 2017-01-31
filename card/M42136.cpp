//
// Created by Jo on 19/12/2016.
//

#include "M42136.h"

M42136::M42136(const EventHandler &e) : Minion(e) {
    this->set_id(42136);
    this->set_attackMax(28);
    this->set_defaultCost(10);
    this->set_name("Golem de jade");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(28);
    this->set_maxHealth(28);
}

void M42136::init() {
}