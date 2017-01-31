//
// Created by Jo on 19/12/2016.
//

#include "M1658.h"

M1658::M1658(const EventHandler &e) : Minion(e) {
    this->set_id(1658);
    this->set_attackMax(0);
    this->set_defaultCost(3);
    this->set_name("Robot d’alarme");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(0);
    this->set_maxHealth(3);
}

void M1658::init() {
}