//
// Created by Jo on 19/12/2016.
//

#include "M2058.h"

M2058::M2058(const EventHandler &e) : Minion(e) {
    this->set_id(2058);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Bombardier cinglé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M2058::init() {
}