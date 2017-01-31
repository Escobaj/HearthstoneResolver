//
// Created by Jo on 19/12/2016.
//

#include "M2012.h"

M2012::M2012(const EventHandler &e) : Minion(e) {
    this->set_id(2012);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Char araignée");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M2012::init() {
}