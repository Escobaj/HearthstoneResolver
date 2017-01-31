//
// Created by Jo on 19/12/2016.
//

#include "M3041.h"

M3041::M3041(const EventHandler &e) : Minion(e) {
    this->set_id(3041);
    this->set_attackMax(2);
    this->set_defaultCost(5);
    this->set_name("Seyil Yoon");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(9);
}

void M3041::init() {
}