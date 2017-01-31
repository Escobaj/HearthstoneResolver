//
// Created by Jo on 19/12/2016.
//

#include "M2607.h"

M2607::M2607(const EventHandler &e) : Minion(e) {
    this->set_id(2607);
    this->set_attackMax(7);
    this->set_defaultCost(4);
    this->set_name("Drake chromatique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(7);
    this->set_maxHealth(3);
}

void M2607::init() {
}