//
// Created by Jo on 19/12/2016.
//

#include "M1681.h"

M1681::M1681(const EventHandler &e) : Minion(e) {
    this->set_id(1681);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Druide de la Griffe");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M1681::init() {
}