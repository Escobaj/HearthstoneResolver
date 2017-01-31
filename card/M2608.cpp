//
// Created by Jo on 19/12/2016.
//

#include "M2608.h"

M2608::M2608(const EventHandler &e) : Minion(e) {
    this->set_id(2608);
    this->set_attackMax(7);
    this->set_defaultCost(4);
    this->set_name("Drake chromatique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M2608::init() {
}