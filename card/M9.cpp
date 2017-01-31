//
// Created by Jo on 19/12/2016.
//

#include "M9.h"

M9::M9(const EventHandler &e) : Minion(e) {
    this->set_id(9);
    this->set_attackMax(7);
    this->set_defaultCost(7);
    this->set_name("Prophète Velen");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M9::init() {
}