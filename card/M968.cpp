//
// Created by Jo on 19/12/2016.
//

#include "M968.h"

M968::M968(const EventHandler &e) : Minion(e) {
    this->set_id(968);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Image miroir");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(2);
}

void M968::init() {
}