//
// Created by Jo on 19/12/2016.
//

#include "M32.h"

M32::M32(const EventHandler &e) : Minion(e) {
    this->set_id(32);
    this->set_attackMax(3);
    this->set_defaultCost(8);
    this->set_name("Al’Akir, seigneur des Vents");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M32::init() {
}