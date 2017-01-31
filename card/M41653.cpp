//
// Created by Jo on 19/12/2016.
//

#include "M41653.h"

M41653::M41653(const EventHandler &e) : Minion(e) {
    this->set_id(41653);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Tank principal");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M41653::init() {
}