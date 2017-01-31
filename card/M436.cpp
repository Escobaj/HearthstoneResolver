//
// Created by Jo on 19/12/2016.
//

#include "M436.h"

M436::M436(const EventHandler &e) : Minion(e) {
    this->set_id(436);
    this->set_attackMax(4);
    this->set_defaultCost(9);
    this->set_name("Malygos");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(4);
    this->set_maxHealth(12);
}

void M436::init() {
}