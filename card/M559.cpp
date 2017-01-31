//
// Created by Jo on 19/12/2016.
//

#include "M559.h"

M559::M559(const EventHandler &e) : Minion(e) {
    this->set_id(559);
    this->set_attackMax(6);
    this->set_defaultCost(5);
    this->set_name("Leeroy Jenkins");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(2);
}

void M559::init() {
}