//
// Created by Jo on 19/12/2016.
//

#include "M2263.h"

M2263::M2263(const EventHandler &e) : Minion(e) {
    this->set_id(2263);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Rageur du Magma");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M2263::init() {
}