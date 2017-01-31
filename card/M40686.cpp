//
// Created by Jo on 19/12/2016.
//

#include "M40686.h"

M40686::M40686(const EventHandler &e) : Minion(e) {
    this->set_id(40686);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Romulo");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M40686::init() {
}