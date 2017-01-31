//
// Created by Jo on 19/12/2016.
//

#include "M1928.h"

M1928::M1928(const EventHandler &e) : Minion(e) {
    this->set_id(1928);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Souffle-neige");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M1928::init() {
}