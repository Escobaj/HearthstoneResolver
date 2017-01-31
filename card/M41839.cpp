//
// Created by Jo on 19/12/2016.
//

#include "M41839.h"

M41839::M41839(const EventHandler &e) : Minion(e) {
    this->set_id(41839);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Rat");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M41839::init() {
}