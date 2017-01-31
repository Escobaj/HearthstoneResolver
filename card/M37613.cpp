//
// Created by Jo on 19/12/2016.
//

#include "M37613.h"

M37613::M37613(const EventHandler &e) : Minion(e) {
    this->set_id(37613);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Raptor d’os");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M37613::init() {
}