//
// Created by Jo on 19/12/2016.
//

#include "M712.h"

M712::M712(const EventHandler &e) : Minion(e) {
    this->set_id(712);
    this->set_attackMax(7);
    this->set_defaultCost(7);
    this->set_name("Golem de guerre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M712::init() {
}