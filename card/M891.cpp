//
// Created by Jo on 19/12/2016.
//

#include "M891.h"

M891::M891(const EventHandler &e) : Minion(e) {
    this->set_id(891);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Protectrice solfurie");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M891::init() {
}