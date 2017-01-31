//
// Created by Jo on 19/12/2016.
//

#include "M2037.h"

M2037::M2037(const EventHandler &e) : Minion(e) {
    this->set_id(2037);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Robot de soins antique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M2037::init() {
}