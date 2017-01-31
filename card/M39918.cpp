//
// Created by Jo on 19/12/2016.
//

#include "M39918.h"

M39918::M39918(const EventHandler &e) : Minion(e) {
    this->set_id(39918);
    this->set_attackMax(0);
    this->set_defaultCost(0);
    this->set_name("Set all minions to 1 health");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(0);
}

void M39918::init() {
}