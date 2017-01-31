//
// Created by Jo on 19/12/2016.
//

#include "M2249.h"

M2249::M2249(const EventHandler &e) : Minion(e) {
    this->set_id(2249);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Cracheur de suie");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M2249::init() {
}