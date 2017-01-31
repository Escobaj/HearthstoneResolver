//
// Created by Jo on 19/12/2016.
//

#include "M329.h"

M329::M329(const EventHandler &e) : Minion(e) {
    this->set_id(329);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Robot réparateur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(0);
    this->set_maxHealth(3);
}

void M329::init() {
}