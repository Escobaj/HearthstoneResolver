//
// Created by Jo on 19/12/2016.
//

#include "M52.h"

M52::M52(const EventHandler &e) : Minion(e) {
    this->set_id(52);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Encourageur 3000");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(0);
    this->set_maxHealth(4);
}

void M52::init() {
}